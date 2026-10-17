# Reproducibility scope and evidence

The release separates three questions that should not be conflated.

| Route | Included inputs | Builder execution status |
|---|---|---|
| Frozen-coefficient ML-FCUC deployment | Complete native `.gms` / numerical `.inc` / frozen cut / jobs / `cplex.opt` dependency set | Static preservation and input/export checks PASS; native GAMS/CPLEX NOT RUN |
| Lightweight mathematical/operational checks | All data or explicitly artificial fixtures used by the four `notebooks/` files | All four notebooks executed; no-native-result branch explicitly NOT RUN for workbook audit |
| Full original labels, fitting and manuscript evidence | Research source included; original case/protocol and full archived datasets/fitted artifacts/native outputs not all included | NOT RUN; no retraining or invented source files |

## Frozen files and documented copies

All 28 uploaded include files matched their applicable frozen digests during packaging. The primary cut and job include and `cplex.opt` are public byte-identical copies. Other numerical tables have only the private workbook-location comment removed; their non-comment content is unchanged. The upload verification and public source comparison record these different hash meanings separately.

The seven original GAMS components retain their non-comment statements. Their comments/layout are expanded for teaching. All 35 primary equation definitions match the original source after whitespace normalization. This is static preservation, not proof of native solver parity.

The six archival notebooks retain all 46 original code-cell texts. Public copies add Markdown and remove execution counts, stale output blobs and private paths. Their full production stages were not run. Exact original bytes are preserved separately in the private author backup.

## Solver provenance

The uploaded CPLEX file has SHA-256 `1870d937c9693b90820800aa90711770a6f87332d37124d739da5cbf731121a5` and contains only `threads 4`. The uploaded working GAMS source has 0.005 search gap, 1,200 s search cap, and 300 s polishing cap. The frozen deployment still records the earlier 0.0125 / 600 s plan. Neither record is overwritten. The prior embedded 336-day audit supports the working settings, but its underlying archive was not newly inspected here.

## Why the original Python case is not a native optimization dependency

The native model loads the `.inc` tables through its input loader and the learned coefficients through `LP35_Calibrated.inc`. It does not open `LP_Case.json` or `LP35_Protocol.json`. Those files belong to the original Python physical-label/training/identity workflow. Requiring them before any frozen-UC example was an unnecessary obstacle; substituting guessed copies would be scientifically wrong.

The native workbook-audit notebook constructs an explicit in-memory **operational** case from the shipped tables. It does not pretend to reconstruct the original case file, does not guess governor coefficients, and does not assign a new object the original dynamic hash.

## New runs and results

Do not overwrite accepted results. An unchanged MILP solved with finite time and parallel search need not reproduce every incumbent, objective or runtime identically. Preserve the native bound, achieved gap, residuals, state and execution environment. `reference_results/` contains labelled prior-record/display extracts; artificial verification fixtures and new runs stay separate.

## Verification labels

PASS means the named test actually ran and passed. FAIL means a named requirement/test did not pass. NOT RUN means the stage was not executed or its input was unavailable. NOT APPLICABLE means it is outside the released route, not a hidden successful test. Read the scope attached to every label.
