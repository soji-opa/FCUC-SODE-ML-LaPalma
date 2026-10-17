* ============================================================================
* Run_LaPalma_35Hz.gms
* ARCHIVED FULL ROSTER LAUNCHER: 336 ML days. Use START_LAPALMA.gms first.
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
$title La Palma 3.5-Hz ML seasonal campaign -- GAMS IDE entry
* Run Notebook 01_LP35 then 02_LP35 before F9 here.
* New ML results only; no SP/BC/RESERVE solves are called.
$if not exist inc/LP35_Jobs.inc $abort Run 02_LP35_Train_and_Export.ipynb first.
$include inc/LP35_Jobs.inc
display 'LP35 launcher finished; processing reports complete, failed, and blocked chains explicitly.';
