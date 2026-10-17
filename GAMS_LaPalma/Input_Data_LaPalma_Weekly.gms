* ============================================================================
* Input_Data_LaPalma_Weekly.gms
* SHARED INPUT LOADER: original tables, option-column 4, one season/day.
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
$ontext
La Palma seasonal input data for the SEGAN Chapter 4 rebuild.
The original .inc numerical tables are preserved. Static loading only. The main model loads the prior same-method/season GDX state.
Raw cost coefficients are kEUR; results include an explicit EUR conversion.
Damping in the Python evaluator retains Raja's source per-unit convention.
RESERVE here means the original no-damping-credit headroom condition.
This island UC is aggregate; unused network tables are retained only as provenance.
$offtext
$if not set DAY $set DAY 1
$if not set PREV $set PREV 0
$if not set SEASON $set SEASON spring
$if not set RUN $set RUN BC
$if not set LPCAMPAIGN $set LPCAMPAIGN LP_PENDING
set t /t1*t24/; set i /i1*i11/; set b /b1*b3/; set j /j1*j8/; set tr /tr1*tr4/;
set column /column1/; set seasons /winter,spring,summer,autumn/; set days /d1*d7/;
scalar transmission_option /4/; scalar ws_penalty /0/;

table g_max(i,b)
* MW capacity of each of the three dispatch-cost blocks.
$include inc/block_max.inc
;
table k_option(i,b,tr)
* Incremental generation cost: kEUR per MWh; select tr4.
$include inc/k.inc
;
parameter k(i,b); k(i,b)=sum(tr$(ord(tr)=transmission_option),k_option(i,b,tr));
table suc_sw_option(i,j,tr)
* Startup-category cost: kEUR per start; select tr4.
$include inc/start_up_sw.inc
;
parameter suc_sw(i,j); suc_sw(i,j)=sum(tr$(ord(tr)=transmission_option),suc_sw_option(i,j,tr));
table suc_sl(i,j)
* Startup-category lower thresholds: hours offline.
$include inc/start_up_sl.inc
;
table aux2(i,column)
* Incoming offline age, hours. Day 1 only; later overwritten by GDX.
$include inc/aux2.inc
;
table aux3(i,column)
* Incoming online age, hours; determines incoming commitment.
$include inc/aux3.inc
;
table aux4(i,tr)
* No-load cost, kEUR per committed hour; select tr4.
$include inc/aux4.inc
;
parameter a(i); a(i)=sum(tr$(ord(tr)=transmission_option),aux4(i,tr));
table aux5(i,tr)
* Ramp-up MW change per one-hour interval; select tr4.
$include inc/aux5.inc
;
parameter ramp_up(i); ramp_up(i)=sum(tr$(ord(tr)=transmission_option),aux5(i,tr));
table aux6(i,tr)
* Ramp-down MW change per one-hour interval; select tr4.
$include inc/aux6.inc
;
parameter ramp_down(i); ramp_down(i)=sum(tr$(ord(tr)=transmission_option),aux6(i,tr));
table aux7(i,tr)
* Minimum down time, hours; select tr4.
$include inc/aux7.inc
;
parameter g_down(i); g_down(i)=sum(tr$(ord(tr)=transmission_option),aux7(i,tr));
table aux8(i,tr)
* Minimum up time, hours; select tr4.
$include inc/aux8.inc
;
parameter g_up(i); g_up(i)=sum(tr$(ord(tr)=transmission_option),aux8(i,tr));
table aux9(i,tr)
* Minimum stable generation, MW; select tr4.
$include inc/aux9.inc
;
parameter g_min(i); g_min(i)=sum(tr$(ord(tr)=transmission_option),aux9(i,tr));
table aux10(i,column)
* Incoming generation, MW. Not an optimized day-1 schedule.
$include inc/aux10.inc
;
table auxinertia(i,column)
* Unit inertia constants, seconds.
$include inc/auxinertia.inc
;
parameter inertia(i); inertia(i)=sum(column,auxinertia(i,column));
table auxmbase(i,column)
* Machine power base used by the original H*base convention.
$include inc/auxmbase.inc
;
parameter mbase(i); mbase(i)=sum(column,auxmbase(i,column));
table auxk(i,column)
* Per-unit governor gain; multiply by base/50 to obtain MW/Hz.
$include inc/auxk.inc
;
parameter kg(i); kg(i)=sum(column,auxk(i,column));
parameter g_max_flat(i); g_max_flat(i)=sum(b,g_max(i,b));

table dAll(t,days,seasons)
* Demand: t1..t24 x d1..d7 x four seasons, MW.
$include inc/d_seasons.inc
;
table RESAll(t,days,seasons)
* Available renewable power: same time indices, MW.
$include inc/RES_seasons.inc
;
parameter d(t),RES_det(t); d(t)=dAll(t,'d%DAY%','%SEASON%'); RES_det(t)=RESAll(t,'d%DAY%','%SEASON%');

parameter count_on_init(i),count_off_init(i),g_0(i),onoff_t0(i);
count_on_init(i)=sum(column,aux3(i,column));count_off_init(i)=sum(column,aux2(i,column));
g_0(i)=sum(column,aux10(i,column));onoff_t0(i)=0;onoff_t0(i)$(count_on_init(i)>0)=1;
