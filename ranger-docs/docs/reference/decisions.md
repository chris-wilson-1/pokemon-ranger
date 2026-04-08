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

### 2026-04-07 — Main plot spine: corporate welfare-washing conspiracy + eco-terrorist ex-rangers
**Why:** Gives the wholesome→dark turn a concrete villain whose ideology is the central thesis of Pokémon canon (the human–Pokémon bond is sacred) industrialised — meaning the Company cannot be out-argued and the player cannot disagree without disagreeing with the franchise. Eco-terrorist cell provides an act-1 misdirect (the player hunts them for the Company) and an act-3 morally uncomfortable ally (correct *and* broken), avoiding any clean faction in act 3. Full design in [story.md](../design/story.md).

### 2026-04-07 — Region: custom from scratch (staged), named **Ardenna**
**Why:** Hoenn-reskin would weaken the dark turn through canon pattern-matching and would distort the story's specific geographic needs (academy, multiple bases, extraction-site geography, eco-terrorist hideout). Custom region accepted with eyes open re: scope cost; will be built in stages, with one full custom map landing before committing further. Name "Ardenna" pulls on Arden/Ardennes — centuries of literary association with old wildernesses. Full design in [setting.md](../design/setting.md).

### 2026-04-07 — Geographic identity: vast wilderness + industrial spine + Withdrawal wound
**Why:** The "vast wilderness threaded by a single industrial spine" shape makes ranger work geographically literal (rangers patrol off-spine), gives the story a linear travel axis the three-beat reveal can hang off, and makes Company extraction sites visible from the train so the act-3 "you walked past this" pattern lands without exposition. The light historical wound (the Withdrawal) explains the Company's foothold by construction — they arrived after, helped rebuild, and the help was real. 7–8 stations along the spine; academy near one end with a 1–2 station tail visited late.

### 2026-04-07 — The spine is rail line + parallel river, with the river visibly polluted
**Why:** The river predates the wound; the rail line came with the Company's rebuild. Having both gives historical layering and a *physical* representation of the Company's footprint. The pollution is the Company's actual material harm, visible from the train in hour one but not noticed during the tutorial — the player cannot stop noticing it in act 3. Off-spine wilderness is dramatically more alive than spine-adjacent areas as a direct consequence, which is mechanical foreshadowing the player feels before they can articulate.

### 2026-04-08 — Hybrid train/walk spine (supersedes earlier train-only framing)
**Why:** The spine splits into three regimes: (1) **served middle** stations 3–6 (Academy→Flagship) are train-only, no inter-station overworld routes — this delivers the polluted-river-from-the-window moment on every journey and keeps scope tight; (2) **abandoned tail** stations 1–2 (retirement village, Eternal Tree) have no rail service, walked on foot south from the academy — the lack of rail is itself the clue that the Company wants the Tree forgotten; (3) **severed end** stations 6–8 (Flagship→Marsh→Terminus) are originally train-served but an eco-terrorist rail attack forces a walked traversal through the cell's own Marsh hideout to reach Beat 3 at Terminus. Each station is a town + walkable in-station wilderness routes where ranger rank-up missions happen, so the classic Pokémon walking/exploration loop is preserved inside stations rather than between them. The act-3 forced walk is the geographic inverse of act 1's train rides: the train carried you past the pollution; the walk makes you see it. Supersedes an earlier train-only framing from the same session — the hybrid does more thematic work at the same scope cost.

### 2026-04-08 — Station layout locked: 8 stations, mountains→sea, Beat 1 at station 4 (Quarry)
**Why:** The spine runs mountains→sea because it makes the Tree the literal source of the river and the pollution gradient flows downhill from the Company's manufactured ecology all the way to a coastal terminus where Beat 3 lands. Biome progression is engineered for type coverage (roughly complete toolkit by mid-game) and every station earns its biome. Fire types live in *industrial* environments — Company smelters and foundries — not a volcanic biome, which gives Fire encounters thematic double duty as welfare-washing receipts. Beat 1 was originally planned for the academy but moved to the Quarry after realising academy-hosted unease would poison the "unguardedly warm act 1" requirement before the player has had time to bond with home base. The academy is now pure act 1; the Quarry (first outward posting) is where the player's first deniable observation lands. Fair-play foreshadowing (discredit-the-truth-tellers NPCs) sits at the Jungle station between Beats 1 and 2. Station names are deliberately deferred — a dedicated naming pass comes later. Full layout in [setting.md](../design/setting.md#stations).

### 2026-04-07 — The wound is Xerneas dormancy; no counterpart legendary
**Why:** Xerneas's canon identity (life-giving, Fairy-type, bond-coded, *already has a dormancy mechanic via the Eternal Tree*) is an almost suspiciously perfect fit for "the guardian withdrew, the wilderness thinned, the Company moved in." The Company's welfare-washing ideology becomes a *direct* corruption of Xerneas's actual influence — they are imitating it badly at industrial scale on populations that no longer have the original to compare against. Three rules: (1) no Yveltal/Zygarde/Kalos tie-in, (2) Eternal Tree form is the default — Xerneas is dormant for the whole game, possibly never seen active, (3) the Company's exact role in the Withdrawal is permanently unresolved — the horror works in all readings and is worst when the player cannot be sure. The finale question is "whether to wake the Tree," not "whether to stop the Company."
