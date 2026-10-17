* Generated LP35 jobs. No SP, BC or RESERVE is solved.
* Failed chains are retained, not silently accepted. Other independent chains continue.
$if not set RETRY_FAILED $setglobal RETRY_FAILED 0
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1/winter/d1/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_LR_C1_winter_1 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1/winter/d1/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_LR_C1_winter_1
$ifthen.LR_C1_winter_1 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1/winter/d1/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=LR_C1 --SEASON=winter --DAY=1 --PREV=0 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/LR_C1/winter/d1/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/LR_C1/winter/d1/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: LR_C1_winter_1; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.LR_C1_winter_1
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1/winter/d2/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/LR_C1/winter/d1/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_LR_C1_winter_2 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1/winter/d2/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_LR_C1_winter_2
$ifthen.LR_C1_winter_2 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1/winter/d2/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=LR_C1 --SEASON=winter --DAY=2 --PREV=1 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/LR_C1/winter/d2/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/LR_C1/winter/d2/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: LR_C1_winter_2; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.LR_C1_winter_2
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1/winter/d3/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/LR_C1/winter/d2/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_LR_C1_winter_3 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1/winter/d3/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_LR_C1_winter_3
$ifthen.LR_C1_winter_3 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1/winter/d3/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=LR_C1 --SEASON=winter --DAY=3 --PREV=2 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/LR_C1/winter/d3/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/LR_C1/winter/d3/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: LR_C1_winter_3; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.LR_C1_winter_3
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1/winter/d4/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/LR_C1/winter/d3/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_LR_C1_winter_4 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1/winter/d4/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_LR_C1_winter_4
$ifthen.LR_C1_winter_4 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1/winter/d4/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=LR_C1 --SEASON=winter --DAY=4 --PREV=3 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/LR_C1/winter/d4/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/LR_C1/winter/d4/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: LR_C1_winter_4; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.LR_C1_winter_4
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1/winter/d5/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/LR_C1/winter/d4/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_LR_C1_winter_5 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1/winter/d5/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_LR_C1_winter_5
$ifthen.LR_C1_winter_5 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1/winter/d5/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=LR_C1 --SEASON=winter --DAY=5 --PREV=4 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/LR_C1/winter/d5/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/LR_C1/winter/d5/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: LR_C1_winter_5; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.LR_C1_winter_5
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1/winter/d6/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/LR_C1/winter/d5/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_LR_C1_winter_6 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1/winter/d6/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_LR_C1_winter_6
$ifthen.LR_C1_winter_6 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1/winter/d6/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=LR_C1 --SEASON=winter --DAY=6 --PREV=5 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/LR_C1/winter/d6/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/LR_C1/winter/d6/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: LR_C1_winter_6; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.LR_C1_winter_6
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1/winter/d7/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/LR_C1/winter/d6/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_LR_C1_winter_7 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1/winter/d7/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_LR_C1_winter_7
$ifthen.LR_C1_winter_7 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1/winter/d7/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=LR_C1 --SEASON=winter --DAY=7 --PREV=6 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/LR_C1/winter/d7/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/LR_C1/winter/d7/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: LR_C1_winter_7; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.LR_C1_winter_7
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1e6/winter/d1/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_LR_C1e6_winter_1 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1e6/winter/d1/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_LR_C1e6_winter_1
$ifthen.LR_C1e6_winter_1 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1e6/winter/d1/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=LR_C1e6 --SEASON=winter --DAY=1 --PREV=0 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/LR_C1e6/winter/d1/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/LR_C1e6/winter/d1/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: LR_C1e6_winter_1; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.LR_C1e6_winter_1
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1e6/winter/d2/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/LR_C1e6/winter/d1/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_LR_C1e6_winter_2 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1e6/winter/d2/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_LR_C1e6_winter_2
$ifthen.LR_C1e6_winter_2 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1e6/winter/d2/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=LR_C1e6 --SEASON=winter --DAY=2 --PREV=1 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/LR_C1e6/winter/d2/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/LR_C1e6/winter/d2/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: LR_C1e6_winter_2; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.LR_C1e6_winter_2
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1e6/winter/d3/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/LR_C1e6/winter/d2/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_LR_C1e6_winter_3 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1e6/winter/d3/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_LR_C1e6_winter_3
$ifthen.LR_C1e6_winter_3 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1e6/winter/d3/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=LR_C1e6 --SEASON=winter --DAY=3 --PREV=2 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/LR_C1e6/winter/d3/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/LR_C1e6/winter/d3/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: LR_C1e6_winter_3; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.LR_C1e6_winter_3
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1e6/winter/d4/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/LR_C1e6/winter/d3/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_LR_C1e6_winter_4 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1e6/winter/d4/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_LR_C1e6_winter_4
$ifthen.LR_C1e6_winter_4 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1e6/winter/d4/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=LR_C1e6 --SEASON=winter --DAY=4 --PREV=3 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/LR_C1e6/winter/d4/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/LR_C1e6/winter/d4/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: LR_C1e6_winter_4; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.LR_C1e6_winter_4
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1e6/winter/d5/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/LR_C1e6/winter/d4/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_LR_C1e6_winter_5 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1e6/winter/d5/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_LR_C1e6_winter_5
$ifthen.LR_C1e6_winter_5 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1e6/winter/d5/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=LR_C1e6 --SEASON=winter --DAY=5 --PREV=4 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/LR_C1e6/winter/d5/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/LR_C1e6/winter/d5/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: LR_C1e6_winter_5; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.LR_C1e6_winter_5
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1e6/winter/d6/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/LR_C1e6/winter/d5/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_LR_C1e6_winter_6 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1e6/winter/d6/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_LR_C1e6_winter_6
$ifthen.LR_C1e6_winter_6 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1e6/winter/d6/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=LR_C1e6 --SEASON=winter --DAY=6 --PREV=5 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/LR_C1e6/winter/d6/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/LR_C1e6/winter/d6/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: LR_C1e6_winter_6; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.LR_C1e6_winter_6
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1e6/winter/d7/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/LR_C1e6/winter/d6/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_LR_C1e6_winter_7 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1e6/winter/d7/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_LR_C1e6_winter_7
$ifthen.LR_C1e6_winter_7 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1e6/winter/d7/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=LR_C1e6 --SEASON=winter --DAY=7 --PREV=6 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/LR_C1e6/winter/d7/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/LR_C1e6/winter/d7/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: LR_C1e6_winter_7; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.LR_C1e6_winter_7
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C01/winter/d1/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SVM_C01_winter_1 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C01/winter/d1/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SVM_C01_winter_1
$ifthen.SVM_C01_winter_1 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C01/winter/d1/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SVM_C01 --SEASON=winter --DAY=1 --PREV=0 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SVM_C01/winter/d1/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SVM_C01/winter/d1/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SVM_C01_winter_1; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SVM_C01_winter_1
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C01/winter/d2/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/SVM_C01/winter/d1/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SVM_C01_winter_2 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C01/winter/d2/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SVM_C01_winter_2
$ifthen.SVM_C01_winter_2 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C01/winter/d2/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SVM_C01 --SEASON=winter --DAY=2 --PREV=1 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SVM_C01/winter/d2/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SVM_C01/winter/d2/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SVM_C01_winter_2; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SVM_C01_winter_2
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C01/winter/d3/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/SVM_C01/winter/d2/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SVM_C01_winter_3 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C01/winter/d3/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SVM_C01_winter_3
$ifthen.SVM_C01_winter_3 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C01/winter/d3/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SVM_C01 --SEASON=winter --DAY=3 --PREV=2 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SVM_C01/winter/d3/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SVM_C01/winter/d3/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SVM_C01_winter_3; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SVM_C01_winter_3
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C01/winter/d4/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/SVM_C01/winter/d3/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SVM_C01_winter_4 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C01/winter/d4/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SVM_C01_winter_4
$ifthen.SVM_C01_winter_4 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C01/winter/d4/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SVM_C01 --SEASON=winter --DAY=4 --PREV=3 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SVM_C01/winter/d4/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SVM_C01/winter/d4/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SVM_C01_winter_4; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SVM_C01_winter_4
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C01/winter/d5/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/SVM_C01/winter/d4/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SVM_C01_winter_5 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C01/winter/d5/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SVM_C01_winter_5
$ifthen.SVM_C01_winter_5 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C01/winter/d5/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SVM_C01 --SEASON=winter --DAY=5 --PREV=4 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SVM_C01/winter/d5/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SVM_C01/winter/d5/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SVM_C01_winter_5; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SVM_C01_winter_5
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C01/winter/d6/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/SVM_C01/winter/d5/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SVM_C01_winter_6 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C01/winter/d6/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SVM_C01_winter_6
$ifthen.SVM_C01_winter_6 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C01/winter/d6/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SVM_C01 --SEASON=winter --DAY=6 --PREV=5 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SVM_C01/winter/d6/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SVM_C01/winter/d6/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SVM_C01_winter_6; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SVM_C01_winter_6
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C01/winter/d7/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/SVM_C01/winter/d6/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SVM_C01_winter_7 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C01/winter/d7/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SVM_C01_winter_7
$ifthen.SVM_C01_winter_7 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C01/winter/d7/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SVM_C01 --SEASON=winter --DAY=7 --PREV=6 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SVM_C01/winter/d7/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SVM_C01/winter/d7/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SVM_C01_winter_7; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SVM_C01_winter_7
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C1/winter/d1/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SVM_C1_winter_1 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C1/winter/d1/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SVM_C1_winter_1
$ifthen.SVM_C1_winter_1 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C1/winter/d1/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SVM_C1 --SEASON=winter --DAY=1 --PREV=0 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SVM_C1/winter/d1/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SVM_C1/winter/d1/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SVM_C1_winter_1; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SVM_C1_winter_1
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C1/winter/d2/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/SVM_C1/winter/d1/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SVM_C1_winter_2 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C1/winter/d2/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SVM_C1_winter_2
$ifthen.SVM_C1_winter_2 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C1/winter/d2/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SVM_C1 --SEASON=winter --DAY=2 --PREV=1 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SVM_C1/winter/d2/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SVM_C1/winter/d2/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SVM_C1_winter_2; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SVM_C1_winter_2
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C1/winter/d3/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/SVM_C1/winter/d2/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SVM_C1_winter_3 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C1/winter/d3/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SVM_C1_winter_3
$ifthen.SVM_C1_winter_3 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C1/winter/d3/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SVM_C1 --SEASON=winter --DAY=3 --PREV=2 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SVM_C1/winter/d3/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SVM_C1/winter/d3/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SVM_C1_winter_3; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SVM_C1_winter_3
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C1/winter/d4/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/SVM_C1/winter/d3/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SVM_C1_winter_4 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C1/winter/d4/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SVM_C1_winter_4
$ifthen.SVM_C1_winter_4 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C1/winter/d4/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SVM_C1 --SEASON=winter --DAY=4 --PREV=3 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SVM_C1/winter/d4/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SVM_C1/winter/d4/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SVM_C1_winter_4; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SVM_C1_winter_4
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C1/winter/d5/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/SVM_C1/winter/d4/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SVM_C1_winter_5 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C1/winter/d5/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SVM_C1_winter_5
$ifthen.SVM_C1_winter_5 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C1/winter/d5/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SVM_C1 --SEASON=winter --DAY=5 --PREV=4 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SVM_C1/winter/d5/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SVM_C1/winter/d5/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SVM_C1_winter_5; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SVM_C1_winter_5
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C1/winter/d6/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/SVM_C1/winter/d5/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SVM_C1_winter_6 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C1/winter/d6/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SVM_C1_winter_6
$ifthen.SVM_C1_winter_6 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C1/winter/d6/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SVM_C1 --SEASON=winter --DAY=6 --PREV=5 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SVM_C1/winter/d6/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SVM_C1/winter/d6/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SVM_C1_winter_6; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SVM_C1_winter_6
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C1/winter/d7/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/SVM_C1/winter/d6/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SVM_C1_winter_7 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C1/winter/d7/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SVM_C1_winter_7
$ifthen.SVM_C1_winter_7 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C1/winter/d7/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SVM_C1 --SEASON=winter --DAY=7 --PREV=6 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SVM_C1/winter/d7/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SVM_C1/winter/d7/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SVM_C1_winter_7; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SVM_C1_winter_7
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C10/winter/d1/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SVM_C10_winter_1 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C10/winter/d1/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SVM_C10_winter_1
$ifthen.SVM_C10_winter_1 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C10/winter/d1/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SVM_C10 --SEASON=winter --DAY=1 --PREV=0 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SVM_C10/winter/d1/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SVM_C10/winter/d1/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SVM_C10_winter_1; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SVM_C10_winter_1
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C10/winter/d2/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/SVM_C10/winter/d1/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SVM_C10_winter_2 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C10/winter/d2/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SVM_C10_winter_2
$ifthen.SVM_C10_winter_2 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C10/winter/d2/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SVM_C10 --SEASON=winter --DAY=2 --PREV=1 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SVM_C10/winter/d2/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SVM_C10/winter/d2/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SVM_C10_winter_2; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SVM_C10_winter_2
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C10/winter/d3/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/SVM_C10/winter/d2/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SVM_C10_winter_3 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C10/winter/d3/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SVM_C10_winter_3
$ifthen.SVM_C10_winter_3 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C10/winter/d3/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SVM_C10 --SEASON=winter --DAY=3 --PREV=2 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SVM_C10/winter/d3/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SVM_C10/winter/d3/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SVM_C10_winter_3; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SVM_C10_winter_3
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C10/winter/d4/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/SVM_C10/winter/d3/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SVM_C10_winter_4 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C10/winter/d4/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SVM_C10_winter_4
$ifthen.SVM_C10_winter_4 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C10/winter/d4/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SVM_C10 --SEASON=winter --DAY=4 --PREV=3 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SVM_C10/winter/d4/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SVM_C10/winter/d4/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SVM_C10_winter_4; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SVM_C10_winter_4
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C10/winter/d5/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/SVM_C10/winter/d4/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SVM_C10_winter_5 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C10/winter/d5/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SVM_C10_winter_5
$ifthen.SVM_C10_winter_5 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C10/winter/d5/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SVM_C10 --SEASON=winter --DAY=5 --PREV=4 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SVM_C10/winter/d5/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SVM_C10/winter/d5/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SVM_C10_winter_5; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SVM_C10_winter_5
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C10/winter/d6/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/SVM_C10/winter/d5/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SVM_C10_winter_6 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C10/winter/d6/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SVM_C10_winter_6
$ifthen.SVM_C10_winter_6 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C10/winter/d6/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SVM_C10 --SEASON=winter --DAY=6 --PREV=5 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SVM_C10/winter/d6/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SVM_C10/winter/d6/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SVM_C10_winter_6; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SVM_C10_winter_6
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C10/winter/d7/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/SVM_C10/winter/d6/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SVM_C10_winter_7 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C10/winter/d7/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SVM_C10_winter_7
$ifthen.SVM_C10_winter_7 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C10/winter/d7/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SVM_C10 --SEASON=winter --DAY=7 --PREV=6 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SVM_C10/winter/d7/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SVM_C10/winter/d7/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SVM_C10_winter_7; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SVM_C10_winter_7
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/LDA/winter/d1/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_LDA_winter_1 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/LDA/winter/d1/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_LDA_winter_1
$ifthen.LDA_winter_1 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/LDA/winter/d1/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=LDA --SEASON=winter --DAY=1 --PREV=0 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/LDA/winter/d1/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/LDA/winter/d1/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: LDA_winter_1; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.LDA_winter_1
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/LDA/winter/d2/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/LDA/winter/d1/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_LDA_winter_2 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/LDA/winter/d2/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_LDA_winter_2
$ifthen.LDA_winter_2 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/LDA/winter/d2/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=LDA --SEASON=winter --DAY=2 --PREV=1 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/LDA/winter/d2/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/LDA/winter/d2/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: LDA_winter_2; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.LDA_winter_2
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/LDA/winter/d3/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/LDA/winter/d2/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_LDA_winter_3 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/LDA/winter/d3/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_LDA_winter_3
$ifthen.LDA_winter_3 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/LDA/winter/d3/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=LDA --SEASON=winter --DAY=3 --PREV=2 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/LDA/winter/d3/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/LDA/winter/d3/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: LDA_winter_3; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.LDA_winter_3
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/LDA/winter/d4/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/LDA/winter/d3/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_LDA_winter_4 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/LDA/winter/d4/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_LDA_winter_4
$ifthen.LDA_winter_4 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/LDA/winter/d4/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=LDA --SEASON=winter --DAY=4 --PREV=3 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/LDA/winter/d4/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/LDA/winter/d4/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: LDA_winter_4; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.LDA_winter_4
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/LDA/winter/d5/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/LDA/winter/d4/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_LDA_winter_5 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/LDA/winter/d5/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_LDA_winter_5
$ifthen.LDA_winter_5 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/LDA/winter/d5/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=LDA --SEASON=winter --DAY=5 --PREV=4 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/LDA/winter/d5/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/LDA/winter/d5/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: LDA_winter_5; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.LDA_winter_5
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/LDA/winter/d6/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/LDA/winter/d5/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_LDA_winter_6 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/LDA/winter/d6/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_LDA_winter_6
$ifthen.LDA_winter_6 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/LDA/winter/d6/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=LDA --SEASON=winter --DAY=6 --PREV=5 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/LDA/winter/d6/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/LDA/winter/d6/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: LDA_winter_6; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.LDA_winter_6
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/LDA/winter/d7/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/LDA/winter/d6/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_LDA_winter_7 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/LDA/winter/d7/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_LDA_winter_7
$ifthen.LDA_winter_7 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/LDA/winter/d7/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=LDA --SEASON=winter --DAY=7 --PREV=6 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/LDA/winter/d7/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/LDA/winter/d7/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: LDA_winter_7; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.LDA_winter_7
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Log/winter/d1/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SGD_Log_winter_1 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Log/winter/d1/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SGD_Log_winter_1
$ifthen.SGD_Log_winter_1 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Log/winter/d1/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SGD_Log --SEASON=winter --DAY=1 --PREV=0 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SGD_Log/winter/d1/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SGD_Log/winter/d1/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SGD_Log_winter_1; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SGD_Log_winter_1
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Log/winter/d2/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/SGD_Log/winter/d1/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SGD_Log_winter_2 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Log/winter/d2/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SGD_Log_winter_2
$ifthen.SGD_Log_winter_2 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Log/winter/d2/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SGD_Log --SEASON=winter --DAY=2 --PREV=1 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SGD_Log/winter/d2/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SGD_Log/winter/d2/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SGD_Log_winter_2; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SGD_Log_winter_2
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Log/winter/d3/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/SGD_Log/winter/d2/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SGD_Log_winter_3 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Log/winter/d3/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SGD_Log_winter_3
$ifthen.SGD_Log_winter_3 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Log/winter/d3/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SGD_Log --SEASON=winter --DAY=3 --PREV=2 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SGD_Log/winter/d3/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SGD_Log/winter/d3/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SGD_Log_winter_3; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SGD_Log_winter_3
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Log/winter/d4/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/SGD_Log/winter/d3/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SGD_Log_winter_4 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Log/winter/d4/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SGD_Log_winter_4
$ifthen.SGD_Log_winter_4 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Log/winter/d4/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SGD_Log --SEASON=winter --DAY=4 --PREV=3 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SGD_Log/winter/d4/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SGD_Log/winter/d4/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SGD_Log_winter_4; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SGD_Log_winter_4
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Log/winter/d5/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/SGD_Log/winter/d4/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SGD_Log_winter_5 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Log/winter/d5/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SGD_Log_winter_5
$ifthen.SGD_Log_winter_5 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Log/winter/d5/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SGD_Log --SEASON=winter --DAY=5 --PREV=4 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SGD_Log/winter/d5/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SGD_Log/winter/d5/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SGD_Log_winter_5; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SGD_Log_winter_5
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Log/winter/d6/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/SGD_Log/winter/d5/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SGD_Log_winter_6 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Log/winter/d6/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SGD_Log_winter_6
$ifthen.SGD_Log_winter_6 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Log/winter/d6/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SGD_Log --SEASON=winter --DAY=6 --PREV=5 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SGD_Log/winter/d6/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SGD_Log/winter/d6/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SGD_Log_winter_6; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SGD_Log_winter_6
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Log/winter/d7/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/SGD_Log/winter/d6/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SGD_Log_winter_7 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Log/winter/d7/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SGD_Log_winter_7
$ifthen.SGD_Log_winter_7 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Log/winter/d7/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SGD_Log --SEASON=winter --DAY=7 --PREV=6 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SGD_Log/winter/d7/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SGD_Log/winter/d7/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SGD_Log_winter_7; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SGD_Log_winter_7
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Hinge/winter/d1/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SGD_Hinge_winter_1 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Hinge/winter/d1/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SGD_Hinge_winter_1
$ifthen.SGD_Hinge_winter_1 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Hinge/winter/d1/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SGD_Hinge --SEASON=winter --DAY=1 --PREV=0 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SGD_Hinge/winter/d1/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SGD_Hinge/winter/d1/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SGD_Hinge_winter_1; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SGD_Hinge_winter_1
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Hinge/winter/d2/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/SGD_Hinge/winter/d1/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SGD_Hinge_winter_2 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Hinge/winter/d2/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SGD_Hinge_winter_2
$ifthen.SGD_Hinge_winter_2 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Hinge/winter/d2/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SGD_Hinge --SEASON=winter --DAY=2 --PREV=1 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SGD_Hinge/winter/d2/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SGD_Hinge/winter/d2/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SGD_Hinge_winter_2; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SGD_Hinge_winter_2
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Hinge/winter/d3/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/SGD_Hinge/winter/d2/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SGD_Hinge_winter_3 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Hinge/winter/d3/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SGD_Hinge_winter_3
$ifthen.SGD_Hinge_winter_3 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Hinge/winter/d3/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SGD_Hinge --SEASON=winter --DAY=3 --PREV=2 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SGD_Hinge/winter/d3/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SGD_Hinge/winter/d3/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SGD_Hinge_winter_3; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SGD_Hinge_winter_3
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Hinge/winter/d4/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/SGD_Hinge/winter/d3/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SGD_Hinge_winter_4 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Hinge/winter/d4/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SGD_Hinge_winter_4
$ifthen.SGD_Hinge_winter_4 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Hinge/winter/d4/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SGD_Hinge --SEASON=winter --DAY=4 --PREV=3 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SGD_Hinge/winter/d4/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SGD_Hinge/winter/d4/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SGD_Hinge_winter_4; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SGD_Hinge_winter_4
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Hinge/winter/d5/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/SGD_Hinge/winter/d4/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SGD_Hinge_winter_5 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Hinge/winter/d5/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SGD_Hinge_winter_5
$ifthen.SGD_Hinge_winter_5 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Hinge/winter/d5/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SGD_Hinge --SEASON=winter --DAY=5 --PREV=4 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SGD_Hinge/winter/d5/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SGD_Hinge/winter/d5/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SGD_Hinge_winter_5; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SGD_Hinge_winter_5
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Hinge/winter/d6/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/SGD_Hinge/winter/d5/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SGD_Hinge_winter_6 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Hinge/winter/d6/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SGD_Hinge_winter_6
$ifthen.SGD_Hinge_winter_6 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Hinge/winter/d6/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SGD_Hinge --SEASON=winter --DAY=6 --PREV=5 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SGD_Hinge/winter/d6/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SGD_Hinge/winter/d6/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SGD_Hinge_winter_6; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SGD_Hinge_winter_6
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Hinge/winter/d7/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/SGD_Hinge/winter/d6/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SGD_Hinge_winter_7 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Hinge/winter/d7/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SGD_Hinge_winter_7
$ifthen.SGD_Hinge_winter_7 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Hinge/winter/d7/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SGD_Hinge --SEASON=winter --DAY=7 --PREV=6 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SGD_Hinge/winter/d7/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SGD_Hinge/winter/d7/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SGD_Hinge_winter_7; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SGD_Hinge_winter_7
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/PA/winter/d1/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_PA_winter_1 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/PA/winter/d1/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_PA_winter_1
$ifthen.PA_winter_1 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/PA/winter/d1/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=PA --SEASON=winter --DAY=1 --PREV=0 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/PA/winter/d1/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/PA/winter/d1/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: PA_winter_1; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.PA_winter_1
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/PA/winter/d2/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/PA/winter/d1/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_PA_winter_2 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/PA/winter/d2/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_PA_winter_2
$ifthen.PA_winter_2 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/PA/winter/d2/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=PA --SEASON=winter --DAY=2 --PREV=1 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/PA/winter/d2/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/PA/winter/d2/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: PA_winter_2; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.PA_winter_2
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/PA/winter/d3/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/PA/winter/d2/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_PA_winter_3 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/PA/winter/d3/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_PA_winter_3
$ifthen.PA_winter_3 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/PA/winter/d3/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=PA --SEASON=winter --DAY=3 --PREV=2 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/PA/winter/d3/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/PA/winter/d3/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: PA_winter_3; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.PA_winter_3
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/PA/winter/d4/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/PA/winter/d3/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_PA_winter_4 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/PA/winter/d4/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_PA_winter_4
$ifthen.PA_winter_4 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/PA/winter/d4/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=PA --SEASON=winter --DAY=4 --PREV=3 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/PA/winter/d4/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/PA/winter/d4/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: PA_winter_4; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.PA_winter_4
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/PA/winter/d5/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/PA/winter/d4/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_PA_winter_5 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/PA/winter/d5/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_PA_winter_5
$ifthen.PA_winter_5 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/PA/winter/d5/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=PA --SEASON=winter --DAY=5 --PREV=4 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/PA/winter/d5/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/PA/winter/d5/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: PA_winter_5; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.PA_winter_5
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/PA/winter/d6/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/PA/winter/d5/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_PA_winter_6 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/PA/winter/d6/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_PA_winter_6
$ifthen.PA_winter_6 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/PA/winter/d6/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=PA --SEASON=winter --DAY=6 --PREV=5 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/PA/winter/d6/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/PA/winter/d6/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: PA_winter_6; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.PA_winter_6
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/PA/winter/d7/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/PA/winter/d6/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_PA_winter_7 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/PA/winter/d7/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_PA_winter_7
$ifthen.PA_winter_7 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/PA/winter/d7/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=PA --SEASON=winter --DAY=7 --PREV=6 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/PA/winter/d7/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/PA/winter/d7/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: PA_winter_7; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.PA_winter_7
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/REF050/winter/d1/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_REF050_winter_1 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/REF050/winter/d1/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_REF050_winter_1
$ifthen.REF050_winter_1 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/REF050/winter/d1/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=REF050 --SEASON=winter --DAY=1 --PREV=0 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/REF050/winter/d1/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/REF050/winter/d1/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: REF050_winter_1; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.REF050_winter_1
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/REF050/winter/d2/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/REF050/winter/d1/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_REF050_winter_2 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/REF050/winter/d2/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_REF050_winter_2
$ifthen.REF050_winter_2 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/REF050/winter/d2/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=REF050 --SEASON=winter --DAY=2 --PREV=1 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/REF050/winter/d2/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/REF050/winter/d2/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: REF050_winter_2; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.REF050_winter_2
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/REF050/winter/d3/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/REF050/winter/d2/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_REF050_winter_3 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/REF050/winter/d3/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_REF050_winter_3
$ifthen.REF050_winter_3 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/REF050/winter/d3/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=REF050 --SEASON=winter --DAY=3 --PREV=2 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/REF050/winter/d3/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/REF050/winter/d3/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: REF050_winter_3; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.REF050_winter_3
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/REF050/winter/d4/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/REF050/winter/d3/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_REF050_winter_4 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/REF050/winter/d4/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_REF050_winter_4
$ifthen.REF050_winter_4 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/REF050/winter/d4/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=REF050 --SEASON=winter --DAY=4 --PREV=3 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/REF050/winter/d4/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/REF050/winter/d4/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: REF050_winter_4; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.REF050_winter_4
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/REF050/winter/d5/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/REF050/winter/d4/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_REF050_winter_5 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/REF050/winter/d5/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_REF050_winter_5
$ifthen.REF050_winter_5 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/REF050/winter/d5/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=REF050 --SEASON=winter --DAY=5 --PREV=4 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/REF050/winter/d5/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/REF050/winter/d5/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: REF050_winter_5; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.REF050_winter_5
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/REF050/winter/d6/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/REF050/winter/d5/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_REF050_winter_6 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/REF050/winter/d6/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_REF050_winter_6
$ifthen.REF050_winter_6 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/REF050/winter/d6/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=REF050 --SEASON=winter --DAY=6 --PREV=5 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/REF050/winter/d6/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/REF050/winter/d6/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: REF050_winter_6; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.REF050_winter_6
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/REF050/winter/d7/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/REF050/winter/d6/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_REF050_winter_7 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/REF050/winter/d7/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_REF050_winter_7
$ifthen.REF050_winter_7 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/REF050/winter/d7/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=REF050 --SEASON=winter --DAY=7 --PREV=6 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/REF050/winter/d7/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/REF050/winter/d7/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: REF050_winter_7; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.REF050_winter_7
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/REF090/winter/d1/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_REF090_winter_1 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/REF090/winter/d1/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_REF090_winter_1
$ifthen.REF090_winter_1 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/REF090/winter/d1/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=REF090 --SEASON=winter --DAY=1 --PREV=0 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/REF090/winter/d1/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/REF090/winter/d1/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: REF090_winter_1; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.REF090_winter_1
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/REF090/winter/d2/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/REF090/winter/d1/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_REF090_winter_2 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/REF090/winter/d2/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_REF090_winter_2
$ifthen.REF090_winter_2 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/REF090/winter/d2/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=REF090 --SEASON=winter --DAY=2 --PREV=1 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/REF090/winter/d2/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/REF090/winter/d2/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: REF090_winter_2; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.REF090_winter_2
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/REF090/winter/d3/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/REF090/winter/d2/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_REF090_winter_3 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/REF090/winter/d3/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_REF090_winter_3
$ifthen.REF090_winter_3 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/REF090/winter/d3/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=REF090 --SEASON=winter --DAY=3 --PREV=2 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/REF090/winter/d3/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/REF090/winter/d3/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: REF090_winter_3; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.REF090_winter_3
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/REF090/winter/d4/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/REF090/winter/d3/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_REF090_winter_4 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/REF090/winter/d4/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_REF090_winter_4
$ifthen.REF090_winter_4 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/REF090/winter/d4/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=REF090 --SEASON=winter --DAY=4 --PREV=3 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/REF090/winter/d4/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/REF090/winter/d4/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: REF090_winter_4; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.REF090_winter_4
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/REF090/winter/d5/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/REF090/winter/d4/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_REF090_winter_5 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/REF090/winter/d5/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_REF090_winter_5
$ifthen.REF090_winter_5 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/REF090/winter/d5/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=REF090 --SEASON=winter --DAY=5 --PREV=4 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/REF090/winter/d5/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/REF090/winter/d5/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: REF090_winter_5; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.REF090_winter_5
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/REF090/winter/d6/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/REF090/winter/d5/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_REF090_winter_6 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/REF090/winter/d6/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_REF090_winter_6
$ifthen.REF090_winter_6 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/REF090/winter/d6/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=REF090 --SEASON=winter --DAY=6 --PREV=5 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/REF090/winter/d6/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/REF090/winter/d6/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: REF090_winter_6; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.REF090_winter_6
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/REF090/winter/d7/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/REF090/winter/d6/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_REF090_winter_7 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/REF090/winter/d7/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_REF090_winter_7
$ifthen.REF090_winter_7 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/REF090/winter/d7/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=REF090 --SEASON=winter --DAY=7 --PREV=6 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/REF090/winter/d7/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/REF090/winter/d7/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: REF090_winter_7; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.REF090_winter_7
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/REF095/winter/d1/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_REF095_winter_1 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/REF095/winter/d1/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_REF095_winter_1
$ifthen.REF095_winter_1 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/REF095/winter/d1/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=REF095 --SEASON=winter --DAY=1 --PREV=0 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/REF095/winter/d1/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/REF095/winter/d1/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: REF095_winter_1; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.REF095_winter_1
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/REF095/winter/d2/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/REF095/winter/d1/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_REF095_winter_2 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/REF095/winter/d2/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_REF095_winter_2
$ifthen.REF095_winter_2 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/REF095/winter/d2/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=REF095 --SEASON=winter --DAY=2 --PREV=1 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/REF095/winter/d2/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/REF095/winter/d2/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: REF095_winter_2; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.REF095_winter_2
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/REF095/winter/d3/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/REF095/winter/d2/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_REF095_winter_3 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/REF095/winter/d3/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_REF095_winter_3
$ifthen.REF095_winter_3 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/REF095/winter/d3/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=REF095 --SEASON=winter --DAY=3 --PREV=2 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/REF095/winter/d3/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/REF095/winter/d3/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: REF095_winter_3; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.REF095_winter_3
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/REF095/winter/d4/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/REF095/winter/d3/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_REF095_winter_4 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/REF095/winter/d4/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_REF095_winter_4
$ifthen.REF095_winter_4 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/REF095/winter/d4/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=REF095 --SEASON=winter --DAY=4 --PREV=3 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/REF095/winter/d4/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/REF095/winter/d4/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: REF095_winter_4; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.REF095_winter_4
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/REF095/winter/d5/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/REF095/winter/d4/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_REF095_winter_5 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/REF095/winter/d5/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_REF095_winter_5
$ifthen.REF095_winter_5 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/REF095/winter/d5/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=REF095 --SEASON=winter --DAY=5 --PREV=4 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/REF095/winter/d5/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/REF095/winter/d5/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: REF095_winter_5; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.REF095_winter_5
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/REF095/winter/d6/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/REF095/winter/d5/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_REF095_winter_6 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/REF095/winter/d6/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_REF095_winter_6
$ifthen.REF095_winter_6 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/REF095/winter/d6/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=REF095 --SEASON=winter --DAY=6 --PREV=5 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/REF095/winter/d6/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/REF095/winter/d6/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: REF095_winter_6; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.REF095_winter_6
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/REF095/winter/d7/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/REF095/winter/d6/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_REF095_winter_7 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/REF095/winter/d7/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_REF095_winter_7
$ifthen.REF095_winter_7 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/REF095/winter/d7/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=REF095 --SEASON=winter --DAY=7 --PREV=6 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/REF095/winter/d7/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/REF095/winter/d7/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: REF095_winter_7; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.REF095_winter_7
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1/spring/d1/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_LR_C1_spring_1 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1/spring/d1/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_LR_C1_spring_1
$ifthen.LR_C1_spring_1 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1/spring/d1/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=LR_C1 --SEASON=spring --DAY=1 --PREV=0 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/LR_C1/spring/d1/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/LR_C1/spring/d1/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: LR_C1_spring_1; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.LR_C1_spring_1
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1/spring/d2/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/LR_C1/spring/d1/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_LR_C1_spring_2 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1/spring/d2/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_LR_C1_spring_2
$ifthen.LR_C1_spring_2 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1/spring/d2/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=LR_C1 --SEASON=spring --DAY=2 --PREV=1 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/LR_C1/spring/d2/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/LR_C1/spring/d2/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: LR_C1_spring_2; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.LR_C1_spring_2
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1/spring/d3/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/LR_C1/spring/d2/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_LR_C1_spring_3 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1/spring/d3/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_LR_C1_spring_3
$ifthen.LR_C1_spring_3 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1/spring/d3/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=LR_C1 --SEASON=spring --DAY=3 --PREV=2 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/LR_C1/spring/d3/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/LR_C1/spring/d3/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: LR_C1_spring_3; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.LR_C1_spring_3
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1/spring/d4/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/LR_C1/spring/d3/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_LR_C1_spring_4 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1/spring/d4/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_LR_C1_spring_4
$ifthen.LR_C1_spring_4 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1/spring/d4/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=LR_C1 --SEASON=spring --DAY=4 --PREV=3 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/LR_C1/spring/d4/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/LR_C1/spring/d4/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: LR_C1_spring_4; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.LR_C1_spring_4
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1/spring/d5/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/LR_C1/spring/d4/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_LR_C1_spring_5 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1/spring/d5/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_LR_C1_spring_5
$ifthen.LR_C1_spring_5 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1/spring/d5/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=LR_C1 --SEASON=spring --DAY=5 --PREV=4 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/LR_C1/spring/d5/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/LR_C1/spring/d5/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: LR_C1_spring_5; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.LR_C1_spring_5
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1/spring/d6/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/LR_C1/spring/d5/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_LR_C1_spring_6 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1/spring/d6/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_LR_C1_spring_6
$ifthen.LR_C1_spring_6 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1/spring/d6/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=LR_C1 --SEASON=spring --DAY=6 --PREV=5 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/LR_C1/spring/d6/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/LR_C1/spring/d6/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: LR_C1_spring_6; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.LR_C1_spring_6
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1/spring/d7/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/LR_C1/spring/d6/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_LR_C1_spring_7 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1/spring/d7/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_LR_C1_spring_7
$ifthen.LR_C1_spring_7 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1/spring/d7/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=LR_C1 --SEASON=spring --DAY=7 --PREV=6 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/LR_C1/spring/d7/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/LR_C1/spring/d7/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: LR_C1_spring_7; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.LR_C1_spring_7
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1e6/spring/d1/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_LR_C1e6_spring_1 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1e6/spring/d1/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_LR_C1e6_spring_1
$ifthen.LR_C1e6_spring_1 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1e6/spring/d1/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=LR_C1e6 --SEASON=spring --DAY=1 --PREV=0 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/LR_C1e6/spring/d1/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/LR_C1e6/spring/d1/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: LR_C1e6_spring_1; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.LR_C1e6_spring_1
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1e6/spring/d2/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/LR_C1e6/spring/d1/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_LR_C1e6_spring_2 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1e6/spring/d2/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_LR_C1e6_spring_2
$ifthen.LR_C1e6_spring_2 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1e6/spring/d2/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=LR_C1e6 --SEASON=spring --DAY=2 --PREV=1 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/LR_C1e6/spring/d2/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/LR_C1e6/spring/d2/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: LR_C1e6_spring_2; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.LR_C1e6_spring_2
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1e6/spring/d3/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/LR_C1e6/spring/d2/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_LR_C1e6_spring_3 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1e6/spring/d3/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_LR_C1e6_spring_3
$ifthen.LR_C1e6_spring_3 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1e6/spring/d3/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=LR_C1e6 --SEASON=spring --DAY=3 --PREV=2 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/LR_C1e6/spring/d3/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/LR_C1e6/spring/d3/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: LR_C1e6_spring_3; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.LR_C1e6_spring_3
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1e6/spring/d4/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/LR_C1e6/spring/d3/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_LR_C1e6_spring_4 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1e6/spring/d4/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_LR_C1e6_spring_4
$ifthen.LR_C1e6_spring_4 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1e6/spring/d4/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=LR_C1e6 --SEASON=spring --DAY=4 --PREV=3 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/LR_C1e6/spring/d4/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/LR_C1e6/spring/d4/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: LR_C1e6_spring_4; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.LR_C1e6_spring_4
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1e6/spring/d5/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/LR_C1e6/spring/d4/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_LR_C1e6_spring_5 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1e6/spring/d5/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_LR_C1e6_spring_5
$ifthen.LR_C1e6_spring_5 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1e6/spring/d5/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=LR_C1e6 --SEASON=spring --DAY=5 --PREV=4 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/LR_C1e6/spring/d5/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/LR_C1e6/spring/d5/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: LR_C1e6_spring_5; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.LR_C1e6_spring_5
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1e6/spring/d6/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/LR_C1e6/spring/d5/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_LR_C1e6_spring_6 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1e6/spring/d6/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_LR_C1e6_spring_6
$ifthen.LR_C1e6_spring_6 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1e6/spring/d6/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=LR_C1e6 --SEASON=spring --DAY=6 --PREV=5 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/LR_C1e6/spring/d6/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/LR_C1e6/spring/d6/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: LR_C1e6_spring_6; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.LR_C1e6_spring_6
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1e6/spring/d7/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/LR_C1e6/spring/d6/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_LR_C1e6_spring_7 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1e6/spring/d7/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_LR_C1e6_spring_7
$ifthen.LR_C1e6_spring_7 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1e6/spring/d7/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=LR_C1e6 --SEASON=spring --DAY=7 --PREV=6 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/LR_C1e6/spring/d7/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/LR_C1e6/spring/d7/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: LR_C1e6_spring_7; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.LR_C1e6_spring_7
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C01/spring/d1/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SVM_C01_spring_1 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C01/spring/d1/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SVM_C01_spring_1
$ifthen.SVM_C01_spring_1 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C01/spring/d1/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SVM_C01 --SEASON=spring --DAY=1 --PREV=0 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SVM_C01/spring/d1/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SVM_C01/spring/d1/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SVM_C01_spring_1; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SVM_C01_spring_1
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C01/spring/d2/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/SVM_C01/spring/d1/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SVM_C01_spring_2 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C01/spring/d2/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SVM_C01_spring_2
$ifthen.SVM_C01_spring_2 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C01/spring/d2/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SVM_C01 --SEASON=spring --DAY=2 --PREV=1 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SVM_C01/spring/d2/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SVM_C01/spring/d2/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SVM_C01_spring_2; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SVM_C01_spring_2
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C01/spring/d3/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/SVM_C01/spring/d2/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SVM_C01_spring_3 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C01/spring/d3/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SVM_C01_spring_3
$ifthen.SVM_C01_spring_3 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C01/spring/d3/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SVM_C01 --SEASON=spring --DAY=3 --PREV=2 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SVM_C01/spring/d3/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SVM_C01/spring/d3/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SVM_C01_spring_3; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SVM_C01_spring_3
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C01/spring/d4/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/SVM_C01/spring/d3/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SVM_C01_spring_4 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C01/spring/d4/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SVM_C01_spring_4
$ifthen.SVM_C01_spring_4 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C01/spring/d4/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SVM_C01 --SEASON=spring --DAY=4 --PREV=3 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SVM_C01/spring/d4/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SVM_C01/spring/d4/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SVM_C01_spring_4; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SVM_C01_spring_4
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C01/spring/d5/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/SVM_C01/spring/d4/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SVM_C01_spring_5 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C01/spring/d5/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SVM_C01_spring_5
$ifthen.SVM_C01_spring_5 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C01/spring/d5/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SVM_C01 --SEASON=spring --DAY=5 --PREV=4 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SVM_C01/spring/d5/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SVM_C01/spring/d5/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SVM_C01_spring_5; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SVM_C01_spring_5
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C01/spring/d6/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/SVM_C01/spring/d5/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SVM_C01_spring_6 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C01/spring/d6/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SVM_C01_spring_6
$ifthen.SVM_C01_spring_6 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C01/spring/d6/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SVM_C01 --SEASON=spring --DAY=6 --PREV=5 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SVM_C01/spring/d6/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SVM_C01/spring/d6/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SVM_C01_spring_6; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SVM_C01_spring_6
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C01/spring/d7/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/SVM_C01/spring/d6/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SVM_C01_spring_7 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C01/spring/d7/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SVM_C01_spring_7
$ifthen.SVM_C01_spring_7 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C01/spring/d7/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SVM_C01 --SEASON=spring --DAY=7 --PREV=6 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SVM_C01/spring/d7/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SVM_C01/spring/d7/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SVM_C01_spring_7; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SVM_C01_spring_7
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C1/spring/d1/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SVM_C1_spring_1 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C1/spring/d1/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SVM_C1_spring_1
$ifthen.SVM_C1_spring_1 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C1/spring/d1/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SVM_C1 --SEASON=spring --DAY=1 --PREV=0 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SVM_C1/spring/d1/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SVM_C1/spring/d1/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SVM_C1_spring_1; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SVM_C1_spring_1
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C1/spring/d2/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/SVM_C1/spring/d1/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SVM_C1_spring_2 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C1/spring/d2/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SVM_C1_spring_2
$ifthen.SVM_C1_spring_2 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C1/spring/d2/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SVM_C1 --SEASON=spring --DAY=2 --PREV=1 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SVM_C1/spring/d2/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SVM_C1/spring/d2/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SVM_C1_spring_2; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SVM_C1_spring_2
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C1/spring/d3/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/SVM_C1/spring/d2/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SVM_C1_spring_3 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C1/spring/d3/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SVM_C1_spring_3
$ifthen.SVM_C1_spring_3 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C1/spring/d3/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SVM_C1 --SEASON=spring --DAY=3 --PREV=2 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SVM_C1/spring/d3/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SVM_C1/spring/d3/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SVM_C1_spring_3; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SVM_C1_spring_3
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C1/spring/d4/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/SVM_C1/spring/d3/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SVM_C1_spring_4 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C1/spring/d4/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SVM_C1_spring_4
$ifthen.SVM_C1_spring_4 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C1/spring/d4/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SVM_C1 --SEASON=spring --DAY=4 --PREV=3 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SVM_C1/spring/d4/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SVM_C1/spring/d4/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SVM_C1_spring_4; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SVM_C1_spring_4
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C1/spring/d5/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/SVM_C1/spring/d4/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SVM_C1_spring_5 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C1/spring/d5/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SVM_C1_spring_5
$ifthen.SVM_C1_spring_5 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C1/spring/d5/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SVM_C1 --SEASON=spring --DAY=5 --PREV=4 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SVM_C1/spring/d5/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SVM_C1/spring/d5/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SVM_C1_spring_5; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SVM_C1_spring_5
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C1/spring/d6/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/SVM_C1/spring/d5/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SVM_C1_spring_6 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C1/spring/d6/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SVM_C1_spring_6
$ifthen.SVM_C1_spring_6 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C1/spring/d6/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SVM_C1 --SEASON=spring --DAY=6 --PREV=5 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SVM_C1/spring/d6/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SVM_C1/spring/d6/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SVM_C1_spring_6; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SVM_C1_spring_6
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C1/spring/d7/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/SVM_C1/spring/d6/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SVM_C1_spring_7 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C1/spring/d7/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SVM_C1_spring_7
$ifthen.SVM_C1_spring_7 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C1/spring/d7/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SVM_C1 --SEASON=spring --DAY=7 --PREV=6 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SVM_C1/spring/d7/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SVM_C1/spring/d7/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SVM_C1_spring_7; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SVM_C1_spring_7
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C10/spring/d1/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SVM_C10_spring_1 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C10/spring/d1/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SVM_C10_spring_1
$ifthen.SVM_C10_spring_1 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C10/spring/d1/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SVM_C10 --SEASON=spring --DAY=1 --PREV=0 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SVM_C10/spring/d1/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SVM_C10/spring/d1/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SVM_C10_spring_1; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SVM_C10_spring_1
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C10/spring/d2/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/SVM_C10/spring/d1/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SVM_C10_spring_2 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C10/spring/d2/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SVM_C10_spring_2
$ifthen.SVM_C10_spring_2 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C10/spring/d2/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SVM_C10 --SEASON=spring --DAY=2 --PREV=1 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SVM_C10/spring/d2/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SVM_C10/spring/d2/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SVM_C10_spring_2; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SVM_C10_spring_2
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C10/spring/d3/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/SVM_C10/spring/d2/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SVM_C10_spring_3 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C10/spring/d3/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SVM_C10_spring_3
$ifthen.SVM_C10_spring_3 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C10/spring/d3/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SVM_C10 --SEASON=spring --DAY=3 --PREV=2 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SVM_C10/spring/d3/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SVM_C10/spring/d3/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SVM_C10_spring_3; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SVM_C10_spring_3
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C10/spring/d4/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/SVM_C10/spring/d3/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SVM_C10_spring_4 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C10/spring/d4/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SVM_C10_spring_4
$ifthen.SVM_C10_spring_4 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C10/spring/d4/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SVM_C10 --SEASON=spring --DAY=4 --PREV=3 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SVM_C10/spring/d4/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SVM_C10/spring/d4/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SVM_C10_spring_4; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SVM_C10_spring_4
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C10/spring/d5/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/SVM_C10/spring/d4/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SVM_C10_spring_5 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C10/spring/d5/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SVM_C10_spring_5
$ifthen.SVM_C10_spring_5 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C10/spring/d5/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SVM_C10 --SEASON=spring --DAY=5 --PREV=4 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SVM_C10/spring/d5/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SVM_C10/spring/d5/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SVM_C10_spring_5; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SVM_C10_spring_5
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C10/spring/d6/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/SVM_C10/spring/d5/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SVM_C10_spring_6 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C10/spring/d6/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SVM_C10_spring_6
$ifthen.SVM_C10_spring_6 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C10/spring/d6/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SVM_C10 --SEASON=spring --DAY=6 --PREV=5 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SVM_C10/spring/d6/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SVM_C10/spring/d6/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SVM_C10_spring_6; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SVM_C10_spring_6
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C10/spring/d7/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/SVM_C10/spring/d6/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SVM_C10_spring_7 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C10/spring/d7/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SVM_C10_spring_7
$ifthen.SVM_C10_spring_7 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C10/spring/d7/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SVM_C10 --SEASON=spring --DAY=7 --PREV=6 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SVM_C10/spring/d7/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SVM_C10/spring/d7/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SVM_C10_spring_7; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SVM_C10_spring_7
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/LDA/spring/d1/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_LDA_spring_1 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/LDA/spring/d1/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_LDA_spring_1
$ifthen.LDA_spring_1 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/LDA/spring/d1/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=LDA --SEASON=spring --DAY=1 --PREV=0 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/LDA/spring/d1/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/LDA/spring/d1/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: LDA_spring_1; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.LDA_spring_1
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/LDA/spring/d2/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/LDA/spring/d1/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_LDA_spring_2 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/LDA/spring/d2/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_LDA_spring_2
$ifthen.LDA_spring_2 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/LDA/spring/d2/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=LDA --SEASON=spring --DAY=2 --PREV=1 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/LDA/spring/d2/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/LDA/spring/d2/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: LDA_spring_2; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.LDA_spring_2
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/LDA/spring/d3/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/LDA/spring/d2/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_LDA_spring_3 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/LDA/spring/d3/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_LDA_spring_3
$ifthen.LDA_spring_3 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/LDA/spring/d3/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=LDA --SEASON=spring --DAY=3 --PREV=2 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/LDA/spring/d3/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/LDA/spring/d3/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: LDA_spring_3; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.LDA_spring_3
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/LDA/spring/d4/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/LDA/spring/d3/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_LDA_spring_4 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/LDA/spring/d4/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_LDA_spring_4
$ifthen.LDA_spring_4 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/LDA/spring/d4/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=LDA --SEASON=spring --DAY=4 --PREV=3 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/LDA/spring/d4/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/LDA/spring/d4/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: LDA_spring_4; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.LDA_spring_4
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/LDA/spring/d5/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/LDA/spring/d4/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_LDA_spring_5 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/LDA/spring/d5/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_LDA_spring_5
$ifthen.LDA_spring_5 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/LDA/spring/d5/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=LDA --SEASON=spring --DAY=5 --PREV=4 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/LDA/spring/d5/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/LDA/spring/d5/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: LDA_spring_5; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.LDA_spring_5
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/LDA/spring/d6/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/LDA/spring/d5/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_LDA_spring_6 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/LDA/spring/d6/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_LDA_spring_6
$ifthen.LDA_spring_6 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/LDA/spring/d6/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=LDA --SEASON=spring --DAY=6 --PREV=5 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/LDA/spring/d6/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/LDA/spring/d6/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: LDA_spring_6; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.LDA_spring_6
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/LDA/spring/d7/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/LDA/spring/d6/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_LDA_spring_7 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/LDA/spring/d7/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_LDA_spring_7
$ifthen.LDA_spring_7 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/LDA/spring/d7/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=LDA --SEASON=spring --DAY=7 --PREV=6 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/LDA/spring/d7/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/LDA/spring/d7/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: LDA_spring_7; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.LDA_spring_7
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Log/spring/d1/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SGD_Log_spring_1 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Log/spring/d1/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SGD_Log_spring_1
$ifthen.SGD_Log_spring_1 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Log/spring/d1/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SGD_Log --SEASON=spring --DAY=1 --PREV=0 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SGD_Log/spring/d1/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SGD_Log/spring/d1/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SGD_Log_spring_1; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SGD_Log_spring_1
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Log/spring/d2/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/SGD_Log/spring/d1/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SGD_Log_spring_2 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Log/spring/d2/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SGD_Log_spring_2
$ifthen.SGD_Log_spring_2 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Log/spring/d2/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SGD_Log --SEASON=spring --DAY=2 --PREV=1 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SGD_Log/spring/d2/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SGD_Log/spring/d2/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SGD_Log_spring_2; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SGD_Log_spring_2
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Log/spring/d3/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/SGD_Log/spring/d2/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SGD_Log_spring_3 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Log/spring/d3/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SGD_Log_spring_3
$ifthen.SGD_Log_spring_3 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Log/spring/d3/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SGD_Log --SEASON=spring --DAY=3 --PREV=2 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SGD_Log/spring/d3/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SGD_Log/spring/d3/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SGD_Log_spring_3; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SGD_Log_spring_3
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Log/spring/d4/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/SGD_Log/spring/d3/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SGD_Log_spring_4 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Log/spring/d4/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SGD_Log_spring_4
$ifthen.SGD_Log_spring_4 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Log/spring/d4/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SGD_Log --SEASON=spring --DAY=4 --PREV=3 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SGD_Log/spring/d4/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SGD_Log/spring/d4/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SGD_Log_spring_4; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SGD_Log_spring_4
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Log/spring/d5/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/SGD_Log/spring/d4/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SGD_Log_spring_5 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Log/spring/d5/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SGD_Log_spring_5
$ifthen.SGD_Log_spring_5 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Log/spring/d5/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SGD_Log --SEASON=spring --DAY=5 --PREV=4 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SGD_Log/spring/d5/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SGD_Log/spring/d5/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SGD_Log_spring_5; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SGD_Log_spring_5
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Log/spring/d6/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/SGD_Log/spring/d5/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SGD_Log_spring_6 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Log/spring/d6/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SGD_Log_spring_6
$ifthen.SGD_Log_spring_6 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Log/spring/d6/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SGD_Log --SEASON=spring --DAY=6 --PREV=5 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SGD_Log/spring/d6/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SGD_Log/spring/d6/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SGD_Log_spring_6; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SGD_Log_spring_6
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Log/spring/d7/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/SGD_Log/spring/d6/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SGD_Log_spring_7 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Log/spring/d7/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SGD_Log_spring_7
$ifthen.SGD_Log_spring_7 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Log/spring/d7/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SGD_Log --SEASON=spring --DAY=7 --PREV=6 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SGD_Log/spring/d7/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SGD_Log/spring/d7/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SGD_Log_spring_7; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SGD_Log_spring_7
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Hinge/spring/d1/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SGD_Hinge_spring_1 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Hinge/spring/d1/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SGD_Hinge_spring_1
$ifthen.SGD_Hinge_spring_1 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Hinge/spring/d1/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SGD_Hinge --SEASON=spring --DAY=1 --PREV=0 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SGD_Hinge/spring/d1/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SGD_Hinge/spring/d1/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SGD_Hinge_spring_1; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SGD_Hinge_spring_1
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Hinge/spring/d2/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/SGD_Hinge/spring/d1/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SGD_Hinge_spring_2 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Hinge/spring/d2/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SGD_Hinge_spring_2
$ifthen.SGD_Hinge_spring_2 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Hinge/spring/d2/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SGD_Hinge --SEASON=spring --DAY=2 --PREV=1 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SGD_Hinge/spring/d2/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SGD_Hinge/spring/d2/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SGD_Hinge_spring_2; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SGD_Hinge_spring_2
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Hinge/spring/d3/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/SGD_Hinge/spring/d2/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SGD_Hinge_spring_3 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Hinge/spring/d3/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SGD_Hinge_spring_3
$ifthen.SGD_Hinge_spring_3 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Hinge/spring/d3/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SGD_Hinge --SEASON=spring --DAY=3 --PREV=2 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SGD_Hinge/spring/d3/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SGD_Hinge/spring/d3/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SGD_Hinge_spring_3; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SGD_Hinge_spring_3
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Hinge/spring/d4/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/SGD_Hinge/spring/d3/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SGD_Hinge_spring_4 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Hinge/spring/d4/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SGD_Hinge_spring_4
$ifthen.SGD_Hinge_spring_4 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Hinge/spring/d4/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SGD_Hinge --SEASON=spring --DAY=4 --PREV=3 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SGD_Hinge/spring/d4/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SGD_Hinge/spring/d4/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SGD_Hinge_spring_4; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SGD_Hinge_spring_4
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Hinge/spring/d5/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/SGD_Hinge/spring/d4/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SGD_Hinge_spring_5 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Hinge/spring/d5/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SGD_Hinge_spring_5
$ifthen.SGD_Hinge_spring_5 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Hinge/spring/d5/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SGD_Hinge --SEASON=spring --DAY=5 --PREV=4 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SGD_Hinge/spring/d5/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SGD_Hinge/spring/d5/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SGD_Hinge_spring_5; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SGD_Hinge_spring_5
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Hinge/spring/d6/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/SGD_Hinge/spring/d5/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SGD_Hinge_spring_6 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Hinge/spring/d6/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SGD_Hinge_spring_6
$ifthen.SGD_Hinge_spring_6 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Hinge/spring/d6/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SGD_Hinge --SEASON=spring --DAY=6 --PREV=5 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SGD_Hinge/spring/d6/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SGD_Hinge/spring/d6/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SGD_Hinge_spring_6; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SGD_Hinge_spring_6
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Hinge/spring/d7/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/SGD_Hinge/spring/d6/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SGD_Hinge_spring_7 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Hinge/spring/d7/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SGD_Hinge_spring_7
$ifthen.SGD_Hinge_spring_7 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Hinge/spring/d7/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SGD_Hinge --SEASON=spring --DAY=7 --PREV=6 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SGD_Hinge/spring/d7/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SGD_Hinge/spring/d7/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SGD_Hinge_spring_7; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SGD_Hinge_spring_7
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/PA/spring/d1/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_PA_spring_1 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/PA/spring/d1/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_PA_spring_1
$ifthen.PA_spring_1 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/PA/spring/d1/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=PA --SEASON=spring --DAY=1 --PREV=0 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/PA/spring/d1/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/PA/spring/d1/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: PA_spring_1; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.PA_spring_1
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/PA/spring/d2/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/PA/spring/d1/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_PA_spring_2 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/PA/spring/d2/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_PA_spring_2
$ifthen.PA_spring_2 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/PA/spring/d2/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=PA --SEASON=spring --DAY=2 --PREV=1 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/PA/spring/d2/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/PA/spring/d2/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: PA_spring_2; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.PA_spring_2
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/PA/spring/d3/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/PA/spring/d2/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_PA_spring_3 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/PA/spring/d3/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_PA_spring_3
$ifthen.PA_spring_3 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/PA/spring/d3/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=PA --SEASON=spring --DAY=3 --PREV=2 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/PA/spring/d3/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/PA/spring/d3/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: PA_spring_3; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.PA_spring_3
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/PA/spring/d4/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/PA/spring/d3/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_PA_spring_4 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/PA/spring/d4/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_PA_spring_4
$ifthen.PA_spring_4 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/PA/spring/d4/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=PA --SEASON=spring --DAY=4 --PREV=3 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/PA/spring/d4/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/PA/spring/d4/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: PA_spring_4; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.PA_spring_4
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/PA/spring/d5/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/PA/spring/d4/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_PA_spring_5 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/PA/spring/d5/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_PA_spring_5
$ifthen.PA_spring_5 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/PA/spring/d5/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=PA --SEASON=spring --DAY=5 --PREV=4 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/PA/spring/d5/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/PA/spring/d5/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: PA_spring_5; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.PA_spring_5
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/PA/spring/d6/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/PA/spring/d5/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_PA_spring_6 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/PA/spring/d6/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_PA_spring_6
$ifthen.PA_spring_6 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/PA/spring/d6/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=PA --SEASON=spring --DAY=6 --PREV=5 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/PA/spring/d6/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/PA/spring/d6/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: PA_spring_6; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.PA_spring_6
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/PA/spring/d7/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/PA/spring/d6/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_PA_spring_7 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/PA/spring/d7/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_PA_spring_7
$ifthen.PA_spring_7 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/PA/spring/d7/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=PA --SEASON=spring --DAY=7 --PREV=6 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/PA/spring/d7/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/PA/spring/d7/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: PA_spring_7; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.PA_spring_7
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/REF050/spring/d1/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_REF050_spring_1 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/REF050/spring/d1/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_REF050_spring_1
$ifthen.REF050_spring_1 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/REF050/spring/d1/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=REF050 --SEASON=spring --DAY=1 --PREV=0 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/REF050/spring/d1/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/REF050/spring/d1/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: REF050_spring_1; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.REF050_spring_1
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/REF050/spring/d2/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/REF050/spring/d1/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_REF050_spring_2 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/REF050/spring/d2/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_REF050_spring_2
$ifthen.REF050_spring_2 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/REF050/spring/d2/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=REF050 --SEASON=spring --DAY=2 --PREV=1 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/REF050/spring/d2/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/REF050/spring/d2/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: REF050_spring_2; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.REF050_spring_2
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/REF050/spring/d3/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/REF050/spring/d2/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_REF050_spring_3 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/REF050/spring/d3/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_REF050_spring_3
$ifthen.REF050_spring_3 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/REF050/spring/d3/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=REF050 --SEASON=spring --DAY=3 --PREV=2 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/REF050/spring/d3/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/REF050/spring/d3/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: REF050_spring_3; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.REF050_spring_3
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/REF050/spring/d4/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/REF050/spring/d3/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_REF050_spring_4 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/REF050/spring/d4/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_REF050_spring_4
$ifthen.REF050_spring_4 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/REF050/spring/d4/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=REF050 --SEASON=spring --DAY=4 --PREV=3 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/REF050/spring/d4/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/REF050/spring/d4/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: REF050_spring_4; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.REF050_spring_4
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/REF050/spring/d5/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/REF050/spring/d4/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_REF050_spring_5 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/REF050/spring/d5/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_REF050_spring_5
$ifthen.REF050_spring_5 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/REF050/spring/d5/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=REF050 --SEASON=spring --DAY=5 --PREV=4 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/REF050/spring/d5/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/REF050/spring/d5/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: REF050_spring_5; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.REF050_spring_5
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/REF050/spring/d6/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/REF050/spring/d5/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_REF050_spring_6 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/REF050/spring/d6/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_REF050_spring_6
$ifthen.REF050_spring_6 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/REF050/spring/d6/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=REF050 --SEASON=spring --DAY=6 --PREV=5 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/REF050/spring/d6/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/REF050/spring/d6/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: REF050_spring_6; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.REF050_spring_6
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/REF050/spring/d7/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/REF050/spring/d6/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_REF050_spring_7 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/REF050/spring/d7/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_REF050_spring_7
$ifthen.REF050_spring_7 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/REF050/spring/d7/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=REF050 --SEASON=spring --DAY=7 --PREV=6 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/REF050/spring/d7/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/REF050/spring/d7/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: REF050_spring_7; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.REF050_spring_7
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/REF090/spring/d1/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_REF090_spring_1 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/REF090/spring/d1/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_REF090_spring_1
$ifthen.REF090_spring_1 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/REF090/spring/d1/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=REF090 --SEASON=spring --DAY=1 --PREV=0 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/REF090/spring/d1/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/REF090/spring/d1/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: REF090_spring_1; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.REF090_spring_1
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/REF090/spring/d2/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/REF090/spring/d1/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_REF090_spring_2 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/REF090/spring/d2/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_REF090_spring_2
$ifthen.REF090_spring_2 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/REF090/spring/d2/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=REF090 --SEASON=spring --DAY=2 --PREV=1 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/REF090/spring/d2/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/REF090/spring/d2/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: REF090_spring_2; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.REF090_spring_2
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/REF090/spring/d3/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/REF090/spring/d2/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_REF090_spring_3 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/REF090/spring/d3/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_REF090_spring_3
$ifthen.REF090_spring_3 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/REF090/spring/d3/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=REF090 --SEASON=spring --DAY=3 --PREV=2 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/REF090/spring/d3/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/REF090/spring/d3/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: REF090_spring_3; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.REF090_spring_3
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/REF090/spring/d4/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/REF090/spring/d3/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_REF090_spring_4 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/REF090/spring/d4/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_REF090_spring_4
$ifthen.REF090_spring_4 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/REF090/spring/d4/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=REF090 --SEASON=spring --DAY=4 --PREV=3 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/REF090/spring/d4/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/REF090/spring/d4/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: REF090_spring_4; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.REF090_spring_4
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/REF090/spring/d5/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/REF090/spring/d4/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_REF090_spring_5 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/REF090/spring/d5/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_REF090_spring_5
$ifthen.REF090_spring_5 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/REF090/spring/d5/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=REF090 --SEASON=spring --DAY=5 --PREV=4 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/REF090/spring/d5/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/REF090/spring/d5/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: REF090_spring_5; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.REF090_spring_5
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/REF090/spring/d6/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/REF090/spring/d5/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_REF090_spring_6 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/REF090/spring/d6/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_REF090_spring_6
$ifthen.REF090_spring_6 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/REF090/spring/d6/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=REF090 --SEASON=spring --DAY=6 --PREV=5 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/REF090/spring/d6/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/REF090/spring/d6/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: REF090_spring_6; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.REF090_spring_6
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/REF090/spring/d7/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/REF090/spring/d6/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_REF090_spring_7 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/REF090/spring/d7/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_REF090_spring_7
$ifthen.REF090_spring_7 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/REF090/spring/d7/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=REF090 --SEASON=spring --DAY=7 --PREV=6 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/REF090/spring/d7/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/REF090/spring/d7/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: REF090_spring_7; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.REF090_spring_7
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/REF095/spring/d1/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_REF095_spring_1 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/REF095/spring/d1/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_REF095_spring_1
$ifthen.REF095_spring_1 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/REF095/spring/d1/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=REF095 --SEASON=spring --DAY=1 --PREV=0 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/REF095/spring/d1/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/REF095/spring/d1/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: REF095_spring_1; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.REF095_spring_1
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/REF095/spring/d2/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/REF095/spring/d1/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_REF095_spring_2 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/REF095/spring/d2/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_REF095_spring_2
$ifthen.REF095_spring_2 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/REF095/spring/d2/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=REF095 --SEASON=spring --DAY=2 --PREV=1 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/REF095/spring/d2/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/REF095/spring/d2/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: REF095_spring_2; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.REF095_spring_2
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/REF095/spring/d3/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/REF095/spring/d2/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_REF095_spring_3 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/REF095/spring/d3/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_REF095_spring_3
$ifthen.REF095_spring_3 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/REF095/spring/d3/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=REF095 --SEASON=spring --DAY=3 --PREV=2 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/REF095/spring/d3/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/REF095/spring/d3/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: REF095_spring_3; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.REF095_spring_3
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/REF095/spring/d4/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/REF095/spring/d3/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_REF095_spring_4 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/REF095/spring/d4/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_REF095_spring_4
$ifthen.REF095_spring_4 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/REF095/spring/d4/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=REF095 --SEASON=spring --DAY=4 --PREV=3 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/REF095/spring/d4/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/REF095/spring/d4/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: REF095_spring_4; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.REF095_spring_4
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/REF095/spring/d5/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/REF095/spring/d4/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_REF095_spring_5 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/REF095/spring/d5/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_REF095_spring_5
$ifthen.REF095_spring_5 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/REF095/spring/d5/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=REF095 --SEASON=spring --DAY=5 --PREV=4 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/REF095/spring/d5/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/REF095/spring/d5/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: REF095_spring_5; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.REF095_spring_5
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/REF095/spring/d6/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/REF095/spring/d5/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_REF095_spring_6 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/REF095/spring/d6/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_REF095_spring_6
$ifthen.REF095_spring_6 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/REF095/spring/d6/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=REF095 --SEASON=spring --DAY=6 --PREV=5 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/REF095/spring/d6/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/REF095/spring/d6/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: REF095_spring_6; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.REF095_spring_6
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/REF095/spring/d7/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/REF095/spring/d6/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_REF095_spring_7 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/REF095/spring/d7/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_REF095_spring_7
$ifthen.REF095_spring_7 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/REF095/spring/d7/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=REF095 --SEASON=spring --DAY=7 --PREV=6 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/REF095/spring/d7/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/REF095/spring/d7/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: REF095_spring_7; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.REF095_spring_7
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1/summer/d1/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_LR_C1_summer_1 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1/summer/d1/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_LR_C1_summer_1
$ifthen.LR_C1_summer_1 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1/summer/d1/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=LR_C1 --SEASON=summer --DAY=1 --PREV=0 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/LR_C1/summer/d1/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/LR_C1/summer/d1/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: LR_C1_summer_1; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.LR_C1_summer_1
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1/summer/d2/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/LR_C1/summer/d1/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_LR_C1_summer_2 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1/summer/d2/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_LR_C1_summer_2
$ifthen.LR_C1_summer_2 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1/summer/d2/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=LR_C1 --SEASON=summer --DAY=2 --PREV=1 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/LR_C1/summer/d2/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/LR_C1/summer/d2/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: LR_C1_summer_2; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.LR_C1_summer_2
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1/summer/d3/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/LR_C1/summer/d2/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_LR_C1_summer_3 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1/summer/d3/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_LR_C1_summer_3
$ifthen.LR_C1_summer_3 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1/summer/d3/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=LR_C1 --SEASON=summer --DAY=3 --PREV=2 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/LR_C1/summer/d3/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/LR_C1/summer/d3/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: LR_C1_summer_3; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.LR_C1_summer_3
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1/summer/d4/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/LR_C1/summer/d3/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_LR_C1_summer_4 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1/summer/d4/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_LR_C1_summer_4
$ifthen.LR_C1_summer_4 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1/summer/d4/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=LR_C1 --SEASON=summer --DAY=4 --PREV=3 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/LR_C1/summer/d4/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/LR_C1/summer/d4/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: LR_C1_summer_4; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.LR_C1_summer_4
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1/summer/d5/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/LR_C1/summer/d4/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_LR_C1_summer_5 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1/summer/d5/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_LR_C1_summer_5
$ifthen.LR_C1_summer_5 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1/summer/d5/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=LR_C1 --SEASON=summer --DAY=5 --PREV=4 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/LR_C1/summer/d5/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/LR_C1/summer/d5/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: LR_C1_summer_5; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.LR_C1_summer_5
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1/summer/d6/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/LR_C1/summer/d5/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_LR_C1_summer_6 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1/summer/d6/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_LR_C1_summer_6
$ifthen.LR_C1_summer_6 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1/summer/d6/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=LR_C1 --SEASON=summer --DAY=6 --PREV=5 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/LR_C1/summer/d6/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/LR_C1/summer/d6/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: LR_C1_summer_6; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.LR_C1_summer_6
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1/summer/d7/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/LR_C1/summer/d6/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_LR_C1_summer_7 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1/summer/d7/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_LR_C1_summer_7
$ifthen.LR_C1_summer_7 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1/summer/d7/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=LR_C1 --SEASON=summer --DAY=7 --PREV=6 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/LR_C1/summer/d7/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/LR_C1/summer/d7/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: LR_C1_summer_7; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.LR_C1_summer_7
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1e6/summer/d1/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_LR_C1e6_summer_1 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1e6/summer/d1/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_LR_C1e6_summer_1
$ifthen.LR_C1e6_summer_1 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1e6/summer/d1/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=LR_C1e6 --SEASON=summer --DAY=1 --PREV=0 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/LR_C1e6/summer/d1/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/LR_C1e6/summer/d1/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: LR_C1e6_summer_1; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.LR_C1e6_summer_1
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1e6/summer/d2/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/LR_C1e6/summer/d1/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_LR_C1e6_summer_2 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1e6/summer/d2/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_LR_C1e6_summer_2
$ifthen.LR_C1e6_summer_2 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1e6/summer/d2/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=LR_C1e6 --SEASON=summer --DAY=2 --PREV=1 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/LR_C1e6/summer/d2/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/LR_C1e6/summer/d2/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: LR_C1e6_summer_2; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.LR_C1e6_summer_2
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1e6/summer/d3/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/LR_C1e6/summer/d2/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_LR_C1e6_summer_3 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1e6/summer/d3/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_LR_C1e6_summer_3
$ifthen.LR_C1e6_summer_3 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1e6/summer/d3/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=LR_C1e6 --SEASON=summer --DAY=3 --PREV=2 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/LR_C1e6/summer/d3/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/LR_C1e6/summer/d3/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: LR_C1e6_summer_3; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.LR_C1e6_summer_3
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1e6/summer/d4/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/LR_C1e6/summer/d3/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_LR_C1e6_summer_4 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1e6/summer/d4/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_LR_C1e6_summer_4
$ifthen.LR_C1e6_summer_4 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1e6/summer/d4/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=LR_C1e6 --SEASON=summer --DAY=4 --PREV=3 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/LR_C1e6/summer/d4/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/LR_C1e6/summer/d4/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: LR_C1e6_summer_4; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.LR_C1e6_summer_4
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1e6/summer/d5/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/LR_C1e6/summer/d4/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_LR_C1e6_summer_5 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1e6/summer/d5/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_LR_C1e6_summer_5
$ifthen.LR_C1e6_summer_5 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1e6/summer/d5/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=LR_C1e6 --SEASON=summer --DAY=5 --PREV=4 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/LR_C1e6/summer/d5/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/LR_C1e6/summer/d5/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: LR_C1e6_summer_5; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.LR_C1e6_summer_5
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1e6/summer/d6/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/LR_C1e6/summer/d5/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_LR_C1e6_summer_6 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1e6/summer/d6/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_LR_C1e6_summer_6
$ifthen.LR_C1e6_summer_6 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1e6/summer/d6/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=LR_C1e6 --SEASON=summer --DAY=6 --PREV=5 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/LR_C1e6/summer/d6/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/LR_C1e6/summer/d6/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: LR_C1e6_summer_6; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.LR_C1e6_summer_6
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1e6/summer/d7/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/LR_C1e6/summer/d6/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_LR_C1e6_summer_7 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1e6/summer/d7/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_LR_C1e6_summer_7
$ifthen.LR_C1e6_summer_7 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1e6/summer/d7/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=LR_C1e6 --SEASON=summer --DAY=7 --PREV=6 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/LR_C1e6/summer/d7/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/LR_C1e6/summer/d7/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: LR_C1e6_summer_7; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.LR_C1e6_summer_7
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C01/summer/d1/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SVM_C01_summer_1 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C01/summer/d1/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SVM_C01_summer_1
$ifthen.SVM_C01_summer_1 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C01/summer/d1/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SVM_C01 --SEASON=summer --DAY=1 --PREV=0 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SVM_C01/summer/d1/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SVM_C01/summer/d1/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SVM_C01_summer_1; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SVM_C01_summer_1
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C01/summer/d2/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/SVM_C01/summer/d1/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SVM_C01_summer_2 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C01/summer/d2/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SVM_C01_summer_2
$ifthen.SVM_C01_summer_2 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C01/summer/d2/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SVM_C01 --SEASON=summer --DAY=2 --PREV=1 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SVM_C01/summer/d2/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SVM_C01/summer/d2/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SVM_C01_summer_2; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SVM_C01_summer_2
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C01/summer/d3/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/SVM_C01/summer/d2/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SVM_C01_summer_3 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C01/summer/d3/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SVM_C01_summer_3
$ifthen.SVM_C01_summer_3 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C01/summer/d3/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SVM_C01 --SEASON=summer --DAY=3 --PREV=2 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SVM_C01/summer/d3/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SVM_C01/summer/d3/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SVM_C01_summer_3; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SVM_C01_summer_3
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C01/summer/d4/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/SVM_C01/summer/d3/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SVM_C01_summer_4 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C01/summer/d4/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SVM_C01_summer_4
$ifthen.SVM_C01_summer_4 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C01/summer/d4/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SVM_C01 --SEASON=summer --DAY=4 --PREV=3 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SVM_C01/summer/d4/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SVM_C01/summer/d4/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SVM_C01_summer_4; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SVM_C01_summer_4
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C01/summer/d5/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/SVM_C01/summer/d4/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SVM_C01_summer_5 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C01/summer/d5/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SVM_C01_summer_5
$ifthen.SVM_C01_summer_5 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C01/summer/d5/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SVM_C01 --SEASON=summer --DAY=5 --PREV=4 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SVM_C01/summer/d5/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SVM_C01/summer/d5/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SVM_C01_summer_5; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SVM_C01_summer_5
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C01/summer/d6/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/SVM_C01/summer/d5/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SVM_C01_summer_6 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C01/summer/d6/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SVM_C01_summer_6
$ifthen.SVM_C01_summer_6 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C01/summer/d6/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SVM_C01 --SEASON=summer --DAY=6 --PREV=5 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SVM_C01/summer/d6/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SVM_C01/summer/d6/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SVM_C01_summer_6; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SVM_C01_summer_6
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C01/summer/d7/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/SVM_C01/summer/d6/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SVM_C01_summer_7 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C01/summer/d7/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SVM_C01_summer_7
$ifthen.SVM_C01_summer_7 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C01/summer/d7/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SVM_C01 --SEASON=summer --DAY=7 --PREV=6 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SVM_C01/summer/d7/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SVM_C01/summer/d7/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SVM_C01_summer_7; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SVM_C01_summer_7
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C1/summer/d1/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SVM_C1_summer_1 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C1/summer/d1/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SVM_C1_summer_1
$ifthen.SVM_C1_summer_1 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C1/summer/d1/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SVM_C1 --SEASON=summer --DAY=1 --PREV=0 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SVM_C1/summer/d1/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SVM_C1/summer/d1/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SVM_C1_summer_1; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SVM_C1_summer_1
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C1/summer/d2/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/SVM_C1/summer/d1/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SVM_C1_summer_2 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C1/summer/d2/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SVM_C1_summer_2
$ifthen.SVM_C1_summer_2 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C1/summer/d2/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SVM_C1 --SEASON=summer --DAY=2 --PREV=1 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SVM_C1/summer/d2/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SVM_C1/summer/d2/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SVM_C1_summer_2; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SVM_C1_summer_2
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C1/summer/d3/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/SVM_C1/summer/d2/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SVM_C1_summer_3 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C1/summer/d3/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SVM_C1_summer_3
$ifthen.SVM_C1_summer_3 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C1/summer/d3/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SVM_C1 --SEASON=summer --DAY=3 --PREV=2 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SVM_C1/summer/d3/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SVM_C1/summer/d3/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SVM_C1_summer_3; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SVM_C1_summer_3
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C1/summer/d4/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/SVM_C1/summer/d3/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SVM_C1_summer_4 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C1/summer/d4/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SVM_C1_summer_4
$ifthen.SVM_C1_summer_4 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C1/summer/d4/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SVM_C1 --SEASON=summer --DAY=4 --PREV=3 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SVM_C1/summer/d4/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SVM_C1/summer/d4/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SVM_C1_summer_4; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SVM_C1_summer_4
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C1/summer/d5/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/SVM_C1/summer/d4/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SVM_C1_summer_5 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C1/summer/d5/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SVM_C1_summer_5
$ifthen.SVM_C1_summer_5 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C1/summer/d5/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SVM_C1 --SEASON=summer --DAY=5 --PREV=4 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SVM_C1/summer/d5/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SVM_C1/summer/d5/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SVM_C1_summer_5; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SVM_C1_summer_5
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C1/summer/d6/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/SVM_C1/summer/d5/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SVM_C1_summer_6 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C1/summer/d6/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SVM_C1_summer_6
$ifthen.SVM_C1_summer_6 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C1/summer/d6/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SVM_C1 --SEASON=summer --DAY=6 --PREV=5 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SVM_C1/summer/d6/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SVM_C1/summer/d6/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SVM_C1_summer_6; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SVM_C1_summer_6
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C1/summer/d7/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/SVM_C1/summer/d6/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SVM_C1_summer_7 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C1/summer/d7/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SVM_C1_summer_7
$ifthen.SVM_C1_summer_7 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C1/summer/d7/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SVM_C1 --SEASON=summer --DAY=7 --PREV=6 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SVM_C1/summer/d7/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SVM_C1/summer/d7/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SVM_C1_summer_7; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SVM_C1_summer_7
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C10/summer/d1/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SVM_C10_summer_1 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C10/summer/d1/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SVM_C10_summer_1
$ifthen.SVM_C10_summer_1 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C10/summer/d1/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SVM_C10 --SEASON=summer --DAY=1 --PREV=0 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SVM_C10/summer/d1/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SVM_C10/summer/d1/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SVM_C10_summer_1; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SVM_C10_summer_1
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C10/summer/d2/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/SVM_C10/summer/d1/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SVM_C10_summer_2 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C10/summer/d2/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SVM_C10_summer_2
$ifthen.SVM_C10_summer_2 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C10/summer/d2/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SVM_C10 --SEASON=summer --DAY=2 --PREV=1 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SVM_C10/summer/d2/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SVM_C10/summer/d2/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SVM_C10_summer_2; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SVM_C10_summer_2
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C10/summer/d3/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/SVM_C10/summer/d2/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SVM_C10_summer_3 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C10/summer/d3/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SVM_C10_summer_3
$ifthen.SVM_C10_summer_3 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C10/summer/d3/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SVM_C10 --SEASON=summer --DAY=3 --PREV=2 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SVM_C10/summer/d3/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SVM_C10/summer/d3/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SVM_C10_summer_3; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SVM_C10_summer_3
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C10/summer/d4/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/SVM_C10/summer/d3/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SVM_C10_summer_4 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C10/summer/d4/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SVM_C10_summer_4
$ifthen.SVM_C10_summer_4 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C10/summer/d4/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SVM_C10 --SEASON=summer --DAY=4 --PREV=3 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SVM_C10/summer/d4/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SVM_C10/summer/d4/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SVM_C10_summer_4; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SVM_C10_summer_4
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C10/summer/d5/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/SVM_C10/summer/d4/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SVM_C10_summer_5 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C10/summer/d5/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SVM_C10_summer_5
$ifthen.SVM_C10_summer_5 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C10/summer/d5/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SVM_C10 --SEASON=summer --DAY=5 --PREV=4 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SVM_C10/summer/d5/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SVM_C10/summer/d5/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SVM_C10_summer_5; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SVM_C10_summer_5
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C10/summer/d6/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/SVM_C10/summer/d5/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SVM_C10_summer_6 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C10/summer/d6/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SVM_C10_summer_6
$ifthen.SVM_C10_summer_6 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C10/summer/d6/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SVM_C10 --SEASON=summer --DAY=6 --PREV=5 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SVM_C10/summer/d6/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SVM_C10/summer/d6/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SVM_C10_summer_6; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SVM_C10_summer_6
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C10/summer/d7/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/SVM_C10/summer/d6/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SVM_C10_summer_7 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C10/summer/d7/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SVM_C10_summer_7
$ifthen.SVM_C10_summer_7 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C10/summer/d7/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SVM_C10 --SEASON=summer --DAY=7 --PREV=6 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SVM_C10/summer/d7/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SVM_C10/summer/d7/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SVM_C10_summer_7; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SVM_C10_summer_7
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/LDA/summer/d1/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_LDA_summer_1 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/LDA/summer/d1/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_LDA_summer_1
$ifthen.LDA_summer_1 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/LDA/summer/d1/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=LDA --SEASON=summer --DAY=1 --PREV=0 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/LDA/summer/d1/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/LDA/summer/d1/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: LDA_summer_1; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.LDA_summer_1
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/LDA/summer/d2/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/LDA/summer/d1/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_LDA_summer_2 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/LDA/summer/d2/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_LDA_summer_2
$ifthen.LDA_summer_2 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/LDA/summer/d2/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=LDA --SEASON=summer --DAY=2 --PREV=1 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/LDA/summer/d2/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/LDA/summer/d2/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: LDA_summer_2; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.LDA_summer_2
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/LDA/summer/d3/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/LDA/summer/d2/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_LDA_summer_3 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/LDA/summer/d3/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_LDA_summer_3
$ifthen.LDA_summer_3 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/LDA/summer/d3/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=LDA --SEASON=summer --DAY=3 --PREV=2 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/LDA/summer/d3/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/LDA/summer/d3/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: LDA_summer_3; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.LDA_summer_3
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/LDA/summer/d4/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/LDA/summer/d3/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_LDA_summer_4 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/LDA/summer/d4/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_LDA_summer_4
$ifthen.LDA_summer_4 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/LDA/summer/d4/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=LDA --SEASON=summer --DAY=4 --PREV=3 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/LDA/summer/d4/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/LDA/summer/d4/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: LDA_summer_4; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.LDA_summer_4
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/LDA/summer/d5/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/LDA/summer/d4/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_LDA_summer_5 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/LDA/summer/d5/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_LDA_summer_5
$ifthen.LDA_summer_5 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/LDA/summer/d5/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=LDA --SEASON=summer --DAY=5 --PREV=4 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/LDA/summer/d5/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/LDA/summer/d5/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: LDA_summer_5; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.LDA_summer_5
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/LDA/summer/d6/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/LDA/summer/d5/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_LDA_summer_6 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/LDA/summer/d6/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_LDA_summer_6
$ifthen.LDA_summer_6 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/LDA/summer/d6/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=LDA --SEASON=summer --DAY=6 --PREV=5 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/LDA/summer/d6/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/LDA/summer/d6/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: LDA_summer_6; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.LDA_summer_6
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/LDA/summer/d7/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/LDA/summer/d6/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_LDA_summer_7 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/LDA/summer/d7/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_LDA_summer_7
$ifthen.LDA_summer_7 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/LDA/summer/d7/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=LDA --SEASON=summer --DAY=7 --PREV=6 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/LDA/summer/d7/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/LDA/summer/d7/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: LDA_summer_7; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.LDA_summer_7
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Log/summer/d1/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SGD_Log_summer_1 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Log/summer/d1/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SGD_Log_summer_1
$ifthen.SGD_Log_summer_1 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Log/summer/d1/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SGD_Log --SEASON=summer --DAY=1 --PREV=0 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SGD_Log/summer/d1/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SGD_Log/summer/d1/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SGD_Log_summer_1; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SGD_Log_summer_1
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Log/summer/d2/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/SGD_Log/summer/d1/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SGD_Log_summer_2 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Log/summer/d2/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SGD_Log_summer_2
$ifthen.SGD_Log_summer_2 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Log/summer/d2/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SGD_Log --SEASON=summer --DAY=2 --PREV=1 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SGD_Log/summer/d2/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SGD_Log/summer/d2/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SGD_Log_summer_2; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SGD_Log_summer_2
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Log/summer/d3/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/SGD_Log/summer/d2/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SGD_Log_summer_3 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Log/summer/d3/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SGD_Log_summer_3
$ifthen.SGD_Log_summer_3 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Log/summer/d3/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SGD_Log --SEASON=summer --DAY=3 --PREV=2 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SGD_Log/summer/d3/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SGD_Log/summer/d3/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SGD_Log_summer_3; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SGD_Log_summer_3
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Log/summer/d4/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/SGD_Log/summer/d3/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SGD_Log_summer_4 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Log/summer/d4/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SGD_Log_summer_4
$ifthen.SGD_Log_summer_4 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Log/summer/d4/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SGD_Log --SEASON=summer --DAY=4 --PREV=3 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SGD_Log/summer/d4/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SGD_Log/summer/d4/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SGD_Log_summer_4; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SGD_Log_summer_4
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Log/summer/d5/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/SGD_Log/summer/d4/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SGD_Log_summer_5 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Log/summer/d5/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SGD_Log_summer_5
$ifthen.SGD_Log_summer_5 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Log/summer/d5/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SGD_Log --SEASON=summer --DAY=5 --PREV=4 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SGD_Log/summer/d5/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SGD_Log/summer/d5/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SGD_Log_summer_5; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SGD_Log_summer_5
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Log/summer/d6/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/SGD_Log/summer/d5/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SGD_Log_summer_6 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Log/summer/d6/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SGD_Log_summer_6
$ifthen.SGD_Log_summer_6 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Log/summer/d6/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SGD_Log --SEASON=summer --DAY=6 --PREV=5 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SGD_Log/summer/d6/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SGD_Log/summer/d6/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SGD_Log_summer_6; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SGD_Log_summer_6
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Log/summer/d7/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/SGD_Log/summer/d6/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SGD_Log_summer_7 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Log/summer/d7/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SGD_Log_summer_7
$ifthen.SGD_Log_summer_7 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Log/summer/d7/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SGD_Log --SEASON=summer --DAY=7 --PREV=6 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SGD_Log/summer/d7/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SGD_Log/summer/d7/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SGD_Log_summer_7; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SGD_Log_summer_7
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Hinge/summer/d1/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SGD_Hinge_summer_1 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Hinge/summer/d1/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SGD_Hinge_summer_1
$ifthen.SGD_Hinge_summer_1 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Hinge/summer/d1/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SGD_Hinge --SEASON=summer --DAY=1 --PREV=0 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SGD_Hinge/summer/d1/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SGD_Hinge/summer/d1/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SGD_Hinge_summer_1; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SGD_Hinge_summer_1
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Hinge/summer/d2/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/SGD_Hinge/summer/d1/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SGD_Hinge_summer_2 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Hinge/summer/d2/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SGD_Hinge_summer_2
$ifthen.SGD_Hinge_summer_2 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Hinge/summer/d2/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SGD_Hinge --SEASON=summer --DAY=2 --PREV=1 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SGD_Hinge/summer/d2/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SGD_Hinge/summer/d2/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SGD_Hinge_summer_2; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SGD_Hinge_summer_2
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Hinge/summer/d3/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/SGD_Hinge/summer/d2/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SGD_Hinge_summer_3 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Hinge/summer/d3/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SGD_Hinge_summer_3
$ifthen.SGD_Hinge_summer_3 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Hinge/summer/d3/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SGD_Hinge --SEASON=summer --DAY=3 --PREV=2 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SGD_Hinge/summer/d3/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SGD_Hinge/summer/d3/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SGD_Hinge_summer_3; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SGD_Hinge_summer_3
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Hinge/summer/d4/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/SGD_Hinge/summer/d3/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SGD_Hinge_summer_4 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Hinge/summer/d4/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SGD_Hinge_summer_4
$ifthen.SGD_Hinge_summer_4 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Hinge/summer/d4/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SGD_Hinge --SEASON=summer --DAY=4 --PREV=3 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SGD_Hinge/summer/d4/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SGD_Hinge/summer/d4/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SGD_Hinge_summer_4; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SGD_Hinge_summer_4
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Hinge/summer/d5/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/SGD_Hinge/summer/d4/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SGD_Hinge_summer_5 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Hinge/summer/d5/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SGD_Hinge_summer_5
$ifthen.SGD_Hinge_summer_5 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Hinge/summer/d5/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SGD_Hinge --SEASON=summer --DAY=5 --PREV=4 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SGD_Hinge/summer/d5/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SGD_Hinge/summer/d5/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SGD_Hinge_summer_5; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SGD_Hinge_summer_5
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Hinge/summer/d6/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/SGD_Hinge/summer/d5/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SGD_Hinge_summer_6 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Hinge/summer/d6/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SGD_Hinge_summer_6
$ifthen.SGD_Hinge_summer_6 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Hinge/summer/d6/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SGD_Hinge --SEASON=summer --DAY=6 --PREV=5 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SGD_Hinge/summer/d6/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SGD_Hinge/summer/d6/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SGD_Hinge_summer_6; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SGD_Hinge_summer_6
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Hinge/summer/d7/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/SGD_Hinge/summer/d6/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SGD_Hinge_summer_7 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Hinge/summer/d7/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SGD_Hinge_summer_7
$ifthen.SGD_Hinge_summer_7 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Hinge/summer/d7/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SGD_Hinge --SEASON=summer --DAY=7 --PREV=6 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SGD_Hinge/summer/d7/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SGD_Hinge/summer/d7/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SGD_Hinge_summer_7; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SGD_Hinge_summer_7
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/PA/summer/d1/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_PA_summer_1 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/PA/summer/d1/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_PA_summer_1
$ifthen.PA_summer_1 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/PA/summer/d1/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=PA --SEASON=summer --DAY=1 --PREV=0 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/PA/summer/d1/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/PA/summer/d1/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: PA_summer_1; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.PA_summer_1
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/PA/summer/d2/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/PA/summer/d1/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_PA_summer_2 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/PA/summer/d2/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_PA_summer_2
$ifthen.PA_summer_2 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/PA/summer/d2/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=PA --SEASON=summer --DAY=2 --PREV=1 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/PA/summer/d2/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/PA/summer/d2/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: PA_summer_2; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.PA_summer_2
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/PA/summer/d3/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/PA/summer/d2/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_PA_summer_3 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/PA/summer/d3/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_PA_summer_3
$ifthen.PA_summer_3 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/PA/summer/d3/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=PA --SEASON=summer --DAY=3 --PREV=2 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/PA/summer/d3/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/PA/summer/d3/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: PA_summer_3; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.PA_summer_3
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/PA/summer/d4/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/PA/summer/d3/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_PA_summer_4 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/PA/summer/d4/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_PA_summer_4
$ifthen.PA_summer_4 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/PA/summer/d4/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=PA --SEASON=summer --DAY=4 --PREV=3 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/PA/summer/d4/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/PA/summer/d4/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: PA_summer_4; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.PA_summer_4
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/PA/summer/d5/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/PA/summer/d4/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_PA_summer_5 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/PA/summer/d5/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_PA_summer_5
$ifthen.PA_summer_5 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/PA/summer/d5/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=PA --SEASON=summer --DAY=5 --PREV=4 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/PA/summer/d5/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/PA/summer/d5/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: PA_summer_5; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.PA_summer_5
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/PA/summer/d6/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/PA/summer/d5/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_PA_summer_6 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/PA/summer/d6/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_PA_summer_6
$ifthen.PA_summer_6 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/PA/summer/d6/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=PA --SEASON=summer --DAY=6 --PREV=5 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/PA/summer/d6/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/PA/summer/d6/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: PA_summer_6; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.PA_summer_6
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/PA/summer/d7/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/PA/summer/d6/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_PA_summer_7 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/PA/summer/d7/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_PA_summer_7
$ifthen.PA_summer_7 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/PA/summer/d7/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=PA --SEASON=summer --DAY=7 --PREV=6 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/PA/summer/d7/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/PA/summer/d7/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: PA_summer_7; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.PA_summer_7
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/REF050/summer/d1/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_REF050_summer_1 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/REF050/summer/d1/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_REF050_summer_1
$ifthen.REF050_summer_1 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/REF050/summer/d1/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=REF050 --SEASON=summer --DAY=1 --PREV=0 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/REF050/summer/d1/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/REF050/summer/d1/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: REF050_summer_1; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.REF050_summer_1
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/REF050/summer/d2/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/REF050/summer/d1/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_REF050_summer_2 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/REF050/summer/d2/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_REF050_summer_2
$ifthen.REF050_summer_2 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/REF050/summer/d2/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=REF050 --SEASON=summer --DAY=2 --PREV=1 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/REF050/summer/d2/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/REF050/summer/d2/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: REF050_summer_2; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.REF050_summer_2
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/REF050/summer/d3/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/REF050/summer/d2/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_REF050_summer_3 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/REF050/summer/d3/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_REF050_summer_3
$ifthen.REF050_summer_3 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/REF050/summer/d3/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=REF050 --SEASON=summer --DAY=3 --PREV=2 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/REF050/summer/d3/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/REF050/summer/d3/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: REF050_summer_3; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.REF050_summer_3
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/REF050/summer/d4/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/REF050/summer/d3/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_REF050_summer_4 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/REF050/summer/d4/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_REF050_summer_4
$ifthen.REF050_summer_4 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/REF050/summer/d4/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=REF050 --SEASON=summer --DAY=4 --PREV=3 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/REF050/summer/d4/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/REF050/summer/d4/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: REF050_summer_4; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.REF050_summer_4
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/REF050/summer/d5/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/REF050/summer/d4/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_REF050_summer_5 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/REF050/summer/d5/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_REF050_summer_5
$ifthen.REF050_summer_5 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/REF050/summer/d5/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=REF050 --SEASON=summer --DAY=5 --PREV=4 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/REF050/summer/d5/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/REF050/summer/d5/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: REF050_summer_5; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.REF050_summer_5
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/REF050/summer/d6/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/REF050/summer/d5/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_REF050_summer_6 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/REF050/summer/d6/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_REF050_summer_6
$ifthen.REF050_summer_6 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/REF050/summer/d6/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=REF050 --SEASON=summer --DAY=6 --PREV=5 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/REF050/summer/d6/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/REF050/summer/d6/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: REF050_summer_6; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.REF050_summer_6
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/REF050/summer/d7/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/REF050/summer/d6/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_REF050_summer_7 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/REF050/summer/d7/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_REF050_summer_7
$ifthen.REF050_summer_7 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/REF050/summer/d7/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=REF050 --SEASON=summer --DAY=7 --PREV=6 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/REF050/summer/d7/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/REF050/summer/d7/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: REF050_summer_7; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.REF050_summer_7
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/REF090/summer/d1/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_REF090_summer_1 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/REF090/summer/d1/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_REF090_summer_1
$ifthen.REF090_summer_1 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/REF090/summer/d1/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=REF090 --SEASON=summer --DAY=1 --PREV=0 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/REF090/summer/d1/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/REF090/summer/d1/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: REF090_summer_1; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.REF090_summer_1
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/REF090/summer/d2/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/REF090/summer/d1/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_REF090_summer_2 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/REF090/summer/d2/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_REF090_summer_2
$ifthen.REF090_summer_2 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/REF090/summer/d2/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=REF090 --SEASON=summer --DAY=2 --PREV=1 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/REF090/summer/d2/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/REF090/summer/d2/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: REF090_summer_2; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.REF090_summer_2
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/REF090/summer/d3/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/REF090/summer/d2/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_REF090_summer_3 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/REF090/summer/d3/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_REF090_summer_3
$ifthen.REF090_summer_3 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/REF090/summer/d3/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=REF090 --SEASON=summer --DAY=3 --PREV=2 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/REF090/summer/d3/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/REF090/summer/d3/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: REF090_summer_3; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.REF090_summer_3
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/REF090/summer/d4/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/REF090/summer/d3/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_REF090_summer_4 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/REF090/summer/d4/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_REF090_summer_4
$ifthen.REF090_summer_4 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/REF090/summer/d4/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=REF090 --SEASON=summer --DAY=4 --PREV=3 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/REF090/summer/d4/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/REF090/summer/d4/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: REF090_summer_4; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.REF090_summer_4
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/REF090/summer/d5/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/REF090/summer/d4/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_REF090_summer_5 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/REF090/summer/d5/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_REF090_summer_5
$ifthen.REF090_summer_5 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/REF090/summer/d5/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=REF090 --SEASON=summer --DAY=5 --PREV=4 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/REF090/summer/d5/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/REF090/summer/d5/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: REF090_summer_5; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.REF090_summer_5
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/REF090/summer/d6/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/REF090/summer/d5/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_REF090_summer_6 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/REF090/summer/d6/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_REF090_summer_6
$ifthen.REF090_summer_6 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/REF090/summer/d6/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=REF090 --SEASON=summer --DAY=6 --PREV=5 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/REF090/summer/d6/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/REF090/summer/d6/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: REF090_summer_6; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.REF090_summer_6
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/REF090/summer/d7/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/REF090/summer/d6/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_REF090_summer_7 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/REF090/summer/d7/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_REF090_summer_7
$ifthen.REF090_summer_7 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/REF090/summer/d7/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=REF090 --SEASON=summer --DAY=7 --PREV=6 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/REF090/summer/d7/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/REF090/summer/d7/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: REF090_summer_7; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.REF090_summer_7
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/REF095/summer/d1/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_REF095_summer_1 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/REF095/summer/d1/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_REF095_summer_1
$ifthen.REF095_summer_1 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/REF095/summer/d1/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=REF095 --SEASON=summer --DAY=1 --PREV=0 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/REF095/summer/d1/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/REF095/summer/d1/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: REF095_summer_1; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.REF095_summer_1
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/REF095/summer/d2/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/REF095/summer/d1/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_REF095_summer_2 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/REF095/summer/d2/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_REF095_summer_2
$ifthen.REF095_summer_2 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/REF095/summer/d2/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=REF095 --SEASON=summer --DAY=2 --PREV=1 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/REF095/summer/d2/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/REF095/summer/d2/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: REF095_summer_2; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.REF095_summer_2
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/REF095/summer/d3/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/REF095/summer/d2/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_REF095_summer_3 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/REF095/summer/d3/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_REF095_summer_3
$ifthen.REF095_summer_3 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/REF095/summer/d3/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=REF095 --SEASON=summer --DAY=3 --PREV=2 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/REF095/summer/d3/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/REF095/summer/d3/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: REF095_summer_3; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.REF095_summer_3
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/REF095/summer/d4/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/REF095/summer/d3/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_REF095_summer_4 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/REF095/summer/d4/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_REF095_summer_4
$ifthen.REF095_summer_4 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/REF095/summer/d4/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=REF095 --SEASON=summer --DAY=4 --PREV=3 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/REF095/summer/d4/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/REF095/summer/d4/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: REF095_summer_4; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.REF095_summer_4
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/REF095/summer/d5/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/REF095/summer/d4/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_REF095_summer_5 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/REF095/summer/d5/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_REF095_summer_5
$ifthen.REF095_summer_5 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/REF095/summer/d5/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=REF095 --SEASON=summer --DAY=5 --PREV=4 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/REF095/summer/d5/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/REF095/summer/d5/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: REF095_summer_5; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.REF095_summer_5
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/REF095/summer/d6/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/REF095/summer/d5/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_REF095_summer_6 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/REF095/summer/d6/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_REF095_summer_6
$ifthen.REF095_summer_6 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/REF095/summer/d6/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=REF095 --SEASON=summer --DAY=6 --PREV=5 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/REF095/summer/d6/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/REF095/summer/d6/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: REF095_summer_6; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.REF095_summer_6
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/REF095/summer/d7/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/REF095/summer/d6/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_REF095_summer_7 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/REF095/summer/d7/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_REF095_summer_7
$ifthen.REF095_summer_7 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/REF095/summer/d7/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=REF095 --SEASON=summer --DAY=7 --PREV=6 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/REF095/summer/d7/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/REF095/summer/d7/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: REF095_summer_7; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.REF095_summer_7
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1/autumn/d1/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_LR_C1_autumn_1 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1/autumn/d1/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_LR_C1_autumn_1
$ifthen.LR_C1_autumn_1 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1/autumn/d1/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=LR_C1 --SEASON=autumn --DAY=1 --PREV=0 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/LR_C1/autumn/d1/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/LR_C1/autumn/d1/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: LR_C1_autumn_1; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.LR_C1_autumn_1
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1/autumn/d2/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/LR_C1/autumn/d1/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_LR_C1_autumn_2 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1/autumn/d2/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_LR_C1_autumn_2
$ifthen.LR_C1_autumn_2 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1/autumn/d2/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=LR_C1 --SEASON=autumn --DAY=2 --PREV=1 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/LR_C1/autumn/d2/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/LR_C1/autumn/d2/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: LR_C1_autumn_2; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.LR_C1_autumn_2
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1/autumn/d3/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/LR_C1/autumn/d2/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_LR_C1_autumn_3 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1/autumn/d3/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_LR_C1_autumn_3
$ifthen.LR_C1_autumn_3 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1/autumn/d3/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=LR_C1 --SEASON=autumn --DAY=3 --PREV=2 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/LR_C1/autumn/d3/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/LR_C1/autumn/d3/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: LR_C1_autumn_3; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.LR_C1_autumn_3
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1/autumn/d4/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/LR_C1/autumn/d3/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_LR_C1_autumn_4 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1/autumn/d4/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_LR_C1_autumn_4
$ifthen.LR_C1_autumn_4 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1/autumn/d4/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=LR_C1 --SEASON=autumn --DAY=4 --PREV=3 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/LR_C1/autumn/d4/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/LR_C1/autumn/d4/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: LR_C1_autumn_4; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.LR_C1_autumn_4
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1/autumn/d5/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/LR_C1/autumn/d4/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_LR_C1_autumn_5 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1/autumn/d5/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_LR_C1_autumn_5
$ifthen.LR_C1_autumn_5 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1/autumn/d5/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=LR_C1 --SEASON=autumn --DAY=5 --PREV=4 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/LR_C1/autumn/d5/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/LR_C1/autumn/d5/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: LR_C1_autumn_5; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.LR_C1_autumn_5
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1/autumn/d6/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/LR_C1/autumn/d5/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_LR_C1_autumn_6 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1/autumn/d6/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_LR_C1_autumn_6
$ifthen.LR_C1_autumn_6 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1/autumn/d6/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=LR_C1 --SEASON=autumn --DAY=6 --PREV=5 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/LR_C1/autumn/d6/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/LR_C1/autumn/d6/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: LR_C1_autumn_6; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.LR_C1_autumn_6
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1/autumn/d7/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/LR_C1/autumn/d6/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_LR_C1_autumn_7 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1/autumn/d7/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_LR_C1_autumn_7
$ifthen.LR_C1_autumn_7 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1/autumn/d7/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=LR_C1 --SEASON=autumn --DAY=7 --PREV=6 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/LR_C1/autumn/d7/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/LR_C1/autumn/d7/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: LR_C1_autumn_7; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.LR_C1_autumn_7
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1e6/autumn/d1/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_LR_C1e6_autumn_1 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1e6/autumn/d1/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_LR_C1e6_autumn_1
$ifthen.LR_C1e6_autumn_1 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1e6/autumn/d1/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=LR_C1e6 --SEASON=autumn --DAY=1 --PREV=0 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/LR_C1e6/autumn/d1/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/LR_C1e6/autumn/d1/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: LR_C1e6_autumn_1; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.LR_C1e6_autumn_1
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1e6/autumn/d2/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/LR_C1e6/autumn/d1/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_LR_C1e6_autumn_2 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1e6/autumn/d2/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_LR_C1e6_autumn_2
$ifthen.LR_C1e6_autumn_2 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1e6/autumn/d2/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=LR_C1e6 --SEASON=autumn --DAY=2 --PREV=1 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/LR_C1e6/autumn/d2/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/LR_C1e6/autumn/d2/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: LR_C1e6_autumn_2; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.LR_C1e6_autumn_2
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1e6/autumn/d3/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/LR_C1e6/autumn/d2/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_LR_C1e6_autumn_3 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1e6/autumn/d3/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_LR_C1e6_autumn_3
$ifthen.LR_C1e6_autumn_3 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1e6/autumn/d3/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=LR_C1e6 --SEASON=autumn --DAY=3 --PREV=2 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/LR_C1e6/autumn/d3/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/LR_C1e6/autumn/d3/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: LR_C1e6_autumn_3; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.LR_C1e6_autumn_3
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1e6/autumn/d4/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/LR_C1e6/autumn/d3/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_LR_C1e6_autumn_4 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1e6/autumn/d4/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_LR_C1e6_autumn_4
$ifthen.LR_C1e6_autumn_4 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1e6/autumn/d4/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=LR_C1e6 --SEASON=autumn --DAY=4 --PREV=3 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/LR_C1e6/autumn/d4/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/LR_C1e6/autumn/d4/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: LR_C1e6_autumn_4; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.LR_C1e6_autumn_4
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1e6/autumn/d5/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/LR_C1e6/autumn/d4/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_LR_C1e6_autumn_5 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1e6/autumn/d5/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_LR_C1e6_autumn_5
$ifthen.LR_C1e6_autumn_5 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1e6/autumn/d5/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=LR_C1e6 --SEASON=autumn --DAY=5 --PREV=4 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/LR_C1e6/autumn/d5/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/LR_C1e6/autumn/d5/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: LR_C1e6_autumn_5; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.LR_C1e6_autumn_5
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1e6/autumn/d6/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/LR_C1e6/autumn/d5/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_LR_C1e6_autumn_6 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1e6/autumn/d6/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_LR_C1e6_autumn_6
$ifthen.LR_C1e6_autumn_6 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1e6/autumn/d6/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=LR_C1e6 --SEASON=autumn --DAY=6 --PREV=5 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/LR_C1e6/autumn/d6/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/LR_C1e6/autumn/d6/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: LR_C1e6_autumn_6; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.LR_C1e6_autumn_6
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1e6/autumn/d7/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/LR_C1e6/autumn/d6/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_LR_C1e6_autumn_7 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1e6/autumn/d7/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_LR_C1e6_autumn_7
$ifthen.LR_C1e6_autumn_7 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/LR_C1e6/autumn/d7/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=LR_C1e6 --SEASON=autumn --DAY=7 --PREV=6 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/LR_C1e6/autumn/d7/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/LR_C1e6/autumn/d7/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: LR_C1e6_autumn_7; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.LR_C1e6_autumn_7
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C01/autumn/d1/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SVM_C01_autumn_1 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C01/autumn/d1/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SVM_C01_autumn_1
$ifthen.SVM_C01_autumn_1 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C01/autumn/d1/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SVM_C01 --SEASON=autumn --DAY=1 --PREV=0 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SVM_C01/autumn/d1/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SVM_C01/autumn/d1/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SVM_C01_autumn_1; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SVM_C01_autumn_1
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C01/autumn/d2/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/SVM_C01/autumn/d1/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SVM_C01_autumn_2 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C01/autumn/d2/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SVM_C01_autumn_2
$ifthen.SVM_C01_autumn_2 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C01/autumn/d2/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SVM_C01 --SEASON=autumn --DAY=2 --PREV=1 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SVM_C01/autumn/d2/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SVM_C01/autumn/d2/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SVM_C01_autumn_2; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SVM_C01_autumn_2
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C01/autumn/d3/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/SVM_C01/autumn/d2/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SVM_C01_autumn_3 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C01/autumn/d3/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SVM_C01_autumn_3
$ifthen.SVM_C01_autumn_3 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C01/autumn/d3/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SVM_C01 --SEASON=autumn --DAY=3 --PREV=2 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SVM_C01/autumn/d3/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SVM_C01/autumn/d3/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SVM_C01_autumn_3; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SVM_C01_autumn_3
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C01/autumn/d4/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/SVM_C01/autumn/d3/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SVM_C01_autumn_4 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C01/autumn/d4/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SVM_C01_autumn_4
$ifthen.SVM_C01_autumn_4 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C01/autumn/d4/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SVM_C01 --SEASON=autumn --DAY=4 --PREV=3 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SVM_C01/autumn/d4/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SVM_C01/autumn/d4/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SVM_C01_autumn_4; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SVM_C01_autumn_4
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C01/autumn/d5/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/SVM_C01/autumn/d4/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SVM_C01_autumn_5 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C01/autumn/d5/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SVM_C01_autumn_5
$ifthen.SVM_C01_autumn_5 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C01/autumn/d5/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SVM_C01 --SEASON=autumn --DAY=5 --PREV=4 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SVM_C01/autumn/d5/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SVM_C01/autumn/d5/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SVM_C01_autumn_5; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SVM_C01_autumn_5
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C01/autumn/d6/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/SVM_C01/autumn/d5/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SVM_C01_autumn_6 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C01/autumn/d6/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SVM_C01_autumn_6
$ifthen.SVM_C01_autumn_6 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C01/autumn/d6/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SVM_C01 --SEASON=autumn --DAY=6 --PREV=5 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SVM_C01/autumn/d6/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SVM_C01/autumn/d6/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SVM_C01_autumn_6; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SVM_C01_autumn_6
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C01/autumn/d7/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/SVM_C01/autumn/d6/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SVM_C01_autumn_7 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C01/autumn/d7/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SVM_C01_autumn_7
$ifthen.SVM_C01_autumn_7 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C01/autumn/d7/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SVM_C01 --SEASON=autumn --DAY=7 --PREV=6 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SVM_C01/autumn/d7/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SVM_C01/autumn/d7/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SVM_C01_autumn_7; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SVM_C01_autumn_7
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C1/autumn/d1/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SVM_C1_autumn_1 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C1/autumn/d1/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SVM_C1_autumn_1
$ifthen.SVM_C1_autumn_1 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C1/autumn/d1/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SVM_C1 --SEASON=autumn --DAY=1 --PREV=0 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SVM_C1/autumn/d1/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SVM_C1/autumn/d1/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SVM_C1_autumn_1; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SVM_C1_autumn_1
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C1/autumn/d2/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/SVM_C1/autumn/d1/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SVM_C1_autumn_2 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C1/autumn/d2/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SVM_C1_autumn_2
$ifthen.SVM_C1_autumn_2 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C1/autumn/d2/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SVM_C1 --SEASON=autumn --DAY=2 --PREV=1 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SVM_C1/autumn/d2/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SVM_C1/autumn/d2/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SVM_C1_autumn_2; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SVM_C1_autumn_2
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C1/autumn/d3/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/SVM_C1/autumn/d2/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SVM_C1_autumn_3 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C1/autumn/d3/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SVM_C1_autumn_3
$ifthen.SVM_C1_autumn_3 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C1/autumn/d3/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SVM_C1 --SEASON=autumn --DAY=3 --PREV=2 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SVM_C1/autumn/d3/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SVM_C1/autumn/d3/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SVM_C1_autumn_3; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SVM_C1_autumn_3
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C1/autumn/d4/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/SVM_C1/autumn/d3/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SVM_C1_autumn_4 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C1/autumn/d4/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SVM_C1_autumn_4
$ifthen.SVM_C1_autumn_4 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C1/autumn/d4/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SVM_C1 --SEASON=autumn --DAY=4 --PREV=3 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SVM_C1/autumn/d4/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SVM_C1/autumn/d4/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SVM_C1_autumn_4; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SVM_C1_autumn_4
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C1/autumn/d5/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/SVM_C1/autumn/d4/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SVM_C1_autumn_5 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C1/autumn/d5/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SVM_C1_autumn_5
$ifthen.SVM_C1_autumn_5 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C1/autumn/d5/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SVM_C1 --SEASON=autumn --DAY=5 --PREV=4 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SVM_C1/autumn/d5/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SVM_C1/autumn/d5/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SVM_C1_autumn_5; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SVM_C1_autumn_5
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C1/autumn/d6/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/SVM_C1/autumn/d5/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SVM_C1_autumn_6 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C1/autumn/d6/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SVM_C1_autumn_6
$ifthen.SVM_C1_autumn_6 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C1/autumn/d6/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SVM_C1 --SEASON=autumn --DAY=6 --PREV=5 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SVM_C1/autumn/d6/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SVM_C1/autumn/d6/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SVM_C1_autumn_6; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SVM_C1_autumn_6
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C1/autumn/d7/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/SVM_C1/autumn/d6/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SVM_C1_autumn_7 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C1/autumn/d7/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SVM_C1_autumn_7
$ifthen.SVM_C1_autumn_7 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C1/autumn/d7/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SVM_C1 --SEASON=autumn --DAY=7 --PREV=6 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SVM_C1/autumn/d7/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SVM_C1/autumn/d7/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SVM_C1_autumn_7; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SVM_C1_autumn_7
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C10/autumn/d1/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SVM_C10_autumn_1 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C10/autumn/d1/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SVM_C10_autumn_1
$ifthen.SVM_C10_autumn_1 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C10/autumn/d1/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SVM_C10 --SEASON=autumn --DAY=1 --PREV=0 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SVM_C10/autumn/d1/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SVM_C10/autumn/d1/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SVM_C10_autumn_1; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SVM_C10_autumn_1
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C10/autumn/d2/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/SVM_C10/autumn/d1/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SVM_C10_autumn_2 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C10/autumn/d2/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SVM_C10_autumn_2
$ifthen.SVM_C10_autumn_2 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C10/autumn/d2/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SVM_C10 --SEASON=autumn --DAY=2 --PREV=1 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SVM_C10/autumn/d2/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SVM_C10/autumn/d2/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SVM_C10_autumn_2; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SVM_C10_autumn_2
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C10/autumn/d3/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/SVM_C10/autumn/d2/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SVM_C10_autumn_3 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C10/autumn/d3/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SVM_C10_autumn_3
$ifthen.SVM_C10_autumn_3 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C10/autumn/d3/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SVM_C10 --SEASON=autumn --DAY=3 --PREV=2 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SVM_C10/autumn/d3/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SVM_C10/autumn/d3/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SVM_C10_autumn_3; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SVM_C10_autumn_3
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C10/autumn/d4/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/SVM_C10/autumn/d3/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SVM_C10_autumn_4 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C10/autumn/d4/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SVM_C10_autumn_4
$ifthen.SVM_C10_autumn_4 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C10/autumn/d4/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SVM_C10 --SEASON=autumn --DAY=4 --PREV=3 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SVM_C10/autumn/d4/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SVM_C10/autumn/d4/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SVM_C10_autumn_4; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SVM_C10_autumn_4
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C10/autumn/d5/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/SVM_C10/autumn/d4/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SVM_C10_autumn_5 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C10/autumn/d5/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SVM_C10_autumn_5
$ifthen.SVM_C10_autumn_5 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C10/autumn/d5/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SVM_C10 --SEASON=autumn --DAY=5 --PREV=4 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SVM_C10/autumn/d5/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SVM_C10/autumn/d5/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SVM_C10_autumn_5; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SVM_C10_autumn_5
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C10/autumn/d6/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/SVM_C10/autumn/d5/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SVM_C10_autumn_6 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C10/autumn/d6/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SVM_C10_autumn_6
$ifthen.SVM_C10_autumn_6 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C10/autumn/d6/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SVM_C10 --SEASON=autumn --DAY=6 --PREV=5 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SVM_C10/autumn/d6/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SVM_C10/autumn/d6/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SVM_C10_autumn_6; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SVM_C10_autumn_6
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C10/autumn/d7/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/SVM_C10/autumn/d6/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SVM_C10_autumn_7 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C10/autumn/d7/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SVM_C10_autumn_7
$ifthen.SVM_C10_autumn_7 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SVM_C10/autumn/d7/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SVM_C10 --SEASON=autumn --DAY=7 --PREV=6 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SVM_C10/autumn/d7/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SVM_C10/autumn/d7/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SVM_C10_autumn_7; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SVM_C10_autumn_7
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/LDA/autumn/d1/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_LDA_autumn_1 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/LDA/autumn/d1/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_LDA_autumn_1
$ifthen.LDA_autumn_1 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/LDA/autumn/d1/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=LDA --SEASON=autumn --DAY=1 --PREV=0 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/LDA/autumn/d1/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/LDA/autumn/d1/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: LDA_autumn_1; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.LDA_autumn_1
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/LDA/autumn/d2/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/LDA/autumn/d1/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_LDA_autumn_2 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/LDA/autumn/d2/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_LDA_autumn_2
$ifthen.LDA_autumn_2 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/LDA/autumn/d2/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=LDA --SEASON=autumn --DAY=2 --PREV=1 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/LDA/autumn/d2/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/LDA/autumn/d2/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: LDA_autumn_2; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.LDA_autumn_2
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/LDA/autumn/d3/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/LDA/autumn/d2/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_LDA_autumn_3 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/LDA/autumn/d3/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_LDA_autumn_3
$ifthen.LDA_autumn_3 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/LDA/autumn/d3/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=LDA --SEASON=autumn --DAY=3 --PREV=2 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/LDA/autumn/d3/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/LDA/autumn/d3/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: LDA_autumn_3; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.LDA_autumn_3
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/LDA/autumn/d4/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/LDA/autumn/d3/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_LDA_autumn_4 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/LDA/autumn/d4/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_LDA_autumn_4
$ifthen.LDA_autumn_4 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/LDA/autumn/d4/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=LDA --SEASON=autumn --DAY=4 --PREV=3 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/LDA/autumn/d4/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/LDA/autumn/d4/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: LDA_autumn_4; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.LDA_autumn_4
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/LDA/autumn/d5/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/LDA/autumn/d4/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_LDA_autumn_5 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/LDA/autumn/d5/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_LDA_autumn_5
$ifthen.LDA_autumn_5 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/LDA/autumn/d5/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=LDA --SEASON=autumn --DAY=5 --PREV=4 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/LDA/autumn/d5/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/LDA/autumn/d5/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: LDA_autumn_5; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.LDA_autumn_5
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/LDA/autumn/d6/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/LDA/autumn/d5/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_LDA_autumn_6 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/LDA/autumn/d6/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_LDA_autumn_6
$ifthen.LDA_autumn_6 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/LDA/autumn/d6/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=LDA --SEASON=autumn --DAY=6 --PREV=5 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/LDA/autumn/d6/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/LDA/autumn/d6/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: LDA_autumn_6; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.LDA_autumn_6
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/LDA/autumn/d7/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/LDA/autumn/d6/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_LDA_autumn_7 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/LDA/autumn/d7/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_LDA_autumn_7
$ifthen.LDA_autumn_7 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/LDA/autumn/d7/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=LDA --SEASON=autumn --DAY=7 --PREV=6 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/LDA/autumn/d7/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/LDA/autumn/d7/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: LDA_autumn_7; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.LDA_autumn_7
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Log/autumn/d1/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SGD_Log_autumn_1 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Log/autumn/d1/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SGD_Log_autumn_1
$ifthen.SGD_Log_autumn_1 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Log/autumn/d1/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SGD_Log --SEASON=autumn --DAY=1 --PREV=0 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SGD_Log/autumn/d1/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SGD_Log/autumn/d1/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SGD_Log_autumn_1; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SGD_Log_autumn_1
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Log/autumn/d2/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/SGD_Log/autumn/d1/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SGD_Log_autumn_2 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Log/autumn/d2/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SGD_Log_autumn_2
$ifthen.SGD_Log_autumn_2 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Log/autumn/d2/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SGD_Log --SEASON=autumn --DAY=2 --PREV=1 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SGD_Log/autumn/d2/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SGD_Log/autumn/d2/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SGD_Log_autumn_2; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SGD_Log_autumn_2
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Log/autumn/d3/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/SGD_Log/autumn/d2/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SGD_Log_autumn_3 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Log/autumn/d3/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SGD_Log_autumn_3
$ifthen.SGD_Log_autumn_3 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Log/autumn/d3/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SGD_Log --SEASON=autumn --DAY=3 --PREV=2 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SGD_Log/autumn/d3/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SGD_Log/autumn/d3/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SGD_Log_autumn_3; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SGD_Log_autumn_3
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Log/autumn/d4/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/SGD_Log/autumn/d3/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SGD_Log_autumn_4 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Log/autumn/d4/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SGD_Log_autumn_4
$ifthen.SGD_Log_autumn_4 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Log/autumn/d4/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SGD_Log --SEASON=autumn --DAY=4 --PREV=3 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SGD_Log/autumn/d4/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SGD_Log/autumn/d4/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SGD_Log_autumn_4; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SGD_Log_autumn_4
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Log/autumn/d5/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/SGD_Log/autumn/d4/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SGD_Log_autumn_5 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Log/autumn/d5/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SGD_Log_autumn_5
$ifthen.SGD_Log_autumn_5 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Log/autumn/d5/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SGD_Log --SEASON=autumn --DAY=5 --PREV=4 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SGD_Log/autumn/d5/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SGD_Log/autumn/d5/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SGD_Log_autumn_5; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SGD_Log_autumn_5
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Log/autumn/d6/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/SGD_Log/autumn/d5/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SGD_Log_autumn_6 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Log/autumn/d6/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SGD_Log_autumn_6
$ifthen.SGD_Log_autumn_6 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Log/autumn/d6/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SGD_Log --SEASON=autumn --DAY=6 --PREV=5 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SGD_Log/autumn/d6/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SGD_Log/autumn/d6/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SGD_Log_autumn_6; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SGD_Log_autumn_6
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Log/autumn/d7/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/SGD_Log/autumn/d6/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SGD_Log_autumn_7 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Log/autumn/d7/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SGD_Log_autumn_7
$ifthen.SGD_Log_autumn_7 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Log/autumn/d7/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SGD_Log --SEASON=autumn --DAY=7 --PREV=6 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SGD_Log/autumn/d7/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SGD_Log/autumn/d7/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SGD_Log_autumn_7; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SGD_Log_autumn_7
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Hinge/autumn/d1/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SGD_Hinge_autumn_1 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Hinge/autumn/d1/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SGD_Hinge_autumn_1
$ifthen.SGD_Hinge_autumn_1 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Hinge/autumn/d1/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SGD_Hinge --SEASON=autumn --DAY=1 --PREV=0 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SGD_Hinge/autumn/d1/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SGD_Hinge/autumn/d1/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SGD_Hinge_autumn_1; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SGD_Hinge_autumn_1
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Hinge/autumn/d2/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/SGD_Hinge/autumn/d1/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SGD_Hinge_autumn_2 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Hinge/autumn/d2/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SGD_Hinge_autumn_2
$ifthen.SGD_Hinge_autumn_2 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Hinge/autumn/d2/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SGD_Hinge --SEASON=autumn --DAY=2 --PREV=1 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SGD_Hinge/autumn/d2/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SGD_Hinge/autumn/d2/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SGD_Hinge_autumn_2; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SGD_Hinge_autumn_2
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Hinge/autumn/d3/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/SGD_Hinge/autumn/d2/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SGD_Hinge_autumn_3 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Hinge/autumn/d3/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SGD_Hinge_autumn_3
$ifthen.SGD_Hinge_autumn_3 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Hinge/autumn/d3/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SGD_Hinge --SEASON=autumn --DAY=3 --PREV=2 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SGD_Hinge/autumn/d3/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SGD_Hinge/autumn/d3/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SGD_Hinge_autumn_3; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SGD_Hinge_autumn_3
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Hinge/autumn/d4/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/SGD_Hinge/autumn/d3/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SGD_Hinge_autumn_4 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Hinge/autumn/d4/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SGD_Hinge_autumn_4
$ifthen.SGD_Hinge_autumn_4 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Hinge/autumn/d4/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SGD_Hinge --SEASON=autumn --DAY=4 --PREV=3 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SGD_Hinge/autumn/d4/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SGD_Hinge/autumn/d4/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SGD_Hinge_autumn_4; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SGD_Hinge_autumn_4
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Hinge/autumn/d5/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/SGD_Hinge/autumn/d4/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SGD_Hinge_autumn_5 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Hinge/autumn/d5/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SGD_Hinge_autumn_5
$ifthen.SGD_Hinge_autumn_5 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Hinge/autumn/d5/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SGD_Hinge --SEASON=autumn --DAY=5 --PREV=4 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SGD_Hinge/autumn/d5/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SGD_Hinge/autumn/d5/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SGD_Hinge_autumn_5; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SGD_Hinge_autumn_5
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Hinge/autumn/d6/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/SGD_Hinge/autumn/d5/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SGD_Hinge_autumn_6 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Hinge/autumn/d6/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SGD_Hinge_autumn_6
$ifthen.SGD_Hinge_autumn_6 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Hinge/autumn/d6/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SGD_Hinge --SEASON=autumn --DAY=6 --PREV=5 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SGD_Hinge/autumn/d6/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SGD_Hinge/autumn/d6/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SGD_Hinge_autumn_6; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SGD_Hinge_autumn_6
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Hinge/autumn/d7/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/SGD_Hinge/autumn/d6/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_SGD_Hinge_autumn_7 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Hinge/autumn/d7/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_SGD_Hinge_autumn_7
$ifthen.SGD_Hinge_autumn_7 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/SGD_Hinge/autumn/d7/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=SGD_Hinge --SEASON=autumn --DAY=7 --PREV=6 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/SGD_Hinge/autumn/d7/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/SGD_Hinge/autumn/d7/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: SGD_Hinge_autumn_7; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.SGD_Hinge_autumn_7
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/PA/autumn/d1/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_PA_autumn_1 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/PA/autumn/d1/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_PA_autumn_1
$ifthen.PA_autumn_1 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/PA/autumn/d1/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=PA --SEASON=autumn --DAY=1 --PREV=0 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/PA/autumn/d1/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/PA/autumn/d1/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: PA_autumn_1; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.PA_autumn_1
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/PA/autumn/d2/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/PA/autumn/d1/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_PA_autumn_2 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/PA/autumn/d2/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_PA_autumn_2
$ifthen.PA_autumn_2 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/PA/autumn/d2/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=PA --SEASON=autumn --DAY=2 --PREV=1 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/PA/autumn/d2/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/PA/autumn/d2/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: PA_autumn_2; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.PA_autumn_2
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/PA/autumn/d3/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/PA/autumn/d2/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_PA_autumn_3 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/PA/autumn/d3/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_PA_autumn_3
$ifthen.PA_autumn_3 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/PA/autumn/d3/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=PA --SEASON=autumn --DAY=3 --PREV=2 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/PA/autumn/d3/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/PA/autumn/d3/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: PA_autumn_3; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.PA_autumn_3
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/PA/autumn/d4/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/PA/autumn/d3/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_PA_autumn_4 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/PA/autumn/d4/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_PA_autumn_4
$ifthen.PA_autumn_4 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/PA/autumn/d4/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=PA --SEASON=autumn --DAY=4 --PREV=3 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/PA/autumn/d4/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/PA/autumn/d4/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: PA_autumn_4; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.PA_autumn_4
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/PA/autumn/d5/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/PA/autumn/d4/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_PA_autumn_5 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/PA/autumn/d5/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_PA_autumn_5
$ifthen.PA_autumn_5 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/PA/autumn/d5/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=PA --SEASON=autumn --DAY=5 --PREV=4 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/PA/autumn/d5/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/PA/autumn/d5/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: PA_autumn_5; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.PA_autumn_5
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/PA/autumn/d6/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/PA/autumn/d5/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_PA_autumn_6 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/PA/autumn/d6/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_PA_autumn_6
$ifthen.PA_autumn_6 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/PA/autumn/d6/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=PA --SEASON=autumn --DAY=6 --PREV=5 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/PA/autumn/d6/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/PA/autumn/d6/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: PA_autumn_6; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.PA_autumn_6
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/PA/autumn/d7/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/PA/autumn/d6/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_PA_autumn_7 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/PA/autumn/d7/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_PA_autumn_7
$ifthen.PA_autumn_7 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/PA/autumn/d7/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=PA --SEASON=autumn --DAY=7 --PREV=6 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/PA/autumn/d7/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/PA/autumn/d7/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: PA_autumn_7; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.PA_autumn_7
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/REF050/autumn/d1/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_REF050_autumn_1 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/REF050/autumn/d1/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_REF050_autumn_1
$ifthen.REF050_autumn_1 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/REF050/autumn/d1/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=REF050 --SEASON=autumn --DAY=1 --PREV=0 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/REF050/autumn/d1/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/REF050/autumn/d1/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: REF050_autumn_1; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.REF050_autumn_1
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/REF050/autumn/d2/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/REF050/autumn/d1/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_REF050_autumn_2 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/REF050/autumn/d2/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_REF050_autumn_2
$ifthen.REF050_autumn_2 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/REF050/autumn/d2/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=REF050 --SEASON=autumn --DAY=2 --PREV=1 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/REF050/autumn/d2/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/REF050/autumn/d2/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: REF050_autumn_2; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.REF050_autumn_2
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/REF050/autumn/d3/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/REF050/autumn/d2/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_REF050_autumn_3 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/REF050/autumn/d3/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_REF050_autumn_3
$ifthen.REF050_autumn_3 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/REF050/autumn/d3/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=REF050 --SEASON=autumn --DAY=3 --PREV=2 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/REF050/autumn/d3/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/REF050/autumn/d3/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: REF050_autumn_3; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.REF050_autumn_3
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/REF050/autumn/d4/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/REF050/autumn/d3/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_REF050_autumn_4 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/REF050/autumn/d4/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_REF050_autumn_4
$ifthen.REF050_autumn_4 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/REF050/autumn/d4/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=REF050 --SEASON=autumn --DAY=4 --PREV=3 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/REF050/autumn/d4/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/REF050/autumn/d4/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: REF050_autumn_4; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.REF050_autumn_4
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/REF050/autumn/d5/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/REF050/autumn/d4/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_REF050_autumn_5 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/REF050/autumn/d5/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_REF050_autumn_5
$ifthen.REF050_autumn_5 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/REF050/autumn/d5/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=REF050 --SEASON=autumn --DAY=5 --PREV=4 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/REF050/autumn/d5/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/REF050/autumn/d5/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: REF050_autumn_5; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.REF050_autumn_5
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/REF050/autumn/d6/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/REF050/autumn/d5/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_REF050_autumn_6 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/REF050/autumn/d6/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_REF050_autumn_6
$ifthen.REF050_autumn_6 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/REF050/autumn/d6/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=REF050 --SEASON=autumn --DAY=6 --PREV=5 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/REF050/autumn/d6/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/REF050/autumn/d6/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: REF050_autumn_6; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.REF050_autumn_6
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/REF050/autumn/d7/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/REF050/autumn/d6/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_REF050_autumn_7 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/REF050/autumn/d7/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_REF050_autumn_7
$ifthen.REF050_autumn_7 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/REF050/autumn/d7/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=REF050 --SEASON=autumn --DAY=7 --PREV=6 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/REF050/autumn/d7/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/REF050/autumn/d7/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: REF050_autumn_7; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.REF050_autumn_7
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/REF090/autumn/d1/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_REF090_autumn_1 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/REF090/autumn/d1/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_REF090_autumn_1
$ifthen.REF090_autumn_1 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/REF090/autumn/d1/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=REF090 --SEASON=autumn --DAY=1 --PREV=0 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/REF090/autumn/d1/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/REF090/autumn/d1/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: REF090_autumn_1; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.REF090_autumn_1
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/REF090/autumn/d2/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/REF090/autumn/d1/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_REF090_autumn_2 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/REF090/autumn/d2/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_REF090_autumn_2
$ifthen.REF090_autumn_2 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/REF090/autumn/d2/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=REF090 --SEASON=autumn --DAY=2 --PREV=1 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/REF090/autumn/d2/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/REF090/autumn/d2/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: REF090_autumn_2; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.REF090_autumn_2
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/REF090/autumn/d3/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/REF090/autumn/d2/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_REF090_autumn_3 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/REF090/autumn/d3/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_REF090_autumn_3
$ifthen.REF090_autumn_3 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/REF090/autumn/d3/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=REF090 --SEASON=autumn --DAY=3 --PREV=2 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/REF090/autumn/d3/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/REF090/autumn/d3/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: REF090_autumn_3; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.REF090_autumn_3
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/REF090/autumn/d4/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/REF090/autumn/d3/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_REF090_autumn_4 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/REF090/autumn/d4/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_REF090_autumn_4
$ifthen.REF090_autumn_4 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/REF090/autumn/d4/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=REF090 --SEASON=autumn --DAY=4 --PREV=3 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/REF090/autumn/d4/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/REF090/autumn/d4/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: REF090_autumn_4; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.REF090_autumn_4
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/REF090/autumn/d5/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/REF090/autumn/d4/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_REF090_autumn_5 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/REF090/autumn/d5/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_REF090_autumn_5
$ifthen.REF090_autumn_5 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/REF090/autumn/d5/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=REF090 --SEASON=autumn --DAY=5 --PREV=4 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/REF090/autumn/d5/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/REF090/autumn/d5/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: REF090_autumn_5; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.REF090_autumn_5
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/REF090/autumn/d6/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/REF090/autumn/d5/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_REF090_autumn_6 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/REF090/autumn/d6/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_REF090_autumn_6
$ifthen.REF090_autumn_6 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/REF090/autumn/d6/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=REF090 --SEASON=autumn --DAY=6 --PREV=5 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/REF090/autumn/d6/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/REF090/autumn/d6/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: REF090_autumn_6; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.REF090_autumn_6
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/REF090/autumn/d7/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/REF090/autumn/d6/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_REF090_autumn_7 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/REF090/autumn/d7/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_REF090_autumn_7
$ifthen.REF090_autumn_7 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/REF090/autumn/d7/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=REF090 --SEASON=autumn --DAY=7 --PREV=6 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/REF090/autumn/d7/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/REF090/autumn/d7/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: REF090_autumn_7; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.REF090_autumn_7
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/REF095/autumn/d1/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_REF095_autumn_1 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/REF095/autumn/d1/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_REF095_autumn_1
$ifthen.REF095_autumn_1 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/REF095/autumn/d1/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=REF095 --SEASON=autumn --DAY=1 --PREV=0 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/REF095/autumn/d1/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/REF095/autumn/d1/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: REF095_autumn_1; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.REF095_autumn_1
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/REF095/autumn/d2/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/REF095/autumn/d1/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_REF095_autumn_2 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/REF095/autumn/d2/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_REF095_autumn_2
$ifthen.REF095_autumn_2 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/REF095/autumn/d2/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=REF095 --SEASON=autumn --DAY=2 --PREV=1 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/REF095/autumn/d2/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/REF095/autumn/d2/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: REF095_autumn_2; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.REF095_autumn_2
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/REF095/autumn/d3/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/REF095/autumn/d2/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_REF095_autumn_3 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/REF095/autumn/d3/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_REF095_autumn_3
$ifthen.REF095_autumn_3 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/REF095/autumn/d3/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=REF095 --SEASON=autumn --DAY=3 --PREV=2 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/REF095/autumn/d3/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/REF095/autumn/d3/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: REF095_autumn_3; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.REF095_autumn_3
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/REF095/autumn/d4/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/REF095/autumn/d3/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_REF095_autumn_4 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/REF095/autumn/d4/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_REF095_autumn_4
$ifthen.REF095_autumn_4 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/REF095/autumn/d4/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=REF095 --SEASON=autumn --DAY=4 --PREV=3 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/REF095/autumn/d4/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/REF095/autumn/d4/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: REF095_autumn_4; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.REF095_autumn_4
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/REF095/autumn/d5/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/REF095/autumn/d4/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_REF095_autumn_5 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/REF095/autumn/d5/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_REF095_autumn_5
$ifthen.REF095_autumn_5 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/REF095/autumn/d5/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=REF095 --SEASON=autumn --DAY=5 --PREV=4 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/REF095/autumn/d5/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/REF095/autumn/d5/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: REF095_autumn_5; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.REF095_autumn_5
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/REF095/autumn/d6/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/REF095/autumn/d5/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_REF095_autumn_6 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/REF095/autumn/d6/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_REF095_autumn_6
$ifthen.REF095_autumn_6 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/REF095/autumn/d6/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=REF095 --SEASON=autumn --DAY=6 --PREV=5 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/REF095/autumn/d6/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/REF095/autumn/d6/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: REF095_autumn_6; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.REF095_autumn_6
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/REF095/autumn/d7/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/REF095/autumn/d6/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_REF095_autumn_7 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/REF095/autumn/d7/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_REF095_autumn_7
$ifthen.REF095_autumn_7 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/REF095/autumn/d7/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=REF095 --SEASON=autumn --DAY=7 --PREV=6 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/REF095/autumn/d7/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/REF095/autumn/d7/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: REF095_autumn_7; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.REF095_autumn_7
