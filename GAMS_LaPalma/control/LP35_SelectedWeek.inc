* Seven-day selected chain; body copied from the original first chain.
$if not set RETRY_FAILED $setglobal RETRY_FAILED 0
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/%SELECT_RUN%/%SELECT_SEASON%/d1/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_%SELECT_RUN%_%SELECT_SEASON%_1 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/%SELECT_RUN%/%SELECT_SEASON%/d1/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_%SELECT_RUN%_%SELECT_SEASON%_1
$ifthen.%SELECT_RUN%_%SELECT_SEASON%_1 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/%SELECT_RUN%/%SELECT_SEASON%/d1/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=%SELECT_RUN% --SEASON=%SELECT_SEASON% --DAY=1 --PREV=0 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/%SELECT_RUN%/%SELECT_SEASON%/d1/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/%SELECT_RUN%/%SELECT_SEASON%/d1/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: %SELECT_RUN%_%SELECT_SEASON%_1; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.%SELECT_RUN%_%SELECT_SEASON%_1
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/%SELECT_RUN%/%SELECT_SEASON%/d2/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/%SELECT_RUN%/%SELECT_SEASON%/d1/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_%SELECT_RUN%_%SELECT_SEASON%_2 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/%SELECT_RUN%/%SELECT_SEASON%/d2/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_%SELECT_RUN%_%SELECT_SEASON%_2
$ifthen.%SELECT_RUN%_%SELECT_SEASON%_2 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/%SELECT_RUN%/%SELECT_SEASON%/d2/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=%SELECT_RUN% --SEASON=%SELECT_SEASON% --DAY=2 --PREV=1 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/%SELECT_RUN%/%SELECT_SEASON%/d2/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/%SELECT_RUN%/%SELECT_SEASON%/d2/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: %SELECT_RUN%_%SELECT_SEASON%_2; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.%SELECT_RUN%_%SELECT_SEASON%_2
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/%SELECT_RUN%/%SELECT_SEASON%/d3/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/%SELECT_RUN%/%SELECT_SEASON%/d2/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_%SELECT_RUN%_%SELECT_SEASON%_3 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/%SELECT_RUN%/%SELECT_SEASON%/d3/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_%SELECT_RUN%_%SELECT_SEASON%_3
$ifthen.%SELECT_RUN%_%SELECT_SEASON%_3 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/%SELECT_RUN%/%SELECT_SEASON%/d3/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=%SELECT_RUN% --SEASON=%SELECT_SEASON% --DAY=3 --PREV=2 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/%SELECT_RUN%/%SELECT_SEASON%/d3/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/%SELECT_RUN%/%SELECT_SEASON%/d3/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: %SELECT_RUN%_%SELECT_SEASON%_3; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.%SELECT_RUN%_%SELECT_SEASON%_3
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/%SELECT_RUN%/%SELECT_SEASON%/d4/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/%SELECT_RUN%/%SELECT_SEASON%/d3/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_%SELECT_RUN%_%SELECT_SEASON%_4 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/%SELECT_RUN%/%SELECT_SEASON%/d4/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_%SELECT_RUN%_%SELECT_SEASON%_4
$ifthen.%SELECT_RUN%_%SELECT_SEASON%_4 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/%SELECT_RUN%/%SELECT_SEASON%/d4/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=%SELECT_RUN% --SEASON=%SELECT_SEASON% --DAY=4 --PREV=3 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/%SELECT_RUN%/%SELECT_SEASON%/d4/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/%SELECT_RUN%/%SELECT_SEASON%/d4/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: %SELECT_RUN%_%SELECT_SEASON%_4; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.%SELECT_RUN%_%SELECT_SEASON%_4
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/%SELECT_RUN%/%SELECT_SEASON%/d5/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/%SELECT_RUN%/%SELECT_SEASON%/d4/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_%SELECT_RUN%_%SELECT_SEASON%_5 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/%SELECT_RUN%/%SELECT_SEASON%/d5/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_%SELECT_RUN%_%SELECT_SEASON%_5
$ifthen.%SELECT_RUN%_%SELECT_SEASON%_5 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/%SELECT_RUN%/%SELECT_SEASON%/d5/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=%SELECT_RUN% --SEASON=%SELECT_SEASON% --DAY=5 --PREV=4 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/%SELECT_RUN%/%SELECT_SEASON%/d5/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/%SELECT_RUN%/%SELECT_SEASON%/d5/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: %SELECT_RUN%_%SELECT_SEASON%_5; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.%SELECT_RUN%_%SELECT_SEASON%_5
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/%SELECT_RUN%/%SELECT_SEASON%/d6/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/%SELECT_RUN%/%SELECT_SEASON%/d5/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_%SELECT_RUN%_%SELECT_SEASON%_6 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/%SELECT_RUN%/%SELECT_SEASON%/d6/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_%SELECT_RUN%_%SELECT_SEASON%_6
$ifthen.%SELECT_RUN%_%SELECT_SEASON%_6 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/%SELECT_RUN%/%SELECT_SEASON%/d6/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=%SELECT_RUN% --SEASON=%SELECT_SEASON% --DAY=6 --PREV=5 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/%SELECT_RUN%/%SELECT_SEASON%/d6/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/%SELECT_RUN%/%SELECT_SEASON%/d6/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: %SELECT_RUN%_%SELECT_SEASON%_6; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.%SELECT_RUN%_%SELECT_SEASON%_6
$setglobal LP35_READY 1
$if exist "Results_35Hz/LP35_6259c70d0303/%SELECT_RUN%/%SELECT_SEASON%/d7/COMPLETE.txt" $setglobal LP35_READY 0
$if not exist "Results_35Hz/LP35_6259c70d0303/%SELECT_RUN%/%SELECT_SEASON%/d6/COMPLETE.txt" $setglobal LP35_READY 0
$ifthen.retry_%SELECT_RUN%_%SELECT_SEASON%_7 %RETRY_FAILED%==0
$if exist "Results_35Hz/LP35_6259c70d0303/%SELECT_RUN%/%SELECT_SEASON%/d7/FAILED_SOLVE.txt" $setglobal LP35_READY 0
$endif.retry_%SELECT_RUN%_%SELECT_SEASON%_7
$ifthen.%SELECT_RUN%_%SELECT_SEASON%_7 %LP35_READY%==1
$setglobal LP35_EXPORT_ONLY 0
$if exist "Results_35Hz/LP35_6259c70d0303/%SELECT_RUN%/%SELECT_SEASON%/d7/results.gdx" $setglobal LP35_EXPORT_ONLY 1
$call gams "LaPalma_FCUC_35Hz.gms" --LPCAMPAIGN=LP35_6259c70d0303 --RUN=%SELECT_RUN% --SEASON=%SELECT_SEASON% --DAY=7 --PREV=6 --EXPORT_ONLY=%LP35_EXPORT_ONLY% lo=2 o="Results_35Hz/LP35_6259c70d0303/%SELECT_RUN%/%SELECT_SEASON%/d7/LP35.lst" lf="Results_35Hz/LP35_6259c70d0303/%SELECT_RUN%/%SELECT_SEASON%/d7/LP35.log"
$if errorlevel 1 $abort LP35 native compile/execution/export failure: %SELECT_RUN%_%SELECT_SEASON%_7; inspect its daily LP35.lst and LP35.log. Numerical results are retained.
$endif.%SELECT_RUN%_%SELECT_SEASON%_7
