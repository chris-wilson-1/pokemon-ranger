# Conventions

Project-specific conventions on top of `pokeemerald-expansion`'s existing style.

## Naming

- Maps: `MAP_RANGER_BASE_VIREON` — descriptive, namespaced by location type
- Constants: `RANK_FIELD_RANGER`, `VAR_PLAYER_RANK` — ALL_CAPS, prefixed by category
- Files: lowercase snake_case, mirror upstream conventions

## Vars vs flags

Use a **var** for any state with more than two values (rank, mission stage, story act). Use a **flag** for true/false (mission completed, met NPC, picked up item).

```c
// Bad — flags don't scale
setflag FLAG_RANK_CADET
setflag FLAG_RANK_RANGER

// Good — one var, many states
setvar VAR_PLAYER_RANK, RANK_RANGER
```

## Scripting

- **Poryscript only.** Never write raw `.s` scripts.
- Scripts live next to their map: `data/maps/RangerBase_Vireon/scripts.pory`
- Constants for ranks/missions/etc. live in dedicated headers under `include/constants/`

## Tracking changes

- Maintain a `CHANGES.md` at the repo root listing every meaningful deviation from vanilla 1.15.1
- One PR per feature into `hack/ranger-main`
- Commit messages: imperative mood, scope-prefixed (`rank-system: add VAR_PLAYER_RANK and constants`)

## Asset hygiene

- Tilesets locked before placing maps that depend on them
- Master map layout sketched (even on paper) before opening Porymap
- Custom item icons committed alongside the data change that uses them
