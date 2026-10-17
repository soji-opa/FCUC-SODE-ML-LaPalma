# La Palma ML-FCUC — release verification report

**Edition:** 1.0.0-deployment, 14 October 2026. **Manuscript:** SEGAN-D-26-02403.

## Release decision and scope

The public ZIP supplies all source-side dependencies for the **frozen-coefficient primary La Palma ML-FCUC optimization route**. It is not a new native GAMS execution certificate or a complete reconstruction of the original learning/evidence archive. The earlier source-recovery package is superseded by this edition.

The default entry is `GAMS_LaPalma/START_LAPALMA.gms`: one 24-hour LR_C1 winter/day-1 problem, then optional WEEK or ALL scope. The native requirements are a working Windows GAMS 24.9/CPLEX installation and GDXXRW/Excel export support. No classifier fitting, original LP_Case.json or LP35_Protocol.json is needed to call that optimizer.

## Executed checks

| Check | Result |
|:--|:--|
| Uploaded original numerical/coefficient include hashes | PASS — 28/28 match applicable frozen records |
| All primary direct numerical include dependencies | PASS — 18/18 present |
| Documented GAMS components versus original non-comment content | PASS — 7/7, with 26 public include comparisons |
| Primary equation definitions versus original and historical core | PASS — 35/35, whitespace-normalized only |
| Frozen primary calibrated include, job roster and CPLEX options | PASS — original byte hashes retained |
| Actual-fleet outage Big-M recomputation | PASS — 132/132 equal at original export precision |
| Frozen calibrated-include serialization | PASS — exact byte equivalence |
| Controlled scaler/calibrator-to-affine test | PASS — maximum probability difference 8.83e-13 |
| Controlled parent-group fold test | PASS — three folds without parent leakage |
| Artificial SODE closed-form/refinement/limit checks | PASS — closed-form maximum error 3.21e-9 Hz |
| All ten public notebooks: structure, syntax and imports | PASS — import checks recorded separately |
| Four lightweight notebook executions | PASS — separate fresh kernels, then a separate ZIP extraction |
| ZIP integrity, extraction structure and unchanged files | PASS — CRC, safe single-root paths and file checks |
| Six original scientific notebooks | PASS for 46 code-cell-text preservation; full drivers NOT RUN |
| Exact originals preserved outside the public ZIP | PASS — 44 source/input/configuration files in PRIVATE backup |

The result-reader notebook completed its input setup and numeric-reader checks. It found **zero native workbooks**, so its actual schedule audit correctly reports NOT RUN. The SODE fixtures are explicitly artificial; they are not the accepted La Palma governor dataset or replacement manuscript results.

## Solver provenance

The supplied cplex.opt is exactly `threads 4` plus a newline, and matches the original option-file digest. It does not override time or gap settings. The uploaded working main requests a 0.005 search target, 1,200-second search allowance and 300-second fixed-commitment polish allowance. Its original pre-run manifest records 0.0125 and 600 seconds. Reversing only those two defaults and restoring the original LF line ending reproduces the manifest's pre-run main-source hash.

The working settings are therefore identifiable and preserved. The earlier manifest is not edited. The prior embedded review of all 336 jobs is retained as historical evidence, not newly verified against inaccessible native listings. A source macro supplied by the user can still override a conditional default; the public start file does not supply an override.

## Tests not performed / scope exclusions

**NOT RUN:** GAMS 24.9/CPLEX compilation or optimization, native Excel/GDX output generation, original production SODE labels, original classifier training/calibration, fitted-model equivalence on original training/test rows, full original 336-workbook/listing re-audit, and the six production notebook drivers. The solver installation and required full-research archives are not available in the builder. No heavy scientific jobs were run to create this package.

**NOT APPLICABLE to the primary route:** historical analytical SP reproduction or a new locational/network model. The historical SP include pair and standalone Raja reference package are not redistributed pending third-party permission. Numerical inputs and coefficient rows of the primary optimizer are unchanged.

## Reading the status labels

PASS means the named test actually completed and satisfied its stated criterion. FAIL means the named test was attempted and its criterion was not met. NOT RUN means execution was not attempted or could not be performed with available dependencies. NOT APPLICABLE means the operation is outside this release's stated primary scope. There are no outstanding failed checks in the executed matrix; NOT RUN is not converted into PASS.

Licensing and approved citation author metadata remain author decisions. Private workbook URLs/output paths were removed from the public copies; exact originals remain in the separately delivered PRIVATE ZIP. Do not upload that private backup.

## Detailed records and independent rerun

The machine-readable verification matrix, source/code-cell hashes, equation definitions, dependency graph, source snapshot comparison and per-notebook results accompany this report. Run `notebooks/00_Quick_Start.ipynb`, `01_Frozen_Cuts_and_Export.ipynb` and `02_SODE_Equation_Checks.ipynb` from a fresh extraction. These checks require no external model fitting or solver. Native result auditing is enabled only after real native workbooks exist. Archive integrity and fresh-extraction checks are recorded in the final package verification metadata.
