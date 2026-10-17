* ============================================================================
* Run_LaPalma_Targeted_D6D7_Recovery.gms
* HISTORICAL TARGETED RECOVERY: original method/season/day selection.
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
$title La Palma targeted recovery -- only eight interrupted d6 chains plus their d7 successors
* Run from GAMS IDE in the existing GAMS_LaPalma working directory.
* SP is intentionally excluded.
* Existing COMPLETE days 1-5 are never rerun.

* LR_C1 / autumn: original d6 search gap = 0.9997%
$if not exist Results_Seasonal/LP4S_74ee31255d0f/LR_C1/autumn/d6/COMPLETE.txt $call gams "LaPalma_FCUC_Weekly_Recovery.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=LR_C1 --SEASON=autumn --DAY=6 --PREV=5 lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/LR_C1/autumn/d6/LaPalma_FCUC_RECOVERY.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/LR_C1/autumn/d6/LaPalma_FCUC_RECOVERY.log"
$if not exist Results_Seasonal/LP4S_74ee31255d0f/LR_C1/autumn/d6/COMPLETE.txt $abort Recovery did not produce an accepted d6 schedule for LR_C1 autumn; inspect LaPalma_FCUC_RECOVERY.lst/log
$if not exist Results_Seasonal/LP4S_74ee31255d0f/LR_C1/autumn/d7/COMPLETE.txt $call gams "LaPalma_FCUC_Weekly_Recovery.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=LR_C1 --SEASON=autumn --DAY=7 --PREV=6 lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/LR_C1/autumn/d7/LaPalma_FCUC_RECOVERY.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/LR_C1/autumn/d7/LaPalma_FCUC_RECOVERY.log"
$if not exist Results_Seasonal/LP4S_74ee31255d0f/LR_C1/autumn/d7/COMPLETE.txt $abort Recovery did not produce an accepted d7 schedule for LR_C1 autumn; inspect LaPalma_FCUC_RECOVERY.lst/log

* LR_C1e6 / spring: original d6 search gap = 0.9439%
$if not exist Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/spring/d6/COMPLETE.txt $call gams "LaPalma_FCUC_Weekly_Recovery.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=LR_C1e6 --SEASON=spring --DAY=6 --PREV=5 lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/spring/d6/LaPalma_FCUC_RECOVERY.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/spring/d6/LaPalma_FCUC_RECOVERY.log"
$if not exist Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/spring/d6/COMPLETE.txt $abort Recovery did not produce an accepted d6 schedule for LR_C1e6 spring; inspect LaPalma_FCUC_RECOVERY.lst/log
$if not exist Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/spring/d7/COMPLETE.txt $call gams "LaPalma_FCUC_Weekly_Recovery.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=LR_C1e6 --SEASON=spring --DAY=7 --PREV=6 lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/spring/d7/LaPalma_FCUC_RECOVERY.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/spring/d7/LaPalma_FCUC_RECOVERY.log"
$if not exist Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/spring/d7/COMPLETE.txt $abort Recovery did not produce an accepted d7 schedule for LR_C1e6 spring; inspect LaPalma_FCUC_RECOVERY.lst/log

* LR_C1e6 / summer: original d6 search gap = 0.9606%
$if not exist Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/summer/d6/COMPLETE.txt $call gams "LaPalma_FCUC_Weekly_Recovery.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=LR_C1e6 --SEASON=summer --DAY=6 --PREV=5 lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/summer/d6/LaPalma_FCUC_RECOVERY.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/summer/d6/LaPalma_FCUC_RECOVERY.log"
$if not exist Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/summer/d6/COMPLETE.txt $abort Recovery did not produce an accepted d6 schedule for LR_C1e6 summer; inspect LaPalma_FCUC_RECOVERY.lst/log
$if not exist Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/summer/d7/COMPLETE.txt $call gams "LaPalma_FCUC_Weekly_Recovery.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=LR_C1e6 --SEASON=summer --DAY=7 --PREV=6 lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/summer/d7/LaPalma_FCUC_RECOVERY.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/summer/d7/LaPalma_FCUC_RECOVERY.log"
$if not exist Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/summer/d7/COMPLETE.txt $abort Recovery did not produce an accepted d7 schedule for LR_C1e6 summer; inspect LaPalma_FCUC_RECOVERY.lst/log

* LR_C1e6 / autumn: original d6 search gap = 1.1016%
$if not exist Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/autumn/d6/COMPLETE.txt $call gams "LaPalma_FCUC_Weekly_Recovery.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=LR_C1e6 --SEASON=autumn --DAY=6 --PREV=5 lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/autumn/d6/LaPalma_FCUC_RECOVERY.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/autumn/d6/LaPalma_FCUC_RECOVERY.log"
$if not exist Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/autumn/d6/COMPLETE.txt $abort Recovery did not produce an accepted d6 schedule for LR_C1e6 autumn; inspect LaPalma_FCUC_RECOVERY.lst/log
$if not exist Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/autumn/d7/COMPLETE.txt $call gams "LaPalma_FCUC_Weekly_Recovery.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=LR_C1e6 --SEASON=autumn --DAY=7 --PREV=6 lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/autumn/d7/LaPalma_FCUC_RECOVERY.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/autumn/d7/LaPalma_FCUC_RECOVERY.log"
$if not exist Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/autumn/d7/COMPLETE.txt $abort Recovery did not produce an accepted d7 schedule for LR_C1e6 autumn; inspect LaPalma_FCUC_RECOVERY.lst/log

* SGD_Log / autumn: original d6 search gap = 0.6552%
$if not exist Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/autumn/d6/COMPLETE.txt $call gams "LaPalma_FCUC_Weekly_Recovery.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SGD_Log --SEASON=autumn --DAY=6 --PREV=5 lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/autumn/d6/LaPalma_FCUC_RECOVERY.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/autumn/d6/LaPalma_FCUC_RECOVERY.log"
$if not exist Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/autumn/d6/COMPLETE.txt $abort Recovery did not produce an accepted d6 schedule for SGD_Log autumn; inspect LaPalma_FCUC_RECOVERY.lst/log
$if not exist Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/autumn/d7/COMPLETE.txt $call gams "LaPalma_FCUC_Weekly_Recovery.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SGD_Log --SEASON=autumn --DAY=7 --PREV=6 lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/autumn/d7/LaPalma_FCUC_RECOVERY.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/autumn/d7/LaPalma_FCUC_RECOVERY.log"
$if not exist Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/autumn/d7/COMPLETE.txt $abort Recovery did not produce an accepted d7 schedule for SGD_Log autumn; inspect LaPalma_FCUC_RECOVERY.lst/log

* PA / summer: original d6 search gap = 0.7581%
$if not exist Results_Seasonal/LP4S_74ee31255d0f/PA/summer/d6/COMPLETE.txt $call gams "LaPalma_FCUC_Weekly_Recovery.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=PA --SEASON=summer --DAY=6 --PREV=5 lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/PA/summer/d6/LaPalma_FCUC_RECOVERY.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/PA/summer/d6/LaPalma_FCUC_RECOVERY.log"
$if not exist Results_Seasonal/LP4S_74ee31255d0f/PA/summer/d6/COMPLETE.txt $abort Recovery did not produce an accepted d6 schedule for PA summer; inspect LaPalma_FCUC_RECOVERY.lst/log
$if not exist Results_Seasonal/LP4S_74ee31255d0f/PA/summer/d7/COMPLETE.txt $call gams "LaPalma_FCUC_Weekly_Recovery.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=PA --SEASON=summer --DAY=7 --PREV=6 lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/PA/summer/d7/LaPalma_FCUC_RECOVERY.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/PA/summer/d7/LaPalma_FCUC_RECOVERY.log"
$if not exist Results_Seasonal/LP4S_74ee31255d0f/PA/summer/d7/COMPLETE.txt $abort Recovery did not produce an accepted d7 schedule for PA summer; inspect LaPalma_FCUC_RECOVERY.lst/log

* REF090 / autumn: original d6 search gap = 0.6798%
$if not exist Results_Seasonal/LP4S_74ee31255d0f/REF090/autumn/d6/COMPLETE.txt $call gams "LaPalma_FCUC_Weekly_Recovery.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=REF090 --SEASON=autumn --DAY=6 --PREV=5 lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/REF090/autumn/d6/LaPalma_FCUC_RECOVERY.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/REF090/autumn/d6/LaPalma_FCUC_RECOVERY.log"
$if not exist Results_Seasonal/LP4S_74ee31255d0f/REF090/autumn/d6/COMPLETE.txt $abort Recovery did not produce an accepted d6 schedule for REF090 autumn; inspect LaPalma_FCUC_RECOVERY.lst/log
$if not exist Results_Seasonal/LP4S_74ee31255d0f/REF090/autumn/d7/COMPLETE.txt $call gams "LaPalma_FCUC_Weekly_Recovery.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=REF090 --SEASON=autumn --DAY=7 --PREV=6 lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/REF090/autumn/d7/LaPalma_FCUC_RECOVERY.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/REF090/autumn/d7/LaPalma_FCUC_RECOVERY.log"
$if not exist Results_Seasonal/LP4S_74ee31255d0f/REF090/autumn/d7/COMPLETE.txt $abort Recovery did not produce an accepted d7 schedule for REF090 autumn; inspect LaPalma_FCUC_RECOVERY.lst/log

* REF095 / autumn: original d6 search gap = 0.7857%
$if not exist Results_Seasonal/LP4S_74ee31255d0f/REF095/autumn/d6/COMPLETE.txt $call gams "LaPalma_FCUC_Weekly_Recovery.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=REF095 --SEASON=autumn --DAY=6 --PREV=5 lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/REF095/autumn/d6/LaPalma_FCUC_RECOVERY.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/REF095/autumn/d6/LaPalma_FCUC_RECOVERY.log"
$if not exist Results_Seasonal/LP4S_74ee31255d0f/REF095/autumn/d6/COMPLETE.txt $abort Recovery did not produce an accepted d6 schedule for REF095 autumn; inspect LaPalma_FCUC_RECOVERY.lst/log
$if not exist Results_Seasonal/LP4S_74ee31255d0f/REF095/autumn/d7/COMPLETE.txt $call gams "LaPalma_FCUC_Weekly_Recovery.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=REF095 --SEASON=autumn --DAY=7 --PREV=6 lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/REF095/autumn/d7/LaPalma_FCUC_RECOVERY.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/REF095/autumn/d7/LaPalma_FCUC_RECOVERY.log"
$if not exist Results_Seasonal/LP4S_74ee31255d0f/REF095/autumn/d7/COMPLETE.txt $abort Recovery did not produce an accepted d7 schedule for REF095 autumn; inspect LaPalma_FCUC_RECOVERY.lst/log

display 'TARGETED D6/D7 RECOVERY FINISHED';
