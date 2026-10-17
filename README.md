# Frequency-constrained unit commitment using machine learning surrogates

## La Palma — frozen-coefficient research software

Software companion to manuscript **SEGAN-D-26-02403**, *Frequency-constrained unit commitment using machine learning surrogates*.

**Start with the supplied coefficients. Do not retrain a model before running the example.**

This repository includes the La Palma mixed-integer unit-commitment model, its complete native numerical inputs, the twelve frozen affine ML configurations, a one-day GAMS IDE entry, a seven-day option, the original full LP35 job roster, and explanatory Jupyter notebooks. The optimization route does not require the original training data or the large result archives.

### Quick start

1. Extract this repository to a new, writable folder. Keep it separate from accepted experiment outputs.
2. In Anaconda Navigator, import `environment.yml`, then open `notebooks/00_Quick_Start.ipynb` in Jupyter and run all cells. This reads/checks the inputs and prepares folders; it launches no solver. This notebook is useful but not required to call the native optimizer.
3. In the **GAMS 24.9 IDE**, make `GAMS_LaPalma` the project working directory, open **`GAMS_LaPalma/START_LAPALMA.gms`**, and run it. The default is one 24-hour `LR_C1` solve for winter, day 1.
4. Open `notebooks/03_Read_and_Audit_Native_Results.ipynb` to read and independently audit the native workbook.

See [RUN_LAPALMA.md](RUN_LAPALMA.md) for the exact DAY/WEEK/ALL choices and output paths.

### Models, data and identities

| Item | Included configuration |
|---|---|
| Primary campaign / model | `LP35_6259c70d0303` / `0899f2bc59cecb10` |
| Frequency criterion | 50 Hz nominal; minimum 46.5 Hz; maximum nadir drop 3.5 Hz |
| Fleet and temporal data | 11 generators; four seasons; seven consecutive 24-hour days per season |
| Nine primary ML configurations | LR_C1, LR_C1e6, SVM_C01, SVM_C1, SVM_C10, LDA, SGD_Log, SGD_Hinge, PA |
| Three threshold schedules | REF050, REF090, REF095; frozen reference model SGD_Log |
| Native implementation | Aggregate island MILP in GAMS 24.9, solved with CPLEX; no Pyomo solver substitution |
| Uploaded working solver settings | Search target 0.5%, search cap 1,200 s; fixed-commitment polish cap 300 s; 4 threads |

The archived `LP35_Deployment.json` records an earlier 1.25% / 600 s plan. It is preserved, not silently edited. The uploaded working GAMS defaults, the exact supplied `cplex.opt`, and the embedded prior review record support the separate working configuration above. See [solver provenance](docs/Solver_Provenance.md).

The primary full roster contains **336 ML daily solves**. The reported 56 reused BC/RESERVE days and 28 historical analytical SP schedules are separate evidence; they are not additional LP35 ML jobs. Historical 3-Hz source is segregated under `historical_3Hz/` and is not the default executable branch.

### Repository map

```text
GAMS_LaPalma/       One IDE entry, documented model/input files, frozen includes
notebooks/         Four small runnable learning/verification/result-reader notebooks
Notebooks_LaPalma/  Three original primary research notebooks, documented, source preserved
historical_3Hz/    Earlier GAMS/notebook source and historical deployment, clearly segregated
docs/             Editable mathematical manual, compiled PDF, source/data guides
reference_results/ Recorded review/display extracts; no invented native outputs
verification/      Actual build checks, hashes, settings and scope limitations
Data_LaPalma/      Reserved for genuine full-research archive; not needed by native deployment
```

### What is reproducible with this package?

**Included dependency-complete route:** solve the ML-FCUC optimization problem using frozen coefficients; change the declared method/season selection; carry accepted GDX state through a seven-day chain; audit new native workbooks. All primary numerical includes, the coefficients, the launcher roster and `cplex.opt` are supplied.

**Executed in the builder:** the four lightweight notebooks, including actual-fleet Big-M/export tests, artificial SODE equation checks, input checks and result-reader setup. The result-reader reports NOT RUN when there are no native workbooks.

**Not claimed:** native GAMS/CPLEX execution in the builder, exact reproduction of the entire manuscript evidence archive, or regeneration of the original labels/training from this small download. Full research replay requires the genuine `LP_Case.json`, `LP35_Protocol.json`, and matching parent/label/fitted-model/cache/native archives. These are not fabricated or replaced by the deployment manifest. Artificial teaching fixtures are never treated as accepted study outcomes.

### Read the formulation

[Technical manual (PDF)](docs/Mathematical_Formulation/Technical_Manual.pdf) · [Editable LaTeX](docs/Mathematical_Formulation/Technical_Manual.tex) · [Data dictionary](docs/Data_Dictionary.md) · [Verification report](verification/VERIFICATION_REPORT.md)

The GAMS files follow an explicit data → variables → equations → solve → audit/export progression. Comments connect each constraint to its mathematics and physical units. The original mathematical statements and calibrated coefficients are retained. Numerical-table private workbook-location comments and stale notebook outputs are removed from the public tree. Exact originals are preserved in the separately delivered **private author backup**, not redistributed here with private paths.

### Citation, licensing and acknowledgements

Use `CITATION.cff` as the software metadata record; replace the collective project author entry with the author-approved list and add a DOI only when one exists. No manuscript acceptance/publication DOI is invented.

`LICENSING_PENDING.md` deliberately does not grant an unauthorized license. The authors must select the public reuse terms. Rajabdorri's supplied reference package and its historical SP include pair are not redistributed. His examples informed the requested teaching style. The [RPG Lab LRC_SCUC repository](https://github.com/rpglab/LRC_SCUC) and its [resource page](https://rpglab.github.io/resources/LRC-SCUC_Python/) informed the simple file/data/run-guide organization only; none of its scientific code, data, license or locational constraints was copied into this model.

### Limitations

These are reduced-model frequency-security screens, not a field-validated protection guarantee. A calibrated safe probability is not a certified physical failure probability. The aggregate primary model includes neither network constraints nor a synthetic-inertia control. GAMS/CPLEX is an external licensed runtime, and this package is not operational power-system software.
