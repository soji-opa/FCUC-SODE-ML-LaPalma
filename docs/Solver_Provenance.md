# Solver-settings provenance — reconciled scope

| Source | Search relative-gap target | Search allowance | Fixed-commitment polish allowance |
|---|---:|---:|---:|
| Original LP35 deployment manifest | 0.0125 (1.25%) | 1,200 s | 600 s |
| Uploaded working `LaPalma_FCUC_35Hz(1).gms` | 0.005 (0.5%) | 1,200 s | 300 s |
| Prior review record embedded in the executed processor | 0.005 (0.5%) | 1,200 s | 300 s |
| Public documented native model | 0.005 (0.5%) | 1,200 s | 300 s |

The supplied `cplex.opt` consists of `threads 4` followed by a newline. Its SHA-256 exactly matches the original deployment's option-file digest. It contains no search-gap or time override. The public native entry does not introduce an override either. During polishing the original source sets `ep.optcr=.0001` and fixes `x` to the rounded search commitment; the model remains solved as a MIP because other binary declarations remain.

The current public default is therefore the **uploaded working source configuration**, with the archived earlier plan retained for provenance. This resolves which values this source package requests; it does not prove the effective settings of every historical execution. The source uses conditional defaults (`$if not set`), so user-supplied command-line/IDE macros can override them. Avoid such overrides for the default reproduction.

The prior embedded 336-day execution review is included as a recorded claim. The original 336 native listings/workbooks were not re-inspected in this builder, and GAMS/CPLEX was not run. Neither the earlier manifest nor a static source match is promoted into a new native test certificate.

A relative-gap target is not the acceptance gate. Preserve the original status checks, fixed-commitment polishing, equation/bound/integrality residual limits, original search bound and GDX state transfer. Do not relax primal checks simply to make a demonstration return a schedule.
