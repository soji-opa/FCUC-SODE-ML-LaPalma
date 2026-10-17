# Research notebook guide

## Two reading levels

The four `notebooks/` files are the initial learning path and execute with the included materials. The six larger scientific notebooks are retained for method inspection and eventual exact archival replay. They are not required to deploy the frozen cuts, and the missing production data are disclosed rather than guessed.

## Original scientific stages

**01_LP_Run_Guide_and_Audit.** Reads the ordered eleven-unit case and checks source identities. `prepare_parents` reuses the supplied historical operating-point workbook; it checks bounds/balance and hashes the complete parent dispatch. It does not generate a fresh exhaustive grid or append a dummy twelfth unit. The incoming 24-hour/off, zero-dispatch seed is not an actual load-supplying operating point.

**02_LP_Dynamics_and_Labels.** `event_inputs` excludes the tripped machine. `integrate_event` balances the MW deficit through surviving inertia, damping and individually capped second-order governors. `evaluate_event` compares coarse/fine integration and distinguishes unsafe witnesses, conditional safe labels, review cases and retained failures. Cache identity includes the model, dispatch, demand, outage and commitment. The larger campaign is not rerun by the tutorial's explicitly artificial ODE tests.

**01_LP35_Prepare_Labels.** Reuses the established physical trajectories at a 46.5-Hz threshold. Threshold relabelling is not rescheduling, and changing a threshold does not make previously inspected parent groups prospectively unseen. The original parent/case/protocol receipts remain required for exact execution.

**02_LP35_Train_and_Export.** `select_fit` selects cheap or random fitting parents within demand bands, rather than duplicating unsafe events. `group_folds` stratifies whole parents by presence of an unsafe event. `fit_crosscal` creates held-out parent scores, fits one sigmoid, then fits one final selected-pool estimator. `derive_cut` expands standardization and the sigmoid logit into four physical-unit slopes and one intercept. `audit_frozen_cut` distinguishes native/primal, unit-conversion and decimal-serialization error budgets. `export35` writes the exact twelve-significant-digit GAMS include and pins source/baseline identities. Its original guard also expects 56 already existing baseline days; using frozen exports avoids this unnecessary dependency for a new public UC example.

**03_LP35_Process_and_Plot.** `load_daily` reads real native workbooks and reconstructs operational constraints, cost and state transfer. Other routines reconcile recorded/working settings, process only uncached events, and build campaign-level figures. The provided small native-reader notebook reuses the operational routines with a table-derived case view; it does not guess the missing dynamic case or bypass source-integrity guards for full paper replay.

**04_LP_Seasonal_Weekly_Results.** Retains the earlier 3-Hz campaign assessment. Its historical SP results are context, not new 3.5-Hz ML solves. Keep its source identities, thresholds and native archives separate.

## How to study a constraint

Choose one equation from `verification/GAMS_Equation_Map.csv`. Locate its comment and statement in the GAMS model. Write the same equation with physical symbols. Check units on both sides and test its active/inactive cases. For `mlSecurity`, test an online producing outage, then an offline candidate with zero loss. For chronological constraints, test hour 1 separately from hours 2–24. These exercises expose errors that a plausible-looking objective plot cannot.

## What NOT RUN means here

The six scientific notebooks have unchanged code, valid structure, valid syntax and successful import checks. Full driver execution was not performed because their original case/protocol, fitted models and data/evidence archives were not all available and retraining was not authorized. The private author backup preserves original bytes for future source-sensitive replay. Markdown documentation is not a substitute for those missing experiments.
