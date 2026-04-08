# Ranger Gear

HMs and key items reframed as Ranger-issued field equipment. Mechanics unchanged — sprites, names, item descriptions, and acquisition scripts swapped.

## Mapping

| Vanilla | Ranger equivalent | Notes |
|---|---|---|
| HM Cut | Ranger Axe Tool | |
| HM Surf | Aqua Glider | Partner Pokémon deploys flavour |
| HM Strength | Brute Harness | Large partner Pokémon flavour |
| HM Rock Smash | Field Hammer | |
| HM Waterfall | Climb Rig | |
| HM Dive | Dive Tank | |
| Bike | Ranger Cycle | Or rideable partner |
| Town Map | Ranger Comm Unit | |
| Poké Balls | Mission Capture Tags | Surface reframe only — **loaded in-lore**, see note below |
| Pokénav | Ranger Comm Unit (extended) | Possibly merge with Town Map |

## Acquisition framing

Gear is **issued**, not found. Most pieces come from a Ranger Base quartermaster as part of a rank-up briefing or mission loadout. This:

- Reinforces the institutional fiction
- Gives the rank system tangible payoff
- Removes the "found an HM in a random building" awkwardness

## Implementation

Per piece:

1. New item entry (or reuse existing slot with renamed string + new sprite)
2. Custom item icon
3. Updated description text
4. Updated acquisition scripts at the relevant Ranger Base
5. Field-effect script unchanged (still triggers Cut/Surf/etc.)

## What stays vanilla

- Poké Balls work mechanically as Poké Balls — only the name and item icon change
- TMs are still TMs — no Ranger reframe needed, they're already abstract

## Note on Mission Capture Tags (Pokéballs)

Mechanically unchanged. Thematically, the ball is **not** a neutral reskin — it is the single most ideologically loaded object in the game. The original Ranger gesture (narratively: the in-world reading of the traditional stylus) was **temporary consent-aid**: a ranger signals, a wild Pokémon lends help, then walks back into the wild. The Thorne Foundation introduced the Pokéball to the Corps after the Withdrawal as a humane modern replacement, arguing the old gesture was no longer reliable given thinned wild populations. The Corps adopted it, rebranded it internally as "Mission Capture Tag" to preserve institutional identity over substance, and two generations later every active ranger — including the player — operates inside Foundation technology without knowing it *is* Foundation technology.

This is the deepest layer of [the capture](story.md#the-ranger-corps). It is invisible to the player in act 1 (they throw "Mission Capture Tags" because that's what the Corps issues and that's what rangers do). It is seeded softly in the academy arc (Matty's Beat 3 wistful line, Cassian's Beat 4 nostalgic line), made explicit in mid-act 2 by a retired veteran in the abandoned tail, deepened in act 3 by watching the ex-ranger cell use the old gesture fluently, and enacted at the Tree in the finale when the player releases their team and performs the old gesture for the first time. See [story.md's finale section](story.md#the-finale) and the 2026-04-08 decisions entry.

No mechanical change to the ball system. [Pillar #3](../vision/pillars.md) holds: no stylus minigame. Only the meaning of the mechanic shifts, and only late enough that the shift restructures replay.
