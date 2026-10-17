$title La Palma FCUC -- public frozen-deployment entry (GAMS 24.9 IDE)
$ontext
OPEN THIS FILE IN THE GAMS IDE with GAMS_LaPalma as the project working directory.
The default is ONE 24-hour ML solve, not 336 jobs. No Python fitting is required.
Edit the three selection lines below. SCOPE is DAY, WEEK, or ALL.
DAY runs day 1. WEEK runs days 1..7 for the selected method/season in order.
ALL uses the original 336-job roster. Do not select ALL for a first test.
Existing complete days are never re-solved. Failed days are not silently retried.
The original acceptance checks and results/state GDX export are unchanged.
CPLEX option file is supplied; working defaults: 1200 s, 0.005 gap, 300 s polish.
This entry targets the author's Windows GAMS 24.9 / GDXXRW environment.
It was statically checked but NOT executed in native GAMS in this build.
$offtext

* USER SELECTION: change only these values for a frozen deployment experiment.
$if not set SCOPE $setglobal SCOPE DAY
$if not set SELECT_RUN $setglobal SELECT_RUN LR_C1
$if not set SELECT_SEASON $setglobal SELECT_SEASON winter

$setglobal INVALID_RUN 1
$if %SELECT_RUN%==LR_C1 $setglobal INVALID_RUN 0
$if %SELECT_RUN%==LR_C1e6 $setglobal INVALID_RUN 0
$if %SELECT_RUN%==SVM_C01 $setglobal INVALID_RUN 0
$if %SELECT_RUN%==SVM_C1 $setglobal INVALID_RUN 0
$if %SELECT_RUN%==SVM_C10 $setglobal INVALID_RUN 0
$if %SELECT_RUN%==LDA $setglobal INVALID_RUN 0
$if %SELECT_RUN%==SGD_Log $setglobal INVALID_RUN 0
$if %SELECT_RUN%==SGD_Hinge $setglobal INVALID_RUN 0
$if %SELECT_RUN%==PA $setglobal INVALID_RUN 0
$if %SELECT_RUN%==REF050 $setglobal INVALID_RUN 0
$if %SELECT_RUN%==REF090 $setglobal INVALID_RUN 0
$if %SELECT_RUN%==REF095 $setglobal INVALID_RUN 0
$if %INVALID_RUN%==1 $abort SELECT_RUN must be one of the twelve names in the README.
$setglobal INVALID_SEASON 1
$if %SELECT_SEASON%==winter $setglobal INVALID_SEASON 0
$if %SELECT_SEASON%==spring $setglobal INVALID_SEASON 0
$if %SELECT_SEASON%==summer $setglobal INVALID_SEASON 0
$if %SELECT_SEASON%==autumn $setglobal INVALID_SEASON 0
$if %INVALID_SEASON%==1 $abort SELECT_SEASON must be winter, spring, summer or autumn.

* Fixed scientific identity. Do not edit to reuse results from another experiment.
$setglobal LPCAMPAIGN LP35_6259c70d0303
$if not exist "Input_Data_LaPalma_Weekly.gms" $abort Set GAMS_LaPalma as the GAMS IDE working directory.
$if not exist "inc/LP35_Calibrated.inc" $abort Frozen coefficients missing; extract the complete repository.
$if not exist "cplex.opt" $abort The supplied CPLEX option file is required.

* Windows directory preparation only; no solver settings or coefficients are changed.
$include control/LP35_CreateDirectories.inc

$ifthen.day %SCOPE%==DAY
$setglobal RUN %SELECT_RUN%
$setglobal SEASON %SELECT_SEASON%
$setglobal DAY 1
$setglobal PREV 0
$setglobal LOCAL_OUT Results_35Hz/%LPCAMPAIGN%/%RUN%/%SEASON%/d1
$ifthen.complete exist "%LOCAL_OUT%/COMPLETE.txt"
display 'Selected day is already complete. Inspect its workbook; no re-solve was requested.';
$else.complete
$if exist "%LOCAL_OUT%/FAILED_SOLVE.txt" $abort Prior failed solve retained. Inspect the daily evidence before an explicit retry.
$setglobal EXPORT_ONLY 0
$if exist "%LOCAL_OUT%/results.gdx" $setglobal EXPORT_ONLY 1
$include LaPalma_FCUC_35Hz.gms
$endif.complete
$else.day
$ifthen.week %SCOPE%==WEEK
$include control/LP35_SelectedWeek.inc
$else.week
$ifthen.all %SCOPE%==ALL
$include Run_LaPalma_35Hz.gms
$else.all
$abort SCOPE must be DAY, WEEK or ALL.
$endif.all
$endif.week
$endif.day
