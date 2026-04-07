# Decisions Log

A short record of choices made and *why*. Append-only — when a decision is overturned, add a new entry rather than editing the old one.

---

### 2026-04-06 — Base: `pokeemerald-expansion` 1.15.1
**Why:** Active development, modern mechanics already merged (Gen 9, Megas), strong community. Pinning to 1.15.1 to avoid breakage from upstream `master` churn.

### 2026-04-06 — Approach: narrative reskin, not mechanical Ranger
**Why:** Simulating stylus capture in a GBA engine is enormous effort for low payoff. Players engage with the *fantasy* of being a Ranger; mainline mechanics deliver that fantasy fine when reframed properly.

### 2026-04-07 — Primary inspiration: Unbound (not Dreamstone)
**Why:** Dreamstone was an example, not the target. Unbound's narrative ambition, escalation, and mechanical polish are closer to what we want.

### 2026-04-07 — One difficulty mode, no select
**Why:** Single tuning target = better balance, halved test surface, clearer audience signal. We're not trying to serve casual players.

### 2026-04-07 — Frictionless competitive prep (perfect IVs, easy EV/nature/ability access)
**Why:** Challenge belongs in fights, not in grinding. Players who want to engage with team building should be able to without it being a chore.

### 2026-04-07 — Lean side content for v1
**Why:** Scope discipline. Side content is where projects die. Bounty boards and the like stay parked until the main path is shippable.

### 2026-04-07 — Minimal custom presentation, exception for rank-up
**Why:** Cinematic production is a time sink. Rank-ups are emotional beats that earn the budget; nothing else does in v1.

### 2026-04-07 — Tone: wholesome opening, dark turn
**Why:** The contrast is the design's distinctive hook. Requires the wholesome layer to be genuinely good, not filler.

### 2026-04-07 — Setting deferred
**Why:** Setting decisions are downstream of tech-demo confidence and the story turn being defined. Don't lock in a region we'll regret.
