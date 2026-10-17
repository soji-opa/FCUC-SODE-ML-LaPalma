# Native optimizer

Open **START_LAPALMA.gms** in the GAMS 24.9 IDE and use this directory as the project working directory. The default SCOPE=DAY runs LR_C1, winter, day 1. All native numerical inputs and the frozen cut are included. Python training is not needed.

The three layers are: `START_LAPALMA.gms` (execution selection only), `Input_Data_LaPalma_Weekly.gms` plus `inc/` (data), and `LaPalma_FCUC_35Hz.gms` (mathematical model, incumbent acceptance, polishing, residual checks and export).

Use SCOPE=WEEK for one chronological seven-day chain. SCOPE=ALL invokes the unchanged archived 336-job roster. Those choices are opt-in. Windows `cmd` creates only the output directories. Native GAMS execution was NOT RUN by the builder; the original mathematical statements and dependencies were checked statically.

Keep `cplex.opt` in this directory. Do not edit `LP35_Deployment.json`: it is the earlier archived plan. `verification/Run_Configuration.json` records the uploaded working settings separately.
