# Recorded evidence, not new native test outputs

`LP35_Reviewed_Execution_Record.json` is the prior 336-day review record embedded in the author's executed processing notebook. It records 0.005/1200 s search and 300 s polishing, and keeps the older 0.0125/600 s plan separately. The underlying native workbook/listing archive was not re-executed or re-audited during this packaging session.

The two `Recorded_*_Display.csv` files are table displays extracted from that notebook, not replacements for full-precision native results. They may contain display-rounded values. They are included to show the intended published comparison structure, not to certify solver equivalence.

No test fixture, hypothetical frequency trace, or new native run is added to these frozen reference tables. New local outputs belong under `GAMS_LaPalma/Results_35Hz/` and are excluded from version control.
