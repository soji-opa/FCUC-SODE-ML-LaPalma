# Run La Palma — no retraining required

## A. First native example

Extract the complete directory into a **new writable workspace**, not on top of the author's accepted campaign. Keep `GAMS_LaPalma`, `notebooks` and the other folders together. A short local folder without unusual characters is preferable for the legacy Windows toolchain.

Open GAMS 24.9 IDE and create/open a project whose working directory is the repository's `GAMS_LaPalma` directory. Open `START_LAPALMA.gms`. Its default selections are:

```gams
$if not set SCOPE $setglobal SCOPE DAY
$if not set SELECT_RUN $setglobal SELECT_RUN LR_C1
$if not set SELECT_SEASON $setglobal SELECT_SEASON winter
```

Press the IDE Run button/F9. No command-line use or Python model fitting is required. The entry checks the selection and creates the output directories, then includes the original mathematical model. `SCOPE=DAY` means day 1 with its original incoming state. It is not a shortened synthetic UC model.

The expected daily output directory is:

```text
GAMS_LaPalma/Results_35Hz/LP35_6259c70d0303/LR_C1/winter/d1/
```

An accepted and successfully exported day contains `results.gdx`, `state.gdx`, `Results_LR_C1_winter_d1.xlsx`, `ACCEPTANCE_POLICY.txt`, and `COMPLETE.txt`. The search incumbent is separately retained. A solve that fails the original acceptance tests creates failure evidence rather than an accepted terminal state. No objective value is invented as a universal regression target.

The one-day entry's IDE listing normally uses the start-file name. WEEK/ALL child jobs use their original daily `LP35.lst`/`LP35.log` locations. Keep listings when investigating an actual native run; generated logs/listings are not shipped as if newly executed.

## B. One chronological week

Change `SCOPE DAY` to `SCOPE WEEK`, leaving the selected run/season as required. The selected-week include executes days 1 through 7 in order. An already complete day is skipped. Each next day requires the preceding accepted same-method, same-season `state.gdx` and completion marker. It does not reconstruct state from the workbook.

Permitted ML run names are:

```text
LR_C1  LR_C1e6  SVM_C01  SVM_C1  SVM_C10  LDA
SGD_Log  SGD_Hinge  PA  REF050  REF090  REF095
```

Seasons are `winter`, `spring`, `summer`, `autumn`. The twelve cuts are frozen. REF050/090/095 change the deployed probability threshold for the frozen reference model; they do not fit new slopes. BC, RESERVE and SP are not names in this primary ML-only include.

## C. Entire original ML roster — deliberate opt-in

Set `SCOPE ALL` only when a full 336-job reproduction is intended. This invokes the supplied original `LP35_Jobs.inc`; the roster itself is byte-identical to its frozen digest. Preparing empty output folders does not run these jobs. The default release build did not solve this roster.

The original source headers sometimes say to run the training notebook first: those instructions described coefficient generation during the research campaign. In this release the exported coefficients and job roster already exist, so **do not rerun training just to satisfy that historical comment**.

## D. Read and audit a new native result

Open `notebooks/03_Read_and_Audit_Native_Results.ipynb` with Jupyter. Its selection defaults to LR_C1/winter. Run all cells. It uses the original operational audit, with static data read directly from the supplied includes. It checks costs, balance, dispatch/block limits, switching, ages, ramping, minimum times, state continuity and the frozen security screens.

Before there are native outputs, it explicitly reports `NOT RUN`. It does not generate a fake workbook to make a test pass. It performs no SODE post-event assessment without the original dynamic case.

## E. Incumbent acceptance and export recovery

A target optimality gap is a search stopping rule, not the acceptance gate. The model preserves an integer incumbent, fixes commitment for the original polishing solve, and checks equation, variable-bound and integrality residuals plus the unrestricted bound relation. State export requires the original accepted model/solve statuses and primal tolerances.

Close any open output workbook before export. If a valid identity-matched `results.gdx` already exists but Excel export did not complete, the launcher selects `EXPORT_ONLY=1`; it does not need to re-solve the day. Never delete the GDX files to fix an Excel lock. A failed solve remains recorded; inspect it before an explicit retry. Do not erase accepted reference data.

## F. Software requirements and tested scope

The native source uses Windows `cmd` for directory creation and the original `gdxxrw.exe` export. Use the author's intended Windows GAMS 24.9/CPLEX toolchain and its required spreadsheet-export environment. No Linux GDXXRW port or alternative solver backend is claimed.

GAMS/CPLEX was unavailable in the release builder. Native execution of the entry and solver is therefore **NOT RUN**. The dependency closure, mathematical-statement preservation, coefficients, job identities, software imports and four lightweight notebooks were tested. See the actual verification matrix rather than interpreting a notebook completion message as a native solve.
