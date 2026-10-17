# Sources and organizational references

## Scientific source of this implementation

S1. The author's seven individually uploaded La Palma GAMS components and 28 include files. Original byte hashes, public-content comparisons and scope are in `verification/`.

S2. The author's six executed Jupyter notebooks. The public source copies preserve their code-cell texts; original filenames and hashes are recorded. Original output blobs are in the separate private backup.

S3. `LP35_Deployment(1).json`, `LaPalma_Deployment(1).json`, the exact uploaded `cplex.opt`, and the prior reviewed-execution record embedded in the processor. These are source records, not independently reproduced native results.

## Organization requested by the author

R1. RPG Lab, *Model-based Inertia-constrained LRC-SCUC in Python*, https://rpglab.github.io/resources/LRC-SCUC_Python/ (accessed 14 October 2026).

R2. RPG Lab, `LRC_SCUC`, https://github.com/rpglab/LRC_SCUC (accessed 14 October 2026). Used to understand the requested practical layout: model source, numerical input/coefficient files, run instructions, result interpretation and citation. No code/data/license from that repository is imported.

R3. The Rajabdorri GAMS/notebook examples supplied by the author. Used as a teaching-organization reference only. Original third-party files are not redistributed in the public package.

## Tool documentation

D1. GAMS, *Dollar Control Options*, https://www.gams.com/latest/docs/UG_DollarControlOptions.html (accessed 14 October 2026). Supporting reference for compiler directives, includes and external calls; the actual intended runtime remains GAMS 24.9, not a claimed current-version test.

D2. GitHub, *Adding a file to a repository*, https://docs.github.com/en/repositories/working-with-files/managing-files/adding-a-file-to-a-repository (accessed 14 October 2026).

D3. SciPy, `solve_ivp`, https://docs.scipy.org/doc/scipy/reference/generated/scipy.integrate.solve_ivp.html. Integrator-interface background; the source function defines the actual settings used.

D4. scikit-learn, *Probability calibration*, https://scikit-learn.org/stable/modules/calibration.html. Statistical background only. The accepted source uses its own grouped out-of-fold sigmoid routine, not a new replacement calibrator.
