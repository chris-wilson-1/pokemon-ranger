# Difficulty & Quality-of-Life

## Difficulty: one mode, no compromise

The game ships with **one** difficulty curve. It is challenging. There is no Vanilla/Normal/Easy mode select.

Why:
- Single tuning target = better-balanced fights
- Sets clear expectations for the player
- Halves design and testing surface area
- Matches the "this is for players who want to engage" stance

The curve should:
- Expect competent team building
- Use full movesets, items, and AI
- Throw double battles, partner battles, and unusual lead Pokémon to break autopilot
- Punish neglect of type coverage

## QoL: frictionless prep

The challenge is in **fights**, not in **prep**. Preparation should be cheap and fast.

### Perfect IVs everywhere (player-facing)
All wild encounters and gift Pokémon roll with perfect IVs (or close to it — 6×31 ideally). Trainer Pokémon are not the player's concern. Mechanism: configure or override the IV roll for wild generation in `pokeemerald-expansion`.

### Easy access to:
- **EV training** — fast EV reset items, vitamins available cheaply, ideally a training facility usable from early game
- **Nature mints** — buyable or rewarded by mid-game at the latest
- **Ability patches/capsules** — same; players should be able to access hidden abilities without grinding
- **Move relearner** — available from start, free or cheap
- **Heart Scales** — irrelevant if relearner is free; otherwise abundant

### Other QoL we want
- Instant text speed by default (already done — `TEXT_SPEED_FAST 0` in `include/config/text.h`)
- EXP share permanently on
- Auto-run / fast surf
- Repels that prompt to renew
- Quick PC access from menu (eventually)

## What we are *not* doing

- No level scaling
- No "casual mode" toggles
- No skip-the-fight options
- No reducing trainer team sizes for accessibility
