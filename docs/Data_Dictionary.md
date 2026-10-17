# Data dictionary — source labels, not generic replacement data

## Native input files

The loader selects `transmission_option=4`, so multi-option `tr1..tr4` tables use column `tr4`. Numeric values, row labels and table alignment are preserved. Only private `Workbook:` comments are removed.

| Include | GAMS binding | Meaning / computation units |
|---|---|---|
| block_max.inc | g_max(i,b) | Three block capacities per unit, MW |
| k.inc | k_option(i,b,tr) → k(i,b) | Incremental cost, kEUR/MWh |
| start_up_sw.inc | suc_sw_option(i,j,tr) → suc_sw(i,j) | Category startup costs, kEUR |
| start_up_sl.inc | suc_sl(i,j) | Category lower offline-age threshold, hours |
| aux2.inc | count_off_init(i) | Incoming offline duration, hours |
| aux3.inc | count_on_init(i) | Incoming online duration, hours; commitment inferred from >0 |
| aux4.inc | a(i) | No-load cost, kEUR/h |
| aux5.inc | ramp_up(i) | MW change allowed in one hour |
| aux6.inc | ramp_down(i) | MW change allowed in one hour |
| aux7.inc | g_down(i) | Minimum down time, hours |
| aux8.inc | g_up(i) | Minimum up time, hours |
| aux9.inc | g_min(i) | Minimum stable dispatch, MW |
| aux10.inc | g_0(i) | Incoming dispatch, MW |
| auxinertia.inc | inertia(i) | Inertia constant, seconds |
| auxmbase.inc | mbase(i) | Machine base used in the source energy/gain convention |
| auxk.inc | kg(i) | Governor gain on the source per-unit convention |
| d_seasons.inc | dAll(t,days,seasons) | Demand, MW; 24 × 7 × 4 entries |
| RES_seasons.inc | RESAll(t,days,seasons) | Available renewable power, MW; 24 × 7 × 4 entries |

`g_max_flat(i)=sum(b,g_max(i,b))`. The source computes `inertia(i)*mbase(i)` as its energy aggregate and `kg(i)*mbase(i)/50` as MW/Hz gain. No undocumented MVA-to-MW conversion is introduced by this release. The rated-base convention must remain aligned with the original model.

`aux11.inc`, `aux12.inc`, `cost_coefs.inc`, and `line_map.inc` are retained as unused numerical provenance. Their presence does not add a network constraint or replace the block-cost objective. The active loader has eighteen numerical includes.

## Frozen ML interface

`LP35_Calibrated.inc` supplies model ID, nadir threshold, twelve run labels, probability floors, five affine coefficients per run (one intercept, four slopes) and eleven outage-specific Big-M values per run. `LP35_Jobs.inc` supplies the original 336 daily calls. The `.json` deployment is a readable provenance record; native GAMS consumes the `.inc` files directly.

Feature order in the learning source is **loss, inertia, gain, reserve**. Coefficients map as `kL`, `kE`, `kG`, `kR`. The GAMS margin uses a different textual order but the same symbols. Do not normalize the intercept to one or reverse inequality direction without re-deriving the equivalent rule.

## Output objects

`results.gdx` preserves RunSummary, RunIdentity, incoming/terminal states, dispatch, commitment, ages, switching, blocks, startup categories, curtailment, demand, available wind and cut margins. `state.gdx` is the chronological handoff. The workbook exposes corresponding named sheets for independent audit. `COMPLETE.txt` is written after accepted solve and successful workbook export; its existence is not a license to skip identity or primal checks.

`reference_results/` holds prior-record/display extracts. `verification/local_reports/` holds newly produced verification reports. Neither is used to fill a missing native dispatch table.
