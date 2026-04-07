# CLAUDE.md

This file provides guidance to Claude Code (claude.ai/code) when working with code in this repository.

## What this repo is

A personal ROM hack built on `pokeemerald-expansion` (pinned to **1.15.1**), themed around a Pokémon Ranger recruit. Approach is a narrative reskin of mainline Pokémon mechanics — see `ranger-docs/` for the full design.

- `master` — vanilla `pokeemerald-expansion` 1.15.1 baseline. Do **not** commit hack work here.
- `hack/ranger-main` — working branch for all hack development.
- `origin` — personal fork (`chris-wilson-1/pokemon-ranger`).
- `upstream` — `rh-hideout/pokeemerald-expansion`. Cherry-pick fixes individually; never merge wholesale.

## Build & run

```bash
make -j$(nproc)        # produces pokeemerald.gba in repo root
make clean             # nuke build artifacts (use after toolchain changes)
make tidy              # remove .o files, keep tool builds
```

Load `pokeemerald.gba` in mGBA. Keep mGBA open across rebuilds; it'll reload in place.

The `tools/` directory's binaries (preproc, gbagfx, mapjson, jsonproc, poryscript-equivalents, etc.) compile on first build.

## Tests

`pokeemerald-expansion` ships a battle/engine test framework under `test/`. Run it with:

```bash
make -j$(nproc) check          # build and run the test ROM
```

Single-test runs and filtering: see `test/` and upstream docs in `docs/` (mdbook) for the framework — that directory is upstream-owned, do not edit it for hack changes.

## Where things live

| Area | Path |
|---|---|
| C source | `src/` |
| Headers | `include/` |
| Config toggles (battle gens, mechanics, text speed) | `include/config/` |
| Map data, scripts, layouts | `data/maps/`, `data/layouts/` |
| Species, moves, abilities, trainers | `src/data/` |
| Graphics assets | `graphics/` |
| Build tools | `tools/` |
| Upstream docs (mdbook) | `docs/` — **do not edit for hack changes** |
| **Hack design docs** | `ranger-docs/` — mkdocs-material site, **edit aggressively** |

## Conventions specific to this hack

- **Use vars, not flags**, for any state with more than two values (rank, mission stage, story act). Flags only for true/false.
- **Poryscript only.** Never write raw `.s` scripts. Scripts live next to their map: `data/maps/<MapName>/scripts.pory`.
- **Naming:** `MAP_RANGER_BASE_VIREON`, `RANK_FIELD_RANGER`, `VAR_PLAYER_RANK` — descriptive, namespaced, ALL_CAPS for constants.
- **Pinned to 1.15.1.** Don't pull `upstream/master`. Cherry-pick individual fixes only, test build immediately after each.
- **One PR per feature** into `hack/ranger-main`, even solo — gives a review surface and a place to write up the change.
- **Commit messages:** imperative, scope-prefixed (`rank-system: add VAR_PLAYER_RANK and constants`).

## Design source of truth

`ranger-docs/` is the design source of truth. **Update it aggressively** as decisions evolve — it is meant to be iterated on, not preserved. In particular:

- New decisions → append to `ranger-docs/docs/reference/decisions.md` (append-only, dated, with **why**).
- Things still undecided → `ranger-docs/docs/reference/open-questions.md`.
- New shorthand → `ranger-docs/docs/reference/glossary.md`.
- When a section in `vision/` or `design/` becomes stale, **edit it in place** rather than letting it drift. Stale design docs are worse than no design docs.

To preview the docs:
```bash
cd ranger-docs
python3 -m venv .venv && source .venv/bin/activate
pip install -r requirements.txt
mkdocs serve
```

## Non-negotiable design pillars

(Full context in `ranger-docs/docs/vision/pillars.md` — read it before making creative suggestions.)

1. Primary inspiration is **Unbound**, not Dreamstone.
2. **Narrative reskin only** — never propose simulating Ranger stylus capture mechanics.
3. **One difficulty mode**, no select. Don't suggest casual modes.
4. **Frictionless prep** — perfect IVs on wild/gift Pokémon, easy access to EV training, nature mints, ability patches. Challenge lives in fights, not grinding.
5. **Lean side content** for v1 — no bounty boards, mining, etc. yet.
6. **Minimal custom presentation**, exception for rank-up animations.
7. **Tone arc:** wholesome standard-stakes opening, then a "deep fast and unexpected" dark turn. The contrast is the hook.

## Current state

Tech demo phase. Build pipeline working on WSL2. Only code changes so far:
- `include/config/text.h` — `TEXT_SPEED_FAST` set to `0` (instant text)
- `src/main_menu.c` — experimental intro tweaks (Lotad → Arcanine attempt, didn't fully work)

Next planned steps in `ranger-docs/docs/dev/tech-demo.md`.
