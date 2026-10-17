# La Palma ML-FCUC: mathematical and execution manual

**Manuscript:** SEGAN-D-26-02403, *Frequency-constrained unit commitment using machine learning surrogates*. **Software edition:** 1.0.0-deployment, 14 October 2026.

## 1. Start from a usable scientific interface

This edition provides a dependency-complete **native frozen-coefficient optimizer**, not another request to regenerate the original research archive. The principal path is: inspect the supplied inputs, open one GAMS IDE entry, solve one day using the frozen coefficients, and audit the resulting workbook. A seven-day chain and the complete original 336-job roster are explicit options. Python training and the large simulation-output archive are not prerequisites to that native route.

All seven GAMS components, six scientific notebooks, twenty-eight include files, both deployment manifests and the original CPLEX option file were read as actual uploaded bytes. All twenty-eight include files matched their applicable frozen digests. Eighteen numerical include files are directly used by the primary loader. The original calibrated cut and job includes remain byte-identical in the public package. Numerical-table private workbook-location comments are removed without changing data; exact original bytes are preserved in the private author backup.

The public repository does not claim that GAMS/CPLEX was executed in the builder. The native runtime was unavailable. The four lightweight notebooks were executed, including actual-fleet Big-M recomputation and byte-equivalent coefficient export, explicitly artificial SODE equation fixtures, and native-reader setup. Before native outputs exist, result auditing reports NOT RUN. Full original physical-label, classifier-fitting and manuscript-evidence replay also remains NOT RUN because its case/protocol and complete data archives are not all included. This is a scope distinction, not a reason to invent missing data or prevent a frozen UC example.

### 1.1 Campaign boundaries

The primary campaign is `LP35_6259c70d0303`, model `0899f2bc59cecb10`, with 50-Hz nominal frequency and a 46.5-Hz minimum. Twelve ML configurations comprise nine primary model choices and three probability-threshold schedules. Four seasons and seven daily solves give 336 ML jobs. The 56 reused BC/RESERVE days and 28 historical analytical SP schedules are separate recorded evidence. The earlier campaign is `LP4S_74ee31255d0f`, model `863b816653ff438b`, at 47 Hz. Its source remains segregated; no historical schedule is relabelled as optimized at another threshold.

### 1.2 Source, wrapper and evidence

`GAMS_LaPalma/START_LAPALMA.gms` selects DAY, WEEK or ALL and prepares output locations. It does not change equations, numerical inputs, coefficient values or incumbent/state policy. The primary mathematical model and input loader retain all their non-comment statements; extra comments and whitespace make them readable. The original full job roster is unchanged. DAY selects one original 24-hour problem; it does not shrink or replace the scientific model.

The six archival research notebooks retain their original code-cell texts. They gain purpose, inputs, equations, algorithm and verification Markdown; stale outputs and private workstation paths are removed. Their original source-sensitive checks are not weakened. Exact archival replay uses the original snapshots and genuine data, not comment-sanitized copies falsely assigned the old byte hashes.

### 1.3 Solver settings that this package actually requests

The uploaded working source requests a 0.005 search target, 1,200 s search allowance and 300 s fixed-commitment polish allowance. The exact uploaded `cplex.opt` contains only four threads and matches the earlier recorded hash. The original manifest's 0.0125 and 600 s values remain preserved as the earlier plan. The embedded prior 336-day review supports the working settings, but its underlying native archive was not newly inspected here. A conditional source default can still be overridden by user-supplied macros; the default public entry supplies no such override.

## 2. Notation, physical units and source objects

There are eleven generators indexed by $i\in\mathcal I$, hourly periods $t\in\{1,\ldots,24\}$, three dispatch blocks $b\in\{1,2,3\}$ and eight startup categories $j\in\{1,\ldots,8\}$. A separate outage index $k$ denotes the candidate failed generator; it is the second index of the GAMS variables `Hafter(t,i)`, `Gafter(t,i)` and `Rafter(t,i)`. This manual uses $k$ for that candidate when necessary to avoid confusing the failed unit with a surviving summation index.

| Mathematical symbol | Source name | Meaning and units |
|:--|:--|:--|
| $x_{ti}$ | `x(t,i)` | Binary commitment; dimensionless |
| $y_{ti},z_{ti}$ | `y(t,i),z(t,i)` | Binary startup and shutdown |
| $p_{ti}$ | `g(t,i)` | Thermal dispatch, MW |
| $p_{tib}$ | `g_lin(t,i,b)` | Dispatch in a cost block, MW |
| $s_{tij}$ | `suc(t,i,j)` | Binary startup-category selection |
| $w_t^{\rm curt}$ | `curt(t)` | Curtailed wind power, MW |
| $u_{ti}^{\rm age},v_{ti}^{\rm age}$ | `onAge,offAge` | Consecutive on/off ages, h |
| $H_i,S_i$ | `inertia,mbase` | Inertia constant in s; machine power base in the source convention |
| $E_{tk}$ | `Hafter(t,k)` | Surviving kinetic-energy aggregate, MW s |
| $G_{tk}$ | `Gafter(t,k)` | Surviving gain aggregate, MW/Hz |
| $R_{tk}$ | `Rafter(t,k)` | Surviving dispatch headroom, MW |
| $f_0,\Delta f$ | `F0`, dynamic state 0 | Nominal frequency and frequency deviation, Hz |
| $D$ | `damping` in event inputs | Load-damping coefficient, MW/Hz |
| $q_i,v_i$ | dynamic state slices | Governor states in Hz and Hz/s |
| $a_{1i},a_{2i},b_{1i}$ | `A1,A2,B1` | Governor coefficients in s, s$^2$, s |
| $c_0,c_L,c_E,c_G,c_R$ | `lpK0,lpKL,lpKE,lpKG,lpKR` | Dimensionless score intercept and inverse-feature-unit coefficients |

The source uses the supplied numeric `mbase` directly as the power-base multiplier, and reports the resulting aggregate as MW s. This release preserves that convention; it does not infer a power factor or introduce an undocumented MVA-to-MW conversion. The data dictionary identifies the same convention.

The name `Hafter` is potentially misleading: its dimension is **MW s**, not seconds. Dividing an energy aggregate by a power base produces an inertia constant, but the implementation does not require that extra normalization. The nominal-frequency factor $f_0$ must remain in the RoCoF equation when frequency is measured in Hz.

The objective uses the source monetary scale, kEUR. Explicit EUR outputs multiply by 1000. One-hour steps mean a MW dispatch maintained for a step is numerically the corresponding MWh. This does not justify interpreting a weekly summed MW series as energy without its time step, nor mixing raw kEUR and exported EUR.

The input loader selects `transmission_option=4` from the original multi-option cost/ramp tables. This is a column selector, not evidence that a transmission-network formulation is active. The original UC is an aggregate island model with a single power balance. Unused network tables occur in the source-hash inventory only as provenance.

## 3. Unit-commitment objective and operational constraints

### 3.1 Objective and generation blocks

The source minimizes the daily mixed-integer objective
$$
\min C=\sum_{t,i}a_i x_{ti}+\sum_{t,i,b}k_{ib}p_{tib}+\sum_{t,i,j}C^{\rm SU}_{ij}s_{tij}+c_W\sum_t w_t^{\rm curt}.
$$
Here $a_i$ is the no-load cost per hourly period, $k_{ib}$ the incremental block energy cost, and $C^{\rm SU}_{ij}$ the cost of startup category $j$. The numerical coefficients retain their raw kEUR scale. The loader sets the source curtailment coefficient `ws_penalty` to zero. No shutdown-cost term or emergency load-shedding term is introduced. Source correspondence: `totalCost`, with `a`, `k`, `suc_sw` and `ws_penalty` supplied by the original input loader.

Dispatch is decomposed as
$$
p_{ti}=\sum_b p_{tib},\qquad p_{ti}\ge P_i^{\min}x_{ti},\qquad 0\le p_{tib}\le \overline P_{ib}x_{ti}.
$$
The total maximum power is $P_i^{\max}=\sum_b\overline P_{ib}$. An offline unit has every block forced to zero, while an online unit must reach its minimum generation. The implementation does not replace the original block data with a fitted quadratic or reorder the source blocks. Source correspondence: `sumBlocks`, `minimumGeneration`, `blockLimits` and `g_max_flat`.

### 3.2 Commitment transitions and minimum up/down times

Commitment, startup and shutdown satisfy
$$
x_{ti}-x_{t-1,i}=y_{ti}-z_{ti},\qquad y_{ti}+z_{ti}\le1.
$$
For the first hour, $x_{0i}$ is the incoming accepted commitment or the season's original seed. The source separates `statusFirst` and `statusLater`; the latter is activated only for $t>1$. Startup and shutdown are binary events, not continuous energy injections.

For minimum up-time $U_i$ and down-time $V_i$,
$$
\sum_{\tau=\max(1,t-U_i+1)}^t y_{\tau i}\le x_{ti},\qquad
\sum_{\tau=\max(1,t-V_i+1)}^t z_{\tau i}\le1-x_{ti}.
$$
These equations constrain startup/shutdown events within the current 24-hour horizon. Obligations inherited from earlier hours are imposed separately:
$$
r_i^{\rm on}=\max(0,U_i-u_{0i}^{\rm age})x_{0i},\quad
r_i^{\rm off}=\max(0,V_i-v_{0i}^{\rm age})(1-x_{0i}).
$$
The source fixes `x.fx(t,i)` to one or zero for the remaining obligation. Discarding ages at midnight would change the feasible set even if the first-hour commitment were retained. Source correspondence: `minimumUpTime`, `minimumDownTime`, `residualOn`, `residualOff` and the associated fixed bounds.

### 3.3 Ramping and aggregate energy balance

The source uses the original per-step ramp limits without a special startup/shutdown relaxation:
$$
p_{ti}-p_{t-1,i}\le RU_i,\qquad p_{t-1,i}-p_{ti}\le RD_i.
$$
At $t=1$, dispatch is compared to the incoming $p_{0i}$. These are the four equations `rampUpFirst`, `rampDownFirst`, `rampUpLater` and `rampDownLater`. Adding a commonly used startup-ramp term would constitute a model change, not a documentation improvement.

The island balance is
$$
\sum_i p_{ti}+W_t-w_t^{\rm curt}=P_{D,t},\qquad 0\le w_t^{\rm curt}\le W_t.
$$
`powerBalance` implements the equality; `curt.up(t)=RES_det(t)` supplies the upper bound. There are no branch-flow limits, bus angles, PTDFs, storage states or load-shedding decisions in this original primary model. Network and synthetic-inertia models from other studies must not be imported into this campaign by analogy.

### 3.4 On/off ages and startup categories

The source uses continuous nonnegative age variables and an age bound
$$
M^{\rm age}=\max_i\{u_{0i}^{\rm age},v_{0i}^{\rm age}\}+24+1.
$$
The caps $u_{ti}^{\rm age}\le M^{\rm age}x_{ti}$ and $v_{ti}^{\rm age}\le M^{\rm age}(1-x_{ti})$ force an inactive clock to zero. Paired lower and upper inequalities impose the recurrence $u_{ti}^{\rm age}=u_{t-1,i}^{\rm age}+1$ when online, and $v_{ti}^{\rm age}=v_{t-1,i}^{\rm age}+1$ when offline. First-hour versions use the incoming ages. These are the `onAgeCap`, `offAgeCap`, `onFirst*`, `offFirst*`, `onLater*` and `offLater*` definitions.

The selected startup category obeys $\sum_j s_{tij}=y_{ti}$. Conditional lower and upper bounds place the preceding off-age in the selected interval. For nonfinal category $j$, the source sets the upper bound to the next category's lower threshold minus one hour; the final category uses $M^{\rm age}$. Thus startup cost depends on prior shutdown duration rather than only on a generic binary startup indicator. `startFirst*` uses the incoming off-age, and `startLater*` uses `offAge(t-1,i)`.

The age Big-M and the ML outage Big-M have different meanings and units. One relaxes an hourly clock recurrence, the other a dimensionless classifier margin. They must not be conflated or numerically reused.

## 4. Post-outage frequency-security screens

### 4.1 Surviving inertia, gain and headroom

For candidate outage $k$,
$$
P_{{\rm loss},tk}=p_{tk},\quad E_{tk}=\sum_{i\ne k}H_iS_i x_{ti},
$$
$$
G_{tk}=\sum_{i\ne k}\frac{K_iS_i}{f_0}x_{ti},\quad
R_{tk}=\sum_{i\ne k}(P_i^{\max}x_{ti}-p_{ti}).
$$
All three aggregates exclude the failed generator. An online unit with zero dispatch would have different outage activation implications, but the source minimum-generation constraints and event-input checks govern the actual allowed events. The Python evaluator requires an online producing outage and rejects invalid dispatch bounds.

`Hdef`, `Gdef` and `Rdef` implement these definitions; the Python equivalents are `EUNIT=HS*MBASE`, `GAIN=KG*MBASE/F0` and surviving headroom `rho`. Including the lost unit's inertia or reserve would understate the disturbance severity. Conversely, treating all contingencies as a fixed largest-MW loss would alter this model, which uses each failed unit's actual hourly dispatch.

### 4.2 Initial RoCoF and reserve sufficiency

Immediately after the outage, the state is initialized at zero frequency deviation and zero incremental governor response. Therefore
$$
\dot{\Delta f}(0^+)=-\frac{f_0P_{\rm loss}}{2E}.
$$
For the source RoCoF bound $r_{\max}=2.5$ Hz/s, the GAMS screen is
$$
\frac{f_0P_{\rm loss}}{2E}\le r_{\max}
\quad\Longleftrightarrow\quad
2Er_{\max}/f_0\ge P_{\rm loss}.
$$
The source writes `2*Hafter(t,i)*2.5/50 =g= g(t,i)`. Multiplication avoids division by a decision-dependent energy expression. In the numerical simulator, zero surviving inertia raises an exception: no fictitious small inertia is inserted to avoid division by zero.

The equation named `qss` imposes $R_{tk}\ge P_{{\rm loss},tk}$. It is a **no-damping-credit headroom screen**. It is not an algebraic derivation of the damped steady-state frequency and should not be described as one. The Python evaluator separately records a steady-state/endpoint-frequency check using the source case settings. Having sufficient total headroom does not by itself guarantee acceptable nadir, because finite response speed and individual limits remain relevant.

### 4.3 Synthetic inertia: scope rather than an unimplemented claim

The original La Palma campaign has synchronous-machine inertia aggregates and individual primary-response dynamics. It does **not** contain a synthetic-inertia decision, converter-energy state, wind-inertia injection law or synthetic-inertia dispatch constraint. Wind enters the hourly balance as available renewable power with curtailment. The curation does not add a synthetic-inertia contribution merely because related research discusses it. Any future such extension requires its own equations, physical units, model identity, labels and separate results; it cannot be backdated into LP35.

## 5. Individual-governor SODE model and numerical nadir

### 5.1 State equations and response limits

Let $\Delta f=f-f_0$ be negative after a generation loss. For surviving unit $i$, use governor states $q_i$ and $v_i=\dot q_i$, both initially zero. The original `integrate_event` routine solves
$$
\dot{\Delta f}=\frac{f_0}{2E}\left(\sum_i r_i-P_{\rm loss}-D\Delta f\right),
$$
$$
\dot q_i=v_i,\qquad a_{2i}\dot v_i=-q_i-a_{1i}v_i-\Delta f,
$$
$$
r_i=\min\left[G_i(q_i+b_{1i}v_i),\rho_i\right],\qquad
\rho_i=\max(P_i^{\max}-p_i,0).
$$
The state dimension is $1+2n_{\rm survivor}$. The first derivative balances the MW disturbance against incremental PFR and damping; $f_0/(2E)$ converts MW imbalance into Hz/s. The two governor states implement an individual second-order response rather than one common aggregate first-order lag.

Without saturation, Laplace transformation gives
$$
r_i(s)=-G_i\frac{1+b_{1i}s}{1+a_{1i}s+a_{2i}s^2}\Delta f(s).
$$
The negative sign is appropriate: a negative frequency deviation drives positive response under ordinary conditions. $a_1$ and $b_1$ have units of seconds; $a_2$ has seconds squared. The original per-generator governor coefficients are required to evaluate the actual dynamic system. They cannot be reconstructed from the aggregate ML coefficients alone.

The source implements `np.minimum(internal_response, rho)`—an upper-only limit. Negative internal response is not clipped to zero. The second-order states continue evolving while the output is capped; no new anti-windup or deadband has been added. A seemingly more physical alternative limiter would change the dynamic model and its hash, so its merits are a separate modelling question, not a permissible silent patch.

### 5.2 Load damping and initial-condition conventions

The damping parameter is `demand_mw * CASE['damping_fraction_per_hz']`, giving MW/Hz. The restoring contribution is $-D\Delta f$; with $\Delta f<0$, reduced load offsets part of the lost generation. The exact fraction must be read from the original case. This build does not infer its missing numerical value from other La Palma studies or change its normalization.

Before an event, the schedule and renewable contribution are assumed balanced at the operating point. The event model begins from nominal frequency and zero incremental governor states; it does not simulate the entire pre-disturbance transient. The failed generator is removed from inertia, gains and headroom, while the exogenous power deficit is its initial dispatch. The controller/output model is the declared reduced-order frequency representation, not a field-validated electromagnetic-transient model.

### 5.3 Integration, stopping and refinement

The original settings use LSODA with relative tolerance $10^{-8}$, absolute tolerance $10^{-10}$, maximum integrator step 0.20 s and nominal reporting-grid step 0.02 s. Initial duration is 60 s. If not settled, integration extends to 120 s. A downward crossing of 40 Hz stops integration and marks the record censored; the observed minimum is then not silently asserted to be the eventual physical nadir.

Settling is checked over the final five seconds using frequency range at most 0.005 Hz and endpoint slope at most $10^{-4}$ Hz/s, after at least ten simulated seconds. These tests are explicit source conditions, not graphical judgments. A trajectory can remain unresolved despite numerical integration completing successfully.

The simulator evaluates the dense solution on a reporting grid, finds sampled local minima and refines each candidate with bounded scalar minimization of the dense interpolant over neighboring sample times. The source refinement uses time tolerance $10^{-9}$. This is more precise than calling the lowest plotted sample a converged nadir, but it remains subject to the numerical convergence checks and finite horizon.

A refined repeat tightens both ODE tolerances by a factor of ten and halves maximum/reporting steps. Agreement includes classification consistency, the recorded nadir tolerance of $10^{-3}$ Hz and compatible censoring status. The complete procedure is implemented by `event_inputs`, `integrate_event` and `evaluate_event`, not by a surrogate score or a first-order analytical approximation.

### 5.4 Safe, unsafe, review and failed labels

The label convention uses safe $+1$ and unsafe $-1$ with an explicit threshold buffer of $10^{-4}$ Hz. A safe record requires the source's resolved, settled, uncensored evidence and a minimum frequency at or above the threshold plus its buffer. A sufficiently below-threshold, numerically consistent witness supports unsafe classification. Boundary cases and unresolved conditions remain REVIEW rather than being forced into a binary class. Failed evaluations are retained and not erased to improve apparent model accuracy.

RoCoF and endpoint-frequency flags are recorded separately. Do not describe the ML label as a joint probability that every conceivable frequency-security criterion is satisfied when its target is the declared nadir label. Likewise, the count of unsafe outage events is not the number of statistically independent unsafe parents.

The cache key includes the model identity, dispatch rounded to nine decimals for identity construction, similarly represented demand, outage ID and commitment. This rounding identifies a cached record; it is not an instruction to round physical dispatch before solving the ODE or to transfer rounded Excel values across days. Cache corruption/recovery logic is preserved; incompatible model identities cannot reuse records merely because filenames look familiar.

## 6. Synthetic operating points and parent grouping

### 6.1 What the original implementation actually does

The historical `prepare_parents` routine consumes an existing workbook, `A-LHS_newDataretry.xlsx`. It does not generate a fresh A-LHS design in the original source. It reads eleven-unit dispatch and demand, checks finite values, balance, generation bounds and the declared 16–36 MW demand domain, rejects invalid rows rather than repairing them, and reuses the resulting parent set. Therefore this release documents A-LHS as the source-library provenance; it does not claim to have reconstructed or executed an unavailable adaptive-sampling algorithm.

A dispatch parent is grouped using the recorded six-decimal dispatch representation and truncated SHA-256 identity. Duplicate handling retains the source demand/dispatch logic. Outages from one parent share the same pre-disturbance operating condition, so they remain together during statistical partitioning. A random train/test split of outage rows would leak closely related operating conditions across partitions.

The recorded seeded parent-role assignment allocates development, calibration, selection and test roles with proportions 0.60, 0.15, 0.10 and 0.15. The source seed is 20260920. Exact counts depend on the original parent table and are not newly inferred from those proportions. No missing parents are reconstructed from saved histograms or aggregate counts.

### 6.2 Training selection and low-cost versus random policies

The learning code compares a low-cost (`cheap`) parent selection and a random selection within the declared 0.5-MW demand bands, using half-parent selection as implemented. The low-cost screen is based on the original no-load and block-cost information. This is selection from an existing synthetic library, not a different physical generation law. The primary deployment retains the `cheap__core4__...` candidates and all four aggregate features.

The LP35 preparation stage reuses historical physical records and reassigns labels at 46.5 Hz without recomputing the dynamics. Its explanatory source notes a rare unsafe class: 50 unsafe events on 44 parents, with 41 unsafe events in the pooled development-plus-calibration subset. These are supplied notebook statements, not independently regenerated counts in this build. Their practical implication is limited independent support for calibration and risk estimation; one cannot solve that limitation by duplicating unsafe rows and calling them new evidence.

## 7. Grouped training, cross-validation and calibration

### 7.1 Separation of statistical roles

`group_folds` stratifies parent groups according to whether any outage in the parent is unsafe. It applies `StratifiedKFold` to the parent table, not the event rows, then maps selected parent IDs back to all their events. It refuses a requested split when there are too few distinct unsafe parents. Every scaler and estimator used to score a validation parent must have been fitted without that parent.

The LP35 learning code uses three-fold grouped out-of-fold calibration on the pooled development and original calibration partitions. The selection and test parents remain disjoint from that pool. Repeated outer assessment, the declared inner calibration design, policy selection and final fitting must be read with their recorded parent membership; the phrase "cross-validation" alone does not establish leakage freedom.

For each calibration fold, the routine selects the declared fit parents within the training portion, fits a StandardScaler and a base classifier on that fold's training data, and scores its held-out parents. Pooled out-of-fold scores then fit one increasing sigmoid. Finally, one base pipeline is fitted to the declared full-pool selection. The resulting deployment is a single affine score with one sigmoid, not an average of several model probabilities.

Final-model fit parents can belong to the pool whose out-of-fold scores calibrated the sigmoid. The leakage-protection statement is specifically that **each out-of-fold score came from a model that excluded that parent**. It is not the false statement that final fitting and calibration use forever-disjoint parent populations. The dedicated selection and test partitions remain separate from the fitting/calibration pool.

### 7.2 The nine primary linear configurations

| Deployment label | Original estimator and explicitly declared configuration | Interpretation |
|:--|:--|:--|
| LR_C1 | LogisticRegression, C=1, lbfgs, max_iter=10000 | Penalized linear logistic score |
| LR_C1e6 | LogisticRegression, C=$10^6$, lbfgs, max_iter=20000 | Very weak regularization, not literal unregularized MLE |
| SVM_C01 | SVC, linear kernel, C=0.1 | Linear margin with stronger regularization |
| SVM_C1 | SVC, linear kernel, C=1 | Intermediate linear-margin setting |
| SVM_C10 | SVC, linear kernel, C=10 | Higher penalty for margin violations |
| LDA | LinearDiscriminantAnalysis, svd | Linear discriminant under shared-covariance modelling |
| SGD_Log | SGDClassifier, log_loss | Stochastic optimization of a linear logistic-loss model |
| SGD_Hinge | SGDClassifier, hinge | Stochastic optimization of a linear hinge-loss model |
| PA | PassiveAggressiveClassifier, C=1 | Capped margin-based online updates |

The SGD/PA builders explicitly use seed 20260920, maximum 20000 iterations and tolerance $10^{-7}$. Other estimator defaults remain those of the original fitting environment. The supplied environment receipt was not original, so the verification environment must not be represented as a frozen historical fitting environment. A library upgrade can alter fitting behavior or artifact compatibility; this release does not refit to hide that problem.

For LR, the native logistic score already has a probabilistic interpretation under its model assumptions, but the accepted workflow still applies its declared common calibration method. Linear SVM and hinge/PA decision values are not intrinsically probabilities. LDA gives a linear discriminant, and SGD describes an optimization procedure paired with a particular loss rather than a separate physical model. All configurations produce a linear score in the standardized four-feature vector; nonlinear kernels are not inserted.

### 7.3 Increasing sigmoid calibration

The calibrator has the form
$$
\widehat p_{\rm safe}(z)=\operatorname{sigmoid}(a s(z)+b_c),\quad
\operatorname{sigmoid}(u)=\frac{1}{1+e^{-u}},\quad a\ge0.
$$
The custom source routine uses smoothed targets based on the safe/unsafe class counts, stable cross-entropy calculations and declared numerical retries. It requires at least ten records of each class for the calibration stage and certifies an informative positive slope rather than silently accepting an uninformative constant mapping. The normalized-score optimization, bounded slope treatment, L-BFGS-B retry and profile/root strategy belong to the accepted implementation; they were not replaced with a generic library probability call.

The primary probability threshold is 0.99. Reference schedules REF050, REF090 and REF095 use 0.50, 0.90 and 0.95 for the frozen `cheap__core4__SGD_Log` reference candidate. The nine primary models and three thresholds are twelve schedules, not twelve independently selected model families. Model comparison uses the source's error/calibration metrics and selection rule; thresholds were not reoptimized in this curation.

Bootstrap and reliability analysis must respect parent clusters. A confidence interval based on treating every outage row as independent would overstate effective sample size. A calibrated 0.99 acceptance threshold is not a distribution-free bound on physical violation probability, not an N-1 guarantee outside the training domain, and not a proof that a previously inspected test set is newly unseen.

## 8. Affine transformation and GAMS-compatible inequalities

### 8.1 Recover the physical-feature score

Let $z=[P_{\rm loss},E,G,R]^T$. The fitted StandardScaler has mean $\mu$ and componentwise scale $\sigma$. For estimator coefficients $w$ and intercept $b_0$,
$$
s(z)=w^T\left((z-\mu)\oslash\sigma\right)+b_0.
$$
With positive calibration slope $a$ and threshold $0<p^\star<1$,
$$
\widehat p_{\rm safe}(z)\ge p^\star
\Longleftrightarrow
as(z)+b_c-\log\left(\frac{p^\star}{1-p^\star}\right)\ge0.
$$
Therefore
$$
c=a\,w\oslash\sigma,\qquad
c_0=a b_0+b_c-\log\left(\frac{p^\star}{1-p^\star}\right)-c^T\mu,
$$
$$
c_0+c_LP_{\rm loss}+c_EE+c_GG+c_RR\ge0.
$$
The source function `derive_cut` performs exactly this transformation and rounds the serialized coefficients to twelve significant digits. Feature order matters: the first coefficient multiplies lost MW, the second MW s, the third MW/Hz and the fourth reserve MW. The GAMS expression prints energy and gain before loss, but its named symbols preserve the correct correspondence.

Dividing by an intercept to force it to one is not part of this exporter. Such normalization can reverse an inequality when the divisor is negative. No intercept normalization or coefficient sign repair is introduced. Likewise, standardization parameters must be reversed before deploying a physical-unit constraint; inserting standardized coefficients directly into GAMS would be wrong.

### 8.2 Three distinct equivalence claims

First, the algebra above can be verified on a manually constructed fixture. Second, the source serializer can reproduce a previously exported coefficient include from frozen numeric coefficients. Third, a fitted pipeline, scaler and calibrator can be compared against the deployed inequality on its original feature rows. Only the first two are executed here. The third requires missing fitted artifacts and original data, and remains NOT RUN.

The original `audit_frozen_cut` compares the actual twelve-significant-digit representation rather than only unrounded intermediate values, retains numerical discrepancies and checks the appropriate margins/probabilities. A narrow fixture away from a decision boundary is not a substitute for that audit. The supplied raw coefficient values and all outage Big-M values are nevertheless preserved exactly in the authenticated include and checked against the deployment JSON.

## 9. Outage activation and Big-M bounds

For candidate $k$, the deployed affine security condition is
$$
c_0+c_Lp_{tk}+c_EE_{tk}+c_GG_{tk}+c_RR_{tk}+M_k(1-x_{tk})\ge0.
$$
If the candidate is online, $x_{tk}=1$ and the classifier inequality is enforced. If the candidate is offline, the dispatch/block constraints already imply $p_{tk}=0$, and $M_k$ relaxes only this artificial outage case. A schedule must satisfy all activated candidate constraints, not only the largest dispatched outage chosen after optimization.

The exporter constructs a conservative inactive-candidate lower bound using nonnegative surviving aggregates:
$$
\ell_k=c_0+\min(0,c_E)\sum_{i\ne k}H_iS_i
+\min(0,c_G)\sum_{i\ne k}G_i
+\min(0,c_R)\sum_{i\ne k}P_i^{\max}.
$$
The loss coefficient is absent because the inactive candidate loses zero MW. The source takes
$$
M_k=\max(0,-\ell_k)+10^{-5}(1+|\ell_k|)
$$
and serializes it with the same twelve-significant-digit convention. The box bounds need not be simultaneously attainable; conservatism is acceptable for deactivation, while arbitrary too-small M values could incorrectly remove feasible schedules. Excessively large values can weaken the relaxation, but tuning them would change the accepted implementation.

This build recomputes all 132 outage-specific Big-M entries from the actual supplied unit inertia, power-base, gain and capacity tables. At the original twelve-significant-digit export precision, all entries equal the frozen deployment values exactly. This calculation needs only the native UC tables, not the missing dynamic-case JSON. The four aggregate features also do not uniquely specify individual response allocation, a limitation of the surrogate rather than a reason to introduce undocumented extra features.

## 10. Solver settings, incumbent acceptance and chronological transfer

### 10.1 Reconciliation of recorded and reviewed settings

The pre-run deployment records a 1.25% relative search target (`gap_target=0.0125`), 1200-second search allowance and 600-second polishing allowance. An authenticated reconstruction of the pre-run main snapshot has those defaults and matches its recorded SHA-256. The separately uploaded current working main has a 0.5% search target (`SEARCH_GAP=0.005`) and 300-second polishing allowance, with the same 1200-second search cap.

A direct current-versus-snapshot text comparison finds only those two default changes after normalizing line endings and the final newline. All 35 equation definitions are unchanged. The main still contains an older comment mentioning 1.25%; the operative macro definition is 0.005. That stale comment is preserved in the runtime source for provenance and explained here rather than silently editing the source hash.

The processor embeds `LP35_REVIEWED_NATIVE_SETTINGS_V2_20260924`, a supplied record identifying the same 336-day campaign and reviewed execution settings 0.005/1200/300. Its canonical deployment digest, cut/job digests and source-snapshot digests match the original evidence. Thus the sources are internally consistent with a **pre-run plan versus later reviewed execution** distinction. The deployment JSON is not rewritten to conceal that distinction.

However, fresh validation of each original native listing and workbook was **NOT RUN**, because their archives were inaccessible. The old record's statements that expanded source bodies and coefficient blocks were checked are retained as historical evidence, not counted as tests performed during this build. The original `cplex.opt` is now supplied and its SHA-256 matches the manifest. It contains only `threads 4`, so it introduces no gap or time-limit override. The settings requested by this public source package are therefore identifiable. Native GAMS/CPLEX execution and the complete historical machine/solver installation remain unverified here.

### 10.2 Search, fixed-commitment polishing and bound reporting

The main requests CPLEX as the MIP solver, sets `ep.optcr` and `ep.reslim` from the search macros and activates option file 1. It preserves the search incumbent, search model/solve status, objective and best bound in `search_incumbent.gdx` before later operations can fail.

A candidate incumbent is recognized only under the source's explicit model-status and solve-status conditions. When recognized, the source rounds the commitment `x.l`, fixes **only the commitment variables** and solves the model again with polishing relative target 0.0001 and the recorded polishing allowance. Startup, shutdown and category variables are not all explicitly fixed. Therefore the polishing call remains a MIP; it must not be described as an automatically continuous LP polish.

The best bound from the unrestricted search is retained for the reported final gap. A bound from the commitment-restricted polishing problem is not a valid replacement for the unrestricted UC bound. The source reports the final incumbent against the saved search bound, using its defined denominator $\max(1,|C|)$. No claim of globally optimal scheduling follows solely from a successful polish.

### 10.3 Acceptance is not an optimality-gap gate

Following polishing or search completion, the source computes maximum equation, variable-bound and binary-integrality residuals. It requires the explicit accepted native statuses, a recognized incumbent, residuals no larger than $10^{-5}$ and consistency between the saved lower bound and the final objective. Every equation family, including frequency screens and the activated ML cut, participates in the native residual check.

A time-limit incumbent can be accepted when these feasibility conditions hold. Conversely, a small reported gap cannot rescue a primal-infeasible or nonintegral point. These are different notions: optimality gap assesses objective quality relative to a bound; primal feasibility assesses satisfaction of the model. The original notebook subsequently reconstructs independent operational and identity checks from exported outputs. This curation does not substitute a new tolerance, reject all time limits, or import the historical branch's gap gates.

### 10.4 Seven-day chains, state identity and export recovery

Each method has its own seven-day chain within each season. Day 1 starts from the original seasonal seed; later days load `state.gdx` for the same campaign, run and season and the exact preceding day. The source verifies accepted state metadata before consuming it. Separate seasons are not stitched into an artificial continuous year.

Terminal state comprises commitment, dispatch, consecutive on-age and off-age for every generator. Commitment and integer-hour ages are recorded with their source rounding convention; dispatch is transferred from its native level, not from a rounded Excel display. The next day's ramp constraints and residual minimum-time obligations depend on this state. A fixed commitment carried across midnight without dispatch and ages would not reproduce the model.

Accepted outputs are stored in `results.gdx` and `state.gdx`. The source writes the Excel-export instructions for GDXXRW and checks its return code. `COMPLETE.txt` is created only under the source completion policy. An export-only recovery branch can regenerate a workbook from already accepted, identity-matched GDX without re-solving the day. This is essential when Excel locks a file or a report export fails. The fixed job roster skips completed jobs, respects preceding-day readiness and retains failure markers; no blanket retry policy is introduced.


## 11. Actual file dependencies and reading path

The complete primary native dependency set is included. Eighteen original numerical tables feed the loader, the calibrated include supplies the affine rules and model identity, the original job include supplies the full roster, and the CPLEX file supplies the thread option. Detailed bindings are listed in `docs/Data_Dictionary.md`. The four additional unused numerical tables are retained as provenance, not evidence of an implemented network model.

The native model does not read `LP_Case.json` or `LP35_Protocol.json`. The original Python scientific notebooks do. Those genuine files and the complete parent/label/learning/native archives remain outside this small release. The deployment manifest cannot replace a missing governor coefficient vector, scaler or learning receipt. The result-audit notebook can reconstruct its operational case view directly from the supplied UC tables without pretending to reconstruct the original physical case file.

The public learning path is `00_Quick_Start`, `01_Frozen_Cuts_and_Export`, `02_SODE_Equation_Checks`, then `03_Read_and_Audit_Native_Results`. Each is self-contained as a notebook and uses no custom external Python module. The research-notebook guide explains the original source stages separately.

## 12. Verification performed in this edition

All twenty-eight newly supplied include files matched the applicable frozen digests. The source comparison distinguishes these original-byte checks from public-table non-comment preservation checks. All thirty-five primary GAMS equation definitions are unchanged after whitespace normalization. All seven original GAMS components retain their non-comment scientific content; all six scientific notebooks retain their forty-six original code-cell texts and pass structure/syntax/import checks.

The original frozen coefficient export is reproduced byte-for-byte from the supplied manifest. All 132 outage-specific Big-M values are independently recomputed using the actual shipped unit energy, gain and capacity vectors, at the source twelve-significant-digit precision. The grouped-fold and scaler-to-affine examples use clearly separate artificial fixtures; they do not recreate the unavailable trained artifacts.

The original SODE function is tested on declared artificial zero-gain and finite-gain systems. The zero-gain damped trajectory is compared to a closed form. Finite-gain equilibrium, individual upper headroom limits, coarse/fine agreement and zero-surviving-inertia rejection are checked. These are equation and implementation tests, not a substitute for the original physical La Palma parameter file or measured-system validation.

The native-reader notebook loads its table-derived operational case and preserves the source reader/auditor. With no actual native workbook, it reports NOT RUN for the operational audit and does not fabricate a successful schedule. Native GAMS/CPLEX execution, original physical-case replay, original fitted-pipeline replay and full manuscript result reproduction remain NOT RUN. The exact test results and fresh-extraction checks are in the verification report.

## 13. Execution for a first-year postgraduate

Use a new workspace. In Anaconda Navigator import the supplied environment, then run the quick-start notebook with a fresh kernel. Inspect the unit table: distinguish inertia seconds from the energy aggregate and MW from hourly MWh. Verify the twelve coefficient blocks and study the constructed, explicitly nonoptimized teaching dispatch. Do not infer dynamic security solely from a power-balance check.

Open the single GAMS start file in the GAMS 24.9 IDE with the correct working directory. Leave SCOPE=DAY for the first example. Read the explanatory comments above each equation; they identify its physical role and source units. Inspect the native completion, incumbent, GDX and workbook outputs. Run the result-audit notebook only on the real outputs. A missing result is reported as missing, not replaced with a demonstration solution.

For a week, choose SCOPE=WEEK. The original state transfer prevents a midnight reset and keeps separate method/season chains independent. ALL is an explicit full-roster request, not the default. Close a workbook before re-export; retain accepted GDX and use export-only recovery. Do not rerun the scientific training notebook merely to obtain coefficient files already supplied.

## 14. Modelling and publication limitations

The aggregate frequency representation does not include network-electromechanical detail, converter controls, protection action or a synthetic-inertia decision. The governor realization and upper-only limit remain the accepted reduced model, not an identified plant model. Numerical refinement establishes computational consistency rather than physical accuracy. Rare unsafe labels, parent dependence, retrospective benchmark reuse, feature compression and distribution shift limit probabilistic claims. A 0.99 screening threshold is not a certified one-percent physical-risk bound.

Licensing is pending author approval. Rajabdorri's reference files and the explicitly third-party-derived historical SP include pair are not redistributed. Their absence does not affect the primary ML optimizer. The RPG Lab repository informed only the requested practical organization; its code, data, license and locational formulation are not substituted here. Do not advertise a new native execution certificate or a complete manuscript evidence reconstruction that was not performed.

## 15. Source references

S1: the author's actual uploaded GAMS models, input loader, numerical tables and frozen exports. S2: the six actual executed research notebooks, especially event_inputs, integrate_event, evaluate_event, group_folds, fit_crosscal, derive_cut, audit_frozen_cut, export35 and load_daily. S3: both deployment manifests, the exact CPLEX option file and the prior review record embedded in the processor. These establish the implementation described above.

RPG Lab's LRC_SCUC resource page and repository were inspected as organizational references, not scientific replacement sources. Supporting tool documentation is GAMS Dollar Control Options, GitHub Adding a File to a Repository, and the SciPy/scikit-learn interface documentation. Complete source URLs and access notes are recorded in `docs/References.md`.
