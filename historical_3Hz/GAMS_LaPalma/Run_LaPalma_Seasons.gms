* ============================================================================
* Run_LaPalma_Seasons.gms
* HISTORICAL FULL ROSTER: source-only, not the default release entry.
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
$title Run four La Palma representative weeks -- GAMS IDE entry point
* Open THIS file and press F9 after Notebook03. Working directory: GAMS_LaPalma.
* Seasonal source inputs, schedules, and results are not reset by this launcher.
$if not exist inc/LaPalma_Jobs.inc $abort Run Notebook03 to export coefficients and jobs first.
$include inc/LaPalma_Jobs.inc
$log Seasonal job list finished; Notebook04 distinguishes complete, failed and missing days.
