* ============================================================================
* LaPalma_FCUC_35Hz.gms
* PRIMARY: 24-hour MILP with frozen affine nadir cuts at 46.5 Hz.
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
* PUBLIC RELEASE: use START_LAPALMA.gms. The frozen coefficients/jobs are supplied.
* No training step is required. Original train-first notes below describe the old
* coefficient-acquisition workflow, not the default public example.
$title SEGAN Chapter 4 -- four-season La Palma aggregate UC / affine FCUC
$ontext
Run only Run_LaPalma_35Hz.gms from GAMS IDE after 02_LP35_Train_and_Export.ipynb exports.
The unchanged source tables are in inc/. No Python execution is performed here.
Each method has its own seven-day history; each season starts independently.
All eleven units remain available. No silent x(i11)=0 restriction is imposed.
No spatial extension. No SP model or SP include is used in this 3.5-Hz ML-only branch.
Raw source monetary values are kEUR. Explicit EUR fields multiply by 1000.
$offtext
$ondigit
$if not set DAY $setglobal DAY 1
$if not set PREV $setglobal PREV 0
$if not set SEASON $setglobal SEASON winter
$if not set RUN $setglobal RUN BC
$if not set EXPORT_ONLY $setglobal EXPORT_ONLY 0
$if not set SEARCH_SECONDS $setglobal SEARCH_SECONDS 1200
$if not set SEARCH_GAP $setglobal SEARCH_GAP 0.005
$if not set POLISH_SECONDS $setglobal POLISH_SECONDS 300
$if not set LPCAMPAIGN $abort Use the generated seasonal launcher; run 02_LP35_Train_and_Export.ipynb first.
$if not exist inc/LP35_Calibrated.inc $abort Run 02_LP35_Train_and_Export.ipynb before native UC.
$setglobal OUT Results_35Hz/%LPCAMPAIGN%/%RUN%/%SEASON%/d%DAY%
$include Input_Data_LaPalma_Weekly.gms
$include inc/LP35_Calibrated.inc
abort$(abs(lpNadirHz-46.5)>1e-10) 'LP35 coefficients must target 46.5 Hz';
set activeRun(lpRun), campaignKey /%LPCAMPAIGN%/;
activeRun(lpRun)=sameas(lpRun,'%RUN%');
abort$(card(activeRun)<>1) 'Unknown run in frozen coefficient include';
scalar runMode,useML,pfloor;
runMode=sum(activeRun,lpMode(activeRun)); useML=0; useML$(runMode=2)=1;
pfloor=sum(activeRun,lpProbability(activeRun));
set fs /commitment,power_mw,on_age_h,off_age_h/;
set sk /day,horizon_hours,modelstat,solvestat,objective_keur,objective_eur,
 best_bound_keur,best_bound_eur,relative_gap,resource_seconds,wall_seconds,
 production_keur,fixed_keur,startup_keur,curtailment_cost_keur,
 curtailment_mwh,wind_available_mwh,wind_served_mwh,demand_mwh,
 probability_floor,mode,accepted,unit11_online_hours,nadir_min_hz,nadir_drop_hz,
 search_modelstat,search_solvestat,search_objective_keur,search_gap,search_seconds,
 polish_seconds,polish_used,equation_residual,bound_residual,integer_residual,
 search_target_gap,search_limit_seconds/;
set idk /campaign,run,season,'model'/;
set RunIdentity(idk,*),stateSeason(*),stateRun(*),stateCampaign(*);
scalar stateDay,stateAccepted;
parameter stateU(i),stateP(i),stateOn(i),stateOff(i),frozenU(t,i);
scalar searchMS,searchSS,searchObj,searchBound,searchGap,searchSec,polishSec,hasInc,
 eqResid,varResid,intResid,doPolish;
parameter RunSummary(sk),InitialState(i,fs),FinalState(i,fs),Dispatch(t,i),Commitment(t,i),
 OnHours(t,i),OffHours(t,i),Startup(t,i),Shutdown(t,i),Curtailment(t),Demand(t),WindAvailable(t),
 Blocks(t,i,b),StartCategories(t,i,j),CutMargin(t,i);
file complete /'%OUT%/COMPLETE.txt'/, failed /'%OUT%/FAILED_SOLVE.txt'/, policyNote /'%OUT%/ACCEPTANCE_POLICY.txt'/;
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
$if not exist Results_35Hz/%LPCAMPAIGN%/%RUN%/%SEASON%/d%PREV%/COMPLETE.txt $abort Previous day not complete.
parameter priorU(i),priorP(i),priorOn(i),priorOff(i);
scalar priorAccepted,priorDay;
set priorSeason(*),priorRun(*),priorCampaign(*);
$gdxin Results_35Hz/%LPCAMPAIGN%/%RUN%/%SEASON%/d%PREV%/state.gdx
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

equations
    totalCost,
    statusFirst(i),
    statusLater(t,i),
    exclusiveSwitch(t,i),
    sumBlocks(t,i),
    minimumGeneration(t,i),
    blockLimits(t,i,b),
    minimumUpTime(t,i),
    minimumDownTime(t,i),
    rampUpFirst(i),
    rampDownFirst(i),
    rampUpLater(t,i),
    rampDownLater(t,i),
    onAgeCap(t,i),
    offAgeCap(t,i),
    onFirstLower(i),
    onFirstUpper(i),
    offFirstLower(i),
    offFirstUpper(i),
    onLaterLower(t,i),
    onLaterUpper(t,i),
    offLaterLower(t,i),
    offLaterUpper(t,i),
    startCategorySum(t,i),
    startFirstLower(i,j),
    startFirstUpper(i,j),
    startLaterLower(t,i,j),
    startLaterUpper(t,i,j),
    powerBalance(t),
    Hdef(t,i),
    Gdef(t,i),
    Rdef(t,i),
    rocof(t,i),
    qss(t,i),
    mlSecurity(t,i);


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


model ep /all/;
option mip=cplex,limrow=0,limcol=0;
* A relative gap is NOT a primal-feasibility condition.
* The uploaded working default is 0.5%; the older manifest plan was 1.25%.
ep.optcr=%SEARCH_GAP%; ep.reslim=%SEARCH_SECONDS%; ep.optfile=1;
scalar wallStart; wallStart=jnow;
solve ep using mip minimizing obj;
searchMS=ep.modelstat; searchSS=ep.solvestat;
searchObj=obj.l; searchBound=ep.objest;
searchGap=abs(searchObj-searchBound)/max(1,abs(searchObj));
searchSec=ep.resusd; polishSec=0;doPolish=0;
hasInc=0;
hasInc$((searchMS=1 or searchMS=8) and (searchSS=1 or searchSS=3))=1;
* Preserve the search incumbent and bound even if polishing/export later fails.
execute_unload '%OUT%/search_incumbent.gdx',x,y,z,g,g_lin,suc,onAge,offAge,curt,
  Hafter,Gafter,Rafter,obj,searchMS,searchSS,searchObj,searchBound,searchGap,searchSec;
if(hasInc=1,
 frozenU(t,i)=round(x.l(t,i));
 x.fx(t,i)=frozenU(t,i);
 ep.optcr=.0001;ep.reslim=%POLISH_SECONDS%;
 solve ep using mip minimizing obj;
 polishSec=ep.resusd;doPolish=1;
);
* Explicit primal residual check before any state handoff. The same checks are
* independently reconstructed in the result notebook. No gap gate is applied.
eqResid=0;varResid=0;intResid=0;
eqResid=max(eqResid,max(0,totalCost.lo-totalCost.l,totalCost.l-totalCost.up));
eqResid=max(eqResid,smax(i,max(0,statusFirst.lo(i)-statusFirst.l(i),statusFirst.l(i)-statusFirst.up(i))));
eqResid=max(eqResid,smax((t,i)$(ord(t)>1),max(0,statusLater.lo(t,i)-statusLater.l(t,i),statusLater.l(t,i)-statusLater.up(t,i))));
eqResid=max(eqResid,smax((t,i),max(0,exclusiveSwitch.lo(t,i)-exclusiveSwitch.l(t,i),exclusiveSwitch.l(t,i)-exclusiveSwitch.up(t,i))));
eqResid=max(eqResid,smax((t,i),max(0,sumBlocks.lo(t,i)-sumBlocks.l(t,i),sumBlocks.l(t,i)-sumBlocks.up(t,i))));
eqResid=max(eqResid,smax((t,i),max(0,minimumGeneration.lo(t,i)-minimumGeneration.l(t,i),minimumGeneration.l(t,i)-minimumGeneration.up(t,i))));
eqResid=max(eqResid,smax((t,i,b),max(0,blockLimits.lo(t,i,b)-blockLimits.l(t,i,b),blockLimits.l(t,i,b)-blockLimits.up(t,i,b))));
eqResid=max(eqResid,smax((t,i),max(0,minimumUpTime.lo(t,i)-minimumUpTime.l(t,i),minimumUpTime.l(t,i)-minimumUpTime.up(t,i))));
eqResid=max(eqResid,smax((t,i),max(0,minimumDownTime.lo(t,i)-minimumDownTime.l(t,i),minimumDownTime.l(t,i)-minimumDownTime.up(t,i))));
eqResid=max(eqResid,smax(i,max(0,rampUpFirst.lo(i)-rampUpFirst.l(i),rampUpFirst.l(i)-rampUpFirst.up(i))));
eqResid=max(eqResid,smax(i,max(0,rampDownFirst.lo(i)-rampDownFirst.l(i),rampDownFirst.l(i)-rampDownFirst.up(i))));
eqResid=max(eqResid,smax((t,i)$(ord(t)>1),max(0,rampUpLater.lo(t,i)-rampUpLater.l(t,i),rampUpLater.l(t,i)-rampUpLater.up(t,i))));
eqResid=max(eqResid,smax((t,i)$(ord(t)>1),max(0,rampDownLater.lo(t,i)-rampDownLater.l(t,i),rampDownLater.l(t,i)-rampDownLater.up(t,i))));
eqResid=max(eqResid,smax((t,i),max(0,onAgeCap.lo(t,i)-onAgeCap.l(t,i),onAgeCap.l(t,i)-onAgeCap.up(t,i))));
eqResid=max(eqResid,smax((t,i),max(0,offAgeCap.lo(t,i)-offAgeCap.l(t,i),offAgeCap.l(t,i)-offAgeCap.up(t,i))));
eqResid=max(eqResid,smax(i,max(0,onFirstLower.lo(i)-onFirstLower.l(i),onFirstLower.l(i)-onFirstLower.up(i))));
eqResid=max(eqResid,smax(i,max(0,onFirstUpper.lo(i)-onFirstUpper.l(i),onFirstUpper.l(i)-onFirstUpper.up(i))));
eqResid=max(eqResid,smax(i,max(0,offFirstLower.lo(i)-offFirstLower.l(i),offFirstLower.l(i)-offFirstLower.up(i))));
eqResid=max(eqResid,smax(i,max(0,offFirstUpper.lo(i)-offFirstUpper.l(i),offFirstUpper.l(i)-offFirstUpper.up(i))));
eqResid=max(eqResid,smax((t,i)$(ord(t)>1),max(0,onLaterLower.lo(t,i)-onLaterLower.l(t,i),onLaterLower.l(t,i)-onLaterLower.up(t,i))));
eqResid=max(eqResid,smax((t,i)$(ord(t)>1),max(0,onLaterUpper.lo(t,i)-onLaterUpper.l(t,i),onLaterUpper.l(t,i)-onLaterUpper.up(t,i))));
eqResid=max(eqResid,smax((t,i)$(ord(t)>1),max(0,offLaterLower.lo(t,i)-offLaterLower.l(t,i),offLaterLower.l(t,i)-offLaterLower.up(t,i))));
eqResid=max(eqResid,smax((t,i)$(ord(t)>1),max(0,offLaterUpper.lo(t,i)-offLaterUpper.l(t,i),offLaterUpper.l(t,i)-offLaterUpper.up(t,i))));
eqResid=max(eqResid,smax((t,i),max(0,startCategorySum.lo(t,i)-startCategorySum.l(t,i),startCategorySum.l(t,i)-startCategorySum.up(t,i))));
eqResid=max(eqResid,smax((i,j),max(0,startFirstLower.lo(i,j)-startFirstLower.l(i,j),startFirstLower.l(i,j)-startFirstLower.up(i,j))));
eqResid=max(eqResid,smax((i,j),max(0,startFirstUpper.lo(i,j)-startFirstUpper.l(i,j),startFirstUpper.l(i,j)-startFirstUpper.up(i,j))));
eqResid=max(eqResid,smax((t,i,j)$(ord(t)>1),max(0,startLaterLower.lo(t,i,j)-startLaterLower.l(t,i,j),startLaterLower.l(t,i,j)-startLaterLower.up(t,i,j))));
eqResid=max(eqResid,smax((t,i,j)$(ord(t)>1),max(0,startLaterUpper.lo(t,i,j)-startLaterUpper.l(t,i,j),startLaterUpper.l(t,i,j)-startLaterUpper.up(t,i,j))));
eqResid=max(eqResid,smax(t,max(0,powerBalance.lo(t)-powerBalance.l(t),powerBalance.l(t)-powerBalance.up(t))));
eqResid=max(eqResid,smax((t,i),max(0,Hdef.lo(t,i)-Hdef.l(t,i),Hdef.l(t,i)-Hdef.up(t,i))));
eqResid=max(eqResid,smax((t,i),max(0,Gdef.lo(t,i)-Gdef.l(t,i),Gdef.l(t,i)-Gdef.up(t,i))));
eqResid=max(eqResid,smax((t,i),max(0,Rdef.lo(t,i)-Rdef.l(t,i),Rdef.l(t,i)-Rdef.up(t,i))));
eqResid=max(eqResid,smax((t,i)$(runMode>0),max(0,rocof.lo(t,i)-rocof.l(t,i),rocof.l(t,i)-rocof.up(t,i))));
eqResid=max(eqResid,smax((t,i)$(runMode>0),max(0,qss.lo(t,i)-qss.l(t,i),qss.l(t,i)-qss.up(t,i))));
eqResid=max(eqResid,smax((t,i)$useML,max(0,mlSecurity.lo(t,i)-mlSecurity.l(t,i),mlSecurity.l(t,i)-mlSecurity.up(t,i))));
varResid=max(varResid,smax((t,i),max(0,x.lo(t,i)-x.l(t,i),x.l(t,i)-x.up(t,i))));
varResid=max(varResid,smax((t,i),max(0,y.lo(t,i)-y.l(t,i),y.l(t,i)-y.up(t,i))));
varResid=max(varResid,smax((t,i),max(0,z.lo(t,i)-z.l(t,i),z.l(t,i)-z.up(t,i))));
varResid=max(varResid,smax((t,i),max(0,g.lo(t,i)-g.l(t,i),g.l(t,i)-g.up(t,i))));
varResid=max(varResid,smax((t,i,b),max(0,g_lin.lo(t,i,b)-g_lin.l(t,i,b),g_lin.l(t,i,b)-g_lin.up(t,i,b))));
varResid=max(varResid,smax((t,i,j),max(0,suc.lo(t,i,j)-suc.l(t,i,j),suc.l(t,i,j)-suc.up(t,i,j))));
varResid=max(varResid,smax((t,i),max(0,onAge.lo(t,i)-onAge.l(t,i),onAge.l(t,i)-onAge.up(t,i))));
varResid=max(varResid,smax((t,i),max(0,offAge.lo(t,i)-offAge.l(t,i),offAge.l(t,i)-offAge.up(t,i))));
varResid=max(varResid,smax(t,max(0,curt.lo(t)-curt.l(t),curt.l(t)-curt.up(t))));
varResid=max(varResid,smax((t,i),max(0,Hafter.lo(t,i)-Hafter.l(t,i),Hafter.l(t,i)-Hafter.up(t,i))));
varResid=max(varResid,smax((t,i),max(0,Gafter.lo(t,i)-Gafter.l(t,i),Gafter.l(t,i)-Gafter.up(t,i))));
varResid=max(varResid,smax((t,i),max(0,Rafter.lo(t,i)-Rafter.l(t,i),Rafter.l(t,i)-Rafter.up(t,i))));
intResid=max(intResid,smax((t,i),abs(x.l(t,i)-round(x.l(t,i)))));
intResid=max(intResid,smax((t,i),abs(y.l(t,i)-round(y.l(t,i)))));
intResid=max(intResid,smax((t,i),abs(z.l(t,i)-round(z.l(t,i)))));
intResid=max(intResid,smax((t,i,j),abs(suc.l(t,i,j)-round(suc.l(t,i,j)))));
RunSummary(sk)=0;
RunSummary('day')=%DAY%;RunSummary('horizon_hours')=24;
RunSummary('modelstat')=ep.modelstat;RunSummary('solvestat')=ep.solvestat;
RunSummary('objective_keur')=obj.l;RunSummary('objective_eur')=1000*obj.l;
RunSummary('best_bound_keur')=searchBound;RunSummary('best_bound_eur')=1000*searchBound;
RunSummary('relative_gap')=max(0,obj.l-searchBound)/max(1,abs(obj.l));
RunSummary('resource_seconds')=searchSec+polishSec;RunSummary('wall_seconds')=(jnow-wallStart)*86400;
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
RunSummary('nadir_min_hz')=46.5;RunSummary('nadir_drop_hz')=3.5;
RunSummary('search_modelstat')=searchMS;RunSummary('search_solvestat')=searchSS;
RunSummary('search_objective_keur')=searchObj;RunSummary('search_gap')=searchGap;
RunSummary('search_seconds')=searchSec;RunSummary('polish_seconds')=polishSec;
RunSummary('polish_used')=doPolish;RunSummary('equation_residual')=eqResid;
RunSummary('bound_residual')=varResid;RunSummary('integer_residual')=intResid;
RunSummary('search_target_gap')=%SEARCH_GAP%;RunSummary('search_limit_seconds')=%SEARCH_SECONDS%;
stateAccepted=0;
stateAccepted$((hasInc=1) and (ep.modelstat=1 or ep.modelstat=8) and
 (ep.solvestat=1 or ep.solvestat=3) and eqResid<=1e-5 and varResid<=1e-5 and intResid<=1e-5
 and searchBound<=obj.l+1e-5)=1;
RunSummary('accepted')=stateAccepted;
RunIdentity('campaign','%LPCAMPAIGN%')=yes;RunIdentity('run','%RUN%')=yes;
RunIdentity('season','%SEASON%')=yes;RunIdentity('model','%LP_MODEL_ID%')=yes;
if(stateAccepted=1,
 put policyNote 'LP35_FEASIBLE_INCUMBENT_POLICY'/
 'Optimality gap is reported, not an acceptance gate.'/
 'search target gap ' RunSummary('search_target_gap'):0:8/
 'final exported gap versus original unrestricted bound ' RunSummary('relative_gap'):0:10/
 'primal equation residual ' eqResid:0:12/
 'variable bound residual ' varResid:0:12/
 'integer residual ' intResid:0:12/;
 putclose policyNote;
 Dispatch(t,i)=g.l(t,i);Commitment(t,i)=round(x.l(t,i));
 OnHours(t,i)=onAge.l(t,i);OffHours(t,i)=offAge.l(t,i);
 Startup(t,i)=round(y.l(t,i));Shutdown(t,i)=round(z.l(t,i));
 Blocks(t,i,b)=g_lin.l(t,i,b);StartCategories(t,i,j)=round(suc.l(t,i,j));
 Curtailment(t)=curt.l(t);Demand(t)=d(t);WindAvailable(t)=RES_det(t);
 FinalState(i,'commitment')=round(x.l('t24',i));FinalState(i,'power_mw')=g.l('t24',i);
 FinalState(i,'on_age_h')=round(onAge.l('t24',i));FinalState(i,'off_age_h')=round(offAge.l('t24',i));
 CutMargin(t,i)=sum(activeRun,lpK0(activeRun)+lpKE(activeRun)*Hafter.l(t,i)+lpKG(activeRun)*Gafter.l(t,i)+lpKL(activeRun)*g.l(t,i)+lpKR(activeRun)*Rafter.l(t,i)+lpBigM(activeRun,i)*(1-round(x.l(t,i))));

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
 Dispatch,Commitment,OnHours,OffHours,Startup,Shutdown,Blocks,StartCategories,Curtailment,Demand,WindAvailable,CutMargin;
 execute_unload '%OUT%/state.gdx',stateU,stateP,stateOn,stateOff,stateDay,stateAccepted,stateRun,stateSeason,stateCampaign;
else
 execute_unload '%OUT%/failed.gdx',RunSummary,RunIdentity;
 put failed 'NO_FEASIBLE_AUDITED_INCUMBENT'/ 'modelstat ' ep.modelstat:0:0 / 'solvestat ' ep.solvestat:0:0 /;
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
putclose xo;
 execute 'gdxxrw.exe i="%OUT%/results.gdx" @"%OUT%/excel_export.txt" trace=3 log="%OUT%/gdxxrw.log" epsOut=0';
 exportCode=errorlevel;put rc exportCode:0:0/;putclose rc;
 abort$(exportCode<>0) 'Excel export failed. Close output workbook and inspect gdxxrw.log. Rerun launcher to export saved GDX only.';
 put complete 'ACCEPTED_SOLVE_AND_EXCEL_EXPORT'/;putclose complete;
);
