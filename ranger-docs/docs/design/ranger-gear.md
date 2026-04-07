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
| Poké Balls | Mission Capture Tags | Pure narrative reframe |
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
