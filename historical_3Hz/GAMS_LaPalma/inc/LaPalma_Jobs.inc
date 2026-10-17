* Four independent seasonal weeks; exact same-method/season state transfer.
$ifthen.BC_winter_1 not exist "Results_Seasonal/LP4S_74ee31255d0f/BC/winter/d1/COMPLETE.txt"
$if exist "Results_Seasonal/LP4S_74ee31255d0f/BC/winter/d1/FAILED_SOLVE.txt" $goto end_BC_winter_1
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/BC/winter/d1/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=BC --SEASON=winter --DAY=1 --PREV=0 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/BC/winter/d1/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/BC/winter/d1/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: BC_winter_1. Read its daily listing/log; preserve cache.
$label end_BC_winter_1
$endif.BC_winter_1
$ifthen.BC_winter_2 not exist "Results_Seasonal/LP4S_74ee31255d0f/BC/winter/d2/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/BC/winter/d1/COMPLETE.txt" $goto end_BC_winter_2
$if exist "Results_Seasonal/LP4S_74ee31255d0f/BC/winter/d2/FAILED_SOLVE.txt" $goto end_BC_winter_2
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/BC/winter/d2/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=BC --SEASON=winter --DAY=2 --PREV=1 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/BC/winter/d2/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/BC/winter/d2/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: BC_winter_2. Read its daily listing/log; preserve cache.
$label end_BC_winter_2
$endif.BC_winter_2
$ifthen.BC_winter_3 not exist "Results_Seasonal/LP4S_74ee31255d0f/BC/winter/d3/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/BC/winter/d2/COMPLETE.txt" $goto end_BC_winter_3
$if exist "Results_Seasonal/LP4S_74ee31255d0f/BC/winter/d3/FAILED_SOLVE.txt" $goto end_BC_winter_3
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/BC/winter/d3/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=BC --SEASON=winter --DAY=3 --PREV=2 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/BC/winter/d3/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/BC/winter/d3/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: BC_winter_3. Read its daily listing/log; preserve cache.
$label end_BC_winter_3
$endif.BC_winter_3
$ifthen.BC_winter_4 not exist "Results_Seasonal/LP4S_74ee31255d0f/BC/winter/d4/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/BC/winter/d3/COMPLETE.txt" $goto end_BC_winter_4
$if exist "Results_Seasonal/LP4S_74ee31255d0f/BC/winter/d4/FAILED_SOLVE.txt" $goto end_BC_winter_4
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/BC/winter/d4/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=BC --SEASON=winter --DAY=4 --PREV=3 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/BC/winter/d4/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/BC/winter/d4/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: BC_winter_4. Read its daily listing/log; preserve cache.
$label end_BC_winter_4
$endif.BC_winter_4
$ifthen.BC_winter_5 not exist "Results_Seasonal/LP4S_74ee31255d0f/BC/winter/d5/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/BC/winter/d4/COMPLETE.txt" $goto end_BC_winter_5
$if exist "Results_Seasonal/LP4S_74ee31255d0f/BC/winter/d5/FAILED_SOLVE.txt" $goto end_BC_winter_5
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/BC/winter/d5/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=BC --SEASON=winter --DAY=5 --PREV=4 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/BC/winter/d5/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/BC/winter/d5/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: BC_winter_5. Read its daily listing/log; preserve cache.
$label end_BC_winter_5
$endif.BC_winter_5
$ifthen.BC_winter_6 not exist "Results_Seasonal/LP4S_74ee31255d0f/BC/winter/d6/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/BC/winter/d5/COMPLETE.txt" $goto end_BC_winter_6
$if exist "Results_Seasonal/LP4S_74ee31255d0f/BC/winter/d6/FAILED_SOLVE.txt" $goto end_BC_winter_6
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/BC/winter/d6/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=BC --SEASON=winter --DAY=6 --PREV=5 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/BC/winter/d6/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/BC/winter/d6/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: BC_winter_6. Read its daily listing/log; preserve cache.
$label end_BC_winter_6
$endif.BC_winter_6
$ifthen.BC_winter_7 not exist "Results_Seasonal/LP4S_74ee31255d0f/BC/winter/d7/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/BC/winter/d6/COMPLETE.txt" $goto end_BC_winter_7
$if exist "Results_Seasonal/LP4S_74ee31255d0f/BC/winter/d7/FAILED_SOLVE.txt" $goto end_BC_winter_7
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/BC/winter/d7/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=BC --SEASON=winter --DAY=7 --PREV=6 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/BC/winter/d7/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/BC/winter/d7/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: BC_winter_7. Read its daily listing/log; preserve cache.
$label end_BC_winter_7
$endif.BC_winter_7
$ifthen.RESERVE_winter_1 not exist "Results_Seasonal/LP4S_74ee31255d0f/RESERVE/winter/d1/COMPLETE.txt"
$if exist "Results_Seasonal/LP4S_74ee31255d0f/RESERVE/winter/d1/FAILED_SOLVE.txt" $goto end_RESERVE_winter_1
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/RESERVE/winter/d1/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=RESERVE --SEASON=winter --DAY=1 --PREV=0 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/RESERVE/winter/d1/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/RESERVE/winter/d1/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: RESERVE_winter_1. Read its daily listing/log; preserve cache.
$label end_RESERVE_winter_1
$endif.RESERVE_winter_1
$ifthen.RESERVE_winter_2 not exist "Results_Seasonal/LP4S_74ee31255d0f/RESERVE/winter/d2/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/RESERVE/winter/d1/COMPLETE.txt" $goto end_RESERVE_winter_2
$if exist "Results_Seasonal/LP4S_74ee31255d0f/RESERVE/winter/d2/FAILED_SOLVE.txt" $goto end_RESERVE_winter_2
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/RESERVE/winter/d2/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=RESERVE --SEASON=winter --DAY=2 --PREV=1 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/RESERVE/winter/d2/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/RESERVE/winter/d2/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: RESERVE_winter_2. Read its daily listing/log; preserve cache.
$label end_RESERVE_winter_2
$endif.RESERVE_winter_2
$ifthen.RESERVE_winter_3 not exist "Results_Seasonal/LP4S_74ee31255d0f/RESERVE/winter/d3/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/RESERVE/winter/d2/COMPLETE.txt" $goto end_RESERVE_winter_3
$if exist "Results_Seasonal/LP4S_74ee31255d0f/RESERVE/winter/d3/FAILED_SOLVE.txt" $goto end_RESERVE_winter_3
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/RESERVE/winter/d3/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=RESERVE --SEASON=winter --DAY=3 --PREV=2 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/RESERVE/winter/d3/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/RESERVE/winter/d3/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: RESERVE_winter_3. Read its daily listing/log; preserve cache.
$label end_RESERVE_winter_3
$endif.RESERVE_winter_3
$ifthen.RESERVE_winter_4 not exist "Results_Seasonal/LP4S_74ee31255d0f/RESERVE/winter/d4/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/RESERVE/winter/d3/COMPLETE.txt" $goto end_RESERVE_winter_4
$if exist "Results_Seasonal/LP4S_74ee31255d0f/RESERVE/winter/d4/FAILED_SOLVE.txt" $goto end_RESERVE_winter_4
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/RESERVE/winter/d4/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=RESERVE --SEASON=winter --DAY=4 --PREV=3 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/RESERVE/winter/d4/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/RESERVE/winter/d4/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: RESERVE_winter_4. Read its daily listing/log; preserve cache.
$label end_RESERVE_winter_4
$endif.RESERVE_winter_4
$ifthen.RESERVE_winter_5 not exist "Results_Seasonal/LP4S_74ee31255d0f/RESERVE/winter/d5/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/RESERVE/winter/d4/COMPLETE.txt" $goto end_RESERVE_winter_5
$if exist "Results_Seasonal/LP4S_74ee31255d0f/RESERVE/winter/d5/FAILED_SOLVE.txt" $goto end_RESERVE_winter_5
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/RESERVE/winter/d5/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=RESERVE --SEASON=winter --DAY=5 --PREV=4 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/RESERVE/winter/d5/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/RESERVE/winter/d5/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: RESERVE_winter_5. Read its daily listing/log; preserve cache.
$label end_RESERVE_winter_5
$endif.RESERVE_winter_5
$ifthen.RESERVE_winter_6 not exist "Results_Seasonal/LP4S_74ee31255d0f/RESERVE/winter/d6/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/RESERVE/winter/d5/COMPLETE.txt" $goto end_RESERVE_winter_6
$if exist "Results_Seasonal/LP4S_74ee31255d0f/RESERVE/winter/d6/FAILED_SOLVE.txt" $goto end_RESERVE_winter_6
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/RESERVE/winter/d6/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=RESERVE --SEASON=winter --DAY=6 --PREV=5 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/RESERVE/winter/d6/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/RESERVE/winter/d6/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: RESERVE_winter_6. Read its daily listing/log; preserve cache.
$label end_RESERVE_winter_6
$endif.RESERVE_winter_6
$ifthen.RESERVE_winter_7 not exist "Results_Seasonal/LP4S_74ee31255d0f/RESERVE/winter/d7/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/RESERVE/winter/d6/COMPLETE.txt" $goto end_RESERVE_winter_7
$if exist "Results_Seasonal/LP4S_74ee31255d0f/RESERVE/winter/d7/FAILED_SOLVE.txt" $goto end_RESERVE_winter_7
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/RESERVE/winter/d7/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=RESERVE --SEASON=winter --DAY=7 --PREV=6 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/RESERVE/winter/d7/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/RESERVE/winter/d7/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: RESERVE_winter_7. Read its daily listing/log; preserve cache.
$label end_RESERVE_winter_7
$endif.RESERVE_winter_7
$ifthen.SP_winter_1 not exist "Results_Seasonal/LP4S_74ee31255d0f/SP/winter/d1/COMPLETE.txt"
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SP/winter/d1/FAILED_SOLVE.txt" $goto end_SP_winter_1
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SP/winter/d1/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SP --SEASON=winter --DAY=1 --PREV=0 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SP/winter/d1/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SP/winter/d1/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SP_winter_1. Read its daily listing/log; preserve cache.
$label end_SP_winter_1
$endif.SP_winter_1
$ifthen.SP_winter_2 not exist "Results_Seasonal/LP4S_74ee31255d0f/SP/winter/d2/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SP/winter/d1/COMPLETE.txt" $goto end_SP_winter_2
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SP/winter/d2/FAILED_SOLVE.txt" $goto end_SP_winter_2
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SP/winter/d2/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SP --SEASON=winter --DAY=2 --PREV=1 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SP/winter/d2/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SP/winter/d2/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SP_winter_2. Read its daily listing/log; preserve cache.
$label end_SP_winter_2
$endif.SP_winter_2
$ifthen.SP_winter_3 not exist "Results_Seasonal/LP4S_74ee31255d0f/SP/winter/d3/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SP/winter/d2/COMPLETE.txt" $goto end_SP_winter_3
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SP/winter/d3/FAILED_SOLVE.txt" $goto end_SP_winter_3
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SP/winter/d3/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SP --SEASON=winter --DAY=3 --PREV=2 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SP/winter/d3/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SP/winter/d3/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SP_winter_3. Read its daily listing/log; preserve cache.
$label end_SP_winter_3
$endif.SP_winter_3
$ifthen.SP_winter_4 not exist "Results_Seasonal/LP4S_74ee31255d0f/SP/winter/d4/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SP/winter/d3/COMPLETE.txt" $goto end_SP_winter_4
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SP/winter/d4/FAILED_SOLVE.txt" $goto end_SP_winter_4
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SP/winter/d4/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SP --SEASON=winter --DAY=4 --PREV=3 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SP/winter/d4/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SP/winter/d4/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SP_winter_4. Read its daily listing/log; preserve cache.
$label end_SP_winter_4
$endif.SP_winter_4
$ifthen.SP_winter_5 not exist "Results_Seasonal/LP4S_74ee31255d0f/SP/winter/d5/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SP/winter/d4/COMPLETE.txt" $goto end_SP_winter_5
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SP/winter/d5/FAILED_SOLVE.txt" $goto end_SP_winter_5
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SP/winter/d5/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SP --SEASON=winter --DAY=5 --PREV=4 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SP/winter/d5/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SP/winter/d5/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SP_winter_5. Read its daily listing/log; preserve cache.
$label end_SP_winter_5
$endif.SP_winter_5
$ifthen.SP_winter_6 not exist "Results_Seasonal/LP4S_74ee31255d0f/SP/winter/d6/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SP/winter/d5/COMPLETE.txt" $goto end_SP_winter_6
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SP/winter/d6/FAILED_SOLVE.txt" $goto end_SP_winter_6
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SP/winter/d6/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SP --SEASON=winter --DAY=6 --PREV=5 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SP/winter/d6/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SP/winter/d6/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SP_winter_6. Read its daily listing/log; preserve cache.
$label end_SP_winter_6
$endif.SP_winter_6
$ifthen.SP_winter_7 not exist "Results_Seasonal/LP4S_74ee31255d0f/SP/winter/d7/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SP/winter/d6/COMPLETE.txt" $goto end_SP_winter_7
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SP/winter/d7/FAILED_SOLVE.txt" $goto end_SP_winter_7
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SP/winter/d7/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SP --SEASON=winter --DAY=7 --PREV=6 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SP/winter/d7/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SP/winter/d7/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SP_winter_7. Read its daily listing/log; preserve cache.
$label end_SP_winter_7
$endif.SP_winter_7
$ifthen.LR_C1_winter_1 not exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1/winter/d1/COMPLETE.txt"
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1/winter/d1/FAILED_SOLVE.txt" $goto end_LR_C1_winter_1
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1/winter/d1/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=LR_C1 --SEASON=winter --DAY=1 --PREV=0 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/LR_C1/winter/d1/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/LR_C1/winter/d1/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: LR_C1_winter_1. Read its daily listing/log; preserve cache.
$label end_LR_C1_winter_1
$endif.LR_C1_winter_1
$ifthen.LR_C1_winter_2 not exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1/winter/d2/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1/winter/d1/COMPLETE.txt" $goto end_LR_C1_winter_2
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1/winter/d2/FAILED_SOLVE.txt" $goto end_LR_C1_winter_2
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1/winter/d2/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=LR_C1 --SEASON=winter --DAY=2 --PREV=1 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/LR_C1/winter/d2/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/LR_C1/winter/d2/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: LR_C1_winter_2. Read its daily listing/log; preserve cache.
$label end_LR_C1_winter_2
$endif.LR_C1_winter_2
$ifthen.LR_C1_winter_3 not exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1/winter/d3/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1/winter/d2/COMPLETE.txt" $goto end_LR_C1_winter_3
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1/winter/d3/FAILED_SOLVE.txt" $goto end_LR_C1_winter_3
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1/winter/d3/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=LR_C1 --SEASON=winter --DAY=3 --PREV=2 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/LR_C1/winter/d3/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/LR_C1/winter/d3/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: LR_C1_winter_3. Read its daily listing/log; preserve cache.
$label end_LR_C1_winter_3
$endif.LR_C1_winter_3
$ifthen.LR_C1_winter_4 not exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1/winter/d4/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1/winter/d3/COMPLETE.txt" $goto end_LR_C1_winter_4
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1/winter/d4/FAILED_SOLVE.txt" $goto end_LR_C1_winter_4
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1/winter/d4/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=LR_C1 --SEASON=winter --DAY=4 --PREV=3 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/LR_C1/winter/d4/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/LR_C1/winter/d4/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: LR_C1_winter_4. Read its daily listing/log; preserve cache.
$label end_LR_C1_winter_4
$endif.LR_C1_winter_4
$ifthen.LR_C1_winter_5 not exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1/winter/d5/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1/winter/d4/COMPLETE.txt" $goto end_LR_C1_winter_5
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1/winter/d5/FAILED_SOLVE.txt" $goto end_LR_C1_winter_5
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1/winter/d5/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=LR_C1 --SEASON=winter --DAY=5 --PREV=4 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/LR_C1/winter/d5/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/LR_C1/winter/d5/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: LR_C1_winter_5. Read its daily listing/log; preserve cache.
$label end_LR_C1_winter_5
$endif.LR_C1_winter_5
$ifthen.LR_C1_winter_6 not exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1/winter/d6/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1/winter/d5/COMPLETE.txt" $goto end_LR_C1_winter_6
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1/winter/d6/FAILED_SOLVE.txt" $goto end_LR_C1_winter_6
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1/winter/d6/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=LR_C1 --SEASON=winter --DAY=6 --PREV=5 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/LR_C1/winter/d6/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/LR_C1/winter/d6/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: LR_C1_winter_6. Read its daily listing/log; preserve cache.
$label end_LR_C1_winter_6
$endif.LR_C1_winter_6
$ifthen.LR_C1_winter_7 not exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1/winter/d7/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1/winter/d6/COMPLETE.txt" $goto end_LR_C1_winter_7
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1/winter/d7/FAILED_SOLVE.txt" $goto end_LR_C1_winter_7
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1/winter/d7/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=LR_C1 --SEASON=winter --DAY=7 --PREV=6 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/LR_C1/winter/d7/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/LR_C1/winter/d7/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: LR_C1_winter_7. Read its daily listing/log; preserve cache.
$label end_LR_C1_winter_7
$endif.LR_C1_winter_7
$ifthen.LR_C1e6_winter_1 not exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/winter/d1/COMPLETE.txt"
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/winter/d1/FAILED_SOLVE.txt" $goto end_LR_C1e6_winter_1
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/winter/d1/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=LR_C1e6 --SEASON=winter --DAY=1 --PREV=0 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/winter/d1/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/winter/d1/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: LR_C1e6_winter_1. Read its daily listing/log; preserve cache.
$label end_LR_C1e6_winter_1
$endif.LR_C1e6_winter_1
$ifthen.LR_C1e6_winter_2 not exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/winter/d2/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/winter/d1/COMPLETE.txt" $goto end_LR_C1e6_winter_2
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/winter/d2/FAILED_SOLVE.txt" $goto end_LR_C1e6_winter_2
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/winter/d2/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=LR_C1e6 --SEASON=winter --DAY=2 --PREV=1 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/winter/d2/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/winter/d2/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: LR_C1e6_winter_2. Read its daily listing/log; preserve cache.
$label end_LR_C1e6_winter_2
$endif.LR_C1e6_winter_2
$ifthen.LR_C1e6_winter_3 not exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/winter/d3/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/winter/d2/COMPLETE.txt" $goto end_LR_C1e6_winter_3
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/winter/d3/FAILED_SOLVE.txt" $goto end_LR_C1e6_winter_3
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/winter/d3/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=LR_C1e6 --SEASON=winter --DAY=3 --PREV=2 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/winter/d3/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/winter/d3/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: LR_C1e6_winter_3. Read its daily listing/log; preserve cache.
$label end_LR_C1e6_winter_3
$endif.LR_C1e6_winter_3
$ifthen.LR_C1e6_winter_4 not exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/winter/d4/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/winter/d3/COMPLETE.txt" $goto end_LR_C1e6_winter_4
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/winter/d4/FAILED_SOLVE.txt" $goto end_LR_C1e6_winter_4
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/winter/d4/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=LR_C1e6 --SEASON=winter --DAY=4 --PREV=3 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/winter/d4/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/winter/d4/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: LR_C1e6_winter_4. Read its daily listing/log; preserve cache.
$label end_LR_C1e6_winter_4
$endif.LR_C1e6_winter_4
$ifthen.LR_C1e6_winter_5 not exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/winter/d5/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/winter/d4/COMPLETE.txt" $goto end_LR_C1e6_winter_5
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/winter/d5/FAILED_SOLVE.txt" $goto end_LR_C1e6_winter_5
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/winter/d5/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=LR_C1e6 --SEASON=winter --DAY=5 --PREV=4 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/winter/d5/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/winter/d5/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: LR_C1e6_winter_5. Read its daily listing/log; preserve cache.
$label end_LR_C1e6_winter_5
$endif.LR_C1e6_winter_5
$ifthen.LR_C1e6_winter_6 not exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/winter/d6/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/winter/d5/COMPLETE.txt" $goto end_LR_C1e6_winter_6
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/winter/d6/FAILED_SOLVE.txt" $goto end_LR_C1e6_winter_6
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/winter/d6/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=LR_C1e6 --SEASON=winter --DAY=6 --PREV=5 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/winter/d6/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/winter/d6/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: LR_C1e6_winter_6. Read its daily listing/log; preserve cache.
$label end_LR_C1e6_winter_6
$endif.LR_C1e6_winter_6
$ifthen.LR_C1e6_winter_7 not exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/winter/d7/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/winter/d6/COMPLETE.txt" $goto end_LR_C1e6_winter_7
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/winter/d7/FAILED_SOLVE.txt" $goto end_LR_C1e6_winter_7
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/winter/d7/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=LR_C1e6 --SEASON=winter --DAY=7 --PREV=6 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/winter/d7/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/winter/d7/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: LR_C1e6_winter_7. Read its daily listing/log; preserve cache.
$label end_LR_C1e6_winter_7
$endif.LR_C1e6_winter_7
$ifthen.SVM_C01_winter_1 not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/winter/d1/COMPLETE.txt"
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/winter/d1/FAILED_SOLVE.txt" $goto end_SVM_C01_winter_1
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/winter/d1/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SVM_C01 --SEASON=winter --DAY=1 --PREV=0 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/winter/d1/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/winter/d1/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SVM_C01_winter_1. Read its daily listing/log; preserve cache.
$label end_SVM_C01_winter_1
$endif.SVM_C01_winter_1
$ifthen.SVM_C01_winter_2 not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/winter/d2/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/winter/d1/COMPLETE.txt" $goto end_SVM_C01_winter_2
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/winter/d2/FAILED_SOLVE.txt" $goto end_SVM_C01_winter_2
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/winter/d2/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SVM_C01 --SEASON=winter --DAY=2 --PREV=1 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/winter/d2/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/winter/d2/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SVM_C01_winter_2. Read its daily listing/log; preserve cache.
$label end_SVM_C01_winter_2
$endif.SVM_C01_winter_2
$ifthen.SVM_C01_winter_3 not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/winter/d3/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/winter/d2/COMPLETE.txt" $goto end_SVM_C01_winter_3
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/winter/d3/FAILED_SOLVE.txt" $goto end_SVM_C01_winter_3
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/winter/d3/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SVM_C01 --SEASON=winter --DAY=3 --PREV=2 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/winter/d3/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/winter/d3/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SVM_C01_winter_3. Read its daily listing/log; preserve cache.
$label end_SVM_C01_winter_3
$endif.SVM_C01_winter_3
$ifthen.SVM_C01_winter_4 not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/winter/d4/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/winter/d3/COMPLETE.txt" $goto end_SVM_C01_winter_4
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/winter/d4/FAILED_SOLVE.txt" $goto end_SVM_C01_winter_4
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/winter/d4/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SVM_C01 --SEASON=winter --DAY=4 --PREV=3 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/winter/d4/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/winter/d4/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SVM_C01_winter_4. Read its daily listing/log; preserve cache.
$label end_SVM_C01_winter_4
$endif.SVM_C01_winter_4
$ifthen.SVM_C01_winter_5 not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/winter/d5/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/winter/d4/COMPLETE.txt" $goto end_SVM_C01_winter_5
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/winter/d5/FAILED_SOLVE.txt" $goto end_SVM_C01_winter_5
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/winter/d5/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SVM_C01 --SEASON=winter --DAY=5 --PREV=4 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/winter/d5/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/winter/d5/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SVM_C01_winter_5. Read its daily listing/log; preserve cache.
$label end_SVM_C01_winter_5
$endif.SVM_C01_winter_5
$ifthen.SVM_C01_winter_6 not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/winter/d6/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/winter/d5/COMPLETE.txt" $goto end_SVM_C01_winter_6
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/winter/d6/FAILED_SOLVE.txt" $goto end_SVM_C01_winter_6
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/winter/d6/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SVM_C01 --SEASON=winter --DAY=6 --PREV=5 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/winter/d6/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/winter/d6/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SVM_C01_winter_6. Read its daily listing/log; preserve cache.
$label end_SVM_C01_winter_6
$endif.SVM_C01_winter_6
$ifthen.SVM_C01_winter_7 not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/winter/d7/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/winter/d6/COMPLETE.txt" $goto end_SVM_C01_winter_7
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/winter/d7/FAILED_SOLVE.txt" $goto end_SVM_C01_winter_7
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/winter/d7/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SVM_C01 --SEASON=winter --DAY=7 --PREV=6 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/winter/d7/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/winter/d7/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SVM_C01_winter_7. Read its daily listing/log; preserve cache.
$label end_SVM_C01_winter_7
$endif.SVM_C01_winter_7
$ifthen.SVM_C1_winter_1 not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/winter/d1/COMPLETE.txt"
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/winter/d1/FAILED_SOLVE.txt" $goto end_SVM_C1_winter_1
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/winter/d1/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SVM_C1 --SEASON=winter --DAY=1 --PREV=0 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/winter/d1/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/winter/d1/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SVM_C1_winter_1. Read its daily listing/log; preserve cache.
$label end_SVM_C1_winter_1
$endif.SVM_C1_winter_1
$ifthen.SVM_C1_winter_2 not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/winter/d2/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/winter/d1/COMPLETE.txt" $goto end_SVM_C1_winter_2
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/winter/d2/FAILED_SOLVE.txt" $goto end_SVM_C1_winter_2
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/winter/d2/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SVM_C1 --SEASON=winter --DAY=2 --PREV=1 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/winter/d2/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/winter/d2/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SVM_C1_winter_2. Read its daily listing/log; preserve cache.
$label end_SVM_C1_winter_2
$endif.SVM_C1_winter_2
$ifthen.SVM_C1_winter_3 not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/winter/d3/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/winter/d2/COMPLETE.txt" $goto end_SVM_C1_winter_3
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/winter/d3/FAILED_SOLVE.txt" $goto end_SVM_C1_winter_3
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/winter/d3/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SVM_C1 --SEASON=winter --DAY=3 --PREV=2 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/winter/d3/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/winter/d3/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SVM_C1_winter_3. Read its daily listing/log; preserve cache.
$label end_SVM_C1_winter_3
$endif.SVM_C1_winter_3
$ifthen.SVM_C1_winter_4 not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/winter/d4/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/winter/d3/COMPLETE.txt" $goto end_SVM_C1_winter_4
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/winter/d4/FAILED_SOLVE.txt" $goto end_SVM_C1_winter_4
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/winter/d4/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SVM_C1 --SEASON=winter --DAY=4 --PREV=3 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/winter/d4/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/winter/d4/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SVM_C1_winter_4. Read its daily listing/log; preserve cache.
$label end_SVM_C1_winter_4
$endif.SVM_C1_winter_4
$ifthen.SVM_C1_winter_5 not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/winter/d5/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/winter/d4/COMPLETE.txt" $goto end_SVM_C1_winter_5
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/winter/d5/FAILED_SOLVE.txt" $goto end_SVM_C1_winter_5
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/winter/d5/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SVM_C1 --SEASON=winter --DAY=5 --PREV=4 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/winter/d5/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/winter/d5/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SVM_C1_winter_5. Read its daily listing/log; preserve cache.
$label end_SVM_C1_winter_5
$endif.SVM_C1_winter_5
$ifthen.SVM_C1_winter_6 not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/winter/d6/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/winter/d5/COMPLETE.txt" $goto end_SVM_C1_winter_6
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/winter/d6/FAILED_SOLVE.txt" $goto end_SVM_C1_winter_6
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/winter/d6/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SVM_C1 --SEASON=winter --DAY=6 --PREV=5 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/winter/d6/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/winter/d6/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SVM_C1_winter_6. Read its daily listing/log; preserve cache.
$label end_SVM_C1_winter_6
$endif.SVM_C1_winter_6
$ifthen.SVM_C1_winter_7 not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/winter/d7/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/winter/d6/COMPLETE.txt" $goto end_SVM_C1_winter_7
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/winter/d7/FAILED_SOLVE.txt" $goto end_SVM_C1_winter_7
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/winter/d7/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SVM_C1 --SEASON=winter --DAY=7 --PREV=6 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/winter/d7/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/winter/d7/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SVM_C1_winter_7. Read its daily listing/log; preserve cache.
$label end_SVM_C1_winter_7
$endif.SVM_C1_winter_7
$ifthen.SVM_C10_winter_1 not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/winter/d1/COMPLETE.txt"
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/winter/d1/FAILED_SOLVE.txt" $goto end_SVM_C10_winter_1
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/winter/d1/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SVM_C10 --SEASON=winter --DAY=1 --PREV=0 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/winter/d1/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/winter/d1/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SVM_C10_winter_1. Read its daily listing/log; preserve cache.
$label end_SVM_C10_winter_1
$endif.SVM_C10_winter_1
$ifthen.SVM_C10_winter_2 not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/winter/d2/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/winter/d1/COMPLETE.txt" $goto end_SVM_C10_winter_2
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/winter/d2/FAILED_SOLVE.txt" $goto end_SVM_C10_winter_2
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/winter/d2/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SVM_C10 --SEASON=winter --DAY=2 --PREV=1 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/winter/d2/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/winter/d2/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SVM_C10_winter_2. Read its daily listing/log; preserve cache.
$label end_SVM_C10_winter_2
$endif.SVM_C10_winter_2
$ifthen.SVM_C10_winter_3 not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/winter/d3/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/winter/d2/COMPLETE.txt" $goto end_SVM_C10_winter_3
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/winter/d3/FAILED_SOLVE.txt" $goto end_SVM_C10_winter_3
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/winter/d3/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SVM_C10 --SEASON=winter --DAY=3 --PREV=2 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/winter/d3/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/winter/d3/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SVM_C10_winter_3. Read its daily listing/log; preserve cache.
$label end_SVM_C10_winter_3
$endif.SVM_C10_winter_3
$ifthen.SVM_C10_winter_4 not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/winter/d4/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/winter/d3/COMPLETE.txt" $goto end_SVM_C10_winter_4
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/winter/d4/FAILED_SOLVE.txt" $goto end_SVM_C10_winter_4
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/winter/d4/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SVM_C10 --SEASON=winter --DAY=4 --PREV=3 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/winter/d4/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/winter/d4/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SVM_C10_winter_4. Read its daily listing/log; preserve cache.
$label end_SVM_C10_winter_4
$endif.SVM_C10_winter_4
$ifthen.SVM_C10_winter_5 not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/winter/d5/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/winter/d4/COMPLETE.txt" $goto end_SVM_C10_winter_5
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/winter/d5/FAILED_SOLVE.txt" $goto end_SVM_C10_winter_5
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/winter/d5/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SVM_C10 --SEASON=winter --DAY=5 --PREV=4 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/winter/d5/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/winter/d5/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SVM_C10_winter_5. Read its daily listing/log; preserve cache.
$label end_SVM_C10_winter_5
$endif.SVM_C10_winter_5
$ifthen.SVM_C10_winter_6 not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/winter/d6/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/winter/d5/COMPLETE.txt" $goto end_SVM_C10_winter_6
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/winter/d6/FAILED_SOLVE.txt" $goto end_SVM_C10_winter_6
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/winter/d6/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SVM_C10 --SEASON=winter --DAY=6 --PREV=5 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/winter/d6/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/winter/d6/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SVM_C10_winter_6. Read its daily listing/log; preserve cache.
$label end_SVM_C10_winter_6
$endif.SVM_C10_winter_6
$ifthen.SVM_C10_winter_7 not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/winter/d7/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/winter/d6/COMPLETE.txt" $goto end_SVM_C10_winter_7
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/winter/d7/FAILED_SOLVE.txt" $goto end_SVM_C10_winter_7
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/winter/d7/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SVM_C10 --SEASON=winter --DAY=7 --PREV=6 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/winter/d7/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/winter/d7/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SVM_C10_winter_7. Read its daily listing/log; preserve cache.
$label end_SVM_C10_winter_7
$endif.SVM_C10_winter_7
$ifthen.LDA_winter_1 not exist "Results_Seasonal/LP4S_74ee31255d0f/LDA/winter/d1/COMPLETE.txt"
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LDA/winter/d1/FAILED_SOLVE.txt" $goto end_LDA_winter_1
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LDA/winter/d1/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=LDA --SEASON=winter --DAY=1 --PREV=0 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/LDA/winter/d1/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/LDA/winter/d1/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: LDA_winter_1. Read its daily listing/log; preserve cache.
$label end_LDA_winter_1
$endif.LDA_winter_1
$ifthen.LDA_winter_2 not exist "Results_Seasonal/LP4S_74ee31255d0f/LDA/winter/d2/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/LDA/winter/d1/COMPLETE.txt" $goto end_LDA_winter_2
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LDA/winter/d2/FAILED_SOLVE.txt" $goto end_LDA_winter_2
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LDA/winter/d2/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=LDA --SEASON=winter --DAY=2 --PREV=1 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/LDA/winter/d2/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/LDA/winter/d2/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: LDA_winter_2. Read its daily listing/log; preserve cache.
$label end_LDA_winter_2
$endif.LDA_winter_2
$ifthen.LDA_winter_3 not exist "Results_Seasonal/LP4S_74ee31255d0f/LDA/winter/d3/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/LDA/winter/d2/COMPLETE.txt" $goto end_LDA_winter_3
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LDA/winter/d3/FAILED_SOLVE.txt" $goto end_LDA_winter_3
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LDA/winter/d3/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=LDA --SEASON=winter --DAY=3 --PREV=2 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/LDA/winter/d3/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/LDA/winter/d3/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: LDA_winter_3. Read its daily listing/log; preserve cache.
$label end_LDA_winter_3
$endif.LDA_winter_3
$ifthen.LDA_winter_4 not exist "Results_Seasonal/LP4S_74ee31255d0f/LDA/winter/d4/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/LDA/winter/d3/COMPLETE.txt" $goto end_LDA_winter_4
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LDA/winter/d4/FAILED_SOLVE.txt" $goto end_LDA_winter_4
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LDA/winter/d4/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=LDA --SEASON=winter --DAY=4 --PREV=3 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/LDA/winter/d4/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/LDA/winter/d4/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: LDA_winter_4. Read its daily listing/log; preserve cache.
$label end_LDA_winter_4
$endif.LDA_winter_4
$ifthen.LDA_winter_5 not exist "Results_Seasonal/LP4S_74ee31255d0f/LDA/winter/d5/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/LDA/winter/d4/COMPLETE.txt" $goto end_LDA_winter_5
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LDA/winter/d5/FAILED_SOLVE.txt" $goto end_LDA_winter_5
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LDA/winter/d5/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=LDA --SEASON=winter --DAY=5 --PREV=4 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/LDA/winter/d5/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/LDA/winter/d5/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: LDA_winter_5. Read its daily listing/log; preserve cache.
$label end_LDA_winter_5
$endif.LDA_winter_5
$ifthen.LDA_winter_6 not exist "Results_Seasonal/LP4S_74ee31255d0f/LDA/winter/d6/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/LDA/winter/d5/COMPLETE.txt" $goto end_LDA_winter_6
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LDA/winter/d6/FAILED_SOLVE.txt" $goto end_LDA_winter_6
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LDA/winter/d6/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=LDA --SEASON=winter --DAY=6 --PREV=5 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/LDA/winter/d6/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/LDA/winter/d6/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: LDA_winter_6. Read its daily listing/log; preserve cache.
$label end_LDA_winter_6
$endif.LDA_winter_6
$ifthen.LDA_winter_7 not exist "Results_Seasonal/LP4S_74ee31255d0f/LDA/winter/d7/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/LDA/winter/d6/COMPLETE.txt" $goto end_LDA_winter_7
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LDA/winter/d7/FAILED_SOLVE.txt" $goto end_LDA_winter_7
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LDA/winter/d7/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=LDA --SEASON=winter --DAY=7 --PREV=6 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/LDA/winter/d7/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/LDA/winter/d7/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: LDA_winter_7. Read its daily listing/log; preserve cache.
$label end_LDA_winter_7
$endif.LDA_winter_7
$ifthen.SGD_Log_winter_1 not exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/winter/d1/COMPLETE.txt"
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/winter/d1/FAILED_SOLVE.txt" $goto end_SGD_Log_winter_1
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/winter/d1/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SGD_Log --SEASON=winter --DAY=1 --PREV=0 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/winter/d1/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/winter/d1/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SGD_Log_winter_1. Read its daily listing/log; preserve cache.
$label end_SGD_Log_winter_1
$endif.SGD_Log_winter_1
$ifthen.SGD_Log_winter_2 not exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/winter/d2/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/winter/d1/COMPLETE.txt" $goto end_SGD_Log_winter_2
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/winter/d2/FAILED_SOLVE.txt" $goto end_SGD_Log_winter_2
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/winter/d2/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SGD_Log --SEASON=winter --DAY=2 --PREV=1 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/winter/d2/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/winter/d2/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SGD_Log_winter_2. Read its daily listing/log; preserve cache.
$label end_SGD_Log_winter_2
$endif.SGD_Log_winter_2
$ifthen.SGD_Log_winter_3 not exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/winter/d3/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/winter/d2/COMPLETE.txt" $goto end_SGD_Log_winter_3
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/winter/d3/FAILED_SOLVE.txt" $goto end_SGD_Log_winter_3
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/winter/d3/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SGD_Log --SEASON=winter --DAY=3 --PREV=2 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/winter/d3/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/winter/d3/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SGD_Log_winter_3. Read its daily listing/log; preserve cache.
$label end_SGD_Log_winter_3
$endif.SGD_Log_winter_3
$ifthen.SGD_Log_winter_4 not exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/winter/d4/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/winter/d3/COMPLETE.txt" $goto end_SGD_Log_winter_4
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/winter/d4/FAILED_SOLVE.txt" $goto end_SGD_Log_winter_4
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/winter/d4/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SGD_Log --SEASON=winter --DAY=4 --PREV=3 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/winter/d4/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/winter/d4/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SGD_Log_winter_4. Read its daily listing/log; preserve cache.
$label end_SGD_Log_winter_4
$endif.SGD_Log_winter_4
$ifthen.SGD_Log_winter_5 not exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/winter/d5/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/winter/d4/COMPLETE.txt" $goto end_SGD_Log_winter_5
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/winter/d5/FAILED_SOLVE.txt" $goto end_SGD_Log_winter_5
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/winter/d5/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SGD_Log --SEASON=winter --DAY=5 --PREV=4 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/winter/d5/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/winter/d5/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SGD_Log_winter_5. Read its daily listing/log; preserve cache.
$label end_SGD_Log_winter_5
$endif.SGD_Log_winter_5
$ifthen.SGD_Log_winter_6 not exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/winter/d6/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/winter/d5/COMPLETE.txt" $goto end_SGD_Log_winter_6
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/winter/d6/FAILED_SOLVE.txt" $goto end_SGD_Log_winter_6
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/winter/d6/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SGD_Log --SEASON=winter --DAY=6 --PREV=5 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/winter/d6/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/winter/d6/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SGD_Log_winter_6. Read its daily listing/log; preserve cache.
$label end_SGD_Log_winter_6
$endif.SGD_Log_winter_6
$ifthen.SGD_Log_winter_7 not exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/winter/d7/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/winter/d6/COMPLETE.txt" $goto end_SGD_Log_winter_7
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/winter/d7/FAILED_SOLVE.txt" $goto end_SGD_Log_winter_7
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/winter/d7/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SGD_Log --SEASON=winter --DAY=7 --PREV=6 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/winter/d7/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/winter/d7/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SGD_Log_winter_7. Read its daily listing/log; preserve cache.
$label end_SGD_Log_winter_7
$endif.SGD_Log_winter_7
$ifthen.SGD_Hinge_winter_1 not exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/winter/d1/COMPLETE.txt"
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/winter/d1/FAILED_SOLVE.txt" $goto end_SGD_Hinge_winter_1
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/winter/d1/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SGD_Hinge --SEASON=winter --DAY=1 --PREV=0 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/winter/d1/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/winter/d1/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SGD_Hinge_winter_1. Read its daily listing/log; preserve cache.
$label end_SGD_Hinge_winter_1
$endif.SGD_Hinge_winter_1
$ifthen.SGD_Hinge_winter_2 not exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/winter/d2/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/winter/d1/COMPLETE.txt" $goto end_SGD_Hinge_winter_2
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/winter/d2/FAILED_SOLVE.txt" $goto end_SGD_Hinge_winter_2
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/winter/d2/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SGD_Hinge --SEASON=winter --DAY=2 --PREV=1 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/winter/d2/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/winter/d2/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SGD_Hinge_winter_2. Read its daily listing/log; preserve cache.
$label end_SGD_Hinge_winter_2
$endif.SGD_Hinge_winter_2
$ifthen.SGD_Hinge_winter_3 not exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/winter/d3/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/winter/d2/COMPLETE.txt" $goto end_SGD_Hinge_winter_3
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/winter/d3/FAILED_SOLVE.txt" $goto end_SGD_Hinge_winter_3
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/winter/d3/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SGD_Hinge --SEASON=winter --DAY=3 --PREV=2 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/winter/d3/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/winter/d3/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SGD_Hinge_winter_3. Read its daily listing/log; preserve cache.
$label end_SGD_Hinge_winter_3
$endif.SGD_Hinge_winter_3
$ifthen.SGD_Hinge_winter_4 not exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/winter/d4/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/winter/d3/COMPLETE.txt" $goto end_SGD_Hinge_winter_4
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/winter/d4/FAILED_SOLVE.txt" $goto end_SGD_Hinge_winter_4
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/winter/d4/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SGD_Hinge --SEASON=winter --DAY=4 --PREV=3 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/winter/d4/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/winter/d4/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SGD_Hinge_winter_4. Read its daily listing/log; preserve cache.
$label end_SGD_Hinge_winter_4
$endif.SGD_Hinge_winter_4
$ifthen.SGD_Hinge_winter_5 not exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/winter/d5/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/winter/d4/COMPLETE.txt" $goto end_SGD_Hinge_winter_5
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/winter/d5/FAILED_SOLVE.txt" $goto end_SGD_Hinge_winter_5
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/winter/d5/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SGD_Hinge --SEASON=winter --DAY=5 --PREV=4 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/winter/d5/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/winter/d5/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SGD_Hinge_winter_5. Read its daily listing/log; preserve cache.
$label end_SGD_Hinge_winter_5
$endif.SGD_Hinge_winter_5
$ifthen.SGD_Hinge_winter_6 not exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/winter/d6/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/winter/d5/COMPLETE.txt" $goto end_SGD_Hinge_winter_6
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/winter/d6/FAILED_SOLVE.txt" $goto end_SGD_Hinge_winter_6
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/winter/d6/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SGD_Hinge --SEASON=winter --DAY=6 --PREV=5 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/winter/d6/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/winter/d6/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SGD_Hinge_winter_6. Read its daily listing/log; preserve cache.
$label end_SGD_Hinge_winter_6
$endif.SGD_Hinge_winter_6
$ifthen.SGD_Hinge_winter_7 not exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/winter/d7/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/winter/d6/COMPLETE.txt" $goto end_SGD_Hinge_winter_7
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/winter/d7/FAILED_SOLVE.txt" $goto end_SGD_Hinge_winter_7
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/winter/d7/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SGD_Hinge --SEASON=winter --DAY=7 --PREV=6 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/winter/d7/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/winter/d7/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SGD_Hinge_winter_7. Read its daily listing/log; preserve cache.
$label end_SGD_Hinge_winter_7
$endif.SGD_Hinge_winter_7
$ifthen.PA_winter_1 not exist "Results_Seasonal/LP4S_74ee31255d0f/PA/winter/d1/COMPLETE.txt"
$if exist "Results_Seasonal/LP4S_74ee31255d0f/PA/winter/d1/FAILED_SOLVE.txt" $goto end_PA_winter_1
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/PA/winter/d1/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=PA --SEASON=winter --DAY=1 --PREV=0 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/PA/winter/d1/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/PA/winter/d1/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: PA_winter_1. Read its daily listing/log; preserve cache.
$label end_PA_winter_1
$endif.PA_winter_1
$ifthen.PA_winter_2 not exist "Results_Seasonal/LP4S_74ee31255d0f/PA/winter/d2/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/PA/winter/d1/COMPLETE.txt" $goto end_PA_winter_2
$if exist "Results_Seasonal/LP4S_74ee31255d0f/PA/winter/d2/FAILED_SOLVE.txt" $goto end_PA_winter_2
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/PA/winter/d2/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=PA --SEASON=winter --DAY=2 --PREV=1 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/PA/winter/d2/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/PA/winter/d2/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: PA_winter_2. Read its daily listing/log; preserve cache.
$label end_PA_winter_2
$endif.PA_winter_2
$ifthen.PA_winter_3 not exist "Results_Seasonal/LP4S_74ee31255d0f/PA/winter/d3/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/PA/winter/d2/COMPLETE.txt" $goto end_PA_winter_3
$if exist "Results_Seasonal/LP4S_74ee31255d0f/PA/winter/d3/FAILED_SOLVE.txt" $goto end_PA_winter_3
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/PA/winter/d3/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=PA --SEASON=winter --DAY=3 --PREV=2 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/PA/winter/d3/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/PA/winter/d3/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: PA_winter_3. Read its daily listing/log; preserve cache.
$label end_PA_winter_3
$endif.PA_winter_3
$ifthen.PA_winter_4 not exist "Results_Seasonal/LP4S_74ee31255d0f/PA/winter/d4/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/PA/winter/d3/COMPLETE.txt" $goto end_PA_winter_4
$if exist "Results_Seasonal/LP4S_74ee31255d0f/PA/winter/d4/FAILED_SOLVE.txt" $goto end_PA_winter_4
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/PA/winter/d4/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=PA --SEASON=winter --DAY=4 --PREV=3 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/PA/winter/d4/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/PA/winter/d4/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: PA_winter_4. Read its daily listing/log; preserve cache.
$label end_PA_winter_4
$endif.PA_winter_4
$ifthen.PA_winter_5 not exist "Results_Seasonal/LP4S_74ee31255d0f/PA/winter/d5/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/PA/winter/d4/COMPLETE.txt" $goto end_PA_winter_5
$if exist "Results_Seasonal/LP4S_74ee31255d0f/PA/winter/d5/FAILED_SOLVE.txt" $goto end_PA_winter_5
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/PA/winter/d5/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=PA --SEASON=winter --DAY=5 --PREV=4 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/PA/winter/d5/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/PA/winter/d5/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: PA_winter_5. Read its daily listing/log; preserve cache.
$label end_PA_winter_5
$endif.PA_winter_5
$ifthen.PA_winter_6 not exist "Results_Seasonal/LP4S_74ee31255d0f/PA/winter/d6/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/PA/winter/d5/COMPLETE.txt" $goto end_PA_winter_6
$if exist "Results_Seasonal/LP4S_74ee31255d0f/PA/winter/d6/FAILED_SOLVE.txt" $goto end_PA_winter_6
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/PA/winter/d6/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=PA --SEASON=winter --DAY=6 --PREV=5 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/PA/winter/d6/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/PA/winter/d6/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: PA_winter_6. Read its daily listing/log; preserve cache.
$label end_PA_winter_6
$endif.PA_winter_6
$ifthen.PA_winter_7 not exist "Results_Seasonal/LP4S_74ee31255d0f/PA/winter/d7/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/PA/winter/d6/COMPLETE.txt" $goto end_PA_winter_7
$if exist "Results_Seasonal/LP4S_74ee31255d0f/PA/winter/d7/FAILED_SOLVE.txt" $goto end_PA_winter_7
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/PA/winter/d7/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=PA --SEASON=winter --DAY=7 --PREV=6 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/PA/winter/d7/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/PA/winter/d7/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: PA_winter_7. Read its daily listing/log; preserve cache.
$label end_PA_winter_7
$endif.PA_winter_7
$ifthen.REF050_winter_1 not exist "Results_Seasonal/LP4S_74ee31255d0f/REF050/winter/d1/COMPLETE.txt"
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF050/winter/d1/FAILED_SOLVE.txt" $goto end_REF050_winter_1
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF050/winter/d1/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=REF050 --SEASON=winter --DAY=1 --PREV=0 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/REF050/winter/d1/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/REF050/winter/d1/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: REF050_winter_1. Read its daily listing/log; preserve cache.
$label end_REF050_winter_1
$endif.REF050_winter_1
$ifthen.REF050_winter_2 not exist "Results_Seasonal/LP4S_74ee31255d0f/REF050/winter/d2/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/REF050/winter/d1/COMPLETE.txt" $goto end_REF050_winter_2
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF050/winter/d2/FAILED_SOLVE.txt" $goto end_REF050_winter_2
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF050/winter/d2/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=REF050 --SEASON=winter --DAY=2 --PREV=1 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/REF050/winter/d2/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/REF050/winter/d2/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: REF050_winter_2. Read its daily listing/log; preserve cache.
$label end_REF050_winter_2
$endif.REF050_winter_2
$ifthen.REF050_winter_3 not exist "Results_Seasonal/LP4S_74ee31255d0f/REF050/winter/d3/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/REF050/winter/d2/COMPLETE.txt" $goto end_REF050_winter_3
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF050/winter/d3/FAILED_SOLVE.txt" $goto end_REF050_winter_3
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF050/winter/d3/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=REF050 --SEASON=winter --DAY=3 --PREV=2 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/REF050/winter/d3/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/REF050/winter/d3/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: REF050_winter_3. Read its daily listing/log; preserve cache.
$label end_REF050_winter_3
$endif.REF050_winter_3
$ifthen.REF050_winter_4 not exist "Results_Seasonal/LP4S_74ee31255d0f/REF050/winter/d4/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/REF050/winter/d3/COMPLETE.txt" $goto end_REF050_winter_4
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF050/winter/d4/FAILED_SOLVE.txt" $goto end_REF050_winter_4
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF050/winter/d4/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=REF050 --SEASON=winter --DAY=4 --PREV=3 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/REF050/winter/d4/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/REF050/winter/d4/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: REF050_winter_4. Read its daily listing/log; preserve cache.
$label end_REF050_winter_4
$endif.REF050_winter_4
$ifthen.REF050_winter_5 not exist "Results_Seasonal/LP4S_74ee31255d0f/REF050/winter/d5/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/REF050/winter/d4/COMPLETE.txt" $goto end_REF050_winter_5
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF050/winter/d5/FAILED_SOLVE.txt" $goto end_REF050_winter_5
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF050/winter/d5/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=REF050 --SEASON=winter --DAY=5 --PREV=4 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/REF050/winter/d5/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/REF050/winter/d5/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: REF050_winter_5. Read its daily listing/log; preserve cache.
$label end_REF050_winter_5
$endif.REF050_winter_5
$ifthen.REF050_winter_6 not exist "Results_Seasonal/LP4S_74ee31255d0f/REF050/winter/d6/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/REF050/winter/d5/COMPLETE.txt" $goto end_REF050_winter_6
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF050/winter/d6/FAILED_SOLVE.txt" $goto end_REF050_winter_6
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF050/winter/d6/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=REF050 --SEASON=winter --DAY=6 --PREV=5 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/REF050/winter/d6/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/REF050/winter/d6/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: REF050_winter_6. Read its daily listing/log; preserve cache.
$label end_REF050_winter_6
$endif.REF050_winter_6
$ifthen.REF050_winter_7 not exist "Results_Seasonal/LP4S_74ee31255d0f/REF050/winter/d7/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/REF050/winter/d6/COMPLETE.txt" $goto end_REF050_winter_7
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF050/winter/d7/FAILED_SOLVE.txt" $goto end_REF050_winter_7
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF050/winter/d7/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=REF050 --SEASON=winter --DAY=7 --PREV=6 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/REF050/winter/d7/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/REF050/winter/d7/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: REF050_winter_7. Read its daily listing/log; preserve cache.
$label end_REF050_winter_7
$endif.REF050_winter_7
$ifthen.REF090_winter_1 not exist "Results_Seasonal/LP4S_74ee31255d0f/REF090/winter/d1/COMPLETE.txt"
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF090/winter/d1/FAILED_SOLVE.txt" $goto end_REF090_winter_1
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF090/winter/d1/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=REF090 --SEASON=winter --DAY=1 --PREV=0 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/REF090/winter/d1/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/REF090/winter/d1/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: REF090_winter_1. Read its daily listing/log; preserve cache.
$label end_REF090_winter_1
$endif.REF090_winter_1
$ifthen.REF090_winter_2 not exist "Results_Seasonal/LP4S_74ee31255d0f/REF090/winter/d2/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/REF090/winter/d1/COMPLETE.txt" $goto end_REF090_winter_2
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF090/winter/d2/FAILED_SOLVE.txt" $goto end_REF090_winter_2
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF090/winter/d2/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=REF090 --SEASON=winter --DAY=2 --PREV=1 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/REF090/winter/d2/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/REF090/winter/d2/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: REF090_winter_2. Read its daily listing/log; preserve cache.
$label end_REF090_winter_2
$endif.REF090_winter_2
$ifthen.REF090_winter_3 not exist "Results_Seasonal/LP4S_74ee31255d0f/REF090/winter/d3/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/REF090/winter/d2/COMPLETE.txt" $goto end_REF090_winter_3
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF090/winter/d3/FAILED_SOLVE.txt" $goto end_REF090_winter_3
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF090/winter/d3/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=REF090 --SEASON=winter --DAY=3 --PREV=2 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/REF090/winter/d3/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/REF090/winter/d3/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: REF090_winter_3. Read its daily listing/log; preserve cache.
$label end_REF090_winter_3
$endif.REF090_winter_3
$ifthen.REF090_winter_4 not exist "Results_Seasonal/LP4S_74ee31255d0f/REF090/winter/d4/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/REF090/winter/d3/COMPLETE.txt" $goto end_REF090_winter_4
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF090/winter/d4/FAILED_SOLVE.txt" $goto end_REF090_winter_4
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF090/winter/d4/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=REF090 --SEASON=winter --DAY=4 --PREV=3 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/REF090/winter/d4/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/REF090/winter/d4/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: REF090_winter_4. Read its daily listing/log; preserve cache.
$label end_REF090_winter_4
$endif.REF090_winter_4
$ifthen.REF090_winter_5 not exist "Results_Seasonal/LP4S_74ee31255d0f/REF090/winter/d5/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/REF090/winter/d4/COMPLETE.txt" $goto end_REF090_winter_5
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF090/winter/d5/FAILED_SOLVE.txt" $goto end_REF090_winter_5
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF090/winter/d5/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=REF090 --SEASON=winter --DAY=5 --PREV=4 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/REF090/winter/d5/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/REF090/winter/d5/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: REF090_winter_5. Read its daily listing/log; preserve cache.
$label end_REF090_winter_5
$endif.REF090_winter_5
$ifthen.REF090_winter_6 not exist "Results_Seasonal/LP4S_74ee31255d0f/REF090/winter/d6/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/REF090/winter/d5/COMPLETE.txt" $goto end_REF090_winter_6
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF090/winter/d6/FAILED_SOLVE.txt" $goto end_REF090_winter_6
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF090/winter/d6/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=REF090 --SEASON=winter --DAY=6 --PREV=5 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/REF090/winter/d6/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/REF090/winter/d6/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: REF090_winter_6. Read its daily listing/log; preserve cache.
$label end_REF090_winter_6
$endif.REF090_winter_6
$ifthen.REF090_winter_7 not exist "Results_Seasonal/LP4S_74ee31255d0f/REF090/winter/d7/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/REF090/winter/d6/COMPLETE.txt" $goto end_REF090_winter_7
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF090/winter/d7/FAILED_SOLVE.txt" $goto end_REF090_winter_7
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF090/winter/d7/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=REF090 --SEASON=winter --DAY=7 --PREV=6 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/REF090/winter/d7/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/REF090/winter/d7/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: REF090_winter_7. Read its daily listing/log; preserve cache.
$label end_REF090_winter_7
$endif.REF090_winter_7
$ifthen.REF095_winter_1 not exist "Results_Seasonal/LP4S_74ee31255d0f/REF095/winter/d1/COMPLETE.txt"
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF095/winter/d1/FAILED_SOLVE.txt" $goto end_REF095_winter_1
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF095/winter/d1/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=REF095 --SEASON=winter --DAY=1 --PREV=0 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/REF095/winter/d1/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/REF095/winter/d1/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: REF095_winter_1. Read its daily listing/log; preserve cache.
$label end_REF095_winter_1
$endif.REF095_winter_1
$ifthen.REF095_winter_2 not exist "Results_Seasonal/LP4S_74ee31255d0f/REF095/winter/d2/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/REF095/winter/d1/COMPLETE.txt" $goto end_REF095_winter_2
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF095/winter/d2/FAILED_SOLVE.txt" $goto end_REF095_winter_2
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF095/winter/d2/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=REF095 --SEASON=winter --DAY=2 --PREV=1 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/REF095/winter/d2/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/REF095/winter/d2/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: REF095_winter_2. Read its daily listing/log; preserve cache.
$label end_REF095_winter_2
$endif.REF095_winter_2
$ifthen.REF095_winter_3 not exist "Results_Seasonal/LP4S_74ee31255d0f/REF095/winter/d3/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/REF095/winter/d2/COMPLETE.txt" $goto end_REF095_winter_3
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF095/winter/d3/FAILED_SOLVE.txt" $goto end_REF095_winter_3
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF095/winter/d3/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=REF095 --SEASON=winter --DAY=3 --PREV=2 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/REF095/winter/d3/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/REF095/winter/d3/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: REF095_winter_3. Read its daily listing/log; preserve cache.
$label end_REF095_winter_3
$endif.REF095_winter_3
$ifthen.REF095_winter_4 not exist "Results_Seasonal/LP4S_74ee31255d0f/REF095/winter/d4/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/REF095/winter/d3/COMPLETE.txt" $goto end_REF095_winter_4
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF095/winter/d4/FAILED_SOLVE.txt" $goto end_REF095_winter_4
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF095/winter/d4/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=REF095 --SEASON=winter --DAY=4 --PREV=3 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/REF095/winter/d4/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/REF095/winter/d4/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: REF095_winter_4. Read its daily listing/log; preserve cache.
$label end_REF095_winter_4
$endif.REF095_winter_4
$ifthen.REF095_winter_5 not exist "Results_Seasonal/LP4S_74ee31255d0f/REF095/winter/d5/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/REF095/winter/d4/COMPLETE.txt" $goto end_REF095_winter_5
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF095/winter/d5/FAILED_SOLVE.txt" $goto end_REF095_winter_5
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF095/winter/d5/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=REF095 --SEASON=winter --DAY=5 --PREV=4 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/REF095/winter/d5/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/REF095/winter/d5/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: REF095_winter_5. Read its daily listing/log; preserve cache.
$label end_REF095_winter_5
$endif.REF095_winter_5
$ifthen.REF095_winter_6 not exist "Results_Seasonal/LP4S_74ee31255d0f/REF095/winter/d6/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/REF095/winter/d5/COMPLETE.txt" $goto end_REF095_winter_6
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF095/winter/d6/FAILED_SOLVE.txt" $goto end_REF095_winter_6
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF095/winter/d6/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=REF095 --SEASON=winter --DAY=6 --PREV=5 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/REF095/winter/d6/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/REF095/winter/d6/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: REF095_winter_6. Read its daily listing/log; preserve cache.
$label end_REF095_winter_6
$endif.REF095_winter_6
$ifthen.REF095_winter_7 not exist "Results_Seasonal/LP4S_74ee31255d0f/REF095/winter/d7/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/REF095/winter/d6/COMPLETE.txt" $goto end_REF095_winter_7
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF095/winter/d7/FAILED_SOLVE.txt" $goto end_REF095_winter_7
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF095/winter/d7/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=REF095 --SEASON=winter --DAY=7 --PREV=6 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/REF095/winter/d7/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/REF095/winter/d7/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: REF095_winter_7. Read its daily listing/log; preserve cache.
$label end_REF095_winter_7
$endif.REF095_winter_7
$ifthen.BC_spring_1 not exist "Results_Seasonal/LP4S_74ee31255d0f/BC/spring/d1/COMPLETE.txt"
$if exist "Results_Seasonal/LP4S_74ee31255d0f/BC/spring/d1/FAILED_SOLVE.txt" $goto end_BC_spring_1
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/BC/spring/d1/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=BC --SEASON=spring --DAY=1 --PREV=0 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/BC/spring/d1/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/BC/spring/d1/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: BC_spring_1. Read its daily listing/log; preserve cache.
$label end_BC_spring_1
$endif.BC_spring_1
$ifthen.BC_spring_2 not exist "Results_Seasonal/LP4S_74ee31255d0f/BC/spring/d2/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/BC/spring/d1/COMPLETE.txt" $goto end_BC_spring_2
$if exist "Results_Seasonal/LP4S_74ee31255d0f/BC/spring/d2/FAILED_SOLVE.txt" $goto end_BC_spring_2
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/BC/spring/d2/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=BC --SEASON=spring --DAY=2 --PREV=1 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/BC/spring/d2/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/BC/spring/d2/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: BC_spring_2. Read its daily listing/log; preserve cache.
$label end_BC_spring_2
$endif.BC_spring_2
$ifthen.BC_spring_3 not exist "Results_Seasonal/LP4S_74ee31255d0f/BC/spring/d3/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/BC/spring/d2/COMPLETE.txt" $goto end_BC_spring_3
$if exist "Results_Seasonal/LP4S_74ee31255d0f/BC/spring/d3/FAILED_SOLVE.txt" $goto end_BC_spring_3
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/BC/spring/d3/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=BC --SEASON=spring --DAY=3 --PREV=2 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/BC/spring/d3/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/BC/spring/d3/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: BC_spring_3. Read its daily listing/log; preserve cache.
$label end_BC_spring_3
$endif.BC_spring_3
$ifthen.BC_spring_4 not exist "Results_Seasonal/LP4S_74ee31255d0f/BC/spring/d4/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/BC/spring/d3/COMPLETE.txt" $goto end_BC_spring_4
$if exist "Results_Seasonal/LP4S_74ee31255d0f/BC/spring/d4/FAILED_SOLVE.txt" $goto end_BC_spring_4
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/BC/spring/d4/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=BC --SEASON=spring --DAY=4 --PREV=3 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/BC/spring/d4/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/BC/spring/d4/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: BC_spring_4. Read its daily listing/log; preserve cache.
$label end_BC_spring_4
$endif.BC_spring_4
$ifthen.BC_spring_5 not exist "Results_Seasonal/LP4S_74ee31255d0f/BC/spring/d5/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/BC/spring/d4/COMPLETE.txt" $goto end_BC_spring_5
$if exist "Results_Seasonal/LP4S_74ee31255d0f/BC/spring/d5/FAILED_SOLVE.txt" $goto end_BC_spring_5
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/BC/spring/d5/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=BC --SEASON=spring --DAY=5 --PREV=4 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/BC/spring/d5/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/BC/spring/d5/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: BC_spring_5. Read its daily listing/log; preserve cache.
$label end_BC_spring_5
$endif.BC_spring_5
$ifthen.BC_spring_6 not exist "Results_Seasonal/LP4S_74ee31255d0f/BC/spring/d6/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/BC/spring/d5/COMPLETE.txt" $goto end_BC_spring_6
$if exist "Results_Seasonal/LP4S_74ee31255d0f/BC/spring/d6/FAILED_SOLVE.txt" $goto end_BC_spring_6
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/BC/spring/d6/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=BC --SEASON=spring --DAY=6 --PREV=5 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/BC/spring/d6/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/BC/spring/d6/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: BC_spring_6. Read its daily listing/log; preserve cache.
$label end_BC_spring_6
$endif.BC_spring_6
$ifthen.BC_spring_7 not exist "Results_Seasonal/LP4S_74ee31255d0f/BC/spring/d7/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/BC/spring/d6/COMPLETE.txt" $goto end_BC_spring_7
$if exist "Results_Seasonal/LP4S_74ee31255d0f/BC/spring/d7/FAILED_SOLVE.txt" $goto end_BC_spring_7
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/BC/spring/d7/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=BC --SEASON=spring --DAY=7 --PREV=6 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/BC/spring/d7/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/BC/spring/d7/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: BC_spring_7. Read its daily listing/log; preserve cache.
$label end_BC_spring_7
$endif.BC_spring_7
$ifthen.RESERVE_spring_1 not exist "Results_Seasonal/LP4S_74ee31255d0f/RESERVE/spring/d1/COMPLETE.txt"
$if exist "Results_Seasonal/LP4S_74ee31255d0f/RESERVE/spring/d1/FAILED_SOLVE.txt" $goto end_RESERVE_spring_1
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/RESERVE/spring/d1/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=RESERVE --SEASON=spring --DAY=1 --PREV=0 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/RESERVE/spring/d1/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/RESERVE/spring/d1/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: RESERVE_spring_1. Read its daily listing/log; preserve cache.
$label end_RESERVE_spring_1
$endif.RESERVE_spring_1
$ifthen.RESERVE_spring_2 not exist "Results_Seasonal/LP4S_74ee31255d0f/RESERVE/spring/d2/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/RESERVE/spring/d1/COMPLETE.txt" $goto end_RESERVE_spring_2
$if exist "Results_Seasonal/LP4S_74ee31255d0f/RESERVE/spring/d2/FAILED_SOLVE.txt" $goto end_RESERVE_spring_2
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/RESERVE/spring/d2/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=RESERVE --SEASON=spring --DAY=2 --PREV=1 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/RESERVE/spring/d2/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/RESERVE/spring/d2/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: RESERVE_spring_2. Read its daily listing/log; preserve cache.
$label end_RESERVE_spring_2
$endif.RESERVE_spring_2
$ifthen.RESERVE_spring_3 not exist "Results_Seasonal/LP4S_74ee31255d0f/RESERVE/spring/d3/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/RESERVE/spring/d2/COMPLETE.txt" $goto end_RESERVE_spring_3
$if exist "Results_Seasonal/LP4S_74ee31255d0f/RESERVE/spring/d3/FAILED_SOLVE.txt" $goto end_RESERVE_spring_3
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/RESERVE/spring/d3/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=RESERVE --SEASON=spring --DAY=3 --PREV=2 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/RESERVE/spring/d3/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/RESERVE/spring/d3/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: RESERVE_spring_3. Read its daily listing/log; preserve cache.
$label end_RESERVE_spring_3
$endif.RESERVE_spring_3
$ifthen.RESERVE_spring_4 not exist "Results_Seasonal/LP4S_74ee31255d0f/RESERVE/spring/d4/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/RESERVE/spring/d3/COMPLETE.txt" $goto end_RESERVE_spring_4
$if exist "Results_Seasonal/LP4S_74ee31255d0f/RESERVE/spring/d4/FAILED_SOLVE.txt" $goto end_RESERVE_spring_4
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/RESERVE/spring/d4/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=RESERVE --SEASON=spring --DAY=4 --PREV=3 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/RESERVE/spring/d4/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/RESERVE/spring/d4/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: RESERVE_spring_4. Read its daily listing/log; preserve cache.
$label end_RESERVE_spring_4
$endif.RESERVE_spring_4
$ifthen.RESERVE_spring_5 not exist "Results_Seasonal/LP4S_74ee31255d0f/RESERVE/spring/d5/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/RESERVE/spring/d4/COMPLETE.txt" $goto end_RESERVE_spring_5
$if exist "Results_Seasonal/LP4S_74ee31255d0f/RESERVE/spring/d5/FAILED_SOLVE.txt" $goto end_RESERVE_spring_5
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/RESERVE/spring/d5/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=RESERVE --SEASON=spring --DAY=5 --PREV=4 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/RESERVE/spring/d5/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/RESERVE/spring/d5/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: RESERVE_spring_5. Read its daily listing/log; preserve cache.
$label end_RESERVE_spring_5
$endif.RESERVE_spring_5
$ifthen.RESERVE_spring_6 not exist "Results_Seasonal/LP4S_74ee31255d0f/RESERVE/spring/d6/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/RESERVE/spring/d5/COMPLETE.txt" $goto end_RESERVE_spring_6
$if exist "Results_Seasonal/LP4S_74ee31255d0f/RESERVE/spring/d6/FAILED_SOLVE.txt" $goto end_RESERVE_spring_6
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/RESERVE/spring/d6/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=RESERVE --SEASON=spring --DAY=6 --PREV=5 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/RESERVE/spring/d6/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/RESERVE/spring/d6/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: RESERVE_spring_6. Read its daily listing/log; preserve cache.
$label end_RESERVE_spring_6
$endif.RESERVE_spring_6
$ifthen.RESERVE_spring_7 not exist "Results_Seasonal/LP4S_74ee31255d0f/RESERVE/spring/d7/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/RESERVE/spring/d6/COMPLETE.txt" $goto end_RESERVE_spring_7
$if exist "Results_Seasonal/LP4S_74ee31255d0f/RESERVE/spring/d7/FAILED_SOLVE.txt" $goto end_RESERVE_spring_7
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/RESERVE/spring/d7/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=RESERVE --SEASON=spring --DAY=7 --PREV=6 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/RESERVE/spring/d7/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/RESERVE/spring/d7/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: RESERVE_spring_7. Read its daily listing/log; preserve cache.
$label end_RESERVE_spring_7
$endif.RESERVE_spring_7
$ifthen.SP_spring_1 not exist "Results_Seasonal/LP4S_74ee31255d0f/SP/spring/d1/COMPLETE.txt"
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SP/spring/d1/FAILED_SOLVE.txt" $goto end_SP_spring_1
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SP/spring/d1/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SP --SEASON=spring --DAY=1 --PREV=0 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SP/spring/d1/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SP/spring/d1/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SP_spring_1. Read its daily listing/log; preserve cache.
$label end_SP_spring_1
$endif.SP_spring_1
$ifthen.SP_spring_2 not exist "Results_Seasonal/LP4S_74ee31255d0f/SP/spring/d2/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SP/spring/d1/COMPLETE.txt" $goto end_SP_spring_2
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SP/spring/d2/FAILED_SOLVE.txt" $goto end_SP_spring_2
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SP/spring/d2/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SP --SEASON=spring --DAY=2 --PREV=1 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SP/spring/d2/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SP/spring/d2/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SP_spring_2. Read its daily listing/log; preserve cache.
$label end_SP_spring_2
$endif.SP_spring_2
$ifthen.SP_spring_3 not exist "Results_Seasonal/LP4S_74ee31255d0f/SP/spring/d3/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SP/spring/d2/COMPLETE.txt" $goto end_SP_spring_3
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SP/spring/d3/FAILED_SOLVE.txt" $goto end_SP_spring_3
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SP/spring/d3/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SP --SEASON=spring --DAY=3 --PREV=2 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SP/spring/d3/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SP/spring/d3/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SP_spring_3. Read its daily listing/log; preserve cache.
$label end_SP_spring_3
$endif.SP_spring_3
$ifthen.SP_spring_4 not exist "Results_Seasonal/LP4S_74ee31255d0f/SP/spring/d4/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SP/spring/d3/COMPLETE.txt" $goto end_SP_spring_4
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SP/spring/d4/FAILED_SOLVE.txt" $goto end_SP_spring_4
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SP/spring/d4/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SP --SEASON=spring --DAY=4 --PREV=3 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SP/spring/d4/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SP/spring/d4/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SP_spring_4. Read its daily listing/log; preserve cache.
$label end_SP_spring_4
$endif.SP_spring_4
$ifthen.SP_spring_5 not exist "Results_Seasonal/LP4S_74ee31255d0f/SP/spring/d5/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SP/spring/d4/COMPLETE.txt" $goto end_SP_spring_5
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SP/spring/d5/FAILED_SOLVE.txt" $goto end_SP_spring_5
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SP/spring/d5/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SP --SEASON=spring --DAY=5 --PREV=4 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SP/spring/d5/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SP/spring/d5/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SP_spring_5. Read its daily listing/log; preserve cache.
$label end_SP_spring_5
$endif.SP_spring_5
$ifthen.SP_spring_6 not exist "Results_Seasonal/LP4S_74ee31255d0f/SP/spring/d6/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SP/spring/d5/COMPLETE.txt" $goto end_SP_spring_6
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SP/spring/d6/FAILED_SOLVE.txt" $goto end_SP_spring_6
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SP/spring/d6/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SP --SEASON=spring --DAY=6 --PREV=5 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SP/spring/d6/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SP/spring/d6/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SP_spring_6. Read its daily listing/log; preserve cache.
$label end_SP_spring_6
$endif.SP_spring_6
$ifthen.SP_spring_7 not exist "Results_Seasonal/LP4S_74ee31255d0f/SP/spring/d7/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SP/spring/d6/COMPLETE.txt" $goto end_SP_spring_7
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SP/spring/d7/FAILED_SOLVE.txt" $goto end_SP_spring_7
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SP/spring/d7/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SP --SEASON=spring --DAY=7 --PREV=6 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SP/spring/d7/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SP/spring/d7/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SP_spring_7. Read its daily listing/log; preserve cache.
$label end_SP_spring_7
$endif.SP_spring_7
$ifthen.LR_C1_spring_1 not exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1/spring/d1/COMPLETE.txt"
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1/spring/d1/FAILED_SOLVE.txt" $goto end_LR_C1_spring_1
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1/spring/d1/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=LR_C1 --SEASON=spring --DAY=1 --PREV=0 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/LR_C1/spring/d1/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/LR_C1/spring/d1/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: LR_C1_spring_1. Read its daily listing/log; preserve cache.
$label end_LR_C1_spring_1
$endif.LR_C1_spring_1
$ifthen.LR_C1_spring_2 not exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1/spring/d2/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1/spring/d1/COMPLETE.txt" $goto end_LR_C1_spring_2
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1/spring/d2/FAILED_SOLVE.txt" $goto end_LR_C1_spring_2
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1/spring/d2/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=LR_C1 --SEASON=spring --DAY=2 --PREV=1 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/LR_C1/spring/d2/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/LR_C1/spring/d2/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: LR_C1_spring_2. Read its daily listing/log; preserve cache.
$label end_LR_C1_spring_2
$endif.LR_C1_spring_2
$ifthen.LR_C1_spring_3 not exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1/spring/d3/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1/spring/d2/COMPLETE.txt" $goto end_LR_C1_spring_3
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1/spring/d3/FAILED_SOLVE.txt" $goto end_LR_C1_spring_3
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1/spring/d3/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=LR_C1 --SEASON=spring --DAY=3 --PREV=2 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/LR_C1/spring/d3/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/LR_C1/spring/d3/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: LR_C1_spring_3. Read its daily listing/log; preserve cache.
$label end_LR_C1_spring_3
$endif.LR_C1_spring_3
$ifthen.LR_C1_spring_4 not exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1/spring/d4/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1/spring/d3/COMPLETE.txt" $goto end_LR_C1_spring_4
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1/spring/d4/FAILED_SOLVE.txt" $goto end_LR_C1_spring_4
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1/spring/d4/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=LR_C1 --SEASON=spring --DAY=4 --PREV=3 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/LR_C1/spring/d4/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/LR_C1/spring/d4/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: LR_C1_spring_4. Read its daily listing/log; preserve cache.
$label end_LR_C1_spring_4
$endif.LR_C1_spring_4
$ifthen.LR_C1_spring_5 not exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1/spring/d5/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1/spring/d4/COMPLETE.txt" $goto end_LR_C1_spring_5
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1/spring/d5/FAILED_SOLVE.txt" $goto end_LR_C1_spring_5
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1/spring/d5/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=LR_C1 --SEASON=spring --DAY=5 --PREV=4 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/LR_C1/spring/d5/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/LR_C1/spring/d5/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: LR_C1_spring_5. Read its daily listing/log; preserve cache.
$label end_LR_C1_spring_5
$endif.LR_C1_spring_5
$ifthen.LR_C1_spring_6 not exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1/spring/d6/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1/spring/d5/COMPLETE.txt" $goto end_LR_C1_spring_6
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1/spring/d6/FAILED_SOLVE.txt" $goto end_LR_C1_spring_6
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1/spring/d6/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=LR_C1 --SEASON=spring --DAY=6 --PREV=5 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/LR_C1/spring/d6/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/LR_C1/spring/d6/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: LR_C1_spring_6. Read its daily listing/log; preserve cache.
$label end_LR_C1_spring_6
$endif.LR_C1_spring_6
$ifthen.LR_C1_spring_7 not exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1/spring/d7/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1/spring/d6/COMPLETE.txt" $goto end_LR_C1_spring_7
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1/spring/d7/FAILED_SOLVE.txt" $goto end_LR_C1_spring_7
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1/spring/d7/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=LR_C1 --SEASON=spring --DAY=7 --PREV=6 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/LR_C1/spring/d7/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/LR_C1/spring/d7/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: LR_C1_spring_7. Read its daily listing/log; preserve cache.
$label end_LR_C1_spring_7
$endif.LR_C1_spring_7
$ifthen.LR_C1e6_spring_1 not exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/spring/d1/COMPLETE.txt"
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/spring/d1/FAILED_SOLVE.txt" $goto end_LR_C1e6_spring_1
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/spring/d1/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=LR_C1e6 --SEASON=spring --DAY=1 --PREV=0 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/spring/d1/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/spring/d1/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: LR_C1e6_spring_1. Read its daily listing/log; preserve cache.
$label end_LR_C1e6_spring_1
$endif.LR_C1e6_spring_1
$ifthen.LR_C1e6_spring_2 not exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/spring/d2/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/spring/d1/COMPLETE.txt" $goto end_LR_C1e6_spring_2
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/spring/d2/FAILED_SOLVE.txt" $goto end_LR_C1e6_spring_2
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/spring/d2/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=LR_C1e6 --SEASON=spring --DAY=2 --PREV=1 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/spring/d2/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/spring/d2/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: LR_C1e6_spring_2. Read its daily listing/log; preserve cache.
$label end_LR_C1e6_spring_2
$endif.LR_C1e6_spring_2
$ifthen.LR_C1e6_spring_3 not exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/spring/d3/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/spring/d2/COMPLETE.txt" $goto end_LR_C1e6_spring_3
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/spring/d3/FAILED_SOLVE.txt" $goto end_LR_C1e6_spring_3
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/spring/d3/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=LR_C1e6 --SEASON=spring --DAY=3 --PREV=2 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/spring/d3/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/spring/d3/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: LR_C1e6_spring_3. Read its daily listing/log; preserve cache.
$label end_LR_C1e6_spring_3
$endif.LR_C1e6_spring_3
$ifthen.LR_C1e6_spring_4 not exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/spring/d4/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/spring/d3/COMPLETE.txt" $goto end_LR_C1e6_spring_4
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/spring/d4/FAILED_SOLVE.txt" $goto end_LR_C1e6_spring_4
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/spring/d4/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=LR_C1e6 --SEASON=spring --DAY=4 --PREV=3 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/spring/d4/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/spring/d4/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: LR_C1e6_spring_4. Read its daily listing/log; preserve cache.
$label end_LR_C1e6_spring_4
$endif.LR_C1e6_spring_4
$ifthen.LR_C1e6_spring_5 not exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/spring/d5/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/spring/d4/COMPLETE.txt" $goto end_LR_C1e6_spring_5
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/spring/d5/FAILED_SOLVE.txt" $goto end_LR_C1e6_spring_5
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/spring/d5/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=LR_C1e6 --SEASON=spring --DAY=5 --PREV=4 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/spring/d5/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/spring/d5/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: LR_C1e6_spring_5. Read its daily listing/log; preserve cache.
$label end_LR_C1e6_spring_5
$endif.LR_C1e6_spring_5
$ifthen.LR_C1e6_spring_6 not exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/spring/d6/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/spring/d5/COMPLETE.txt" $goto end_LR_C1e6_spring_6
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/spring/d6/FAILED_SOLVE.txt" $goto end_LR_C1e6_spring_6
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/spring/d6/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=LR_C1e6 --SEASON=spring --DAY=6 --PREV=5 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/spring/d6/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/spring/d6/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: LR_C1e6_spring_6. Read its daily listing/log; preserve cache.
$label end_LR_C1e6_spring_6
$endif.LR_C1e6_spring_6
$ifthen.LR_C1e6_spring_7 not exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/spring/d7/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/spring/d6/COMPLETE.txt" $goto end_LR_C1e6_spring_7
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/spring/d7/FAILED_SOLVE.txt" $goto end_LR_C1e6_spring_7
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/spring/d7/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=LR_C1e6 --SEASON=spring --DAY=7 --PREV=6 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/spring/d7/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/spring/d7/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: LR_C1e6_spring_7. Read its daily listing/log; preserve cache.
$label end_LR_C1e6_spring_7
$endif.LR_C1e6_spring_7
$ifthen.SVM_C01_spring_1 not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/spring/d1/COMPLETE.txt"
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/spring/d1/FAILED_SOLVE.txt" $goto end_SVM_C01_spring_1
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/spring/d1/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SVM_C01 --SEASON=spring --DAY=1 --PREV=0 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/spring/d1/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/spring/d1/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SVM_C01_spring_1. Read its daily listing/log; preserve cache.
$label end_SVM_C01_spring_1
$endif.SVM_C01_spring_1
$ifthen.SVM_C01_spring_2 not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/spring/d2/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/spring/d1/COMPLETE.txt" $goto end_SVM_C01_spring_2
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/spring/d2/FAILED_SOLVE.txt" $goto end_SVM_C01_spring_2
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/spring/d2/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SVM_C01 --SEASON=spring --DAY=2 --PREV=1 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/spring/d2/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/spring/d2/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SVM_C01_spring_2. Read its daily listing/log; preserve cache.
$label end_SVM_C01_spring_2
$endif.SVM_C01_spring_2
$ifthen.SVM_C01_spring_3 not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/spring/d3/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/spring/d2/COMPLETE.txt" $goto end_SVM_C01_spring_3
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/spring/d3/FAILED_SOLVE.txt" $goto end_SVM_C01_spring_3
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/spring/d3/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SVM_C01 --SEASON=spring --DAY=3 --PREV=2 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/spring/d3/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/spring/d3/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SVM_C01_spring_3. Read its daily listing/log; preserve cache.
$label end_SVM_C01_spring_3
$endif.SVM_C01_spring_3
$ifthen.SVM_C01_spring_4 not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/spring/d4/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/spring/d3/COMPLETE.txt" $goto end_SVM_C01_spring_4
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/spring/d4/FAILED_SOLVE.txt" $goto end_SVM_C01_spring_4
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/spring/d4/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SVM_C01 --SEASON=spring --DAY=4 --PREV=3 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/spring/d4/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/spring/d4/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SVM_C01_spring_4. Read its daily listing/log; preserve cache.
$label end_SVM_C01_spring_4
$endif.SVM_C01_spring_4
$ifthen.SVM_C01_spring_5 not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/spring/d5/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/spring/d4/COMPLETE.txt" $goto end_SVM_C01_spring_5
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/spring/d5/FAILED_SOLVE.txt" $goto end_SVM_C01_spring_5
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/spring/d5/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SVM_C01 --SEASON=spring --DAY=5 --PREV=4 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/spring/d5/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/spring/d5/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SVM_C01_spring_5. Read its daily listing/log; preserve cache.
$label end_SVM_C01_spring_5
$endif.SVM_C01_spring_5
$ifthen.SVM_C01_spring_6 not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/spring/d6/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/spring/d5/COMPLETE.txt" $goto end_SVM_C01_spring_6
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/spring/d6/FAILED_SOLVE.txt" $goto end_SVM_C01_spring_6
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/spring/d6/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SVM_C01 --SEASON=spring --DAY=6 --PREV=5 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/spring/d6/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/spring/d6/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SVM_C01_spring_6. Read its daily listing/log; preserve cache.
$label end_SVM_C01_spring_6
$endif.SVM_C01_spring_6
$ifthen.SVM_C01_spring_7 not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/spring/d7/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/spring/d6/COMPLETE.txt" $goto end_SVM_C01_spring_7
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/spring/d7/FAILED_SOLVE.txt" $goto end_SVM_C01_spring_7
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/spring/d7/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SVM_C01 --SEASON=spring --DAY=7 --PREV=6 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/spring/d7/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/spring/d7/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SVM_C01_spring_7. Read its daily listing/log; preserve cache.
$label end_SVM_C01_spring_7
$endif.SVM_C01_spring_7
$ifthen.SVM_C1_spring_1 not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/spring/d1/COMPLETE.txt"
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/spring/d1/FAILED_SOLVE.txt" $goto end_SVM_C1_spring_1
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/spring/d1/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SVM_C1 --SEASON=spring --DAY=1 --PREV=0 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/spring/d1/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/spring/d1/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SVM_C1_spring_1. Read its daily listing/log; preserve cache.
$label end_SVM_C1_spring_1
$endif.SVM_C1_spring_1
$ifthen.SVM_C1_spring_2 not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/spring/d2/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/spring/d1/COMPLETE.txt" $goto end_SVM_C1_spring_2
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/spring/d2/FAILED_SOLVE.txt" $goto end_SVM_C1_spring_2
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/spring/d2/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SVM_C1 --SEASON=spring --DAY=2 --PREV=1 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/spring/d2/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/spring/d2/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SVM_C1_spring_2. Read its daily listing/log; preserve cache.
$label end_SVM_C1_spring_2
$endif.SVM_C1_spring_2
$ifthen.SVM_C1_spring_3 not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/spring/d3/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/spring/d2/COMPLETE.txt" $goto end_SVM_C1_spring_3
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/spring/d3/FAILED_SOLVE.txt" $goto end_SVM_C1_spring_3
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/spring/d3/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SVM_C1 --SEASON=spring --DAY=3 --PREV=2 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/spring/d3/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/spring/d3/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SVM_C1_spring_3. Read its daily listing/log; preserve cache.
$label end_SVM_C1_spring_3
$endif.SVM_C1_spring_3
$ifthen.SVM_C1_spring_4 not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/spring/d4/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/spring/d3/COMPLETE.txt" $goto end_SVM_C1_spring_4
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/spring/d4/FAILED_SOLVE.txt" $goto end_SVM_C1_spring_4
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/spring/d4/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SVM_C1 --SEASON=spring --DAY=4 --PREV=3 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/spring/d4/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/spring/d4/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SVM_C1_spring_4. Read its daily listing/log; preserve cache.
$label end_SVM_C1_spring_4
$endif.SVM_C1_spring_4
$ifthen.SVM_C1_spring_5 not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/spring/d5/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/spring/d4/COMPLETE.txt" $goto end_SVM_C1_spring_5
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/spring/d5/FAILED_SOLVE.txt" $goto end_SVM_C1_spring_5
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/spring/d5/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SVM_C1 --SEASON=spring --DAY=5 --PREV=4 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/spring/d5/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/spring/d5/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SVM_C1_spring_5. Read its daily listing/log; preserve cache.
$label end_SVM_C1_spring_5
$endif.SVM_C1_spring_5
$ifthen.SVM_C1_spring_6 not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/spring/d6/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/spring/d5/COMPLETE.txt" $goto end_SVM_C1_spring_6
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/spring/d6/FAILED_SOLVE.txt" $goto end_SVM_C1_spring_6
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/spring/d6/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SVM_C1 --SEASON=spring --DAY=6 --PREV=5 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/spring/d6/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/spring/d6/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SVM_C1_spring_6. Read its daily listing/log; preserve cache.
$label end_SVM_C1_spring_6
$endif.SVM_C1_spring_6
$ifthen.SVM_C1_spring_7 not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/spring/d7/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/spring/d6/COMPLETE.txt" $goto end_SVM_C1_spring_7
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/spring/d7/FAILED_SOLVE.txt" $goto end_SVM_C1_spring_7
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/spring/d7/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SVM_C1 --SEASON=spring --DAY=7 --PREV=6 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/spring/d7/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/spring/d7/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SVM_C1_spring_7. Read its daily listing/log; preserve cache.
$label end_SVM_C1_spring_7
$endif.SVM_C1_spring_7
$ifthen.SVM_C10_spring_1 not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/spring/d1/COMPLETE.txt"
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/spring/d1/FAILED_SOLVE.txt" $goto end_SVM_C10_spring_1
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/spring/d1/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SVM_C10 --SEASON=spring --DAY=1 --PREV=0 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/spring/d1/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/spring/d1/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SVM_C10_spring_1. Read its daily listing/log; preserve cache.
$label end_SVM_C10_spring_1
$endif.SVM_C10_spring_1
$ifthen.SVM_C10_spring_2 not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/spring/d2/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/spring/d1/COMPLETE.txt" $goto end_SVM_C10_spring_2
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/spring/d2/FAILED_SOLVE.txt" $goto end_SVM_C10_spring_2
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/spring/d2/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SVM_C10 --SEASON=spring --DAY=2 --PREV=1 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/spring/d2/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/spring/d2/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SVM_C10_spring_2. Read its daily listing/log; preserve cache.
$label end_SVM_C10_spring_2
$endif.SVM_C10_spring_2
$ifthen.SVM_C10_spring_3 not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/spring/d3/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/spring/d2/COMPLETE.txt" $goto end_SVM_C10_spring_3
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/spring/d3/FAILED_SOLVE.txt" $goto end_SVM_C10_spring_3
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/spring/d3/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SVM_C10 --SEASON=spring --DAY=3 --PREV=2 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/spring/d3/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/spring/d3/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SVM_C10_spring_3. Read its daily listing/log; preserve cache.
$label end_SVM_C10_spring_3
$endif.SVM_C10_spring_3
$ifthen.SVM_C10_spring_4 not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/spring/d4/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/spring/d3/COMPLETE.txt" $goto end_SVM_C10_spring_4
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/spring/d4/FAILED_SOLVE.txt" $goto end_SVM_C10_spring_4
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/spring/d4/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SVM_C10 --SEASON=spring --DAY=4 --PREV=3 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/spring/d4/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/spring/d4/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SVM_C10_spring_4. Read its daily listing/log; preserve cache.
$label end_SVM_C10_spring_4
$endif.SVM_C10_spring_4
$ifthen.SVM_C10_spring_5 not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/spring/d5/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/spring/d4/COMPLETE.txt" $goto end_SVM_C10_spring_5
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/spring/d5/FAILED_SOLVE.txt" $goto end_SVM_C10_spring_5
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/spring/d5/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SVM_C10 --SEASON=spring --DAY=5 --PREV=4 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/spring/d5/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/spring/d5/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SVM_C10_spring_5. Read its daily listing/log; preserve cache.
$label end_SVM_C10_spring_5
$endif.SVM_C10_spring_5
$ifthen.SVM_C10_spring_6 not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/spring/d6/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/spring/d5/COMPLETE.txt" $goto end_SVM_C10_spring_6
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/spring/d6/FAILED_SOLVE.txt" $goto end_SVM_C10_spring_6
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/spring/d6/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SVM_C10 --SEASON=spring --DAY=6 --PREV=5 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/spring/d6/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/spring/d6/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SVM_C10_spring_6. Read its daily listing/log; preserve cache.
$label end_SVM_C10_spring_6
$endif.SVM_C10_spring_6
$ifthen.SVM_C10_spring_7 not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/spring/d7/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/spring/d6/COMPLETE.txt" $goto end_SVM_C10_spring_7
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/spring/d7/FAILED_SOLVE.txt" $goto end_SVM_C10_spring_7
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/spring/d7/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SVM_C10 --SEASON=spring --DAY=7 --PREV=6 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/spring/d7/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/spring/d7/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SVM_C10_spring_7. Read its daily listing/log; preserve cache.
$label end_SVM_C10_spring_7
$endif.SVM_C10_spring_7
$ifthen.LDA_spring_1 not exist "Results_Seasonal/LP4S_74ee31255d0f/LDA/spring/d1/COMPLETE.txt"
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LDA/spring/d1/FAILED_SOLVE.txt" $goto end_LDA_spring_1
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LDA/spring/d1/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=LDA --SEASON=spring --DAY=1 --PREV=0 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/LDA/spring/d1/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/LDA/spring/d1/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: LDA_spring_1. Read its daily listing/log; preserve cache.
$label end_LDA_spring_1
$endif.LDA_spring_1
$ifthen.LDA_spring_2 not exist "Results_Seasonal/LP4S_74ee31255d0f/LDA/spring/d2/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/LDA/spring/d1/COMPLETE.txt" $goto end_LDA_spring_2
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LDA/spring/d2/FAILED_SOLVE.txt" $goto end_LDA_spring_2
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LDA/spring/d2/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=LDA --SEASON=spring --DAY=2 --PREV=1 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/LDA/spring/d2/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/LDA/spring/d2/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: LDA_spring_2. Read its daily listing/log; preserve cache.
$label end_LDA_spring_2
$endif.LDA_spring_2
$ifthen.LDA_spring_3 not exist "Results_Seasonal/LP4S_74ee31255d0f/LDA/spring/d3/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/LDA/spring/d2/COMPLETE.txt" $goto end_LDA_spring_3
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LDA/spring/d3/FAILED_SOLVE.txt" $goto end_LDA_spring_3
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LDA/spring/d3/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=LDA --SEASON=spring --DAY=3 --PREV=2 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/LDA/spring/d3/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/LDA/spring/d3/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: LDA_spring_3. Read its daily listing/log; preserve cache.
$label end_LDA_spring_3
$endif.LDA_spring_3
$ifthen.LDA_spring_4 not exist "Results_Seasonal/LP4S_74ee31255d0f/LDA/spring/d4/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/LDA/spring/d3/COMPLETE.txt" $goto end_LDA_spring_4
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LDA/spring/d4/FAILED_SOLVE.txt" $goto end_LDA_spring_4
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LDA/spring/d4/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=LDA --SEASON=spring --DAY=4 --PREV=3 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/LDA/spring/d4/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/LDA/spring/d4/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: LDA_spring_4. Read its daily listing/log; preserve cache.
$label end_LDA_spring_4
$endif.LDA_spring_4
$ifthen.LDA_spring_5 not exist "Results_Seasonal/LP4S_74ee31255d0f/LDA/spring/d5/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/LDA/spring/d4/COMPLETE.txt" $goto end_LDA_spring_5
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LDA/spring/d5/FAILED_SOLVE.txt" $goto end_LDA_spring_5
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LDA/spring/d5/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=LDA --SEASON=spring --DAY=5 --PREV=4 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/LDA/spring/d5/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/LDA/spring/d5/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: LDA_spring_5. Read its daily listing/log; preserve cache.
$label end_LDA_spring_5
$endif.LDA_spring_5
$ifthen.LDA_spring_6 not exist "Results_Seasonal/LP4S_74ee31255d0f/LDA/spring/d6/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/LDA/spring/d5/COMPLETE.txt" $goto end_LDA_spring_6
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LDA/spring/d6/FAILED_SOLVE.txt" $goto end_LDA_spring_6
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LDA/spring/d6/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=LDA --SEASON=spring --DAY=6 --PREV=5 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/LDA/spring/d6/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/LDA/spring/d6/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: LDA_spring_6. Read its daily listing/log; preserve cache.
$label end_LDA_spring_6
$endif.LDA_spring_6
$ifthen.LDA_spring_7 not exist "Results_Seasonal/LP4S_74ee31255d0f/LDA/spring/d7/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/LDA/spring/d6/COMPLETE.txt" $goto end_LDA_spring_7
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LDA/spring/d7/FAILED_SOLVE.txt" $goto end_LDA_spring_7
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LDA/spring/d7/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=LDA --SEASON=spring --DAY=7 --PREV=6 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/LDA/spring/d7/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/LDA/spring/d7/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: LDA_spring_7. Read its daily listing/log; preserve cache.
$label end_LDA_spring_7
$endif.LDA_spring_7
$ifthen.SGD_Log_spring_1 not exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/spring/d1/COMPLETE.txt"
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/spring/d1/FAILED_SOLVE.txt" $goto end_SGD_Log_spring_1
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/spring/d1/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SGD_Log --SEASON=spring --DAY=1 --PREV=0 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/spring/d1/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/spring/d1/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SGD_Log_spring_1. Read its daily listing/log; preserve cache.
$label end_SGD_Log_spring_1
$endif.SGD_Log_spring_1
$ifthen.SGD_Log_spring_2 not exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/spring/d2/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/spring/d1/COMPLETE.txt" $goto end_SGD_Log_spring_2
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/spring/d2/FAILED_SOLVE.txt" $goto end_SGD_Log_spring_2
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/spring/d2/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SGD_Log --SEASON=spring --DAY=2 --PREV=1 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/spring/d2/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/spring/d2/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SGD_Log_spring_2. Read its daily listing/log; preserve cache.
$label end_SGD_Log_spring_2
$endif.SGD_Log_spring_2
$ifthen.SGD_Log_spring_3 not exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/spring/d3/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/spring/d2/COMPLETE.txt" $goto end_SGD_Log_spring_3
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/spring/d3/FAILED_SOLVE.txt" $goto end_SGD_Log_spring_3
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/spring/d3/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SGD_Log --SEASON=spring --DAY=3 --PREV=2 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/spring/d3/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/spring/d3/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SGD_Log_spring_3. Read its daily listing/log; preserve cache.
$label end_SGD_Log_spring_3
$endif.SGD_Log_spring_3
$ifthen.SGD_Log_spring_4 not exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/spring/d4/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/spring/d3/COMPLETE.txt" $goto end_SGD_Log_spring_4
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/spring/d4/FAILED_SOLVE.txt" $goto end_SGD_Log_spring_4
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/spring/d4/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SGD_Log --SEASON=spring --DAY=4 --PREV=3 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/spring/d4/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/spring/d4/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SGD_Log_spring_4. Read its daily listing/log; preserve cache.
$label end_SGD_Log_spring_4
$endif.SGD_Log_spring_4
$ifthen.SGD_Log_spring_5 not exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/spring/d5/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/spring/d4/COMPLETE.txt" $goto end_SGD_Log_spring_5
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/spring/d5/FAILED_SOLVE.txt" $goto end_SGD_Log_spring_5
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/spring/d5/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SGD_Log --SEASON=spring --DAY=5 --PREV=4 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/spring/d5/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/spring/d5/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SGD_Log_spring_5. Read its daily listing/log; preserve cache.
$label end_SGD_Log_spring_5
$endif.SGD_Log_spring_5
$ifthen.SGD_Log_spring_6 not exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/spring/d6/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/spring/d5/COMPLETE.txt" $goto end_SGD_Log_spring_6
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/spring/d6/FAILED_SOLVE.txt" $goto end_SGD_Log_spring_6
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/spring/d6/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SGD_Log --SEASON=spring --DAY=6 --PREV=5 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/spring/d6/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/spring/d6/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SGD_Log_spring_6. Read its daily listing/log; preserve cache.
$label end_SGD_Log_spring_6
$endif.SGD_Log_spring_6
$ifthen.SGD_Log_spring_7 not exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/spring/d7/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/spring/d6/COMPLETE.txt" $goto end_SGD_Log_spring_7
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/spring/d7/FAILED_SOLVE.txt" $goto end_SGD_Log_spring_7
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/spring/d7/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SGD_Log --SEASON=spring --DAY=7 --PREV=6 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/spring/d7/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/spring/d7/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SGD_Log_spring_7. Read its daily listing/log; preserve cache.
$label end_SGD_Log_spring_7
$endif.SGD_Log_spring_7
$ifthen.SGD_Hinge_spring_1 not exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/spring/d1/COMPLETE.txt"
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/spring/d1/FAILED_SOLVE.txt" $goto end_SGD_Hinge_spring_1
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/spring/d1/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SGD_Hinge --SEASON=spring --DAY=1 --PREV=0 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/spring/d1/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/spring/d1/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SGD_Hinge_spring_1. Read its daily listing/log; preserve cache.
$label end_SGD_Hinge_spring_1
$endif.SGD_Hinge_spring_1
$ifthen.SGD_Hinge_spring_2 not exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/spring/d2/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/spring/d1/COMPLETE.txt" $goto end_SGD_Hinge_spring_2
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/spring/d2/FAILED_SOLVE.txt" $goto end_SGD_Hinge_spring_2
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/spring/d2/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SGD_Hinge --SEASON=spring --DAY=2 --PREV=1 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/spring/d2/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/spring/d2/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SGD_Hinge_spring_2. Read its daily listing/log; preserve cache.
$label end_SGD_Hinge_spring_2
$endif.SGD_Hinge_spring_2
$ifthen.SGD_Hinge_spring_3 not exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/spring/d3/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/spring/d2/COMPLETE.txt" $goto end_SGD_Hinge_spring_3
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/spring/d3/FAILED_SOLVE.txt" $goto end_SGD_Hinge_spring_3
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/spring/d3/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SGD_Hinge --SEASON=spring --DAY=3 --PREV=2 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/spring/d3/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/spring/d3/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SGD_Hinge_spring_3. Read its daily listing/log; preserve cache.
$label end_SGD_Hinge_spring_3
$endif.SGD_Hinge_spring_3
$ifthen.SGD_Hinge_spring_4 not exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/spring/d4/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/spring/d3/COMPLETE.txt" $goto end_SGD_Hinge_spring_4
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/spring/d4/FAILED_SOLVE.txt" $goto end_SGD_Hinge_spring_4
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/spring/d4/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SGD_Hinge --SEASON=spring --DAY=4 --PREV=3 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/spring/d4/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/spring/d4/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SGD_Hinge_spring_4. Read its daily listing/log; preserve cache.
$label end_SGD_Hinge_spring_4
$endif.SGD_Hinge_spring_4
$ifthen.SGD_Hinge_spring_5 not exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/spring/d5/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/spring/d4/COMPLETE.txt" $goto end_SGD_Hinge_spring_5
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/spring/d5/FAILED_SOLVE.txt" $goto end_SGD_Hinge_spring_5
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/spring/d5/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SGD_Hinge --SEASON=spring --DAY=5 --PREV=4 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/spring/d5/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/spring/d5/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SGD_Hinge_spring_5. Read its daily listing/log; preserve cache.
$label end_SGD_Hinge_spring_5
$endif.SGD_Hinge_spring_5
$ifthen.SGD_Hinge_spring_6 not exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/spring/d6/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/spring/d5/COMPLETE.txt" $goto end_SGD_Hinge_spring_6
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/spring/d6/FAILED_SOLVE.txt" $goto end_SGD_Hinge_spring_6
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/spring/d6/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SGD_Hinge --SEASON=spring --DAY=6 --PREV=5 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/spring/d6/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/spring/d6/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SGD_Hinge_spring_6. Read its daily listing/log; preserve cache.
$label end_SGD_Hinge_spring_6
$endif.SGD_Hinge_spring_6
$ifthen.SGD_Hinge_spring_7 not exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/spring/d7/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/spring/d6/COMPLETE.txt" $goto end_SGD_Hinge_spring_7
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/spring/d7/FAILED_SOLVE.txt" $goto end_SGD_Hinge_spring_7
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/spring/d7/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SGD_Hinge --SEASON=spring --DAY=7 --PREV=6 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/spring/d7/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/spring/d7/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SGD_Hinge_spring_7. Read its daily listing/log; preserve cache.
$label end_SGD_Hinge_spring_7
$endif.SGD_Hinge_spring_7
$ifthen.PA_spring_1 not exist "Results_Seasonal/LP4S_74ee31255d0f/PA/spring/d1/COMPLETE.txt"
$if exist "Results_Seasonal/LP4S_74ee31255d0f/PA/spring/d1/FAILED_SOLVE.txt" $goto end_PA_spring_1
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/PA/spring/d1/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=PA --SEASON=spring --DAY=1 --PREV=0 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/PA/spring/d1/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/PA/spring/d1/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: PA_spring_1. Read its daily listing/log; preserve cache.
$label end_PA_spring_1
$endif.PA_spring_1
$ifthen.PA_spring_2 not exist "Results_Seasonal/LP4S_74ee31255d0f/PA/spring/d2/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/PA/spring/d1/COMPLETE.txt" $goto end_PA_spring_2
$if exist "Results_Seasonal/LP4S_74ee31255d0f/PA/spring/d2/FAILED_SOLVE.txt" $goto end_PA_spring_2
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/PA/spring/d2/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=PA --SEASON=spring --DAY=2 --PREV=1 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/PA/spring/d2/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/PA/spring/d2/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: PA_spring_2. Read its daily listing/log; preserve cache.
$label end_PA_spring_2
$endif.PA_spring_2
$ifthen.PA_spring_3 not exist "Results_Seasonal/LP4S_74ee31255d0f/PA/spring/d3/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/PA/spring/d2/COMPLETE.txt" $goto end_PA_spring_3
$if exist "Results_Seasonal/LP4S_74ee31255d0f/PA/spring/d3/FAILED_SOLVE.txt" $goto end_PA_spring_3
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/PA/spring/d3/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=PA --SEASON=spring --DAY=3 --PREV=2 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/PA/spring/d3/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/PA/spring/d3/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: PA_spring_3. Read its daily listing/log; preserve cache.
$label end_PA_spring_3
$endif.PA_spring_3
$ifthen.PA_spring_4 not exist "Results_Seasonal/LP4S_74ee31255d0f/PA/spring/d4/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/PA/spring/d3/COMPLETE.txt" $goto end_PA_spring_4
$if exist "Results_Seasonal/LP4S_74ee31255d0f/PA/spring/d4/FAILED_SOLVE.txt" $goto end_PA_spring_4
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/PA/spring/d4/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=PA --SEASON=spring --DAY=4 --PREV=3 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/PA/spring/d4/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/PA/spring/d4/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: PA_spring_4. Read its daily listing/log; preserve cache.
$label end_PA_spring_4
$endif.PA_spring_4
$ifthen.PA_spring_5 not exist "Results_Seasonal/LP4S_74ee31255d0f/PA/spring/d5/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/PA/spring/d4/COMPLETE.txt" $goto end_PA_spring_5
$if exist "Results_Seasonal/LP4S_74ee31255d0f/PA/spring/d5/FAILED_SOLVE.txt" $goto end_PA_spring_5
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/PA/spring/d5/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=PA --SEASON=spring --DAY=5 --PREV=4 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/PA/spring/d5/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/PA/spring/d5/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: PA_spring_5. Read its daily listing/log; preserve cache.
$label end_PA_spring_5
$endif.PA_spring_5
$ifthen.PA_spring_6 not exist "Results_Seasonal/LP4S_74ee31255d0f/PA/spring/d6/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/PA/spring/d5/COMPLETE.txt" $goto end_PA_spring_6
$if exist "Results_Seasonal/LP4S_74ee31255d0f/PA/spring/d6/FAILED_SOLVE.txt" $goto end_PA_spring_6
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/PA/spring/d6/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=PA --SEASON=spring --DAY=6 --PREV=5 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/PA/spring/d6/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/PA/spring/d6/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: PA_spring_6. Read its daily listing/log; preserve cache.
$label end_PA_spring_6
$endif.PA_spring_6
$ifthen.PA_spring_7 not exist "Results_Seasonal/LP4S_74ee31255d0f/PA/spring/d7/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/PA/spring/d6/COMPLETE.txt" $goto end_PA_spring_7
$if exist "Results_Seasonal/LP4S_74ee31255d0f/PA/spring/d7/FAILED_SOLVE.txt" $goto end_PA_spring_7
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/PA/spring/d7/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=PA --SEASON=spring --DAY=7 --PREV=6 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/PA/spring/d7/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/PA/spring/d7/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: PA_spring_7. Read its daily listing/log; preserve cache.
$label end_PA_spring_7
$endif.PA_spring_7
$ifthen.REF050_spring_1 not exist "Results_Seasonal/LP4S_74ee31255d0f/REF050/spring/d1/COMPLETE.txt"
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF050/spring/d1/FAILED_SOLVE.txt" $goto end_REF050_spring_1
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF050/spring/d1/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=REF050 --SEASON=spring --DAY=1 --PREV=0 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/REF050/spring/d1/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/REF050/spring/d1/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: REF050_spring_1. Read its daily listing/log; preserve cache.
$label end_REF050_spring_1
$endif.REF050_spring_1
$ifthen.REF050_spring_2 not exist "Results_Seasonal/LP4S_74ee31255d0f/REF050/spring/d2/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/REF050/spring/d1/COMPLETE.txt" $goto end_REF050_spring_2
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF050/spring/d2/FAILED_SOLVE.txt" $goto end_REF050_spring_2
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF050/spring/d2/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=REF050 --SEASON=spring --DAY=2 --PREV=1 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/REF050/spring/d2/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/REF050/spring/d2/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: REF050_spring_2. Read its daily listing/log; preserve cache.
$label end_REF050_spring_2
$endif.REF050_spring_2
$ifthen.REF050_spring_3 not exist "Results_Seasonal/LP4S_74ee31255d0f/REF050/spring/d3/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/REF050/spring/d2/COMPLETE.txt" $goto end_REF050_spring_3
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF050/spring/d3/FAILED_SOLVE.txt" $goto end_REF050_spring_3
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF050/spring/d3/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=REF050 --SEASON=spring --DAY=3 --PREV=2 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/REF050/spring/d3/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/REF050/spring/d3/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: REF050_spring_3. Read its daily listing/log; preserve cache.
$label end_REF050_spring_3
$endif.REF050_spring_3
$ifthen.REF050_spring_4 not exist "Results_Seasonal/LP4S_74ee31255d0f/REF050/spring/d4/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/REF050/spring/d3/COMPLETE.txt" $goto end_REF050_spring_4
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF050/spring/d4/FAILED_SOLVE.txt" $goto end_REF050_spring_4
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF050/spring/d4/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=REF050 --SEASON=spring --DAY=4 --PREV=3 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/REF050/spring/d4/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/REF050/spring/d4/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: REF050_spring_4. Read its daily listing/log; preserve cache.
$label end_REF050_spring_4
$endif.REF050_spring_4
$ifthen.REF050_spring_5 not exist "Results_Seasonal/LP4S_74ee31255d0f/REF050/spring/d5/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/REF050/spring/d4/COMPLETE.txt" $goto end_REF050_spring_5
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF050/spring/d5/FAILED_SOLVE.txt" $goto end_REF050_spring_5
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF050/spring/d5/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=REF050 --SEASON=spring --DAY=5 --PREV=4 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/REF050/spring/d5/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/REF050/spring/d5/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: REF050_spring_5. Read its daily listing/log; preserve cache.
$label end_REF050_spring_5
$endif.REF050_spring_5
$ifthen.REF050_spring_6 not exist "Results_Seasonal/LP4S_74ee31255d0f/REF050/spring/d6/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/REF050/spring/d5/COMPLETE.txt" $goto end_REF050_spring_6
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF050/spring/d6/FAILED_SOLVE.txt" $goto end_REF050_spring_6
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF050/spring/d6/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=REF050 --SEASON=spring --DAY=6 --PREV=5 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/REF050/spring/d6/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/REF050/spring/d6/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: REF050_spring_6. Read its daily listing/log; preserve cache.
$label end_REF050_spring_6
$endif.REF050_spring_6
$ifthen.REF050_spring_7 not exist "Results_Seasonal/LP4S_74ee31255d0f/REF050/spring/d7/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/REF050/spring/d6/COMPLETE.txt" $goto end_REF050_spring_7
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF050/spring/d7/FAILED_SOLVE.txt" $goto end_REF050_spring_7
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF050/spring/d7/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=REF050 --SEASON=spring --DAY=7 --PREV=6 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/REF050/spring/d7/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/REF050/spring/d7/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: REF050_spring_7. Read its daily listing/log; preserve cache.
$label end_REF050_spring_7
$endif.REF050_spring_7
$ifthen.REF090_spring_1 not exist "Results_Seasonal/LP4S_74ee31255d0f/REF090/spring/d1/COMPLETE.txt"
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF090/spring/d1/FAILED_SOLVE.txt" $goto end_REF090_spring_1
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF090/spring/d1/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=REF090 --SEASON=spring --DAY=1 --PREV=0 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/REF090/spring/d1/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/REF090/spring/d1/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: REF090_spring_1. Read its daily listing/log; preserve cache.
$label end_REF090_spring_1
$endif.REF090_spring_1
$ifthen.REF090_spring_2 not exist "Results_Seasonal/LP4S_74ee31255d0f/REF090/spring/d2/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/REF090/spring/d1/COMPLETE.txt" $goto end_REF090_spring_2
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF090/spring/d2/FAILED_SOLVE.txt" $goto end_REF090_spring_2
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF090/spring/d2/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=REF090 --SEASON=spring --DAY=2 --PREV=1 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/REF090/spring/d2/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/REF090/spring/d2/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: REF090_spring_2. Read its daily listing/log; preserve cache.
$label end_REF090_spring_2
$endif.REF090_spring_2
$ifthen.REF090_spring_3 not exist "Results_Seasonal/LP4S_74ee31255d0f/REF090/spring/d3/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/REF090/spring/d2/COMPLETE.txt" $goto end_REF090_spring_3
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF090/spring/d3/FAILED_SOLVE.txt" $goto end_REF090_spring_3
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF090/spring/d3/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=REF090 --SEASON=spring --DAY=3 --PREV=2 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/REF090/spring/d3/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/REF090/spring/d3/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: REF090_spring_3. Read its daily listing/log; preserve cache.
$label end_REF090_spring_3
$endif.REF090_spring_3
$ifthen.REF090_spring_4 not exist "Results_Seasonal/LP4S_74ee31255d0f/REF090/spring/d4/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/REF090/spring/d3/COMPLETE.txt" $goto end_REF090_spring_4
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF090/spring/d4/FAILED_SOLVE.txt" $goto end_REF090_spring_4
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF090/spring/d4/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=REF090 --SEASON=spring --DAY=4 --PREV=3 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/REF090/spring/d4/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/REF090/spring/d4/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: REF090_spring_4. Read its daily listing/log; preserve cache.
$label end_REF090_spring_4
$endif.REF090_spring_4
$ifthen.REF090_spring_5 not exist "Results_Seasonal/LP4S_74ee31255d0f/REF090/spring/d5/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/REF090/spring/d4/COMPLETE.txt" $goto end_REF090_spring_5
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF090/spring/d5/FAILED_SOLVE.txt" $goto end_REF090_spring_5
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF090/spring/d5/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=REF090 --SEASON=spring --DAY=5 --PREV=4 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/REF090/spring/d5/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/REF090/spring/d5/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: REF090_spring_5. Read its daily listing/log; preserve cache.
$label end_REF090_spring_5
$endif.REF090_spring_5
$ifthen.REF090_spring_6 not exist "Results_Seasonal/LP4S_74ee31255d0f/REF090/spring/d6/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/REF090/spring/d5/COMPLETE.txt" $goto end_REF090_spring_6
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF090/spring/d6/FAILED_SOLVE.txt" $goto end_REF090_spring_6
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF090/spring/d6/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=REF090 --SEASON=spring --DAY=6 --PREV=5 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/REF090/spring/d6/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/REF090/spring/d6/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: REF090_spring_6. Read its daily listing/log; preserve cache.
$label end_REF090_spring_6
$endif.REF090_spring_6
$ifthen.REF090_spring_7 not exist "Results_Seasonal/LP4S_74ee31255d0f/REF090/spring/d7/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/REF090/spring/d6/COMPLETE.txt" $goto end_REF090_spring_7
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF090/spring/d7/FAILED_SOLVE.txt" $goto end_REF090_spring_7
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF090/spring/d7/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=REF090 --SEASON=spring --DAY=7 --PREV=6 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/REF090/spring/d7/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/REF090/spring/d7/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: REF090_spring_7. Read its daily listing/log; preserve cache.
$label end_REF090_spring_7
$endif.REF090_spring_7
$ifthen.REF095_spring_1 not exist "Results_Seasonal/LP4S_74ee31255d0f/REF095/spring/d1/COMPLETE.txt"
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF095/spring/d1/FAILED_SOLVE.txt" $goto end_REF095_spring_1
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF095/spring/d1/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=REF095 --SEASON=spring --DAY=1 --PREV=0 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/REF095/spring/d1/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/REF095/spring/d1/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: REF095_spring_1. Read its daily listing/log; preserve cache.
$label end_REF095_spring_1
$endif.REF095_spring_1
$ifthen.REF095_spring_2 not exist "Results_Seasonal/LP4S_74ee31255d0f/REF095/spring/d2/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/REF095/spring/d1/COMPLETE.txt" $goto end_REF095_spring_2
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF095/spring/d2/FAILED_SOLVE.txt" $goto end_REF095_spring_2
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF095/spring/d2/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=REF095 --SEASON=spring --DAY=2 --PREV=1 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/REF095/spring/d2/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/REF095/spring/d2/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: REF095_spring_2. Read its daily listing/log; preserve cache.
$label end_REF095_spring_2
$endif.REF095_spring_2
$ifthen.REF095_spring_3 not exist "Results_Seasonal/LP4S_74ee31255d0f/REF095/spring/d3/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/REF095/spring/d2/COMPLETE.txt" $goto end_REF095_spring_3
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF095/spring/d3/FAILED_SOLVE.txt" $goto end_REF095_spring_3
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF095/spring/d3/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=REF095 --SEASON=spring --DAY=3 --PREV=2 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/REF095/spring/d3/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/REF095/spring/d3/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: REF095_spring_3. Read its daily listing/log; preserve cache.
$label end_REF095_spring_3
$endif.REF095_spring_3
$ifthen.REF095_spring_4 not exist "Results_Seasonal/LP4S_74ee31255d0f/REF095/spring/d4/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/REF095/spring/d3/COMPLETE.txt" $goto end_REF095_spring_4
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF095/spring/d4/FAILED_SOLVE.txt" $goto end_REF095_spring_4
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF095/spring/d4/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=REF095 --SEASON=spring --DAY=4 --PREV=3 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/REF095/spring/d4/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/REF095/spring/d4/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: REF095_spring_4. Read its daily listing/log; preserve cache.
$label end_REF095_spring_4
$endif.REF095_spring_4
$ifthen.REF095_spring_5 not exist "Results_Seasonal/LP4S_74ee31255d0f/REF095/spring/d5/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/REF095/spring/d4/COMPLETE.txt" $goto end_REF095_spring_5
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF095/spring/d5/FAILED_SOLVE.txt" $goto end_REF095_spring_5
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF095/spring/d5/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=REF095 --SEASON=spring --DAY=5 --PREV=4 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/REF095/spring/d5/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/REF095/spring/d5/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: REF095_spring_5. Read its daily listing/log; preserve cache.
$label end_REF095_spring_5
$endif.REF095_spring_5
$ifthen.REF095_spring_6 not exist "Results_Seasonal/LP4S_74ee31255d0f/REF095/spring/d6/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/REF095/spring/d5/COMPLETE.txt" $goto end_REF095_spring_6
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF095/spring/d6/FAILED_SOLVE.txt" $goto end_REF095_spring_6
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF095/spring/d6/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=REF095 --SEASON=spring --DAY=6 --PREV=5 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/REF095/spring/d6/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/REF095/spring/d6/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: REF095_spring_6. Read its daily listing/log; preserve cache.
$label end_REF095_spring_6
$endif.REF095_spring_6
$ifthen.REF095_spring_7 not exist "Results_Seasonal/LP4S_74ee31255d0f/REF095/spring/d7/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/REF095/spring/d6/COMPLETE.txt" $goto end_REF095_spring_7
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF095/spring/d7/FAILED_SOLVE.txt" $goto end_REF095_spring_7
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF095/spring/d7/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=REF095 --SEASON=spring --DAY=7 --PREV=6 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/REF095/spring/d7/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/REF095/spring/d7/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: REF095_spring_7. Read its daily listing/log; preserve cache.
$label end_REF095_spring_7
$endif.REF095_spring_7
$ifthen.BC_summer_1 not exist "Results_Seasonal/LP4S_74ee31255d0f/BC/summer/d1/COMPLETE.txt"
$if exist "Results_Seasonal/LP4S_74ee31255d0f/BC/summer/d1/FAILED_SOLVE.txt" $goto end_BC_summer_1
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/BC/summer/d1/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=BC --SEASON=summer --DAY=1 --PREV=0 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/BC/summer/d1/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/BC/summer/d1/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: BC_summer_1. Read its daily listing/log; preserve cache.
$label end_BC_summer_1
$endif.BC_summer_1
$ifthen.BC_summer_2 not exist "Results_Seasonal/LP4S_74ee31255d0f/BC/summer/d2/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/BC/summer/d1/COMPLETE.txt" $goto end_BC_summer_2
$if exist "Results_Seasonal/LP4S_74ee31255d0f/BC/summer/d2/FAILED_SOLVE.txt" $goto end_BC_summer_2
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/BC/summer/d2/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=BC --SEASON=summer --DAY=2 --PREV=1 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/BC/summer/d2/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/BC/summer/d2/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: BC_summer_2. Read its daily listing/log; preserve cache.
$label end_BC_summer_2
$endif.BC_summer_2
$ifthen.BC_summer_3 not exist "Results_Seasonal/LP4S_74ee31255d0f/BC/summer/d3/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/BC/summer/d2/COMPLETE.txt" $goto end_BC_summer_3
$if exist "Results_Seasonal/LP4S_74ee31255d0f/BC/summer/d3/FAILED_SOLVE.txt" $goto end_BC_summer_3
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/BC/summer/d3/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=BC --SEASON=summer --DAY=3 --PREV=2 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/BC/summer/d3/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/BC/summer/d3/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: BC_summer_3. Read its daily listing/log; preserve cache.
$label end_BC_summer_3
$endif.BC_summer_3
$ifthen.BC_summer_4 not exist "Results_Seasonal/LP4S_74ee31255d0f/BC/summer/d4/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/BC/summer/d3/COMPLETE.txt" $goto end_BC_summer_4
$if exist "Results_Seasonal/LP4S_74ee31255d0f/BC/summer/d4/FAILED_SOLVE.txt" $goto end_BC_summer_4
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/BC/summer/d4/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=BC --SEASON=summer --DAY=4 --PREV=3 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/BC/summer/d4/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/BC/summer/d4/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: BC_summer_4. Read its daily listing/log; preserve cache.
$label end_BC_summer_4
$endif.BC_summer_4
$ifthen.BC_summer_5 not exist "Results_Seasonal/LP4S_74ee31255d0f/BC/summer/d5/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/BC/summer/d4/COMPLETE.txt" $goto end_BC_summer_5
$if exist "Results_Seasonal/LP4S_74ee31255d0f/BC/summer/d5/FAILED_SOLVE.txt" $goto end_BC_summer_5
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/BC/summer/d5/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=BC --SEASON=summer --DAY=5 --PREV=4 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/BC/summer/d5/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/BC/summer/d5/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: BC_summer_5. Read its daily listing/log; preserve cache.
$label end_BC_summer_5
$endif.BC_summer_5
$ifthen.BC_summer_6 not exist "Results_Seasonal/LP4S_74ee31255d0f/BC/summer/d6/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/BC/summer/d5/COMPLETE.txt" $goto end_BC_summer_6
$if exist "Results_Seasonal/LP4S_74ee31255d0f/BC/summer/d6/FAILED_SOLVE.txt" $goto end_BC_summer_6
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/BC/summer/d6/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=BC --SEASON=summer --DAY=6 --PREV=5 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/BC/summer/d6/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/BC/summer/d6/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: BC_summer_6. Read its daily listing/log; preserve cache.
$label end_BC_summer_6
$endif.BC_summer_6
$ifthen.BC_summer_7 not exist "Results_Seasonal/LP4S_74ee31255d0f/BC/summer/d7/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/BC/summer/d6/COMPLETE.txt" $goto end_BC_summer_7
$if exist "Results_Seasonal/LP4S_74ee31255d0f/BC/summer/d7/FAILED_SOLVE.txt" $goto end_BC_summer_7
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/BC/summer/d7/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=BC --SEASON=summer --DAY=7 --PREV=6 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/BC/summer/d7/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/BC/summer/d7/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: BC_summer_7. Read its daily listing/log; preserve cache.
$label end_BC_summer_7
$endif.BC_summer_7
$ifthen.RESERVE_summer_1 not exist "Results_Seasonal/LP4S_74ee31255d0f/RESERVE/summer/d1/COMPLETE.txt"
$if exist "Results_Seasonal/LP4S_74ee31255d0f/RESERVE/summer/d1/FAILED_SOLVE.txt" $goto end_RESERVE_summer_1
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/RESERVE/summer/d1/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=RESERVE --SEASON=summer --DAY=1 --PREV=0 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/RESERVE/summer/d1/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/RESERVE/summer/d1/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: RESERVE_summer_1. Read its daily listing/log; preserve cache.
$label end_RESERVE_summer_1
$endif.RESERVE_summer_1
$ifthen.RESERVE_summer_2 not exist "Results_Seasonal/LP4S_74ee31255d0f/RESERVE/summer/d2/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/RESERVE/summer/d1/COMPLETE.txt" $goto end_RESERVE_summer_2
$if exist "Results_Seasonal/LP4S_74ee31255d0f/RESERVE/summer/d2/FAILED_SOLVE.txt" $goto end_RESERVE_summer_2
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/RESERVE/summer/d2/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=RESERVE --SEASON=summer --DAY=2 --PREV=1 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/RESERVE/summer/d2/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/RESERVE/summer/d2/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: RESERVE_summer_2. Read its daily listing/log; preserve cache.
$label end_RESERVE_summer_2
$endif.RESERVE_summer_2
$ifthen.RESERVE_summer_3 not exist "Results_Seasonal/LP4S_74ee31255d0f/RESERVE/summer/d3/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/RESERVE/summer/d2/COMPLETE.txt" $goto end_RESERVE_summer_3
$if exist "Results_Seasonal/LP4S_74ee31255d0f/RESERVE/summer/d3/FAILED_SOLVE.txt" $goto end_RESERVE_summer_3
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/RESERVE/summer/d3/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=RESERVE --SEASON=summer --DAY=3 --PREV=2 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/RESERVE/summer/d3/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/RESERVE/summer/d3/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: RESERVE_summer_3. Read its daily listing/log; preserve cache.
$label end_RESERVE_summer_3
$endif.RESERVE_summer_3
$ifthen.RESERVE_summer_4 not exist "Results_Seasonal/LP4S_74ee31255d0f/RESERVE/summer/d4/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/RESERVE/summer/d3/COMPLETE.txt" $goto end_RESERVE_summer_4
$if exist "Results_Seasonal/LP4S_74ee31255d0f/RESERVE/summer/d4/FAILED_SOLVE.txt" $goto end_RESERVE_summer_4
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/RESERVE/summer/d4/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=RESERVE --SEASON=summer --DAY=4 --PREV=3 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/RESERVE/summer/d4/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/RESERVE/summer/d4/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: RESERVE_summer_4. Read its daily listing/log; preserve cache.
$label end_RESERVE_summer_4
$endif.RESERVE_summer_4
$ifthen.RESERVE_summer_5 not exist "Results_Seasonal/LP4S_74ee31255d0f/RESERVE/summer/d5/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/RESERVE/summer/d4/COMPLETE.txt" $goto end_RESERVE_summer_5
$if exist "Results_Seasonal/LP4S_74ee31255d0f/RESERVE/summer/d5/FAILED_SOLVE.txt" $goto end_RESERVE_summer_5
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/RESERVE/summer/d5/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=RESERVE --SEASON=summer --DAY=5 --PREV=4 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/RESERVE/summer/d5/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/RESERVE/summer/d5/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: RESERVE_summer_5. Read its daily listing/log; preserve cache.
$label end_RESERVE_summer_5
$endif.RESERVE_summer_5
$ifthen.RESERVE_summer_6 not exist "Results_Seasonal/LP4S_74ee31255d0f/RESERVE/summer/d6/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/RESERVE/summer/d5/COMPLETE.txt" $goto end_RESERVE_summer_6
$if exist "Results_Seasonal/LP4S_74ee31255d0f/RESERVE/summer/d6/FAILED_SOLVE.txt" $goto end_RESERVE_summer_6
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/RESERVE/summer/d6/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=RESERVE --SEASON=summer --DAY=6 --PREV=5 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/RESERVE/summer/d6/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/RESERVE/summer/d6/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: RESERVE_summer_6. Read its daily listing/log; preserve cache.
$label end_RESERVE_summer_6
$endif.RESERVE_summer_6
$ifthen.RESERVE_summer_7 not exist "Results_Seasonal/LP4S_74ee31255d0f/RESERVE/summer/d7/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/RESERVE/summer/d6/COMPLETE.txt" $goto end_RESERVE_summer_7
$if exist "Results_Seasonal/LP4S_74ee31255d0f/RESERVE/summer/d7/FAILED_SOLVE.txt" $goto end_RESERVE_summer_7
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/RESERVE/summer/d7/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=RESERVE --SEASON=summer --DAY=7 --PREV=6 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/RESERVE/summer/d7/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/RESERVE/summer/d7/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: RESERVE_summer_7. Read its daily listing/log; preserve cache.
$label end_RESERVE_summer_7
$endif.RESERVE_summer_7
$ifthen.SP_summer_1 not exist "Results_Seasonal/LP4S_74ee31255d0f/SP/summer/d1/COMPLETE.txt"
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SP/summer/d1/FAILED_SOLVE.txt" $goto end_SP_summer_1
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SP/summer/d1/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SP --SEASON=summer --DAY=1 --PREV=0 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SP/summer/d1/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SP/summer/d1/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SP_summer_1. Read its daily listing/log; preserve cache.
$label end_SP_summer_1
$endif.SP_summer_1
$ifthen.SP_summer_2 not exist "Results_Seasonal/LP4S_74ee31255d0f/SP/summer/d2/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SP/summer/d1/COMPLETE.txt" $goto end_SP_summer_2
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SP/summer/d2/FAILED_SOLVE.txt" $goto end_SP_summer_2
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SP/summer/d2/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SP --SEASON=summer --DAY=2 --PREV=1 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SP/summer/d2/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SP/summer/d2/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SP_summer_2. Read its daily listing/log; preserve cache.
$label end_SP_summer_2
$endif.SP_summer_2
$ifthen.SP_summer_3 not exist "Results_Seasonal/LP4S_74ee31255d0f/SP/summer/d3/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SP/summer/d2/COMPLETE.txt" $goto end_SP_summer_3
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SP/summer/d3/FAILED_SOLVE.txt" $goto end_SP_summer_3
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SP/summer/d3/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SP --SEASON=summer --DAY=3 --PREV=2 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SP/summer/d3/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SP/summer/d3/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SP_summer_3. Read its daily listing/log; preserve cache.
$label end_SP_summer_3
$endif.SP_summer_3
$ifthen.SP_summer_4 not exist "Results_Seasonal/LP4S_74ee31255d0f/SP/summer/d4/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SP/summer/d3/COMPLETE.txt" $goto end_SP_summer_4
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SP/summer/d4/FAILED_SOLVE.txt" $goto end_SP_summer_4
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SP/summer/d4/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SP --SEASON=summer --DAY=4 --PREV=3 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SP/summer/d4/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SP/summer/d4/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SP_summer_4. Read its daily listing/log; preserve cache.
$label end_SP_summer_4
$endif.SP_summer_4
$ifthen.SP_summer_5 not exist "Results_Seasonal/LP4S_74ee31255d0f/SP/summer/d5/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SP/summer/d4/COMPLETE.txt" $goto end_SP_summer_5
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SP/summer/d5/FAILED_SOLVE.txt" $goto end_SP_summer_5
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SP/summer/d5/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SP --SEASON=summer --DAY=5 --PREV=4 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SP/summer/d5/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SP/summer/d5/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SP_summer_5. Read its daily listing/log; preserve cache.
$label end_SP_summer_5
$endif.SP_summer_5
$ifthen.SP_summer_6 not exist "Results_Seasonal/LP4S_74ee31255d0f/SP/summer/d6/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SP/summer/d5/COMPLETE.txt" $goto end_SP_summer_6
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SP/summer/d6/FAILED_SOLVE.txt" $goto end_SP_summer_6
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SP/summer/d6/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SP --SEASON=summer --DAY=6 --PREV=5 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SP/summer/d6/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SP/summer/d6/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SP_summer_6. Read its daily listing/log; preserve cache.
$label end_SP_summer_6
$endif.SP_summer_6
$ifthen.SP_summer_7 not exist "Results_Seasonal/LP4S_74ee31255d0f/SP/summer/d7/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SP/summer/d6/COMPLETE.txt" $goto end_SP_summer_7
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SP/summer/d7/FAILED_SOLVE.txt" $goto end_SP_summer_7
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SP/summer/d7/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SP --SEASON=summer --DAY=7 --PREV=6 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SP/summer/d7/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SP/summer/d7/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SP_summer_7. Read its daily listing/log; preserve cache.
$label end_SP_summer_7
$endif.SP_summer_7
$ifthen.LR_C1_summer_1 not exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1/summer/d1/COMPLETE.txt"
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1/summer/d1/FAILED_SOLVE.txt" $goto end_LR_C1_summer_1
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1/summer/d1/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=LR_C1 --SEASON=summer --DAY=1 --PREV=0 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/LR_C1/summer/d1/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/LR_C1/summer/d1/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: LR_C1_summer_1. Read its daily listing/log; preserve cache.
$label end_LR_C1_summer_1
$endif.LR_C1_summer_1
$ifthen.LR_C1_summer_2 not exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1/summer/d2/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1/summer/d1/COMPLETE.txt" $goto end_LR_C1_summer_2
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1/summer/d2/FAILED_SOLVE.txt" $goto end_LR_C1_summer_2
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1/summer/d2/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=LR_C1 --SEASON=summer --DAY=2 --PREV=1 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/LR_C1/summer/d2/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/LR_C1/summer/d2/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: LR_C1_summer_2. Read its daily listing/log; preserve cache.
$label end_LR_C1_summer_2
$endif.LR_C1_summer_2
$ifthen.LR_C1_summer_3 not exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1/summer/d3/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1/summer/d2/COMPLETE.txt" $goto end_LR_C1_summer_3
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1/summer/d3/FAILED_SOLVE.txt" $goto end_LR_C1_summer_3
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1/summer/d3/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=LR_C1 --SEASON=summer --DAY=3 --PREV=2 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/LR_C1/summer/d3/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/LR_C1/summer/d3/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: LR_C1_summer_3. Read its daily listing/log; preserve cache.
$label end_LR_C1_summer_3
$endif.LR_C1_summer_3
$ifthen.LR_C1_summer_4 not exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1/summer/d4/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1/summer/d3/COMPLETE.txt" $goto end_LR_C1_summer_4
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1/summer/d4/FAILED_SOLVE.txt" $goto end_LR_C1_summer_4
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1/summer/d4/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=LR_C1 --SEASON=summer --DAY=4 --PREV=3 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/LR_C1/summer/d4/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/LR_C1/summer/d4/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: LR_C1_summer_4. Read its daily listing/log; preserve cache.
$label end_LR_C1_summer_4
$endif.LR_C1_summer_4
$ifthen.LR_C1_summer_5 not exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1/summer/d5/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1/summer/d4/COMPLETE.txt" $goto end_LR_C1_summer_5
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1/summer/d5/FAILED_SOLVE.txt" $goto end_LR_C1_summer_5
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1/summer/d5/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=LR_C1 --SEASON=summer --DAY=5 --PREV=4 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/LR_C1/summer/d5/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/LR_C1/summer/d5/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: LR_C1_summer_5. Read its daily listing/log; preserve cache.
$label end_LR_C1_summer_5
$endif.LR_C1_summer_5
$ifthen.LR_C1_summer_6 not exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1/summer/d6/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1/summer/d5/COMPLETE.txt" $goto end_LR_C1_summer_6
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1/summer/d6/FAILED_SOLVE.txt" $goto end_LR_C1_summer_6
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1/summer/d6/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=LR_C1 --SEASON=summer --DAY=6 --PREV=5 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/LR_C1/summer/d6/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/LR_C1/summer/d6/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: LR_C1_summer_6. Read its daily listing/log; preserve cache.
$label end_LR_C1_summer_6
$endif.LR_C1_summer_6
$ifthen.LR_C1_summer_7 not exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1/summer/d7/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1/summer/d6/COMPLETE.txt" $goto end_LR_C1_summer_7
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1/summer/d7/FAILED_SOLVE.txt" $goto end_LR_C1_summer_7
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1/summer/d7/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=LR_C1 --SEASON=summer --DAY=7 --PREV=6 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/LR_C1/summer/d7/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/LR_C1/summer/d7/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: LR_C1_summer_7. Read its daily listing/log; preserve cache.
$label end_LR_C1_summer_7
$endif.LR_C1_summer_7
$ifthen.LR_C1e6_summer_1 not exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/summer/d1/COMPLETE.txt"
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/summer/d1/FAILED_SOLVE.txt" $goto end_LR_C1e6_summer_1
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/summer/d1/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=LR_C1e6 --SEASON=summer --DAY=1 --PREV=0 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/summer/d1/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/summer/d1/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: LR_C1e6_summer_1. Read its daily listing/log; preserve cache.
$label end_LR_C1e6_summer_1
$endif.LR_C1e6_summer_1
$ifthen.LR_C1e6_summer_2 not exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/summer/d2/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/summer/d1/COMPLETE.txt" $goto end_LR_C1e6_summer_2
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/summer/d2/FAILED_SOLVE.txt" $goto end_LR_C1e6_summer_2
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/summer/d2/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=LR_C1e6 --SEASON=summer --DAY=2 --PREV=1 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/summer/d2/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/summer/d2/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: LR_C1e6_summer_2. Read its daily listing/log; preserve cache.
$label end_LR_C1e6_summer_2
$endif.LR_C1e6_summer_2
$ifthen.LR_C1e6_summer_3 not exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/summer/d3/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/summer/d2/COMPLETE.txt" $goto end_LR_C1e6_summer_3
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/summer/d3/FAILED_SOLVE.txt" $goto end_LR_C1e6_summer_3
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/summer/d3/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=LR_C1e6 --SEASON=summer --DAY=3 --PREV=2 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/summer/d3/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/summer/d3/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: LR_C1e6_summer_3. Read its daily listing/log; preserve cache.
$label end_LR_C1e6_summer_3
$endif.LR_C1e6_summer_3
$ifthen.LR_C1e6_summer_4 not exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/summer/d4/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/summer/d3/COMPLETE.txt" $goto end_LR_C1e6_summer_4
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/summer/d4/FAILED_SOLVE.txt" $goto end_LR_C1e6_summer_4
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/summer/d4/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=LR_C1e6 --SEASON=summer --DAY=4 --PREV=3 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/summer/d4/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/summer/d4/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: LR_C1e6_summer_4. Read its daily listing/log; preserve cache.
$label end_LR_C1e6_summer_4
$endif.LR_C1e6_summer_4
$ifthen.LR_C1e6_summer_5 not exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/summer/d5/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/summer/d4/COMPLETE.txt" $goto end_LR_C1e6_summer_5
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/summer/d5/FAILED_SOLVE.txt" $goto end_LR_C1e6_summer_5
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/summer/d5/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=LR_C1e6 --SEASON=summer --DAY=5 --PREV=4 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/summer/d5/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/summer/d5/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: LR_C1e6_summer_5. Read its daily listing/log; preserve cache.
$label end_LR_C1e6_summer_5
$endif.LR_C1e6_summer_5
$ifthen.LR_C1e6_summer_6 not exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/summer/d6/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/summer/d5/COMPLETE.txt" $goto end_LR_C1e6_summer_6
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/summer/d6/FAILED_SOLVE.txt" $goto end_LR_C1e6_summer_6
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/summer/d6/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=LR_C1e6 --SEASON=summer --DAY=6 --PREV=5 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/summer/d6/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/summer/d6/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: LR_C1e6_summer_6. Read its daily listing/log; preserve cache.
$label end_LR_C1e6_summer_6
$endif.LR_C1e6_summer_6
$ifthen.LR_C1e6_summer_7 not exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/summer/d7/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/summer/d6/COMPLETE.txt" $goto end_LR_C1e6_summer_7
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/summer/d7/FAILED_SOLVE.txt" $goto end_LR_C1e6_summer_7
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/summer/d7/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=LR_C1e6 --SEASON=summer --DAY=7 --PREV=6 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/summer/d7/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/summer/d7/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: LR_C1e6_summer_7. Read its daily listing/log; preserve cache.
$label end_LR_C1e6_summer_7
$endif.LR_C1e6_summer_7
$ifthen.SVM_C01_summer_1 not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/summer/d1/COMPLETE.txt"
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/summer/d1/FAILED_SOLVE.txt" $goto end_SVM_C01_summer_1
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/summer/d1/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SVM_C01 --SEASON=summer --DAY=1 --PREV=0 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/summer/d1/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/summer/d1/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SVM_C01_summer_1. Read its daily listing/log; preserve cache.
$label end_SVM_C01_summer_1
$endif.SVM_C01_summer_1
$ifthen.SVM_C01_summer_2 not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/summer/d2/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/summer/d1/COMPLETE.txt" $goto end_SVM_C01_summer_2
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/summer/d2/FAILED_SOLVE.txt" $goto end_SVM_C01_summer_2
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/summer/d2/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SVM_C01 --SEASON=summer --DAY=2 --PREV=1 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/summer/d2/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/summer/d2/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SVM_C01_summer_2. Read its daily listing/log; preserve cache.
$label end_SVM_C01_summer_2
$endif.SVM_C01_summer_2
$ifthen.SVM_C01_summer_3 not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/summer/d3/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/summer/d2/COMPLETE.txt" $goto end_SVM_C01_summer_3
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/summer/d3/FAILED_SOLVE.txt" $goto end_SVM_C01_summer_3
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/summer/d3/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SVM_C01 --SEASON=summer --DAY=3 --PREV=2 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/summer/d3/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/summer/d3/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SVM_C01_summer_3. Read its daily listing/log; preserve cache.
$label end_SVM_C01_summer_3
$endif.SVM_C01_summer_3
$ifthen.SVM_C01_summer_4 not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/summer/d4/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/summer/d3/COMPLETE.txt" $goto end_SVM_C01_summer_4
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/summer/d4/FAILED_SOLVE.txt" $goto end_SVM_C01_summer_4
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/summer/d4/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SVM_C01 --SEASON=summer --DAY=4 --PREV=3 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/summer/d4/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/summer/d4/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SVM_C01_summer_4. Read its daily listing/log; preserve cache.
$label end_SVM_C01_summer_4
$endif.SVM_C01_summer_4
$ifthen.SVM_C01_summer_5 not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/summer/d5/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/summer/d4/COMPLETE.txt" $goto end_SVM_C01_summer_5
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/summer/d5/FAILED_SOLVE.txt" $goto end_SVM_C01_summer_5
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/summer/d5/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SVM_C01 --SEASON=summer --DAY=5 --PREV=4 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/summer/d5/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/summer/d5/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SVM_C01_summer_5. Read its daily listing/log; preserve cache.
$label end_SVM_C01_summer_5
$endif.SVM_C01_summer_5
$ifthen.SVM_C01_summer_6 not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/summer/d6/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/summer/d5/COMPLETE.txt" $goto end_SVM_C01_summer_6
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/summer/d6/FAILED_SOLVE.txt" $goto end_SVM_C01_summer_6
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/summer/d6/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SVM_C01 --SEASON=summer --DAY=6 --PREV=5 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/summer/d6/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/summer/d6/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SVM_C01_summer_6. Read its daily listing/log; preserve cache.
$label end_SVM_C01_summer_6
$endif.SVM_C01_summer_6
$ifthen.SVM_C01_summer_7 not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/summer/d7/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/summer/d6/COMPLETE.txt" $goto end_SVM_C01_summer_7
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/summer/d7/FAILED_SOLVE.txt" $goto end_SVM_C01_summer_7
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/summer/d7/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SVM_C01 --SEASON=summer --DAY=7 --PREV=6 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/summer/d7/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/summer/d7/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SVM_C01_summer_7. Read its daily listing/log; preserve cache.
$label end_SVM_C01_summer_7
$endif.SVM_C01_summer_7
$ifthen.SVM_C1_summer_1 not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/summer/d1/COMPLETE.txt"
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/summer/d1/FAILED_SOLVE.txt" $goto end_SVM_C1_summer_1
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/summer/d1/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SVM_C1 --SEASON=summer --DAY=1 --PREV=0 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/summer/d1/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/summer/d1/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SVM_C1_summer_1. Read its daily listing/log; preserve cache.
$label end_SVM_C1_summer_1
$endif.SVM_C1_summer_1
$ifthen.SVM_C1_summer_2 not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/summer/d2/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/summer/d1/COMPLETE.txt" $goto end_SVM_C1_summer_2
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/summer/d2/FAILED_SOLVE.txt" $goto end_SVM_C1_summer_2
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/summer/d2/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SVM_C1 --SEASON=summer --DAY=2 --PREV=1 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/summer/d2/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/summer/d2/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SVM_C1_summer_2. Read its daily listing/log; preserve cache.
$label end_SVM_C1_summer_2
$endif.SVM_C1_summer_2
$ifthen.SVM_C1_summer_3 not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/summer/d3/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/summer/d2/COMPLETE.txt" $goto end_SVM_C1_summer_3
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/summer/d3/FAILED_SOLVE.txt" $goto end_SVM_C1_summer_3
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/summer/d3/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SVM_C1 --SEASON=summer --DAY=3 --PREV=2 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/summer/d3/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/summer/d3/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SVM_C1_summer_3. Read its daily listing/log; preserve cache.
$label end_SVM_C1_summer_3
$endif.SVM_C1_summer_3
$ifthen.SVM_C1_summer_4 not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/summer/d4/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/summer/d3/COMPLETE.txt" $goto end_SVM_C1_summer_4
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/summer/d4/FAILED_SOLVE.txt" $goto end_SVM_C1_summer_4
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/summer/d4/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SVM_C1 --SEASON=summer --DAY=4 --PREV=3 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/summer/d4/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/summer/d4/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SVM_C1_summer_4. Read its daily listing/log; preserve cache.
$label end_SVM_C1_summer_4
$endif.SVM_C1_summer_4
$ifthen.SVM_C1_summer_5 not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/summer/d5/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/summer/d4/COMPLETE.txt" $goto end_SVM_C1_summer_5
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/summer/d5/FAILED_SOLVE.txt" $goto end_SVM_C1_summer_5
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/summer/d5/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SVM_C1 --SEASON=summer --DAY=5 --PREV=4 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/summer/d5/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/summer/d5/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SVM_C1_summer_5. Read its daily listing/log; preserve cache.
$label end_SVM_C1_summer_5
$endif.SVM_C1_summer_5
$ifthen.SVM_C1_summer_6 not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/summer/d6/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/summer/d5/COMPLETE.txt" $goto end_SVM_C1_summer_6
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/summer/d6/FAILED_SOLVE.txt" $goto end_SVM_C1_summer_6
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/summer/d6/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SVM_C1 --SEASON=summer --DAY=6 --PREV=5 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/summer/d6/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/summer/d6/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SVM_C1_summer_6. Read its daily listing/log; preserve cache.
$label end_SVM_C1_summer_6
$endif.SVM_C1_summer_6
$ifthen.SVM_C1_summer_7 not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/summer/d7/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/summer/d6/COMPLETE.txt" $goto end_SVM_C1_summer_7
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/summer/d7/FAILED_SOLVE.txt" $goto end_SVM_C1_summer_7
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/summer/d7/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SVM_C1 --SEASON=summer --DAY=7 --PREV=6 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/summer/d7/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/summer/d7/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SVM_C1_summer_7. Read its daily listing/log; preserve cache.
$label end_SVM_C1_summer_7
$endif.SVM_C1_summer_7
$ifthen.SVM_C10_summer_1 not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/summer/d1/COMPLETE.txt"
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/summer/d1/FAILED_SOLVE.txt" $goto end_SVM_C10_summer_1
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/summer/d1/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SVM_C10 --SEASON=summer --DAY=1 --PREV=0 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/summer/d1/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/summer/d1/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SVM_C10_summer_1. Read its daily listing/log; preserve cache.
$label end_SVM_C10_summer_1
$endif.SVM_C10_summer_1
$ifthen.SVM_C10_summer_2 not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/summer/d2/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/summer/d1/COMPLETE.txt" $goto end_SVM_C10_summer_2
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/summer/d2/FAILED_SOLVE.txt" $goto end_SVM_C10_summer_2
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/summer/d2/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SVM_C10 --SEASON=summer --DAY=2 --PREV=1 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/summer/d2/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/summer/d2/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SVM_C10_summer_2. Read its daily listing/log; preserve cache.
$label end_SVM_C10_summer_2
$endif.SVM_C10_summer_2
$ifthen.SVM_C10_summer_3 not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/summer/d3/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/summer/d2/COMPLETE.txt" $goto end_SVM_C10_summer_3
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/summer/d3/FAILED_SOLVE.txt" $goto end_SVM_C10_summer_3
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/summer/d3/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SVM_C10 --SEASON=summer --DAY=3 --PREV=2 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/summer/d3/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/summer/d3/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SVM_C10_summer_3. Read its daily listing/log; preserve cache.
$label end_SVM_C10_summer_3
$endif.SVM_C10_summer_3
$ifthen.SVM_C10_summer_4 not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/summer/d4/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/summer/d3/COMPLETE.txt" $goto end_SVM_C10_summer_4
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/summer/d4/FAILED_SOLVE.txt" $goto end_SVM_C10_summer_4
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/summer/d4/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SVM_C10 --SEASON=summer --DAY=4 --PREV=3 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/summer/d4/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/summer/d4/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SVM_C10_summer_4. Read its daily listing/log; preserve cache.
$label end_SVM_C10_summer_4
$endif.SVM_C10_summer_4
$ifthen.SVM_C10_summer_5 not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/summer/d5/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/summer/d4/COMPLETE.txt" $goto end_SVM_C10_summer_5
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/summer/d5/FAILED_SOLVE.txt" $goto end_SVM_C10_summer_5
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/summer/d5/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SVM_C10 --SEASON=summer --DAY=5 --PREV=4 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/summer/d5/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/summer/d5/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SVM_C10_summer_5. Read its daily listing/log; preserve cache.
$label end_SVM_C10_summer_5
$endif.SVM_C10_summer_5
$ifthen.SVM_C10_summer_6 not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/summer/d6/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/summer/d5/COMPLETE.txt" $goto end_SVM_C10_summer_6
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/summer/d6/FAILED_SOLVE.txt" $goto end_SVM_C10_summer_6
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/summer/d6/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SVM_C10 --SEASON=summer --DAY=6 --PREV=5 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/summer/d6/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/summer/d6/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SVM_C10_summer_6. Read its daily listing/log; preserve cache.
$label end_SVM_C10_summer_6
$endif.SVM_C10_summer_6
$ifthen.SVM_C10_summer_7 not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/summer/d7/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/summer/d6/COMPLETE.txt" $goto end_SVM_C10_summer_7
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/summer/d7/FAILED_SOLVE.txt" $goto end_SVM_C10_summer_7
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/summer/d7/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SVM_C10 --SEASON=summer --DAY=7 --PREV=6 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/summer/d7/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/summer/d7/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SVM_C10_summer_7. Read its daily listing/log; preserve cache.
$label end_SVM_C10_summer_7
$endif.SVM_C10_summer_7
$ifthen.LDA_summer_1 not exist "Results_Seasonal/LP4S_74ee31255d0f/LDA/summer/d1/COMPLETE.txt"
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LDA/summer/d1/FAILED_SOLVE.txt" $goto end_LDA_summer_1
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LDA/summer/d1/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=LDA --SEASON=summer --DAY=1 --PREV=0 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/LDA/summer/d1/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/LDA/summer/d1/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: LDA_summer_1. Read its daily listing/log; preserve cache.
$label end_LDA_summer_1
$endif.LDA_summer_1
$ifthen.LDA_summer_2 not exist "Results_Seasonal/LP4S_74ee31255d0f/LDA/summer/d2/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/LDA/summer/d1/COMPLETE.txt" $goto end_LDA_summer_2
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LDA/summer/d2/FAILED_SOLVE.txt" $goto end_LDA_summer_2
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LDA/summer/d2/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=LDA --SEASON=summer --DAY=2 --PREV=1 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/LDA/summer/d2/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/LDA/summer/d2/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: LDA_summer_2. Read its daily listing/log; preserve cache.
$label end_LDA_summer_2
$endif.LDA_summer_2
$ifthen.LDA_summer_3 not exist "Results_Seasonal/LP4S_74ee31255d0f/LDA/summer/d3/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/LDA/summer/d2/COMPLETE.txt" $goto end_LDA_summer_3
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LDA/summer/d3/FAILED_SOLVE.txt" $goto end_LDA_summer_3
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LDA/summer/d3/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=LDA --SEASON=summer --DAY=3 --PREV=2 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/LDA/summer/d3/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/LDA/summer/d3/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: LDA_summer_3. Read its daily listing/log; preserve cache.
$label end_LDA_summer_3
$endif.LDA_summer_3
$ifthen.LDA_summer_4 not exist "Results_Seasonal/LP4S_74ee31255d0f/LDA/summer/d4/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/LDA/summer/d3/COMPLETE.txt" $goto end_LDA_summer_4
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LDA/summer/d4/FAILED_SOLVE.txt" $goto end_LDA_summer_4
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LDA/summer/d4/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=LDA --SEASON=summer --DAY=4 --PREV=3 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/LDA/summer/d4/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/LDA/summer/d4/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: LDA_summer_4. Read its daily listing/log; preserve cache.
$label end_LDA_summer_4
$endif.LDA_summer_4
$ifthen.LDA_summer_5 not exist "Results_Seasonal/LP4S_74ee31255d0f/LDA/summer/d5/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/LDA/summer/d4/COMPLETE.txt" $goto end_LDA_summer_5
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LDA/summer/d5/FAILED_SOLVE.txt" $goto end_LDA_summer_5
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LDA/summer/d5/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=LDA --SEASON=summer --DAY=5 --PREV=4 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/LDA/summer/d5/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/LDA/summer/d5/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: LDA_summer_5. Read its daily listing/log; preserve cache.
$label end_LDA_summer_5
$endif.LDA_summer_5
$ifthen.LDA_summer_6 not exist "Results_Seasonal/LP4S_74ee31255d0f/LDA/summer/d6/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/LDA/summer/d5/COMPLETE.txt" $goto end_LDA_summer_6
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LDA/summer/d6/FAILED_SOLVE.txt" $goto end_LDA_summer_6
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LDA/summer/d6/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=LDA --SEASON=summer --DAY=6 --PREV=5 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/LDA/summer/d6/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/LDA/summer/d6/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: LDA_summer_6. Read its daily listing/log; preserve cache.
$label end_LDA_summer_6
$endif.LDA_summer_6
$ifthen.LDA_summer_7 not exist "Results_Seasonal/LP4S_74ee31255d0f/LDA/summer/d7/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/LDA/summer/d6/COMPLETE.txt" $goto end_LDA_summer_7
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LDA/summer/d7/FAILED_SOLVE.txt" $goto end_LDA_summer_7
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LDA/summer/d7/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=LDA --SEASON=summer --DAY=7 --PREV=6 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/LDA/summer/d7/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/LDA/summer/d7/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: LDA_summer_7. Read its daily listing/log; preserve cache.
$label end_LDA_summer_7
$endif.LDA_summer_7
$ifthen.SGD_Log_summer_1 not exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/summer/d1/COMPLETE.txt"
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/summer/d1/FAILED_SOLVE.txt" $goto end_SGD_Log_summer_1
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/summer/d1/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SGD_Log --SEASON=summer --DAY=1 --PREV=0 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/summer/d1/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/summer/d1/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SGD_Log_summer_1. Read its daily listing/log; preserve cache.
$label end_SGD_Log_summer_1
$endif.SGD_Log_summer_1
$ifthen.SGD_Log_summer_2 not exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/summer/d2/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/summer/d1/COMPLETE.txt" $goto end_SGD_Log_summer_2
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/summer/d2/FAILED_SOLVE.txt" $goto end_SGD_Log_summer_2
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/summer/d2/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SGD_Log --SEASON=summer --DAY=2 --PREV=1 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/summer/d2/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/summer/d2/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SGD_Log_summer_2. Read its daily listing/log; preserve cache.
$label end_SGD_Log_summer_2
$endif.SGD_Log_summer_2
$ifthen.SGD_Log_summer_3 not exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/summer/d3/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/summer/d2/COMPLETE.txt" $goto end_SGD_Log_summer_3
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/summer/d3/FAILED_SOLVE.txt" $goto end_SGD_Log_summer_3
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/summer/d3/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SGD_Log --SEASON=summer --DAY=3 --PREV=2 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/summer/d3/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/summer/d3/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SGD_Log_summer_3. Read its daily listing/log; preserve cache.
$label end_SGD_Log_summer_3
$endif.SGD_Log_summer_3
$ifthen.SGD_Log_summer_4 not exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/summer/d4/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/summer/d3/COMPLETE.txt" $goto end_SGD_Log_summer_4
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/summer/d4/FAILED_SOLVE.txt" $goto end_SGD_Log_summer_4
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/summer/d4/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SGD_Log --SEASON=summer --DAY=4 --PREV=3 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/summer/d4/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/summer/d4/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SGD_Log_summer_4. Read its daily listing/log; preserve cache.
$label end_SGD_Log_summer_4
$endif.SGD_Log_summer_4
$ifthen.SGD_Log_summer_5 not exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/summer/d5/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/summer/d4/COMPLETE.txt" $goto end_SGD_Log_summer_5
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/summer/d5/FAILED_SOLVE.txt" $goto end_SGD_Log_summer_5
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/summer/d5/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SGD_Log --SEASON=summer --DAY=5 --PREV=4 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/summer/d5/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/summer/d5/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SGD_Log_summer_5. Read its daily listing/log; preserve cache.
$label end_SGD_Log_summer_5
$endif.SGD_Log_summer_5
$ifthen.SGD_Log_summer_6 not exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/summer/d6/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/summer/d5/COMPLETE.txt" $goto end_SGD_Log_summer_6
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/summer/d6/FAILED_SOLVE.txt" $goto end_SGD_Log_summer_6
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/summer/d6/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SGD_Log --SEASON=summer --DAY=6 --PREV=5 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/summer/d6/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/summer/d6/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SGD_Log_summer_6. Read its daily listing/log; preserve cache.
$label end_SGD_Log_summer_6
$endif.SGD_Log_summer_6
$ifthen.SGD_Log_summer_7 not exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/summer/d7/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/summer/d6/COMPLETE.txt" $goto end_SGD_Log_summer_7
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/summer/d7/FAILED_SOLVE.txt" $goto end_SGD_Log_summer_7
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/summer/d7/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SGD_Log --SEASON=summer --DAY=7 --PREV=6 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/summer/d7/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/summer/d7/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SGD_Log_summer_7. Read its daily listing/log; preserve cache.
$label end_SGD_Log_summer_7
$endif.SGD_Log_summer_7
$ifthen.SGD_Hinge_summer_1 not exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/summer/d1/COMPLETE.txt"
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/summer/d1/FAILED_SOLVE.txt" $goto end_SGD_Hinge_summer_1
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/summer/d1/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SGD_Hinge --SEASON=summer --DAY=1 --PREV=0 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/summer/d1/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/summer/d1/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SGD_Hinge_summer_1. Read its daily listing/log; preserve cache.
$label end_SGD_Hinge_summer_1
$endif.SGD_Hinge_summer_1
$ifthen.SGD_Hinge_summer_2 not exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/summer/d2/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/summer/d1/COMPLETE.txt" $goto end_SGD_Hinge_summer_2
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/summer/d2/FAILED_SOLVE.txt" $goto end_SGD_Hinge_summer_2
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/summer/d2/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SGD_Hinge --SEASON=summer --DAY=2 --PREV=1 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/summer/d2/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/summer/d2/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SGD_Hinge_summer_2. Read its daily listing/log; preserve cache.
$label end_SGD_Hinge_summer_2
$endif.SGD_Hinge_summer_2
$ifthen.SGD_Hinge_summer_3 not exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/summer/d3/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/summer/d2/COMPLETE.txt" $goto end_SGD_Hinge_summer_3
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/summer/d3/FAILED_SOLVE.txt" $goto end_SGD_Hinge_summer_3
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/summer/d3/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SGD_Hinge --SEASON=summer --DAY=3 --PREV=2 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/summer/d3/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/summer/d3/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SGD_Hinge_summer_3. Read its daily listing/log; preserve cache.
$label end_SGD_Hinge_summer_3
$endif.SGD_Hinge_summer_3
$ifthen.SGD_Hinge_summer_4 not exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/summer/d4/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/summer/d3/COMPLETE.txt" $goto end_SGD_Hinge_summer_4
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/summer/d4/FAILED_SOLVE.txt" $goto end_SGD_Hinge_summer_4
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/summer/d4/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SGD_Hinge --SEASON=summer --DAY=4 --PREV=3 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/summer/d4/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/summer/d4/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SGD_Hinge_summer_4. Read its daily listing/log; preserve cache.
$label end_SGD_Hinge_summer_4
$endif.SGD_Hinge_summer_4
$ifthen.SGD_Hinge_summer_5 not exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/summer/d5/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/summer/d4/COMPLETE.txt" $goto end_SGD_Hinge_summer_5
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/summer/d5/FAILED_SOLVE.txt" $goto end_SGD_Hinge_summer_5
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/summer/d5/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SGD_Hinge --SEASON=summer --DAY=5 --PREV=4 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/summer/d5/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/summer/d5/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SGD_Hinge_summer_5. Read its daily listing/log; preserve cache.
$label end_SGD_Hinge_summer_5
$endif.SGD_Hinge_summer_5
$ifthen.SGD_Hinge_summer_6 not exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/summer/d6/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/summer/d5/COMPLETE.txt" $goto end_SGD_Hinge_summer_6
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/summer/d6/FAILED_SOLVE.txt" $goto end_SGD_Hinge_summer_6
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/summer/d6/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SGD_Hinge --SEASON=summer --DAY=6 --PREV=5 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/summer/d6/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/summer/d6/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SGD_Hinge_summer_6. Read its daily listing/log; preserve cache.
$label end_SGD_Hinge_summer_6
$endif.SGD_Hinge_summer_6
$ifthen.SGD_Hinge_summer_7 not exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/summer/d7/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/summer/d6/COMPLETE.txt" $goto end_SGD_Hinge_summer_7
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/summer/d7/FAILED_SOLVE.txt" $goto end_SGD_Hinge_summer_7
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/summer/d7/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SGD_Hinge --SEASON=summer --DAY=7 --PREV=6 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/summer/d7/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/summer/d7/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SGD_Hinge_summer_7. Read its daily listing/log; preserve cache.
$label end_SGD_Hinge_summer_7
$endif.SGD_Hinge_summer_7
$ifthen.PA_summer_1 not exist "Results_Seasonal/LP4S_74ee31255d0f/PA/summer/d1/COMPLETE.txt"
$if exist "Results_Seasonal/LP4S_74ee31255d0f/PA/summer/d1/FAILED_SOLVE.txt" $goto end_PA_summer_1
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/PA/summer/d1/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=PA --SEASON=summer --DAY=1 --PREV=0 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/PA/summer/d1/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/PA/summer/d1/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: PA_summer_1. Read its daily listing/log; preserve cache.
$label end_PA_summer_1
$endif.PA_summer_1
$ifthen.PA_summer_2 not exist "Results_Seasonal/LP4S_74ee31255d0f/PA/summer/d2/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/PA/summer/d1/COMPLETE.txt" $goto end_PA_summer_2
$if exist "Results_Seasonal/LP4S_74ee31255d0f/PA/summer/d2/FAILED_SOLVE.txt" $goto end_PA_summer_2
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/PA/summer/d2/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=PA --SEASON=summer --DAY=2 --PREV=1 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/PA/summer/d2/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/PA/summer/d2/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: PA_summer_2. Read its daily listing/log; preserve cache.
$label end_PA_summer_2
$endif.PA_summer_2
$ifthen.PA_summer_3 not exist "Results_Seasonal/LP4S_74ee31255d0f/PA/summer/d3/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/PA/summer/d2/COMPLETE.txt" $goto end_PA_summer_3
$if exist "Results_Seasonal/LP4S_74ee31255d0f/PA/summer/d3/FAILED_SOLVE.txt" $goto end_PA_summer_3
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/PA/summer/d3/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=PA --SEASON=summer --DAY=3 --PREV=2 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/PA/summer/d3/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/PA/summer/d3/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: PA_summer_3. Read its daily listing/log; preserve cache.
$label end_PA_summer_3
$endif.PA_summer_3
$ifthen.PA_summer_4 not exist "Results_Seasonal/LP4S_74ee31255d0f/PA/summer/d4/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/PA/summer/d3/COMPLETE.txt" $goto end_PA_summer_4
$if exist "Results_Seasonal/LP4S_74ee31255d0f/PA/summer/d4/FAILED_SOLVE.txt" $goto end_PA_summer_4
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/PA/summer/d4/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=PA --SEASON=summer --DAY=4 --PREV=3 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/PA/summer/d4/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/PA/summer/d4/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: PA_summer_4. Read its daily listing/log; preserve cache.
$label end_PA_summer_4
$endif.PA_summer_4
$ifthen.PA_summer_5 not exist "Results_Seasonal/LP4S_74ee31255d0f/PA/summer/d5/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/PA/summer/d4/COMPLETE.txt" $goto end_PA_summer_5
$if exist "Results_Seasonal/LP4S_74ee31255d0f/PA/summer/d5/FAILED_SOLVE.txt" $goto end_PA_summer_5
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/PA/summer/d5/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=PA --SEASON=summer --DAY=5 --PREV=4 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/PA/summer/d5/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/PA/summer/d5/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: PA_summer_5. Read its daily listing/log; preserve cache.
$label end_PA_summer_5
$endif.PA_summer_5
$ifthen.PA_summer_6 not exist "Results_Seasonal/LP4S_74ee31255d0f/PA/summer/d6/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/PA/summer/d5/COMPLETE.txt" $goto end_PA_summer_6
$if exist "Results_Seasonal/LP4S_74ee31255d0f/PA/summer/d6/FAILED_SOLVE.txt" $goto end_PA_summer_6
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/PA/summer/d6/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=PA --SEASON=summer --DAY=6 --PREV=5 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/PA/summer/d6/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/PA/summer/d6/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: PA_summer_6. Read its daily listing/log; preserve cache.
$label end_PA_summer_6
$endif.PA_summer_6
$ifthen.PA_summer_7 not exist "Results_Seasonal/LP4S_74ee31255d0f/PA/summer/d7/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/PA/summer/d6/COMPLETE.txt" $goto end_PA_summer_7
$if exist "Results_Seasonal/LP4S_74ee31255d0f/PA/summer/d7/FAILED_SOLVE.txt" $goto end_PA_summer_7
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/PA/summer/d7/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=PA --SEASON=summer --DAY=7 --PREV=6 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/PA/summer/d7/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/PA/summer/d7/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: PA_summer_7. Read its daily listing/log; preserve cache.
$label end_PA_summer_7
$endif.PA_summer_7
$ifthen.REF050_summer_1 not exist "Results_Seasonal/LP4S_74ee31255d0f/REF050/summer/d1/COMPLETE.txt"
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF050/summer/d1/FAILED_SOLVE.txt" $goto end_REF050_summer_1
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF050/summer/d1/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=REF050 --SEASON=summer --DAY=1 --PREV=0 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/REF050/summer/d1/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/REF050/summer/d1/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: REF050_summer_1. Read its daily listing/log; preserve cache.
$label end_REF050_summer_1
$endif.REF050_summer_1
$ifthen.REF050_summer_2 not exist "Results_Seasonal/LP4S_74ee31255d0f/REF050/summer/d2/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/REF050/summer/d1/COMPLETE.txt" $goto end_REF050_summer_2
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF050/summer/d2/FAILED_SOLVE.txt" $goto end_REF050_summer_2
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF050/summer/d2/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=REF050 --SEASON=summer --DAY=2 --PREV=1 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/REF050/summer/d2/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/REF050/summer/d2/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: REF050_summer_2. Read its daily listing/log; preserve cache.
$label end_REF050_summer_2
$endif.REF050_summer_2
$ifthen.REF050_summer_3 not exist "Results_Seasonal/LP4S_74ee31255d0f/REF050/summer/d3/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/REF050/summer/d2/COMPLETE.txt" $goto end_REF050_summer_3
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF050/summer/d3/FAILED_SOLVE.txt" $goto end_REF050_summer_3
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF050/summer/d3/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=REF050 --SEASON=summer --DAY=3 --PREV=2 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/REF050/summer/d3/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/REF050/summer/d3/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: REF050_summer_3. Read its daily listing/log; preserve cache.
$label end_REF050_summer_3
$endif.REF050_summer_3
$ifthen.REF050_summer_4 not exist "Results_Seasonal/LP4S_74ee31255d0f/REF050/summer/d4/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/REF050/summer/d3/COMPLETE.txt" $goto end_REF050_summer_4
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF050/summer/d4/FAILED_SOLVE.txt" $goto end_REF050_summer_4
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF050/summer/d4/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=REF050 --SEASON=summer --DAY=4 --PREV=3 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/REF050/summer/d4/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/REF050/summer/d4/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: REF050_summer_4. Read its daily listing/log; preserve cache.
$label end_REF050_summer_4
$endif.REF050_summer_4
$ifthen.REF050_summer_5 not exist "Results_Seasonal/LP4S_74ee31255d0f/REF050/summer/d5/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/REF050/summer/d4/COMPLETE.txt" $goto end_REF050_summer_5
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF050/summer/d5/FAILED_SOLVE.txt" $goto end_REF050_summer_5
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF050/summer/d5/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=REF050 --SEASON=summer --DAY=5 --PREV=4 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/REF050/summer/d5/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/REF050/summer/d5/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: REF050_summer_5. Read its daily listing/log; preserve cache.
$label end_REF050_summer_5
$endif.REF050_summer_5
$ifthen.REF050_summer_6 not exist "Results_Seasonal/LP4S_74ee31255d0f/REF050/summer/d6/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/REF050/summer/d5/COMPLETE.txt" $goto end_REF050_summer_6
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF050/summer/d6/FAILED_SOLVE.txt" $goto end_REF050_summer_6
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF050/summer/d6/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=REF050 --SEASON=summer --DAY=6 --PREV=5 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/REF050/summer/d6/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/REF050/summer/d6/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: REF050_summer_6. Read its daily listing/log; preserve cache.
$label end_REF050_summer_6
$endif.REF050_summer_6
$ifthen.REF050_summer_7 not exist "Results_Seasonal/LP4S_74ee31255d0f/REF050/summer/d7/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/REF050/summer/d6/COMPLETE.txt" $goto end_REF050_summer_7
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF050/summer/d7/FAILED_SOLVE.txt" $goto end_REF050_summer_7
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF050/summer/d7/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=REF050 --SEASON=summer --DAY=7 --PREV=6 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/REF050/summer/d7/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/REF050/summer/d7/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: REF050_summer_7. Read its daily listing/log; preserve cache.
$label end_REF050_summer_7
$endif.REF050_summer_7
$ifthen.REF090_summer_1 not exist "Results_Seasonal/LP4S_74ee31255d0f/REF090/summer/d1/COMPLETE.txt"
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF090/summer/d1/FAILED_SOLVE.txt" $goto end_REF090_summer_1
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF090/summer/d1/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=REF090 --SEASON=summer --DAY=1 --PREV=0 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/REF090/summer/d1/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/REF090/summer/d1/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: REF090_summer_1. Read its daily listing/log; preserve cache.
$label end_REF090_summer_1
$endif.REF090_summer_1
$ifthen.REF090_summer_2 not exist "Results_Seasonal/LP4S_74ee31255d0f/REF090/summer/d2/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/REF090/summer/d1/COMPLETE.txt" $goto end_REF090_summer_2
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF090/summer/d2/FAILED_SOLVE.txt" $goto end_REF090_summer_2
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF090/summer/d2/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=REF090 --SEASON=summer --DAY=2 --PREV=1 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/REF090/summer/d2/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/REF090/summer/d2/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: REF090_summer_2. Read its daily listing/log; preserve cache.
$label end_REF090_summer_2
$endif.REF090_summer_2
$ifthen.REF090_summer_3 not exist "Results_Seasonal/LP4S_74ee31255d0f/REF090/summer/d3/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/REF090/summer/d2/COMPLETE.txt" $goto end_REF090_summer_3
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF090/summer/d3/FAILED_SOLVE.txt" $goto end_REF090_summer_3
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF090/summer/d3/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=REF090 --SEASON=summer --DAY=3 --PREV=2 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/REF090/summer/d3/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/REF090/summer/d3/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: REF090_summer_3. Read its daily listing/log; preserve cache.
$label end_REF090_summer_3
$endif.REF090_summer_3
$ifthen.REF090_summer_4 not exist "Results_Seasonal/LP4S_74ee31255d0f/REF090/summer/d4/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/REF090/summer/d3/COMPLETE.txt" $goto end_REF090_summer_4
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF090/summer/d4/FAILED_SOLVE.txt" $goto end_REF090_summer_4
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF090/summer/d4/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=REF090 --SEASON=summer --DAY=4 --PREV=3 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/REF090/summer/d4/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/REF090/summer/d4/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: REF090_summer_4. Read its daily listing/log; preserve cache.
$label end_REF090_summer_4
$endif.REF090_summer_4
$ifthen.REF090_summer_5 not exist "Results_Seasonal/LP4S_74ee31255d0f/REF090/summer/d5/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/REF090/summer/d4/COMPLETE.txt" $goto end_REF090_summer_5
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF090/summer/d5/FAILED_SOLVE.txt" $goto end_REF090_summer_5
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF090/summer/d5/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=REF090 --SEASON=summer --DAY=5 --PREV=4 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/REF090/summer/d5/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/REF090/summer/d5/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: REF090_summer_5. Read its daily listing/log; preserve cache.
$label end_REF090_summer_5
$endif.REF090_summer_5
$ifthen.REF090_summer_6 not exist "Results_Seasonal/LP4S_74ee31255d0f/REF090/summer/d6/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/REF090/summer/d5/COMPLETE.txt" $goto end_REF090_summer_6
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF090/summer/d6/FAILED_SOLVE.txt" $goto end_REF090_summer_6
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF090/summer/d6/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=REF090 --SEASON=summer --DAY=6 --PREV=5 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/REF090/summer/d6/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/REF090/summer/d6/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: REF090_summer_6. Read its daily listing/log; preserve cache.
$label end_REF090_summer_6
$endif.REF090_summer_6
$ifthen.REF090_summer_7 not exist "Results_Seasonal/LP4S_74ee31255d0f/REF090/summer/d7/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/REF090/summer/d6/COMPLETE.txt" $goto end_REF090_summer_7
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF090/summer/d7/FAILED_SOLVE.txt" $goto end_REF090_summer_7
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF090/summer/d7/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=REF090 --SEASON=summer --DAY=7 --PREV=6 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/REF090/summer/d7/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/REF090/summer/d7/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: REF090_summer_7. Read its daily listing/log; preserve cache.
$label end_REF090_summer_7
$endif.REF090_summer_7
$ifthen.REF095_summer_1 not exist "Results_Seasonal/LP4S_74ee31255d0f/REF095/summer/d1/COMPLETE.txt"
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF095/summer/d1/FAILED_SOLVE.txt" $goto end_REF095_summer_1
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF095/summer/d1/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=REF095 --SEASON=summer --DAY=1 --PREV=0 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/REF095/summer/d1/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/REF095/summer/d1/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: REF095_summer_1. Read its daily listing/log; preserve cache.
$label end_REF095_summer_1
$endif.REF095_summer_1
$ifthen.REF095_summer_2 not exist "Results_Seasonal/LP4S_74ee31255d0f/REF095/summer/d2/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/REF095/summer/d1/COMPLETE.txt" $goto end_REF095_summer_2
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF095/summer/d2/FAILED_SOLVE.txt" $goto end_REF095_summer_2
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF095/summer/d2/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=REF095 --SEASON=summer --DAY=2 --PREV=1 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/REF095/summer/d2/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/REF095/summer/d2/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: REF095_summer_2. Read its daily listing/log; preserve cache.
$label end_REF095_summer_2
$endif.REF095_summer_2
$ifthen.REF095_summer_3 not exist "Results_Seasonal/LP4S_74ee31255d0f/REF095/summer/d3/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/REF095/summer/d2/COMPLETE.txt" $goto end_REF095_summer_3
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF095/summer/d3/FAILED_SOLVE.txt" $goto end_REF095_summer_3
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF095/summer/d3/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=REF095 --SEASON=summer --DAY=3 --PREV=2 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/REF095/summer/d3/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/REF095/summer/d3/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: REF095_summer_3. Read its daily listing/log; preserve cache.
$label end_REF095_summer_3
$endif.REF095_summer_3
$ifthen.REF095_summer_4 not exist "Results_Seasonal/LP4S_74ee31255d0f/REF095/summer/d4/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/REF095/summer/d3/COMPLETE.txt" $goto end_REF095_summer_4
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF095/summer/d4/FAILED_SOLVE.txt" $goto end_REF095_summer_4
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF095/summer/d4/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=REF095 --SEASON=summer --DAY=4 --PREV=3 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/REF095/summer/d4/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/REF095/summer/d4/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: REF095_summer_4. Read its daily listing/log; preserve cache.
$label end_REF095_summer_4
$endif.REF095_summer_4
$ifthen.REF095_summer_5 not exist "Results_Seasonal/LP4S_74ee31255d0f/REF095/summer/d5/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/REF095/summer/d4/COMPLETE.txt" $goto end_REF095_summer_5
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF095/summer/d5/FAILED_SOLVE.txt" $goto end_REF095_summer_5
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF095/summer/d5/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=REF095 --SEASON=summer --DAY=5 --PREV=4 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/REF095/summer/d5/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/REF095/summer/d5/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: REF095_summer_5. Read its daily listing/log; preserve cache.
$label end_REF095_summer_5
$endif.REF095_summer_5
$ifthen.REF095_summer_6 not exist "Results_Seasonal/LP4S_74ee31255d0f/REF095/summer/d6/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/REF095/summer/d5/COMPLETE.txt" $goto end_REF095_summer_6
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF095/summer/d6/FAILED_SOLVE.txt" $goto end_REF095_summer_6
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF095/summer/d6/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=REF095 --SEASON=summer --DAY=6 --PREV=5 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/REF095/summer/d6/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/REF095/summer/d6/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: REF095_summer_6. Read its daily listing/log; preserve cache.
$label end_REF095_summer_6
$endif.REF095_summer_6
$ifthen.REF095_summer_7 not exist "Results_Seasonal/LP4S_74ee31255d0f/REF095/summer/d7/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/REF095/summer/d6/COMPLETE.txt" $goto end_REF095_summer_7
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF095/summer/d7/FAILED_SOLVE.txt" $goto end_REF095_summer_7
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF095/summer/d7/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=REF095 --SEASON=summer --DAY=7 --PREV=6 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/REF095/summer/d7/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/REF095/summer/d7/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: REF095_summer_7. Read its daily listing/log; preserve cache.
$label end_REF095_summer_7
$endif.REF095_summer_7
$ifthen.BC_autumn_1 not exist "Results_Seasonal/LP4S_74ee31255d0f/BC/autumn/d1/COMPLETE.txt"
$if exist "Results_Seasonal/LP4S_74ee31255d0f/BC/autumn/d1/FAILED_SOLVE.txt" $goto end_BC_autumn_1
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/BC/autumn/d1/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=BC --SEASON=autumn --DAY=1 --PREV=0 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/BC/autumn/d1/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/BC/autumn/d1/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: BC_autumn_1. Read its daily listing/log; preserve cache.
$label end_BC_autumn_1
$endif.BC_autumn_1
$ifthen.BC_autumn_2 not exist "Results_Seasonal/LP4S_74ee31255d0f/BC/autumn/d2/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/BC/autumn/d1/COMPLETE.txt" $goto end_BC_autumn_2
$if exist "Results_Seasonal/LP4S_74ee31255d0f/BC/autumn/d2/FAILED_SOLVE.txt" $goto end_BC_autumn_2
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/BC/autumn/d2/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=BC --SEASON=autumn --DAY=2 --PREV=1 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/BC/autumn/d2/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/BC/autumn/d2/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: BC_autumn_2. Read its daily listing/log; preserve cache.
$label end_BC_autumn_2
$endif.BC_autumn_2
$ifthen.BC_autumn_3 not exist "Results_Seasonal/LP4S_74ee31255d0f/BC/autumn/d3/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/BC/autumn/d2/COMPLETE.txt" $goto end_BC_autumn_3
$if exist "Results_Seasonal/LP4S_74ee31255d0f/BC/autumn/d3/FAILED_SOLVE.txt" $goto end_BC_autumn_3
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/BC/autumn/d3/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=BC --SEASON=autumn --DAY=3 --PREV=2 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/BC/autumn/d3/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/BC/autumn/d3/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: BC_autumn_3. Read its daily listing/log; preserve cache.
$label end_BC_autumn_3
$endif.BC_autumn_3
$ifthen.BC_autumn_4 not exist "Results_Seasonal/LP4S_74ee31255d0f/BC/autumn/d4/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/BC/autumn/d3/COMPLETE.txt" $goto end_BC_autumn_4
$if exist "Results_Seasonal/LP4S_74ee31255d0f/BC/autumn/d4/FAILED_SOLVE.txt" $goto end_BC_autumn_4
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/BC/autumn/d4/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=BC --SEASON=autumn --DAY=4 --PREV=3 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/BC/autumn/d4/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/BC/autumn/d4/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: BC_autumn_4. Read its daily listing/log; preserve cache.
$label end_BC_autumn_4
$endif.BC_autumn_4
$ifthen.BC_autumn_5 not exist "Results_Seasonal/LP4S_74ee31255d0f/BC/autumn/d5/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/BC/autumn/d4/COMPLETE.txt" $goto end_BC_autumn_5
$if exist "Results_Seasonal/LP4S_74ee31255d0f/BC/autumn/d5/FAILED_SOLVE.txt" $goto end_BC_autumn_5
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/BC/autumn/d5/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=BC --SEASON=autumn --DAY=5 --PREV=4 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/BC/autumn/d5/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/BC/autumn/d5/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: BC_autumn_5. Read its daily listing/log; preserve cache.
$label end_BC_autumn_5
$endif.BC_autumn_5
$ifthen.BC_autumn_6 not exist "Results_Seasonal/LP4S_74ee31255d0f/BC/autumn/d6/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/BC/autumn/d5/COMPLETE.txt" $goto end_BC_autumn_6
$if exist "Results_Seasonal/LP4S_74ee31255d0f/BC/autumn/d6/FAILED_SOLVE.txt" $goto end_BC_autumn_6
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/BC/autumn/d6/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=BC --SEASON=autumn --DAY=6 --PREV=5 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/BC/autumn/d6/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/BC/autumn/d6/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: BC_autumn_6. Read its daily listing/log; preserve cache.
$label end_BC_autumn_6
$endif.BC_autumn_6
$ifthen.BC_autumn_7 not exist "Results_Seasonal/LP4S_74ee31255d0f/BC/autumn/d7/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/BC/autumn/d6/COMPLETE.txt" $goto end_BC_autumn_7
$if exist "Results_Seasonal/LP4S_74ee31255d0f/BC/autumn/d7/FAILED_SOLVE.txt" $goto end_BC_autumn_7
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/BC/autumn/d7/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=BC --SEASON=autumn --DAY=7 --PREV=6 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/BC/autumn/d7/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/BC/autumn/d7/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: BC_autumn_7. Read its daily listing/log; preserve cache.
$label end_BC_autumn_7
$endif.BC_autumn_7
$ifthen.RESERVE_autumn_1 not exist "Results_Seasonal/LP4S_74ee31255d0f/RESERVE/autumn/d1/COMPLETE.txt"
$if exist "Results_Seasonal/LP4S_74ee31255d0f/RESERVE/autumn/d1/FAILED_SOLVE.txt" $goto end_RESERVE_autumn_1
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/RESERVE/autumn/d1/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=RESERVE --SEASON=autumn --DAY=1 --PREV=0 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/RESERVE/autumn/d1/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/RESERVE/autumn/d1/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: RESERVE_autumn_1. Read its daily listing/log; preserve cache.
$label end_RESERVE_autumn_1
$endif.RESERVE_autumn_1
$ifthen.RESERVE_autumn_2 not exist "Results_Seasonal/LP4S_74ee31255d0f/RESERVE/autumn/d2/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/RESERVE/autumn/d1/COMPLETE.txt" $goto end_RESERVE_autumn_2
$if exist "Results_Seasonal/LP4S_74ee31255d0f/RESERVE/autumn/d2/FAILED_SOLVE.txt" $goto end_RESERVE_autumn_2
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/RESERVE/autumn/d2/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=RESERVE --SEASON=autumn --DAY=2 --PREV=1 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/RESERVE/autumn/d2/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/RESERVE/autumn/d2/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: RESERVE_autumn_2. Read its daily listing/log; preserve cache.
$label end_RESERVE_autumn_2
$endif.RESERVE_autumn_2
$ifthen.RESERVE_autumn_3 not exist "Results_Seasonal/LP4S_74ee31255d0f/RESERVE/autumn/d3/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/RESERVE/autumn/d2/COMPLETE.txt" $goto end_RESERVE_autumn_3
$if exist "Results_Seasonal/LP4S_74ee31255d0f/RESERVE/autumn/d3/FAILED_SOLVE.txt" $goto end_RESERVE_autumn_3
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/RESERVE/autumn/d3/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=RESERVE --SEASON=autumn --DAY=3 --PREV=2 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/RESERVE/autumn/d3/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/RESERVE/autumn/d3/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: RESERVE_autumn_3. Read its daily listing/log; preserve cache.
$label end_RESERVE_autumn_3
$endif.RESERVE_autumn_3
$ifthen.RESERVE_autumn_4 not exist "Results_Seasonal/LP4S_74ee31255d0f/RESERVE/autumn/d4/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/RESERVE/autumn/d3/COMPLETE.txt" $goto end_RESERVE_autumn_4
$if exist "Results_Seasonal/LP4S_74ee31255d0f/RESERVE/autumn/d4/FAILED_SOLVE.txt" $goto end_RESERVE_autumn_4
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/RESERVE/autumn/d4/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=RESERVE --SEASON=autumn --DAY=4 --PREV=3 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/RESERVE/autumn/d4/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/RESERVE/autumn/d4/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: RESERVE_autumn_4. Read its daily listing/log; preserve cache.
$label end_RESERVE_autumn_4
$endif.RESERVE_autumn_4
$ifthen.RESERVE_autumn_5 not exist "Results_Seasonal/LP4S_74ee31255d0f/RESERVE/autumn/d5/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/RESERVE/autumn/d4/COMPLETE.txt" $goto end_RESERVE_autumn_5
$if exist "Results_Seasonal/LP4S_74ee31255d0f/RESERVE/autumn/d5/FAILED_SOLVE.txt" $goto end_RESERVE_autumn_5
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/RESERVE/autumn/d5/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=RESERVE --SEASON=autumn --DAY=5 --PREV=4 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/RESERVE/autumn/d5/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/RESERVE/autumn/d5/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: RESERVE_autumn_5. Read its daily listing/log; preserve cache.
$label end_RESERVE_autumn_5
$endif.RESERVE_autumn_5
$ifthen.RESERVE_autumn_6 not exist "Results_Seasonal/LP4S_74ee31255d0f/RESERVE/autumn/d6/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/RESERVE/autumn/d5/COMPLETE.txt" $goto end_RESERVE_autumn_6
$if exist "Results_Seasonal/LP4S_74ee31255d0f/RESERVE/autumn/d6/FAILED_SOLVE.txt" $goto end_RESERVE_autumn_6
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/RESERVE/autumn/d6/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=RESERVE --SEASON=autumn --DAY=6 --PREV=5 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/RESERVE/autumn/d6/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/RESERVE/autumn/d6/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: RESERVE_autumn_6. Read its daily listing/log; preserve cache.
$label end_RESERVE_autumn_6
$endif.RESERVE_autumn_6
$ifthen.RESERVE_autumn_7 not exist "Results_Seasonal/LP4S_74ee31255d0f/RESERVE/autumn/d7/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/RESERVE/autumn/d6/COMPLETE.txt" $goto end_RESERVE_autumn_7
$if exist "Results_Seasonal/LP4S_74ee31255d0f/RESERVE/autumn/d7/FAILED_SOLVE.txt" $goto end_RESERVE_autumn_7
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/RESERVE/autumn/d7/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=RESERVE --SEASON=autumn --DAY=7 --PREV=6 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/RESERVE/autumn/d7/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/RESERVE/autumn/d7/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: RESERVE_autumn_7. Read its daily listing/log; preserve cache.
$label end_RESERVE_autumn_7
$endif.RESERVE_autumn_7
$ifthen.SP_autumn_1 not exist "Results_Seasonal/LP4S_74ee31255d0f/SP/autumn/d1/COMPLETE.txt"
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SP/autumn/d1/FAILED_SOLVE.txt" $goto end_SP_autumn_1
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SP/autumn/d1/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SP --SEASON=autumn --DAY=1 --PREV=0 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SP/autumn/d1/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SP/autumn/d1/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SP_autumn_1. Read its daily listing/log; preserve cache.
$label end_SP_autumn_1
$endif.SP_autumn_1
$ifthen.SP_autumn_2 not exist "Results_Seasonal/LP4S_74ee31255d0f/SP/autumn/d2/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SP/autumn/d1/COMPLETE.txt" $goto end_SP_autumn_2
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SP/autumn/d2/FAILED_SOLVE.txt" $goto end_SP_autumn_2
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SP/autumn/d2/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SP --SEASON=autumn --DAY=2 --PREV=1 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SP/autumn/d2/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SP/autumn/d2/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SP_autumn_2. Read its daily listing/log; preserve cache.
$label end_SP_autumn_2
$endif.SP_autumn_2
$ifthen.SP_autumn_3 not exist "Results_Seasonal/LP4S_74ee31255d0f/SP/autumn/d3/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SP/autumn/d2/COMPLETE.txt" $goto end_SP_autumn_3
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SP/autumn/d3/FAILED_SOLVE.txt" $goto end_SP_autumn_3
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SP/autumn/d3/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SP --SEASON=autumn --DAY=3 --PREV=2 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SP/autumn/d3/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SP/autumn/d3/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SP_autumn_3. Read its daily listing/log; preserve cache.
$label end_SP_autumn_3
$endif.SP_autumn_3
$ifthen.SP_autumn_4 not exist "Results_Seasonal/LP4S_74ee31255d0f/SP/autumn/d4/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SP/autumn/d3/COMPLETE.txt" $goto end_SP_autumn_4
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SP/autumn/d4/FAILED_SOLVE.txt" $goto end_SP_autumn_4
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SP/autumn/d4/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SP --SEASON=autumn --DAY=4 --PREV=3 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SP/autumn/d4/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SP/autumn/d4/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SP_autumn_4. Read its daily listing/log; preserve cache.
$label end_SP_autumn_4
$endif.SP_autumn_4
$ifthen.SP_autumn_5 not exist "Results_Seasonal/LP4S_74ee31255d0f/SP/autumn/d5/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SP/autumn/d4/COMPLETE.txt" $goto end_SP_autumn_5
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SP/autumn/d5/FAILED_SOLVE.txt" $goto end_SP_autumn_5
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SP/autumn/d5/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SP --SEASON=autumn --DAY=5 --PREV=4 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SP/autumn/d5/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SP/autumn/d5/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SP_autumn_5. Read its daily listing/log; preserve cache.
$label end_SP_autumn_5
$endif.SP_autumn_5
$ifthen.SP_autumn_6 not exist "Results_Seasonal/LP4S_74ee31255d0f/SP/autumn/d6/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SP/autumn/d5/COMPLETE.txt" $goto end_SP_autumn_6
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SP/autumn/d6/FAILED_SOLVE.txt" $goto end_SP_autumn_6
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SP/autumn/d6/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SP --SEASON=autumn --DAY=6 --PREV=5 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SP/autumn/d6/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SP/autumn/d6/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SP_autumn_6. Read its daily listing/log; preserve cache.
$label end_SP_autumn_6
$endif.SP_autumn_6
$ifthen.SP_autumn_7 not exist "Results_Seasonal/LP4S_74ee31255d0f/SP/autumn/d7/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SP/autumn/d6/COMPLETE.txt" $goto end_SP_autumn_7
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SP/autumn/d7/FAILED_SOLVE.txt" $goto end_SP_autumn_7
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SP/autumn/d7/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SP --SEASON=autumn --DAY=7 --PREV=6 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SP/autumn/d7/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SP/autumn/d7/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SP_autumn_7. Read its daily listing/log; preserve cache.
$label end_SP_autumn_7
$endif.SP_autumn_7
$ifthen.LR_C1_autumn_1 not exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1/autumn/d1/COMPLETE.txt"
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1/autumn/d1/FAILED_SOLVE.txt" $goto end_LR_C1_autumn_1
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1/autumn/d1/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=LR_C1 --SEASON=autumn --DAY=1 --PREV=0 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/LR_C1/autumn/d1/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/LR_C1/autumn/d1/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: LR_C1_autumn_1. Read its daily listing/log; preserve cache.
$label end_LR_C1_autumn_1
$endif.LR_C1_autumn_1
$ifthen.LR_C1_autumn_2 not exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1/autumn/d2/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1/autumn/d1/COMPLETE.txt" $goto end_LR_C1_autumn_2
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1/autumn/d2/FAILED_SOLVE.txt" $goto end_LR_C1_autumn_2
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1/autumn/d2/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=LR_C1 --SEASON=autumn --DAY=2 --PREV=1 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/LR_C1/autumn/d2/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/LR_C1/autumn/d2/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: LR_C1_autumn_2. Read its daily listing/log; preserve cache.
$label end_LR_C1_autumn_2
$endif.LR_C1_autumn_2
$ifthen.LR_C1_autumn_3 not exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1/autumn/d3/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1/autumn/d2/COMPLETE.txt" $goto end_LR_C1_autumn_3
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1/autumn/d3/FAILED_SOLVE.txt" $goto end_LR_C1_autumn_3
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1/autumn/d3/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=LR_C1 --SEASON=autumn --DAY=3 --PREV=2 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/LR_C1/autumn/d3/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/LR_C1/autumn/d3/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: LR_C1_autumn_3. Read its daily listing/log; preserve cache.
$label end_LR_C1_autumn_3
$endif.LR_C1_autumn_3
$ifthen.LR_C1_autumn_4 not exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1/autumn/d4/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1/autumn/d3/COMPLETE.txt" $goto end_LR_C1_autumn_4
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1/autumn/d4/FAILED_SOLVE.txt" $goto end_LR_C1_autumn_4
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1/autumn/d4/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=LR_C1 --SEASON=autumn --DAY=4 --PREV=3 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/LR_C1/autumn/d4/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/LR_C1/autumn/d4/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: LR_C1_autumn_4. Read its daily listing/log; preserve cache.
$label end_LR_C1_autumn_4
$endif.LR_C1_autumn_4
$ifthen.LR_C1_autumn_5 not exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1/autumn/d5/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1/autumn/d4/COMPLETE.txt" $goto end_LR_C1_autumn_5
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1/autumn/d5/FAILED_SOLVE.txt" $goto end_LR_C1_autumn_5
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1/autumn/d5/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=LR_C1 --SEASON=autumn --DAY=5 --PREV=4 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/LR_C1/autumn/d5/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/LR_C1/autumn/d5/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: LR_C1_autumn_5. Read its daily listing/log; preserve cache.
$label end_LR_C1_autumn_5
$endif.LR_C1_autumn_5
$ifthen.LR_C1_autumn_6 not exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1/autumn/d6/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1/autumn/d5/COMPLETE.txt" $goto end_LR_C1_autumn_6
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1/autumn/d6/FAILED_SOLVE.txt" $goto end_LR_C1_autumn_6
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1/autumn/d6/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=LR_C1 --SEASON=autumn --DAY=6 --PREV=5 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/LR_C1/autumn/d6/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/LR_C1/autumn/d6/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: LR_C1_autumn_6. Read its daily listing/log; preserve cache.
$label end_LR_C1_autumn_6
$endif.LR_C1_autumn_6
$ifthen.LR_C1_autumn_7 not exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1/autumn/d7/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1/autumn/d6/COMPLETE.txt" $goto end_LR_C1_autumn_7
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1/autumn/d7/FAILED_SOLVE.txt" $goto end_LR_C1_autumn_7
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1/autumn/d7/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=LR_C1 --SEASON=autumn --DAY=7 --PREV=6 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/LR_C1/autumn/d7/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/LR_C1/autumn/d7/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: LR_C1_autumn_7. Read its daily listing/log; preserve cache.
$label end_LR_C1_autumn_7
$endif.LR_C1_autumn_7
$ifthen.LR_C1e6_autumn_1 not exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/autumn/d1/COMPLETE.txt"
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/autumn/d1/FAILED_SOLVE.txt" $goto end_LR_C1e6_autumn_1
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/autumn/d1/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=LR_C1e6 --SEASON=autumn --DAY=1 --PREV=0 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/autumn/d1/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/autumn/d1/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: LR_C1e6_autumn_1. Read its daily listing/log; preserve cache.
$label end_LR_C1e6_autumn_1
$endif.LR_C1e6_autumn_1
$ifthen.LR_C1e6_autumn_2 not exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/autumn/d2/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/autumn/d1/COMPLETE.txt" $goto end_LR_C1e6_autumn_2
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/autumn/d2/FAILED_SOLVE.txt" $goto end_LR_C1e6_autumn_2
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/autumn/d2/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=LR_C1e6 --SEASON=autumn --DAY=2 --PREV=1 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/autumn/d2/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/autumn/d2/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: LR_C1e6_autumn_2. Read its daily listing/log; preserve cache.
$label end_LR_C1e6_autumn_2
$endif.LR_C1e6_autumn_2
$ifthen.LR_C1e6_autumn_3 not exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/autumn/d3/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/autumn/d2/COMPLETE.txt" $goto end_LR_C1e6_autumn_3
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/autumn/d3/FAILED_SOLVE.txt" $goto end_LR_C1e6_autumn_3
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/autumn/d3/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=LR_C1e6 --SEASON=autumn --DAY=3 --PREV=2 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/autumn/d3/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/autumn/d3/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: LR_C1e6_autumn_3. Read its daily listing/log; preserve cache.
$label end_LR_C1e6_autumn_3
$endif.LR_C1e6_autumn_3
$ifthen.LR_C1e6_autumn_4 not exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/autumn/d4/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/autumn/d3/COMPLETE.txt" $goto end_LR_C1e6_autumn_4
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/autumn/d4/FAILED_SOLVE.txt" $goto end_LR_C1e6_autumn_4
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/autumn/d4/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=LR_C1e6 --SEASON=autumn --DAY=4 --PREV=3 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/autumn/d4/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/autumn/d4/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: LR_C1e6_autumn_4. Read its daily listing/log; preserve cache.
$label end_LR_C1e6_autumn_4
$endif.LR_C1e6_autumn_4
$ifthen.LR_C1e6_autumn_5 not exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/autumn/d5/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/autumn/d4/COMPLETE.txt" $goto end_LR_C1e6_autumn_5
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/autumn/d5/FAILED_SOLVE.txt" $goto end_LR_C1e6_autumn_5
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/autumn/d5/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=LR_C1e6 --SEASON=autumn --DAY=5 --PREV=4 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/autumn/d5/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/autumn/d5/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: LR_C1e6_autumn_5. Read its daily listing/log; preserve cache.
$label end_LR_C1e6_autumn_5
$endif.LR_C1e6_autumn_5
$ifthen.LR_C1e6_autumn_6 not exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/autumn/d6/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/autumn/d5/COMPLETE.txt" $goto end_LR_C1e6_autumn_6
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/autumn/d6/FAILED_SOLVE.txt" $goto end_LR_C1e6_autumn_6
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/autumn/d6/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=LR_C1e6 --SEASON=autumn --DAY=6 --PREV=5 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/autumn/d6/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/autumn/d6/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: LR_C1e6_autumn_6. Read its daily listing/log; preserve cache.
$label end_LR_C1e6_autumn_6
$endif.LR_C1e6_autumn_6
$ifthen.LR_C1e6_autumn_7 not exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/autumn/d7/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/autumn/d6/COMPLETE.txt" $goto end_LR_C1e6_autumn_7
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/autumn/d7/FAILED_SOLVE.txt" $goto end_LR_C1e6_autumn_7
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/autumn/d7/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=LR_C1e6 --SEASON=autumn --DAY=7 --PREV=6 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/autumn/d7/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/LR_C1e6/autumn/d7/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: LR_C1e6_autumn_7. Read its daily listing/log; preserve cache.
$label end_LR_C1e6_autumn_7
$endif.LR_C1e6_autumn_7
$ifthen.SVM_C01_autumn_1 not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/autumn/d1/COMPLETE.txt"
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/autumn/d1/FAILED_SOLVE.txt" $goto end_SVM_C01_autumn_1
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/autumn/d1/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SVM_C01 --SEASON=autumn --DAY=1 --PREV=0 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/autumn/d1/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/autumn/d1/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SVM_C01_autumn_1. Read its daily listing/log; preserve cache.
$label end_SVM_C01_autumn_1
$endif.SVM_C01_autumn_1
$ifthen.SVM_C01_autumn_2 not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/autumn/d2/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/autumn/d1/COMPLETE.txt" $goto end_SVM_C01_autumn_2
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/autumn/d2/FAILED_SOLVE.txt" $goto end_SVM_C01_autumn_2
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/autumn/d2/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SVM_C01 --SEASON=autumn --DAY=2 --PREV=1 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/autumn/d2/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/autumn/d2/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SVM_C01_autumn_2. Read its daily listing/log; preserve cache.
$label end_SVM_C01_autumn_2
$endif.SVM_C01_autumn_2
$ifthen.SVM_C01_autumn_3 not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/autumn/d3/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/autumn/d2/COMPLETE.txt" $goto end_SVM_C01_autumn_3
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/autumn/d3/FAILED_SOLVE.txt" $goto end_SVM_C01_autumn_3
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/autumn/d3/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SVM_C01 --SEASON=autumn --DAY=3 --PREV=2 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/autumn/d3/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/autumn/d3/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SVM_C01_autumn_3. Read its daily listing/log; preserve cache.
$label end_SVM_C01_autumn_3
$endif.SVM_C01_autumn_3
$ifthen.SVM_C01_autumn_4 not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/autumn/d4/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/autumn/d3/COMPLETE.txt" $goto end_SVM_C01_autumn_4
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/autumn/d4/FAILED_SOLVE.txt" $goto end_SVM_C01_autumn_4
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/autumn/d4/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SVM_C01 --SEASON=autumn --DAY=4 --PREV=3 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/autumn/d4/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/autumn/d4/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SVM_C01_autumn_4. Read its daily listing/log; preserve cache.
$label end_SVM_C01_autumn_4
$endif.SVM_C01_autumn_4
$ifthen.SVM_C01_autumn_5 not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/autumn/d5/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/autumn/d4/COMPLETE.txt" $goto end_SVM_C01_autumn_5
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/autumn/d5/FAILED_SOLVE.txt" $goto end_SVM_C01_autumn_5
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/autumn/d5/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SVM_C01 --SEASON=autumn --DAY=5 --PREV=4 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/autumn/d5/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/autumn/d5/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SVM_C01_autumn_5. Read its daily listing/log; preserve cache.
$label end_SVM_C01_autumn_5
$endif.SVM_C01_autumn_5
$ifthen.SVM_C01_autumn_6 not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/autumn/d6/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/autumn/d5/COMPLETE.txt" $goto end_SVM_C01_autumn_6
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/autumn/d6/FAILED_SOLVE.txt" $goto end_SVM_C01_autumn_6
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/autumn/d6/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SVM_C01 --SEASON=autumn --DAY=6 --PREV=5 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/autumn/d6/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/autumn/d6/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SVM_C01_autumn_6. Read its daily listing/log; preserve cache.
$label end_SVM_C01_autumn_6
$endif.SVM_C01_autumn_6
$ifthen.SVM_C01_autumn_7 not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/autumn/d7/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/autumn/d6/COMPLETE.txt" $goto end_SVM_C01_autumn_7
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/autumn/d7/FAILED_SOLVE.txt" $goto end_SVM_C01_autumn_7
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/autumn/d7/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SVM_C01 --SEASON=autumn --DAY=7 --PREV=6 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/autumn/d7/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SVM_C01/autumn/d7/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SVM_C01_autumn_7. Read its daily listing/log; preserve cache.
$label end_SVM_C01_autumn_7
$endif.SVM_C01_autumn_7
$ifthen.SVM_C1_autumn_1 not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/autumn/d1/COMPLETE.txt"
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/autumn/d1/FAILED_SOLVE.txt" $goto end_SVM_C1_autumn_1
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/autumn/d1/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SVM_C1 --SEASON=autumn --DAY=1 --PREV=0 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/autumn/d1/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/autumn/d1/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SVM_C1_autumn_1. Read its daily listing/log; preserve cache.
$label end_SVM_C1_autumn_1
$endif.SVM_C1_autumn_1
$ifthen.SVM_C1_autumn_2 not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/autumn/d2/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/autumn/d1/COMPLETE.txt" $goto end_SVM_C1_autumn_2
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/autumn/d2/FAILED_SOLVE.txt" $goto end_SVM_C1_autumn_2
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/autumn/d2/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SVM_C1 --SEASON=autumn --DAY=2 --PREV=1 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/autumn/d2/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/autumn/d2/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SVM_C1_autumn_2. Read its daily listing/log; preserve cache.
$label end_SVM_C1_autumn_2
$endif.SVM_C1_autumn_2
$ifthen.SVM_C1_autumn_3 not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/autumn/d3/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/autumn/d2/COMPLETE.txt" $goto end_SVM_C1_autumn_3
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/autumn/d3/FAILED_SOLVE.txt" $goto end_SVM_C1_autumn_3
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/autumn/d3/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SVM_C1 --SEASON=autumn --DAY=3 --PREV=2 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/autumn/d3/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/autumn/d3/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SVM_C1_autumn_3. Read its daily listing/log; preserve cache.
$label end_SVM_C1_autumn_3
$endif.SVM_C1_autumn_3
$ifthen.SVM_C1_autumn_4 not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/autumn/d4/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/autumn/d3/COMPLETE.txt" $goto end_SVM_C1_autumn_4
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/autumn/d4/FAILED_SOLVE.txt" $goto end_SVM_C1_autumn_4
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/autumn/d4/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SVM_C1 --SEASON=autumn --DAY=4 --PREV=3 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/autumn/d4/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/autumn/d4/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SVM_C1_autumn_4. Read its daily listing/log; preserve cache.
$label end_SVM_C1_autumn_4
$endif.SVM_C1_autumn_4
$ifthen.SVM_C1_autumn_5 not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/autumn/d5/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/autumn/d4/COMPLETE.txt" $goto end_SVM_C1_autumn_5
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/autumn/d5/FAILED_SOLVE.txt" $goto end_SVM_C1_autumn_5
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/autumn/d5/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SVM_C1 --SEASON=autumn --DAY=5 --PREV=4 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/autumn/d5/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/autumn/d5/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SVM_C1_autumn_5. Read its daily listing/log; preserve cache.
$label end_SVM_C1_autumn_5
$endif.SVM_C1_autumn_5
$ifthen.SVM_C1_autumn_6 not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/autumn/d6/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/autumn/d5/COMPLETE.txt" $goto end_SVM_C1_autumn_6
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/autumn/d6/FAILED_SOLVE.txt" $goto end_SVM_C1_autumn_6
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/autumn/d6/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SVM_C1 --SEASON=autumn --DAY=6 --PREV=5 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/autumn/d6/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/autumn/d6/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SVM_C1_autumn_6. Read its daily listing/log; preserve cache.
$label end_SVM_C1_autumn_6
$endif.SVM_C1_autumn_6
$ifthen.SVM_C1_autumn_7 not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/autumn/d7/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/autumn/d6/COMPLETE.txt" $goto end_SVM_C1_autumn_7
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/autumn/d7/FAILED_SOLVE.txt" $goto end_SVM_C1_autumn_7
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/autumn/d7/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SVM_C1 --SEASON=autumn --DAY=7 --PREV=6 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/autumn/d7/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SVM_C1/autumn/d7/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SVM_C1_autumn_7. Read its daily listing/log; preserve cache.
$label end_SVM_C1_autumn_7
$endif.SVM_C1_autumn_7
$ifthen.SVM_C10_autumn_1 not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/autumn/d1/COMPLETE.txt"
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/autumn/d1/FAILED_SOLVE.txt" $goto end_SVM_C10_autumn_1
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/autumn/d1/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SVM_C10 --SEASON=autumn --DAY=1 --PREV=0 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/autumn/d1/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/autumn/d1/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SVM_C10_autumn_1. Read its daily listing/log; preserve cache.
$label end_SVM_C10_autumn_1
$endif.SVM_C10_autumn_1
$ifthen.SVM_C10_autumn_2 not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/autumn/d2/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/autumn/d1/COMPLETE.txt" $goto end_SVM_C10_autumn_2
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/autumn/d2/FAILED_SOLVE.txt" $goto end_SVM_C10_autumn_2
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/autumn/d2/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SVM_C10 --SEASON=autumn --DAY=2 --PREV=1 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/autumn/d2/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/autumn/d2/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SVM_C10_autumn_2. Read its daily listing/log; preserve cache.
$label end_SVM_C10_autumn_2
$endif.SVM_C10_autumn_2
$ifthen.SVM_C10_autumn_3 not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/autumn/d3/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/autumn/d2/COMPLETE.txt" $goto end_SVM_C10_autumn_3
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/autumn/d3/FAILED_SOLVE.txt" $goto end_SVM_C10_autumn_3
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/autumn/d3/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SVM_C10 --SEASON=autumn --DAY=3 --PREV=2 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/autumn/d3/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/autumn/d3/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SVM_C10_autumn_3. Read its daily listing/log; preserve cache.
$label end_SVM_C10_autumn_3
$endif.SVM_C10_autumn_3
$ifthen.SVM_C10_autumn_4 not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/autumn/d4/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/autumn/d3/COMPLETE.txt" $goto end_SVM_C10_autumn_4
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/autumn/d4/FAILED_SOLVE.txt" $goto end_SVM_C10_autumn_4
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/autumn/d4/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SVM_C10 --SEASON=autumn --DAY=4 --PREV=3 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/autumn/d4/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/autumn/d4/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SVM_C10_autumn_4. Read its daily listing/log; preserve cache.
$label end_SVM_C10_autumn_4
$endif.SVM_C10_autumn_4
$ifthen.SVM_C10_autumn_5 not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/autumn/d5/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/autumn/d4/COMPLETE.txt" $goto end_SVM_C10_autumn_5
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/autumn/d5/FAILED_SOLVE.txt" $goto end_SVM_C10_autumn_5
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/autumn/d5/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SVM_C10 --SEASON=autumn --DAY=5 --PREV=4 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/autumn/d5/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/autumn/d5/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SVM_C10_autumn_5. Read its daily listing/log; preserve cache.
$label end_SVM_C10_autumn_5
$endif.SVM_C10_autumn_5
$ifthen.SVM_C10_autumn_6 not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/autumn/d6/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/autumn/d5/COMPLETE.txt" $goto end_SVM_C10_autumn_6
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/autumn/d6/FAILED_SOLVE.txt" $goto end_SVM_C10_autumn_6
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/autumn/d6/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SVM_C10 --SEASON=autumn --DAY=6 --PREV=5 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/autumn/d6/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/autumn/d6/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SVM_C10_autumn_6. Read its daily listing/log; preserve cache.
$label end_SVM_C10_autumn_6
$endif.SVM_C10_autumn_6
$ifthen.SVM_C10_autumn_7 not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/autumn/d7/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/autumn/d6/COMPLETE.txt" $goto end_SVM_C10_autumn_7
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/autumn/d7/FAILED_SOLVE.txt" $goto end_SVM_C10_autumn_7
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/autumn/d7/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SVM_C10 --SEASON=autumn --DAY=7 --PREV=6 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/autumn/d7/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SVM_C10/autumn/d7/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SVM_C10_autumn_7. Read its daily listing/log; preserve cache.
$label end_SVM_C10_autumn_7
$endif.SVM_C10_autumn_7
$ifthen.LDA_autumn_1 not exist "Results_Seasonal/LP4S_74ee31255d0f/LDA/autumn/d1/COMPLETE.txt"
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LDA/autumn/d1/FAILED_SOLVE.txt" $goto end_LDA_autumn_1
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LDA/autumn/d1/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=LDA --SEASON=autumn --DAY=1 --PREV=0 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/LDA/autumn/d1/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/LDA/autumn/d1/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: LDA_autumn_1. Read its daily listing/log; preserve cache.
$label end_LDA_autumn_1
$endif.LDA_autumn_1
$ifthen.LDA_autumn_2 not exist "Results_Seasonal/LP4S_74ee31255d0f/LDA/autumn/d2/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/LDA/autumn/d1/COMPLETE.txt" $goto end_LDA_autumn_2
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LDA/autumn/d2/FAILED_SOLVE.txt" $goto end_LDA_autumn_2
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LDA/autumn/d2/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=LDA --SEASON=autumn --DAY=2 --PREV=1 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/LDA/autumn/d2/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/LDA/autumn/d2/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: LDA_autumn_2. Read its daily listing/log; preserve cache.
$label end_LDA_autumn_2
$endif.LDA_autumn_2
$ifthen.LDA_autumn_3 not exist "Results_Seasonal/LP4S_74ee31255d0f/LDA/autumn/d3/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/LDA/autumn/d2/COMPLETE.txt" $goto end_LDA_autumn_3
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LDA/autumn/d3/FAILED_SOLVE.txt" $goto end_LDA_autumn_3
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LDA/autumn/d3/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=LDA --SEASON=autumn --DAY=3 --PREV=2 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/LDA/autumn/d3/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/LDA/autumn/d3/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: LDA_autumn_3. Read its daily listing/log; preserve cache.
$label end_LDA_autumn_3
$endif.LDA_autumn_3
$ifthen.LDA_autumn_4 not exist "Results_Seasonal/LP4S_74ee31255d0f/LDA/autumn/d4/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/LDA/autumn/d3/COMPLETE.txt" $goto end_LDA_autumn_4
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LDA/autumn/d4/FAILED_SOLVE.txt" $goto end_LDA_autumn_4
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LDA/autumn/d4/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=LDA --SEASON=autumn --DAY=4 --PREV=3 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/LDA/autumn/d4/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/LDA/autumn/d4/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: LDA_autumn_4. Read its daily listing/log; preserve cache.
$label end_LDA_autumn_4
$endif.LDA_autumn_4
$ifthen.LDA_autumn_5 not exist "Results_Seasonal/LP4S_74ee31255d0f/LDA/autumn/d5/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/LDA/autumn/d4/COMPLETE.txt" $goto end_LDA_autumn_5
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LDA/autumn/d5/FAILED_SOLVE.txt" $goto end_LDA_autumn_5
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LDA/autumn/d5/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=LDA --SEASON=autumn --DAY=5 --PREV=4 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/LDA/autumn/d5/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/LDA/autumn/d5/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: LDA_autumn_5. Read its daily listing/log; preserve cache.
$label end_LDA_autumn_5
$endif.LDA_autumn_5
$ifthen.LDA_autumn_6 not exist "Results_Seasonal/LP4S_74ee31255d0f/LDA/autumn/d6/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/LDA/autumn/d5/COMPLETE.txt" $goto end_LDA_autumn_6
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LDA/autumn/d6/FAILED_SOLVE.txt" $goto end_LDA_autumn_6
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LDA/autumn/d6/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=LDA --SEASON=autumn --DAY=6 --PREV=5 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/LDA/autumn/d6/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/LDA/autumn/d6/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: LDA_autumn_6. Read its daily listing/log; preserve cache.
$label end_LDA_autumn_6
$endif.LDA_autumn_6
$ifthen.LDA_autumn_7 not exist "Results_Seasonal/LP4S_74ee31255d0f/LDA/autumn/d7/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/LDA/autumn/d6/COMPLETE.txt" $goto end_LDA_autumn_7
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LDA/autumn/d7/FAILED_SOLVE.txt" $goto end_LDA_autumn_7
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/LDA/autumn/d7/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=LDA --SEASON=autumn --DAY=7 --PREV=6 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/LDA/autumn/d7/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/LDA/autumn/d7/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: LDA_autumn_7. Read its daily listing/log; preserve cache.
$label end_LDA_autumn_7
$endif.LDA_autumn_7
$ifthen.SGD_Log_autumn_1 not exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/autumn/d1/COMPLETE.txt"
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/autumn/d1/FAILED_SOLVE.txt" $goto end_SGD_Log_autumn_1
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/autumn/d1/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SGD_Log --SEASON=autumn --DAY=1 --PREV=0 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/autumn/d1/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/autumn/d1/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SGD_Log_autumn_1. Read its daily listing/log; preserve cache.
$label end_SGD_Log_autumn_1
$endif.SGD_Log_autumn_1
$ifthen.SGD_Log_autumn_2 not exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/autumn/d2/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/autumn/d1/COMPLETE.txt" $goto end_SGD_Log_autumn_2
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/autumn/d2/FAILED_SOLVE.txt" $goto end_SGD_Log_autumn_2
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/autumn/d2/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SGD_Log --SEASON=autumn --DAY=2 --PREV=1 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/autumn/d2/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/autumn/d2/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SGD_Log_autumn_2. Read its daily listing/log; preserve cache.
$label end_SGD_Log_autumn_2
$endif.SGD_Log_autumn_2
$ifthen.SGD_Log_autumn_3 not exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/autumn/d3/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/autumn/d2/COMPLETE.txt" $goto end_SGD_Log_autumn_3
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/autumn/d3/FAILED_SOLVE.txt" $goto end_SGD_Log_autumn_3
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/autumn/d3/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SGD_Log --SEASON=autumn --DAY=3 --PREV=2 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/autumn/d3/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/autumn/d3/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SGD_Log_autumn_3. Read its daily listing/log; preserve cache.
$label end_SGD_Log_autumn_3
$endif.SGD_Log_autumn_3
$ifthen.SGD_Log_autumn_4 not exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/autumn/d4/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/autumn/d3/COMPLETE.txt" $goto end_SGD_Log_autumn_4
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/autumn/d4/FAILED_SOLVE.txt" $goto end_SGD_Log_autumn_4
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/autumn/d4/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SGD_Log --SEASON=autumn --DAY=4 --PREV=3 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/autumn/d4/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/autumn/d4/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SGD_Log_autumn_4. Read its daily listing/log; preserve cache.
$label end_SGD_Log_autumn_4
$endif.SGD_Log_autumn_4
$ifthen.SGD_Log_autumn_5 not exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/autumn/d5/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/autumn/d4/COMPLETE.txt" $goto end_SGD_Log_autumn_5
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/autumn/d5/FAILED_SOLVE.txt" $goto end_SGD_Log_autumn_5
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/autumn/d5/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SGD_Log --SEASON=autumn --DAY=5 --PREV=4 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/autumn/d5/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/autumn/d5/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SGD_Log_autumn_5. Read its daily listing/log; preserve cache.
$label end_SGD_Log_autumn_5
$endif.SGD_Log_autumn_5
$ifthen.SGD_Log_autumn_6 not exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/autumn/d6/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/autumn/d5/COMPLETE.txt" $goto end_SGD_Log_autumn_6
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/autumn/d6/FAILED_SOLVE.txt" $goto end_SGD_Log_autumn_6
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/autumn/d6/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SGD_Log --SEASON=autumn --DAY=6 --PREV=5 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/autumn/d6/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/autumn/d6/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SGD_Log_autumn_6. Read its daily listing/log; preserve cache.
$label end_SGD_Log_autumn_6
$endif.SGD_Log_autumn_6
$ifthen.SGD_Log_autumn_7 not exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/autumn/d7/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/autumn/d6/COMPLETE.txt" $goto end_SGD_Log_autumn_7
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/autumn/d7/FAILED_SOLVE.txt" $goto end_SGD_Log_autumn_7
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/autumn/d7/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SGD_Log --SEASON=autumn --DAY=7 --PREV=6 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/autumn/d7/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SGD_Log/autumn/d7/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SGD_Log_autumn_7. Read its daily listing/log; preserve cache.
$label end_SGD_Log_autumn_7
$endif.SGD_Log_autumn_7
$ifthen.SGD_Hinge_autumn_1 not exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/autumn/d1/COMPLETE.txt"
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/autumn/d1/FAILED_SOLVE.txt" $goto end_SGD_Hinge_autumn_1
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/autumn/d1/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SGD_Hinge --SEASON=autumn --DAY=1 --PREV=0 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/autumn/d1/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/autumn/d1/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SGD_Hinge_autumn_1. Read its daily listing/log; preserve cache.
$label end_SGD_Hinge_autumn_1
$endif.SGD_Hinge_autumn_1
$ifthen.SGD_Hinge_autumn_2 not exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/autumn/d2/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/autumn/d1/COMPLETE.txt" $goto end_SGD_Hinge_autumn_2
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/autumn/d2/FAILED_SOLVE.txt" $goto end_SGD_Hinge_autumn_2
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/autumn/d2/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SGD_Hinge --SEASON=autumn --DAY=2 --PREV=1 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/autumn/d2/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/autumn/d2/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SGD_Hinge_autumn_2. Read its daily listing/log; preserve cache.
$label end_SGD_Hinge_autumn_2
$endif.SGD_Hinge_autumn_2
$ifthen.SGD_Hinge_autumn_3 not exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/autumn/d3/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/autumn/d2/COMPLETE.txt" $goto end_SGD_Hinge_autumn_3
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/autumn/d3/FAILED_SOLVE.txt" $goto end_SGD_Hinge_autumn_3
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/autumn/d3/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SGD_Hinge --SEASON=autumn --DAY=3 --PREV=2 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/autumn/d3/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/autumn/d3/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SGD_Hinge_autumn_3. Read its daily listing/log; preserve cache.
$label end_SGD_Hinge_autumn_3
$endif.SGD_Hinge_autumn_3
$ifthen.SGD_Hinge_autumn_4 not exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/autumn/d4/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/autumn/d3/COMPLETE.txt" $goto end_SGD_Hinge_autumn_4
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/autumn/d4/FAILED_SOLVE.txt" $goto end_SGD_Hinge_autumn_4
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/autumn/d4/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SGD_Hinge --SEASON=autumn --DAY=4 --PREV=3 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/autumn/d4/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/autumn/d4/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SGD_Hinge_autumn_4. Read its daily listing/log; preserve cache.
$label end_SGD_Hinge_autumn_4
$endif.SGD_Hinge_autumn_4
$ifthen.SGD_Hinge_autumn_5 not exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/autumn/d5/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/autumn/d4/COMPLETE.txt" $goto end_SGD_Hinge_autumn_5
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/autumn/d5/FAILED_SOLVE.txt" $goto end_SGD_Hinge_autumn_5
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/autumn/d5/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SGD_Hinge --SEASON=autumn --DAY=5 --PREV=4 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/autumn/d5/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/autumn/d5/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SGD_Hinge_autumn_5. Read its daily listing/log; preserve cache.
$label end_SGD_Hinge_autumn_5
$endif.SGD_Hinge_autumn_5
$ifthen.SGD_Hinge_autumn_6 not exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/autumn/d6/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/autumn/d5/COMPLETE.txt" $goto end_SGD_Hinge_autumn_6
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/autumn/d6/FAILED_SOLVE.txt" $goto end_SGD_Hinge_autumn_6
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/autumn/d6/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SGD_Hinge --SEASON=autumn --DAY=6 --PREV=5 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/autumn/d6/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/autumn/d6/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SGD_Hinge_autumn_6. Read its daily listing/log; preserve cache.
$label end_SGD_Hinge_autumn_6
$endif.SGD_Hinge_autumn_6
$ifthen.SGD_Hinge_autumn_7 not exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/autumn/d7/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/autumn/d6/COMPLETE.txt" $goto end_SGD_Hinge_autumn_7
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/autumn/d7/FAILED_SOLVE.txt" $goto end_SGD_Hinge_autumn_7
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/autumn/d7/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=SGD_Hinge --SEASON=autumn --DAY=7 --PREV=6 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/autumn/d7/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/SGD_Hinge/autumn/d7/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: SGD_Hinge_autumn_7. Read its daily listing/log; preserve cache.
$label end_SGD_Hinge_autumn_7
$endif.SGD_Hinge_autumn_7
$ifthen.PA_autumn_1 not exist "Results_Seasonal/LP4S_74ee31255d0f/PA/autumn/d1/COMPLETE.txt"
$if exist "Results_Seasonal/LP4S_74ee31255d0f/PA/autumn/d1/FAILED_SOLVE.txt" $goto end_PA_autumn_1
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/PA/autumn/d1/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=PA --SEASON=autumn --DAY=1 --PREV=0 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/PA/autumn/d1/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/PA/autumn/d1/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: PA_autumn_1. Read its daily listing/log; preserve cache.
$label end_PA_autumn_1
$endif.PA_autumn_1
$ifthen.PA_autumn_2 not exist "Results_Seasonal/LP4S_74ee31255d0f/PA/autumn/d2/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/PA/autumn/d1/COMPLETE.txt" $goto end_PA_autumn_2
$if exist "Results_Seasonal/LP4S_74ee31255d0f/PA/autumn/d2/FAILED_SOLVE.txt" $goto end_PA_autumn_2
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/PA/autumn/d2/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=PA --SEASON=autumn --DAY=2 --PREV=1 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/PA/autumn/d2/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/PA/autumn/d2/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: PA_autumn_2. Read its daily listing/log; preserve cache.
$label end_PA_autumn_2
$endif.PA_autumn_2
$ifthen.PA_autumn_3 not exist "Results_Seasonal/LP4S_74ee31255d0f/PA/autumn/d3/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/PA/autumn/d2/COMPLETE.txt" $goto end_PA_autumn_3
$if exist "Results_Seasonal/LP4S_74ee31255d0f/PA/autumn/d3/FAILED_SOLVE.txt" $goto end_PA_autumn_3
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/PA/autumn/d3/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=PA --SEASON=autumn --DAY=3 --PREV=2 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/PA/autumn/d3/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/PA/autumn/d3/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: PA_autumn_3. Read its daily listing/log; preserve cache.
$label end_PA_autumn_3
$endif.PA_autumn_3
$ifthen.PA_autumn_4 not exist "Results_Seasonal/LP4S_74ee31255d0f/PA/autumn/d4/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/PA/autumn/d3/COMPLETE.txt" $goto end_PA_autumn_4
$if exist "Results_Seasonal/LP4S_74ee31255d0f/PA/autumn/d4/FAILED_SOLVE.txt" $goto end_PA_autumn_4
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/PA/autumn/d4/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=PA --SEASON=autumn --DAY=4 --PREV=3 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/PA/autumn/d4/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/PA/autumn/d4/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: PA_autumn_4. Read its daily listing/log; preserve cache.
$label end_PA_autumn_4
$endif.PA_autumn_4
$ifthen.PA_autumn_5 not exist "Results_Seasonal/LP4S_74ee31255d0f/PA/autumn/d5/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/PA/autumn/d4/COMPLETE.txt" $goto end_PA_autumn_5
$if exist "Results_Seasonal/LP4S_74ee31255d0f/PA/autumn/d5/FAILED_SOLVE.txt" $goto end_PA_autumn_5
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/PA/autumn/d5/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=PA --SEASON=autumn --DAY=5 --PREV=4 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/PA/autumn/d5/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/PA/autumn/d5/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: PA_autumn_5. Read its daily listing/log; preserve cache.
$label end_PA_autumn_5
$endif.PA_autumn_5
$ifthen.PA_autumn_6 not exist "Results_Seasonal/LP4S_74ee31255d0f/PA/autumn/d6/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/PA/autumn/d5/COMPLETE.txt" $goto end_PA_autumn_6
$if exist "Results_Seasonal/LP4S_74ee31255d0f/PA/autumn/d6/FAILED_SOLVE.txt" $goto end_PA_autumn_6
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/PA/autumn/d6/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=PA --SEASON=autumn --DAY=6 --PREV=5 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/PA/autumn/d6/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/PA/autumn/d6/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: PA_autumn_6. Read its daily listing/log; preserve cache.
$label end_PA_autumn_6
$endif.PA_autumn_6
$ifthen.PA_autumn_7 not exist "Results_Seasonal/LP4S_74ee31255d0f/PA/autumn/d7/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/PA/autumn/d6/COMPLETE.txt" $goto end_PA_autumn_7
$if exist "Results_Seasonal/LP4S_74ee31255d0f/PA/autumn/d7/FAILED_SOLVE.txt" $goto end_PA_autumn_7
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/PA/autumn/d7/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=PA --SEASON=autumn --DAY=7 --PREV=6 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/PA/autumn/d7/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/PA/autumn/d7/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: PA_autumn_7. Read its daily listing/log; preserve cache.
$label end_PA_autumn_7
$endif.PA_autumn_7
$ifthen.REF050_autumn_1 not exist "Results_Seasonal/LP4S_74ee31255d0f/REF050/autumn/d1/COMPLETE.txt"
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF050/autumn/d1/FAILED_SOLVE.txt" $goto end_REF050_autumn_1
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF050/autumn/d1/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=REF050 --SEASON=autumn --DAY=1 --PREV=0 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/REF050/autumn/d1/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/REF050/autumn/d1/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: REF050_autumn_1. Read its daily listing/log; preserve cache.
$label end_REF050_autumn_1
$endif.REF050_autumn_1
$ifthen.REF050_autumn_2 not exist "Results_Seasonal/LP4S_74ee31255d0f/REF050/autumn/d2/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/REF050/autumn/d1/COMPLETE.txt" $goto end_REF050_autumn_2
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF050/autumn/d2/FAILED_SOLVE.txt" $goto end_REF050_autumn_2
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF050/autumn/d2/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=REF050 --SEASON=autumn --DAY=2 --PREV=1 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/REF050/autumn/d2/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/REF050/autumn/d2/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: REF050_autumn_2. Read its daily listing/log; preserve cache.
$label end_REF050_autumn_2
$endif.REF050_autumn_2
$ifthen.REF050_autumn_3 not exist "Results_Seasonal/LP4S_74ee31255d0f/REF050/autumn/d3/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/REF050/autumn/d2/COMPLETE.txt" $goto end_REF050_autumn_3
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF050/autumn/d3/FAILED_SOLVE.txt" $goto end_REF050_autumn_3
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF050/autumn/d3/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=REF050 --SEASON=autumn --DAY=3 --PREV=2 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/REF050/autumn/d3/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/REF050/autumn/d3/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: REF050_autumn_3. Read its daily listing/log; preserve cache.
$label end_REF050_autumn_3
$endif.REF050_autumn_3
$ifthen.REF050_autumn_4 not exist "Results_Seasonal/LP4S_74ee31255d0f/REF050/autumn/d4/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/REF050/autumn/d3/COMPLETE.txt" $goto end_REF050_autumn_4
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF050/autumn/d4/FAILED_SOLVE.txt" $goto end_REF050_autumn_4
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF050/autumn/d4/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=REF050 --SEASON=autumn --DAY=4 --PREV=3 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/REF050/autumn/d4/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/REF050/autumn/d4/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: REF050_autumn_4. Read its daily listing/log; preserve cache.
$label end_REF050_autumn_4
$endif.REF050_autumn_4
$ifthen.REF050_autumn_5 not exist "Results_Seasonal/LP4S_74ee31255d0f/REF050/autumn/d5/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/REF050/autumn/d4/COMPLETE.txt" $goto end_REF050_autumn_5
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF050/autumn/d5/FAILED_SOLVE.txt" $goto end_REF050_autumn_5
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF050/autumn/d5/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=REF050 --SEASON=autumn --DAY=5 --PREV=4 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/REF050/autumn/d5/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/REF050/autumn/d5/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: REF050_autumn_5. Read its daily listing/log; preserve cache.
$label end_REF050_autumn_5
$endif.REF050_autumn_5
$ifthen.REF050_autumn_6 not exist "Results_Seasonal/LP4S_74ee31255d0f/REF050/autumn/d6/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/REF050/autumn/d5/COMPLETE.txt" $goto end_REF050_autumn_6
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF050/autumn/d6/FAILED_SOLVE.txt" $goto end_REF050_autumn_6
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF050/autumn/d6/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=REF050 --SEASON=autumn --DAY=6 --PREV=5 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/REF050/autumn/d6/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/REF050/autumn/d6/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: REF050_autumn_6. Read its daily listing/log; preserve cache.
$label end_REF050_autumn_6
$endif.REF050_autumn_6
$ifthen.REF050_autumn_7 not exist "Results_Seasonal/LP4S_74ee31255d0f/REF050/autumn/d7/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/REF050/autumn/d6/COMPLETE.txt" $goto end_REF050_autumn_7
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF050/autumn/d7/FAILED_SOLVE.txt" $goto end_REF050_autumn_7
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF050/autumn/d7/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=REF050 --SEASON=autumn --DAY=7 --PREV=6 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/REF050/autumn/d7/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/REF050/autumn/d7/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: REF050_autumn_7. Read its daily listing/log; preserve cache.
$label end_REF050_autumn_7
$endif.REF050_autumn_7
$ifthen.REF090_autumn_1 not exist "Results_Seasonal/LP4S_74ee31255d0f/REF090/autumn/d1/COMPLETE.txt"
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF090/autumn/d1/FAILED_SOLVE.txt" $goto end_REF090_autumn_1
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF090/autumn/d1/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=REF090 --SEASON=autumn --DAY=1 --PREV=0 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/REF090/autumn/d1/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/REF090/autumn/d1/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: REF090_autumn_1. Read its daily listing/log; preserve cache.
$label end_REF090_autumn_1
$endif.REF090_autumn_1
$ifthen.REF090_autumn_2 not exist "Results_Seasonal/LP4S_74ee31255d0f/REF090/autumn/d2/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/REF090/autumn/d1/COMPLETE.txt" $goto end_REF090_autumn_2
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF090/autumn/d2/FAILED_SOLVE.txt" $goto end_REF090_autumn_2
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF090/autumn/d2/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=REF090 --SEASON=autumn --DAY=2 --PREV=1 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/REF090/autumn/d2/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/REF090/autumn/d2/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: REF090_autumn_2. Read its daily listing/log; preserve cache.
$label end_REF090_autumn_2
$endif.REF090_autumn_2
$ifthen.REF090_autumn_3 not exist "Results_Seasonal/LP4S_74ee31255d0f/REF090/autumn/d3/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/REF090/autumn/d2/COMPLETE.txt" $goto end_REF090_autumn_3
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF090/autumn/d3/FAILED_SOLVE.txt" $goto end_REF090_autumn_3
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF090/autumn/d3/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=REF090 --SEASON=autumn --DAY=3 --PREV=2 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/REF090/autumn/d3/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/REF090/autumn/d3/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: REF090_autumn_3. Read its daily listing/log; preserve cache.
$label end_REF090_autumn_3
$endif.REF090_autumn_3
$ifthen.REF090_autumn_4 not exist "Results_Seasonal/LP4S_74ee31255d0f/REF090/autumn/d4/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/REF090/autumn/d3/COMPLETE.txt" $goto end_REF090_autumn_4
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF090/autumn/d4/FAILED_SOLVE.txt" $goto end_REF090_autumn_4
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF090/autumn/d4/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=REF090 --SEASON=autumn --DAY=4 --PREV=3 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/REF090/autumn/d4/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/REF090/autumn/d4/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: REF090_autumn_4. Read its daily listing/log; preserve cache.
$label end_REF090_autumn_4
$endif.REF090_autumn_4
$ifthen.REF090_autumn_5 not exist "Results_Seasonal/LP4S_74ee31255d0f/REF090/autumn/d5/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/REF090/autumn/d4/COMPLETE.txt" $goto end_REF090_autumn_5
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF090/autumn/d5/FAILED_SOLVE.txt" $goto end_REF090_autumn_5
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF090/autumn/d5/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=REF090 --SEASON=autumn --DAY=5 --PREV=4 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/REF090/autumn/d5/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/REF090/autumn/d5/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: REF090_autumn_5. Read its daily listing/log; preserve cache.
$label end_REF090_autumn_5
$endif.REF090_autumn_5
$ifthen.REF090_autumn_6 not exist "Results_Seasonal/LP4S_74ee31255d0f/REF090/autumn/d6/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/REF090/autumn/d5/COMPLETE.txt" $goto end_REF090_autumn_6
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF090/autumn/d6/FAILED_SOLVE.txt" $goto end_REF090_autumn_6
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF090/autumn/d6/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=REF090 --SEASON=autumn --DAY=6 --PREV=5 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/REF090/autumn/d6/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/REF090/autumn/d6/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: REF090_autumn_6. Read its daily listing/log; preserve cache.
$label end_REF090_autumn_6
$endif.REF090_autumn_6
$ifthen.REF090_autumn_7 not exist "Results_Seasonal/LP4S_74ee31255d0f/REF090/autumn/d7/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/REF090/autumn/d6/COMPLETE.txt" $goto end_REF090_autumn_7
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF090/autumn/d7/FAILED_SOLVE.txt" $goto end_REF090_autumn_7
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF090/autumn/d7/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=REF090 --SEASON=autumn --DAY=7 --PREV=6 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/REF090/autumn/d7/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/REF090/autumn/d7/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: REF090_autumn_7. Read its daily listing/log; preserve cache.
$label end_REF090_autumn_7
$endif.REF090_autumn_7
$ifthen.REF095_autumn_1 not exist "Results_Seasonal/LP4S_74ee31255d0f/REF095/autumn/d1/COMPLETE.txt"
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF095/autumn/d1/FAILED_SOLVE.txt" $goto end_REF095_autumn_1
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF095/autumn/d1/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=REF095 --SEASON=autumn --DAY=1 --PREV=0 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/REF095/autumn/d1/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/REF095/autumn/d1/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: REF095_autumn_1. Read its daily listing/log; preserve cache.
$label end_REF095_autumn_1
$endif.REF095_autumn_1
$ifthen.REF095_autumn_2 not exist "Results_Seasonal/LP4S_74ee31255d0f/REF095/autumn/d2/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/REF095/autumn/d1/COMPLETE.txt" $goto end_REF095_autumn_2
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF095/autumn/d2/FAILED_SOLVE.txt" $goto end_REF095_autumn_2
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF095/autumn/d2/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=REF095 --SEASON=autumn --DAY=2 --PREV=1 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/REF095/autumn/d2/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/REF095/autumn/d2/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: REF095_autumn_2. Read its daily listing/log; preserve cache.
$label end_REF095_autumn_2
$endif.REF095_autumn_2
$ifthen.REF095_autumn_3 not exist "Results_Seasonal/LP4S_74ee31255d0f/REF095/autumn/d3/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/REF095/autumn/d2/COMPLETE.txt" $goto end_REF095_autumn_3
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF095/autumn/d3/FAILED_SOLVE.txt" $goto end_REF095_autumn_3
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF095/autumn/d3/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=REF095 --SEASON=autumn --DAY=3 --PREV=2 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/REF095/autumn/d3/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/REF095/autumn/d3/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: REF095_autumn_3. Read its daily listing/log; preserve cache.
$label end_REF095_autumn_3
$endif.REF095_autumn_3
$ifthen.REF095_autumn_4 not exist "Results_Seasonal/LP4S_74ee31255d0f/REF095/autumn/d4/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/REF095/autumn/d3/COMPLETE.txt" $goto end_REF095_autumn_4
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF095/autumn/d4/FAILED_SOLVE.txt" $goto end_REF095_autumn_4
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF095/autumn/d4/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=REF095 --SEASON=autumn --DAY=4 --PREV=3 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/REF095/autumn/d4/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/REF095/autumn/d4/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: REF095_autumn_4. Read its daily listing/log; preserve cache.
$label end_REF095_autumn_4
$endif.REF095_autumn_4
$ifthen.REF095_autumn_5 not exist "Results_Seasonal/LP4S_74ee31255d0f/REF095/autumn/d5/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/REF095/autumn/d4/COMPLETE.txt" $goto end_REF095_autumn_5
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF095/autumn/d5/FAILED_SOLVE.txt" $goto end_REF095_autumn_5
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF095/autumn/d5/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=REF095 --SEASON=autumn --DAY=5 --PREV=4 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/REF095/autumn/d5/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/REF095/autumn/d5/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: REF095_autumn_5. Read its daily listing/log; preserve cache.
$label end_REF095_autumn_5
$endif.REF095_autumn_5
$ifthen.REF095_autumn_6 not exist "Results_Seasonal/LP4S_74ee31255d0f/REF095/autumn/d6/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/REF095/autumn/d5/COMPLETE.txt" $goto end_REF095_autumn_6
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF095/autumn/d6/FAILED_SOLVE.txt" $goto end_REF095_autumn_6
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF095/autumn/d6/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=REF095 --SEASON=autumn --DAY=6 --PREV=5 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/REF095/autumn/d6/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/REF095/autumn/d6/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: REF095_autumn_6. Read its daily listing/log; preserve cache.
$label end_REF095_autumn_6
$endif.REF095_autumn_6
$ifthen.REF095_autumn_7 not exist "Results_Seasonal/LP4S_74ee31255d0f/REF095/autumn/d7/COMPLETE.txt"
$if not exist "Results_Seasonal/LP4S_74ee31255d0f/REF095/autumn/d6/COMPLETE.txt" $goto end_REF095_autumn_7
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF095/autumn/d7/FAILED_SOLVE.txt" $goto end_REF095_autumn_7
$setglobal RECOVER 0
$if exist "Results_Seasonal/LP4S_74ee31255d0f/REF095/autumn/d7/results.gdx" $setglobal RECOVER 1
$call gams "LaPalma_FCUC_Weekly.gms" --LPCAMPAIGN=LP4S_74ee31255d0f --RUN=REF095 --SEASON=autumn --DAY=7 --PREV=6 --EXPORT_ONLY=%RECOVER% lo=2 o="Results_Seasonal/LP4S_74ee31255d0f/REF095/autumn/d7/LaPalma_FCUC.lst" lf="Results_Seasonal/LP4S_74ee31255d0f/REF095/autumn/d7/LaPalma_FCUC.log"
$if errorlevel 1 $abort Native LP compile/execution/export failure: REF095_autumn_7. Read its daily listing/log; preserve cache.
$label end_REF095_autumn_7
$endif.REF095_autumn_7
