# Installation through Anaconda and GAMS IDE

## Jupyter

Open Anaconda Navigator, choose Environments → Import, and select the repository's `environment.yml`. The declared environment is the one used for the **lightweight verification notebooks**, not an invented reconstruction of the original fitting environment. Select it and launch JupyterLab. Browse to the extracted repository and open `notebooks/00_Quick_Start.ipynb`. Restart the kernel and run all cells.

The tested builder used Python 3.13.5. Exact installed package versions are in `verification/build_environment.json`. Loading the original trained artifacts into a different environment is not part of this route. The six archived research notebooks retain their own strict environment/source checks.

Each of the four lightweight notebooks is independently runnable from a fresh kernel. They use no external project `.py` module. The three source-free checks never call GAMS; the result reader only reads workbooks that actually exist. No fitting is silently triggered.

## GAMS

Use the author's intended Windows GAMS 24.9 IDE / CPLEX installation. This is an external runtime and is not installed by the Conda environment. Keep `cplex.opt` alongside the main GAMS files. Create/open a GAMS project in `GAMS_LaPalma`, then open `START_LAPALMA.gms` and press F9. Native directory creation uses Windows `cmd`, and the model preserves its `gdxxrw.exe` export interface.

Do not run a model from inside the ZIP, a read-only folder, or a documentation directory. Do not rename include files or put them in unrelated subfolders. The model intentionally uses its original relative include paths.

## GitHub upload

Extract the public ZIP, then upload the **contents of its `FCUC-SODE-ML-LaPalma` folder** so README.md appears at the repository root. Uploading only the ZIP as a single repository file does not expose the code and notebook structure to readers. The separately named PRIVATE source backup should not be uploaded.

The author can use GitHub's browser upload or GitHub Desktop. GitHub's browser documentation describes 25 MiB per file and up to 100 files per upload; check the current official page when uploading. This release is kept well below the per-file limit. Complete author-approved citation/license metadata before advertising a public reuse license.

References: GitHub, “Adding a file to a repository”; GAMS, “Dollar Control Options”. Links are recorded in `docs/References.md`. No GitHub upload was performed by the packaging assistant.
