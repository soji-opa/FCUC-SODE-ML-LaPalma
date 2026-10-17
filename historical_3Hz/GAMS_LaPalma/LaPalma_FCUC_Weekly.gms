* ============================================================================
* LaPalma_FCUC_Weekly.gms
* HISTORICAL: earlier 3-Hz UC/FCUC equations and historical deployment.
* Reading order: data -> states -> variables -> equations -> solve -> audit/export.
* Indices: t=24 hours; i=11 units; b=3 generation blocks; j=8 startup categories.
* Outage index: the second index in Hafter/Gafter/Rafter is the TRIPPED unit.
* Units: g, g_lin, curt and Rafter in MW; Hafter in MW s; Gafter in MW/Hz;
* commitment/switch/category variables binary; on/off ages in hours; obj in kEUR.
* Objective: no-load + piecewise-linear energy + startup + curtailment cost.
* Inputs: numerical .inc tables, selected season/day, frozen calibrated include;
* later days require the previous accepted same-method, same-season GDX state.
* Frequency: loss-specific surviving inertia, RoCoF, no-damping headroom screen,
* and the calibrated affine nadir margin. No network or synthetic-inertia control.
* Solver: GAMS 24.9 / CPLEX. Native execution was NOT RUN in the release builder.
* Output: accepted results.gdx/state.gdx, workbook, and completion/failure markers.
* Detailed derivation: docs/Mathematical_Formulation/Technical_Manual.pdf.
* Historical SP dependencies are separately restricted; see historical_3Hz/README.
* All original non-comment statements are preserved; only layout/comments change.
* ============================================================================
$title SEGAN Chapter 4 -- four-season La Palma aggregate UC / affine FCUC
$ontext
Run only Run_LaPalma_Seasons.gms from GAMS IDE after Notebook03 exports.
The unchanged source tables are in inc/. No Python execution is performed here.
Each method has its own seven-day history; each season starts independently.
All eleven units remain available. No silent x(i11)=0 restriction is imposed.
No spatial extension. The separate SP include preserves Raja frequency equations at the study's 3-Hz criterion.
Raw source monetary values are kEUR. Explicit EUR fields multiply by 1000.
$offtext
$ondigit
$if not set DAY $setglobal DAY 1
$if not set PREV $setglobal PREV 0
$if not set SEASON $setglobal SEASON winter
$if not set RUN $setglobal RUN BC
$if not set EXPORT_ONLY $setglobal EXPORT_ONLY 0
$if not set LPCAMPAIGN $abort Use the generated seasonal launcher; run Notebook03 first.
$if not exist inc/LaPalma_Calibrated.inc $abort Run Notebook03 before native UC.
$setglobal OUT Results_Seasonal/%LPCAMPAIGN%/%RUN%/%SEASON%/d%DAY%
$include Input_Data_LaPalma_Weekly.gms
$include inc/LaPalma_Calibrated.inc
$include inc/LP_SP_Raja_Data.inc
abort$(abs(deltaF_max-3)>1e-10) 'SEGAN La Palma requires a 3-Hz drop, not 3.5 Hz';
set activeRun(lpRun), campaignKey /%LPCAMPAIGN%/;
activeRun(lpRun)=sameas(lpRun,'%RUN%');
abort$(card(activeRun)<>1) 'Unknown run in frozen coefficient include';
scalar runMode,useML,pfloor;
set spk /proxy_product_mw2s,true_product_mw2s,loss_squared_proxy,proxy_margin_mw2s,parent_margin_mw2s,source_damping_mw_hz,sode_damping_mw_hz,xone,xtwo/;
parameter SPDiagnostics(t,i,spk),SPLambda1(t,i,x1r),SPLambda2(t,i,x2r),SPLambdaP(t,i,pr),SPSelectors1(t,i,x1r),SPSelectors2(t,i,x2r),SPSelectorsP(t,i,pr);
SPDiagnostics(t,i,spk)=0;SPLambda1(t,i,x1r)=0;SPLambda2(t,i,x2r)=0;SPLambdaP(t,i,pr)=0;
SPSelectors1(t,i,x1r)=0;SPSelectors2(t,i,x2r)=0;SPSelectorsP(t,i,pr)=0;
runMode=sum(activeRun,lpMode(activeRun)); useML=0; useML$(runMode=2)=1;
pfloor=sum(activeRun,lpProbability(activeRun));
set fs /commitment,power_mw,on_age_h,off_age_h/;
set sk /day,horizon_hours,modelstat,solvestat,objective_keur,objective_eur,
 best_bound_keur,best_bound_eur,relative_gap,resource_seconds,wall_seconds,
 production_keur,fixed_keur,startup_keur,curtailment_cost_keur,
 curtailment_mwh,wind_available_mwh,wind_served_mwh,demand_mwh,
 probability_floor,mode,accepted,unit11_online_hours/;
set idk /campaign,run,season,'model'/;
set RunIdentity(idk,*),stateSeason(*),stateRun(*),stateCampaign(*);
scalar stateDay,stateAccepted;
parameter stateU(i),stateP(i),stateOn(i),stateOff(i);
parameter RunSummary(sk),InitialState(i,fs),FinalState(i,fs),Dispatch(t,i),Commitment(t,i),
 OnHours(t,i),OffHours(t,i),Startup(t,i),Shutdown(t,i),Curtailment(t),Demand(t),WindAvailable(t),
 Blocks(t,i,b),StartCategories(t,i,j),CutMargin(t,i);
file complete /'%OUT%/COMPLETE.txt'/, failed /'%OUT%/FAILED_SOLVE.txt'/;
file xo /'%OUT%/excel_export.txt'/, rc /'%OUT%/excel_return_code.txt'/;
scalar exportCode;

$ifthen.recovery %EXPORT_ONLY% == 1
* Only already accepted, identity-matched data may be re-exported.
* $load is compile-time: record labels are known before validation statements.
$if not exist %OUT%/results.gdx $abort Recovery has no results.gdx.
$if not exist %OUT%/state.gdx $abort Recovery has no state.gdx.
$gdxin %OUT%/results.gdx
$load RunSummary RunIdentity
$gdxin
$gdxin %OUT%/state.gdx
$load stateDay stateAccepted stateRun stateSeason stateCampaign
$gdxin
abort$(RunSummary('accepted')<>1 or stateAccepted<>1) 'Cannot export unaccepted saved solution';
abort$(stateDay<>%DAY%) 'Recovery day differs';
abort$(card(stateRun)<>1 or not stateRun('%RUN%')) 'Recovery method differs';
abort$(card(stateSeason)<>1 or not stateSeason('%SEASON%')) 'Recovery season differs';
abort$(card(stateCampaign)<>1 or not stateCampaign('%LPCAMPAIGN%')) 'Recovery campaign differs';
abort$(not RunIdentity('campaign','%LPCAMPAIGN%')) 'Recovery workbook identity differs';
$else.recovery

* Native GDX handoff -- no rounded Excel state and no midnight reset.
$ifthen.roll not %DAY%==1
$if not exist Results_Seasonal/%LPCAMPAIGN%/%RUN%/%SEASON%/d%PREV%/COMPLETE.txt $abort Previous day not complete.
parameter priorU(i),priorP(i),priorOn(i),priorOff(i);
scalar priorAccepted,priorDay;
set priorSeason(*),priorRun(*),priorCampaign(*);
$gdxin Results_Seasonal/%LPCAMPAIGN%/%RUN%/%SEASON%/d%PREV%/state.gdx
$load priorU=stateU priorP=stateP priorOn=stateOn priorOff=stateOff
$load priorAccepted=stateAccepted priorDay=stateDay
$load priorSeason=stateSeason priorRun=stateRun priorCampaign=stateCampaign
$gdxin
abort$(priorAccepted<>1 or priorDay<>%PREV%) 'Previous state not accepted/consecutive';
abort$(card(priorRun)<>1 or not priorRun('%RUN%')) 'Wrong method state';
abort$(card(priorSeason)<>1 or not priorSeason('%SEASON%')) 'Wrong season state';
abort$(card(priorCampaign)<>1 or not priorCampaign('%LPCAMPAIGN%')) 'Wrong campaign state';
count_on_init(i)=priorOn(i);count_off_init(i)=priorOff(i);g_0(i)=priorP(i);onoff_t0(i)=priorU(i);
$endif.roll
InitialState(i,'commitment')=onoff_t0(i);InitialState(i,'power_mw')=g_0(i);
InitialState(i,'on_age_h')=count_on_init(i);InitialState(i,'off_age_h')=count_off_init(i);

alias(t,tt);
alias(j,jj);
alias(i,ii);
scalar ageM;
ageM=smax(i,max(count_on_init(i),count_off_init(i)))+card(t)+1;

parameter residualOn(i),residualOff(i),startupUpper(i,j);
residualOn(i)=max(0,g_up(i)-count_on_init(i))*onoff_t0(i);
residualOff(i)=max(0,g_down(i)-count_off_init(i))*(1-onoff_t0(i));

startupUpper(i,j)=sum(jj$(ord(jj)=ord(j)+1),suc_sl(i,jj))-1;
startupUpper(i,j)$(ord(j)=card(j))=ageM;

variable obj;
positive variable g(t,i),g_lin(t,i,b),curt(t),onAge(t,i),offAge(t,i),Hafter(t,i),Gafter(t,i),Rafter(t,i);
binary variable x(t,i),y(t,i),z(t,i),suc(t,i,j);

onAge.up(t,i)=ageM;
offAge.up(t,i)=ageM;
curt.up(t)=RES_det(t);

x.fx(t,i)$(ord(t)<=residualOn(i))=1;
x.fx(t,i)$(ord(t)<=residualOff(i))=0;

equations totalCost,statusFirst(i),statusLater(t,i),exclusiveSwitch(t,i),sumBlocks(t,i),minimumGeneration(t,i),blockLimits(t,i,b),minimumUpTime(t,i),minimumDownTime(t,i),rampUpFirst(i),rampDownFirst(i),rampUpLater(t,i),rampDownLater(t,i),onAgeCap(t,i),offAgeCap(t,i),onFirstLower(i),onFirstUpper(i),offFirstLower(i),offFirstUpper(i),onLaterLower(t,i),onLaterUpper(t,i),offLaterLower(t,i),offLaterUpper(t,i),startCategorySum(t,i),startFirstLower(i,j),startFirstUpper(i,j),startLaterLower(t,i,j),startLaterUpper(t,i,j),powerBalance(t),Hdef(t,i),Gdef(t,i),Rdef(t,i),rocof(t,i),qss(t,i),mlSecurity(t,i);


* --- totalCost ---
* Objective [kEUR]: no-load cost a*x, three dispatch blocks k*g_lin, category startup cost and wind curtailment. One-hour periods make MW numerically MWh. EUR output multiplies by 1000.
totalCost..
    obj =e= sum((t,i),a(i)*x(t,i))
    +sum((t,i,b),k(i,b)*g_lin(t,i,b))
    +sum((t,i,j),suc_sw(i,j)*suc(t,i,j))+ws_penalty*sum(t,curt(t));


* --- statusFirst ---
* Initial transition: commitment minus incoming state equals startup minus shutdown. Initial data come from the seasonal seed or accepted previous-day GDX.
statusFirst(i)..
    x('t1',i)-onoff_t0(i) =e= y('t1',i)-z('t1',i);

* --- statusLater ---
* Chronological binary transition for hours 2--24; never link one method or season to another.
statusLater(t,i)$(ord(t)>1)..
    x(t,i)-x(t-1,i) =e= y(t,i)-z(t,i);

* --- exclusiveSwitch ---
* Forbid simultaneous startup and shutdown in the same hour.
exclusiveSwitch(t,i)..
    y(t,i)+z(t,i) =l= 1;


* --- sumBlocks ---
* Dispatch [MW] equals the sum of the three nonnegative generation-block outputs.
sumBlocks(t,i)..
    g(t,i) =e= sum(b,g_lin(t,i,b));

* --- minimumGeneration ---
* When committed, dispatch is at least minimum stable output [MW]; when off, block upper bounds force zero output.
minimumGeneration(t,i)..
    g(t,i) =g= g_min(i)*x(t,i);

* --- blockLimits ---
* Each piecewise-linear cost block is bounded by its original MW capacity times commitment. No altered merit order or fitted costs are introduced.
blockLimits(t,i,b)..
    g_lin(t,i,b) =l= g_max(i,b)*x(t,i);


* --- minimumUpTime ---
* A startup in the preceding minimum-up-time window forces commitment. Residual initial obligations are imposed separately through x.fx.
minimumUpTime(t,i)..
    sum(tt$(ord(tt)<=ord(t) and ord(tt)>ord(t)-g_up(i)),y(tt,i)) =l= x(t,i);

* --- minimumDownTime ---
* A shutdown in the preceding minimum-down-time window forces the unit off. The native indexing and initial-state treatment are retained.
minimumDownTime(t,i)..
    sum(tt$(ord(tt)<=ord(t) and ord(tt)>ord(t)-g_down(i)),z(tt,i)) =l= 1-x(t,i);


* --- rampUpFirst ---
* First-hour increase relative to incoming dispatch is bounded by the source ramp-up amount [MW per one-hour step]. No startup ramp relaxation is added.
rampUpFirst(i)..
    g('t1',i)-g_0(i) =l= ramp_up(i);

* --- rampDownFirst ---
* First-hour decrease relative to incoming dispatch is bounded by the source ramp-down amount [MW per one-hour step].
rampDownFirst(i)..
    g_0(i)-g('t1',i) =l= ramp_down(i);

* --- rampUpLater ---
* Inter-hour dispatch increase cannot exceed the source ramp-up amount [MW].
rampUpLater(t,i)$(ord(t)>1)..
    g(t,i)-g(t-1,i) =l= ramp_up(i);

* --- rampDownLater ---
* Inter-hour dispatch decrease cannot exceed the source ramp-down amount [MW].
rampDownLater(t,i)$(ord(t)>1)..
    g(t-1,i)-g(t,i) =l= ramp_down(i);


* --- onAgeCap ---
* On-age [h] is zero when off and bounded by ageM when on. ageM covers incoming ages plus this horizon; it is not the ML outage Big-M.
onAgeCap(t,i)..
    onAge(t,i) =l= ageM*x(t,i);

* --- offAgeCap ---
* Off-age [h] is zero when on and bounded by ageM when off.
offAgeCap(t,i)..
    offAge(t,i) =l= ageM*(1-x(t,i));


* --- onFirstLower ---
* First-hour lower bound for continued on-age. Together with its upper bound it increments the incoming on-age exactly when on.
onFirstLower(i)..
    onAge('t1',i) =g= count_on_init(i)+1-ageM*(1-x('t1',i));

* --- onFirstUpper ---
* Matching upper bound for first-hour on-age [h]; commitment activates the age recurrence.
onFirstUpper(i)..
    onAge('t1',i) =l= count_on_init(i)+1+ageM*(1-x('t1',i));

* --- offFirstLower ---
* First-hour lower bound for off-age [h]; the incoming off-age is incremented only while off.
offFirstLower(i)..
    offAge('t1',i) =g= count_off_init(i)+1-ageM*x('t1',i);

* --- offFirstUpper ---
* Matching first-hour upper bound for off-age [h].
offFirstUpper(i)..
    offAge('t1',i) =l= count_off_init(i)+1+ageM*x('t1',i);


* --- onLaterLower ---
* On-age lower recurrence within the day. Off-state cap resets the clock; the subsequent startup produces age one.
onLaterLower(t,i)$(ord(t)>1)..
    onAge(t,i) =g= onAge(t-1,i)+1-ageM*(1-x(t,i));

* --- onLaterUpper ---
* On-age upper recurrence within the day; retains the exact original Big-M expression.
onLaterUpper(t,i)$(ord(t)>1)..
    onAge(t,i) =l= onAge(t-1,i)+1+ageM*(1-x(t,i));

* --- offLaterLower ---
* Off-age lower recurrence within the day; clock measures consecutive completed off hours.
offLaterLower(t,i)$(ord(t)>1)..
    offAge(t,i) =g= offAge(t-1,i)+1-ageM*x(t,i);

* --- offLaterUpper ---
* Off-age upper recurrence within the day; this history selects the next startup-cost category.
offLaterUpper(t,i)$(ord(t)>1)..
    offAge(t,i) =l= offAge(t-1,i)+1+ageM*x(t,i);


* --- startCategorySum ---
* Exactly one startup category is active on startup, and no category is active otherwise.
startCategorySum(t,i)..
    sum(j,suc(t,i,j)) =e= y(t,i);

* --- startFirstLower ---
* Incoming off-age must lie above the selected first-hour startup-category threshold [h].
startFirstLower(i,j)..
    count_off_init(i) =g= suc_sl(i,j)-ageM*(1-suc('t1',i,j));

* --- startFirstUpper ---
* Incoming off-age cannot exceed the selected category upper threshold; final category uses ageM.
startFirstUpper(i,j)..
    count_off_init(i) =l= startupUpper(i,j)+ageM*(1-suc('t1',i,j));

* --- startLaterLower ---
* Before a later startup, preceding-hour off-age must reach the chosen category lower bound [h].
startLaterLower(t,i,j)$(ord(t)>1)..
    offAge(t-1,i) =g= suc_sl(i,j)-ageM*(1-suc(t,i,j));

* --- startLaterUpper ---
* Before a later startup, preceding-hour off-age cannot exceed the chosen category upper bound [h].
startLaterUpper(t,i,j)$(ord(t)>1)..
    offAge(t-1,i) =l= startupUpper(i,j)+ageM*(1-suc(t,i,j));


* --- powerBalance ---
* Aggregate energy balance [MW]: thermal dispatch plus available wind minus curtailment equals demand. No transmission network or load-shedding variable is present.
powerBalance(t)..
    sum(i,g(t,i))+RES_det(t)-curt(t) =e= d(t);


* --- Hdef ---
* Post-outage kinetic-energy aggregate Hafter [MW s] excludes candidate i: sum H_j [s] * S_j [MW] * commitment. This is not an inertia constant in seconds.
Hdef(t,i)..
    Hafter(t,i) =e= sum(ii$(not sameas(ii,i)),inertia(ii)*mbase(ii)*x(t,ii));


* --- Gdef ---
* Post-outage aggregate governor gain Gafter [MW/Hz] excludes candidate i and divides source kg*mbase by nominal 50 Hz.
Gdef(t,i)..
    Gafter(t,i) =e= sum(ii$(not sameas(ii,i)),kg(ii)*mbase(ii)*x(t,ii)/50);


* --- Rdef ---
* Post-outage headroom Rafter [MW] is the sum of surviving committed maximum output minus dispatch. The lost unit contributes neither inertia, gain nor reserve.
Rdef(t,i)..
    Rafter(t,i) =e= sum(ii$(not sameas(ii,i)),g_max_flat(ii)*x(t,ii)-g(t,ii));


* --- rocof ---
* For reserve/ML modes, initial RoCoF limit 2.5 Hz/s: 2*E*2.5/50 >= lost dispatch. The failed online unit loses its actual dispatch, not a fixed assumed MW.
rocof(t,i)$(runMode>0)..
    2*Hafter(t,i)*2.5/50 =g= g(t,i);


* --- qss ---
* Reserve sufficiency screen [MW]: surviving headroom >= lost dispatch. Despite its name, this is not a damped steady-state-frequency equation.
qss(t,i)$(runMode>0)..
    Rafter(t,i) =g= g(t,i);


* --- mlSecurity ---
* Affine calibrated safety margin >= 0 for each online contingency. Big-M relaxes only an offline candidate. Coefficients encode threshold 46.5 Hz and remain frozen.
mlSecurity(t,i)$useML..
    sum(activeRun,lpK0(activeRun)+lpKE(activeRun)*Hafter(t,i)+lpKG(activeRun)*Gafter(t,i)+lpKL(activeRun)*g(t,i)+lpKR(activeRun)*Rafter(t,i)+lpBigM(activeRun,i)*(1-x(t,i))) =g= 0;


$ifthen.sourceSP %RUN%==SP
$include inc/LP_SP_Raja_Equations.inc
$endif.sourceSP

model ep /all/;
option mip=cplex,limrow=0,limcol=0;
ep.optcr=.005; ep.reslim=1200; ep.optfile=1;
scalar wallStart; wallStart=jnow;
solve ep using mip minimizing obj;
RunSummary(sk)=0;
RunSummary('day')=%DAY%;RunSummary('horizon_hours')=24;
RunSummary('modelstat')=ep.modelstat;RunSummary('solvestat')=ep.solvestat;
RunSummary('objective_keur')=obj.l;RunSummary('objective_eur')=1000*obj.l;
RunSummary('best_bound_keur')=ep.objest;RunSummary('best_bound_eur')=1000*ep.objest;
RunSummary('relative_gap')=abs(obj.l-ep.objest)/max(1,abs(obj.l));
RunSummary('resource_seconds')=ep.resusd;RunSummary('wall_seconds')=(jnow-wallStart)*86400;
RunSummary('fixed_keur')=sum((t,i),a(i)*x.l(t,i));
RunSummary('production_keur')=sum((t,i,b),k(i,b)*g_lin.l(t,i,b));
RunSummary('startup_keur')=sum((t,i,j),suc_sw(i,j)*suc.l(t,i,j));
RunSummary('curtailment_cost_keur')=ws_penalty*sum(t,curt.l(t));
RunSummary('curtailment_mwh')=sum(t,curt.l(t));
RunSummary('wind_available_mwh')=sum(t,RES_det(t));
RunSummary('wind_served_mwh')=sum(t,RES_det(t)-curt.l(t));
RunSummary('demand_mwh')=sum(t,d(t));
RunSummary('probability_floor')=pfloor;RunSummary('mode')=runMode;
RunSummary('unit11_online_hours')=sum(t,x.l(t,'i11'));
stateAccepted=0;
stateAccepted$((ep.modelstat=1 or ep.modelstat=8) and
 (ep.solvestat=1 or ep.solvestat=3) and RunSummary('relative_gap')<=.00500001)=1;
RunSummary('accepted')=stateAccepted;
RunIdentity('campaign','%LPCAMPAIGN%')=yes;RunIdentity('run','%RUN%')=yes;
RunIdentity('season','%SEASON%')=yes;RunIdentity('model','%LP_MODEL_ID%')=yes;
if(stateAccepted=1,
 Dispatch(t,i)=g.l(t,i);Commitment(t,i)=round(x.l(t,i));
 OnHours(t,i)=onAge.l(t,i);OffHours(t,i)=offAge.l(t,i);
 Startup(t,i)=round(y.l(t,i));Shutdown(t,i)=round(z.l(t,i));
 Blocks(t,i,b)=g_lin.l(t,i,b);StartCategories(t,i,j)=round(suc.l(t,i,j));
 Curtailment(t)=curt.l(t);Demand(t)=d(t);WindAvailable(t)=RES_det(t);
 FinalState(i,'commitment')=round(x.l('t24',i));FinalState(i,'power_mw')=g.l('t24',i);
 FinalState(i,'on_age_h')=round(onAge.l('t24',i));FinalState(i,'off_age_h')=round(offAge.l('t24',i));
 CutMargin(t,i)=sum(activeRun,lpK0(activeRun)+lpKE(activeRun)*Hafter.l(t,i)+lpKG(activeRun)*Gafter.l(t,i)+lpKL(activeRun)*g.l(t,i)+lpKR(activeRun)*Rafter.l(t,i)+lpBigM(activeRun,i)*(1-round(x.l(t,i))));

$ifthen.spout %RUN%==SP
 SPLambda1(t,i,x1r)=lambdaX1.l(t,i,x1r);
 SPLambda2(t,i,x2r)=lambdaX2.l(t,i,x2r);
 SPLambdaP(t,i,pr)=lambdaP.l(t,i,pr);
 SPSelectors1(t,i,x1r)=round(yx1.l(t,i,x1r));
 SPSelectors2(t,i,x2r)=round(yx2.l(t,i,x2r));
 SPSelectorsP(t,i,pr)=round(yp.l(t,i,pr));
 SPDiagnostics(t,i,'xone')=aux_1.l(t,i);
 SPDiagnostics(t,i,'xtwo')=aux_2.l(t,i);
 SPDiagnostics(t,i,'proxy_product_mw2s')=(sum(x1r,sqr(ax1(x1r))*lambdaX1.l(t,i,x1r))-sum(x2r,sqr(ax2(x2r))*lambdaX2.l(t,i,x2r)))/(alpha*beta);
 SPDiagnostics(t,i,'true_product_mw2s')=Hafter.l(t,i)*Rafter.l(t,i);
 SPDiagnostics(t,i,'loss_squared_proxy')=sum(pr,sqr(ap(pr))*lambdaP.l(t,i,pr));
 SPDiagnostics(t,i,'source_damping_mw_hz')=0.01*d(t);
 SPDiagnostics(t,i,'sode_damping_mw_hz')=0.01*d(t)/50;
 SPDiagnostics(t,i,'proxy_margin_mw2s')=SPDiagnostics(t,i,'proxy_product_mw2s')-50*6/(4*deltaF_max)*SPDiagnostics(t,i,'loss_squared_proxy')+0.01*d(t)*6*g.l(t,i)*50*0.25;
 SPDiagnostics(t,i,'parent_margin_mw2s')=Hafter.l(t,i)*Rafter.l(t,i)-50*6/(4*deltaF_max)*sqr(g.l(t,i))+0.01*d(t)*6*g.l(t,i)*50*0.25;
 SPLambda1(t,i,x1r)$(SPLambda1(t,i,x1r)=0)=eps;
 SPLambda2(t,i,x2r)$(SPLambda2(t,i,x2r)=0)=eps;
 SPLambdaP(t,i,pr)$(SPLambdaP(t,i,pr)=0)=eps;
 SPSelectors1(t,i,x1r)$(SPSelectors1(t,i,x1r)=0)=eps;
 SPSelectors2(t,i,x2r)$(SPSelectors2(t,i,x2r)=0)=eps;
 SPSelectorsP(t,i,pr)$(SPSelectorsP(t,i,pr)=0)=eps;
 SPDiagnostics(t,i,spk)$(SPDiagnostics(t,i,spk)=0)=eps;
$endif.spout
 stateU(i)=round(x.l('t24',i));stateP(i)=g.l('t24',i);
 stateOn(i)=round(onAge.l('t24',i));stateOff(i)=round(offAge.l('t24',i));
 stateDay=%DAY%;stateRun('%RUN%')=yes;stateSeason('%SEASON%')=yes;stateCampaign('%LPCAMPAIGN%')=yes;
 RunSummary(sk)$(RunSummary(sk)=0)=eps;
 InitialState(i,fs)$(InitialState(i,fs)=0)=eps;
 FinalState(i,fs)$(FinalState(i,fs)=0)=eps;
 Dispatch(t,i)$(Dispatch(t,i)=0)=eps;
 Commitment(t,i)$(Commitment(t,i)=0)=eps;
 OnHours(t,i)$(OnHours(t,i)=0)=eps;
 OffHours(t,i)$(OffHours(t,i)=0)=eps;
 Startup(t,i)$(Startup(t,i)=0)=eps;
 Shutdown(t,i)$(Shutdown(t,i)=0)=eps;
 Blocks(t,i,b)$(Blocks(t,i,b)=0)=eps;
 StartCategories(t,i,j)$(StartCategories(t,i,j)=0)=eps;
 Curtailment(t)$(Curtailment(t)=0)=eps;
 Demand(t)$(Demand(t)=0)=eps;
 WindAvailable(t)$(WindAvailable(t)=0)=eps;
 CutMargin(t,i)$(CutMargin(t,i)=0)=eps;
 execute_unload '%OUT%/results.gdx',RunSummary,RunIdentity,InitialState,FinalState,
 Dispatch,Commitment,OnHours,OffHours,Startup,Shutdown,Blocks,StartCategories,Curtailment,Demand,WindAvailable,CutMargin,SPDiagnostics,SPLambda1,SPLambda2,SPLambdaP,SPSelectors1,SPSelectors2,SPSelectorsP;
 execute_unload '%OUT%/state.gdx',stateU,stateP,stateOn,stateOff,stateDay,stateAccepted,stateRun,stateSeason,stateCampaign;
else
 execute_unload '%OUT%/failed.gdx',RunSummary,RunIdentity;
 put failed 'FAILED_OR_TARGET_GAP_NOT_REACHED'/ 'modelstat ' ep.modelstat:0:0 / 'solvestat ' ep.solvestat:0:0 /;
 putclose failed;
);
$endif.recovery

* Export can be retried without resolving a completed day. No workbook deletion.
if(stateAccepted=1,
 put xo 'output="%OUT%/Results_%RUN%_%SEASON%_d%DAY%.xlsx"'/
 'par=RunSummary rng=Summary!A1 rdim=1 cdim=0'/
 'set=RunIdentity rng=Identity!A1 rdim=2 cdim=0'/
 'par=InitialState rng=Initial!A1 rdim=1 cdim=1'/
 'par=FinalState rng=Final!A1 rdim=1 cdim=1'/
 'par=Dispatch rng=Dispatch!A1 rdim=1 cdim=1'/
 'par=Commitment rng=Commitment!A1 rdim=1 cdim=1'/
 'par=OnHours rng=OnAge!A1 rdim=1 cdim=1'/
 'par=OffHours rng=OffAge!A1 rdim=1 cdim=1'/
 'par=Startup rng=Startup!A1 rdim=1 cdim=1'/
 'par=Shutdown rng=Shutdown!A1 rdim=1 cdim=1'/
 'par=Blocks rng=Blocks!A1 rdim=2 cdim=1'/
 'par=StartCategories rng=StartCategories!A1 rdim=2 cdim=1'/
 'par=Curtailment rng=Curtailment!A1 rdim=1 cdim=0'/
 'par=Demand rng=Demand!A1 rdim=1 cdim=0'/
 'par=WindAvailable rng=WindAvailable!A1 rdim=1 cdim=0'/
 'par=CutMargin rng=CutMargin!A1 rdim=1 cdim=1'/;
$ifthen.spExcel %RUN%==SP
 put xo 'par=SPDiagnostics rng=SPDiagnostics!A1 rdim=2 cdim=1'/
 'par=SPLambda1 rng=SPLambda1!A1 rdim=2 cdim=1'/
 'par=SPLambda2 rng=SPLambda2!A1 rdim=2 cdim=1'/
 'par=SPLambdaP rng=SPLambdaP!A1 rdim=2 cdim=1'/
 'par=SPSelectors1 rng=SPSelectors1!A1 rdim=2 cdim=1'/
 'par=SPSelectors2 rng=SPSelectors2!A1 rdim=2 cdim=1'/
 'par=SPSelectorsP rng=SPSelectorsP!A1 rdim=2 cdim=1'/;
$endif.spExcel
 putclose xo;
 execute 'gdxxrw.exe i="%OUT%/results.gdx" @"%OUT%/excel_export.txt" trace=3 log="%OUT%/gdxxrw.log" epsOut=0';
 exportCode=errorlevel;put rc exportCode:0:0/;putclose rc;
 abort$(exportCode<>0) 'Excel export failed. Close output workbook and inspect gdxxrw.log. Rerun launcher to export saved GDX only.';
 put complete 'ACCEPTED_SOLVE_AND_EXCEL_EXPORT'/;putclose complete;
);
