# Tech Demo Plan

The goal of the tech demo is to **prove the full pipeline end-to-end** before committing to story or asset work. We are not building a game yet — we are building confidence that we *can* build a game.

## Done

- ✅ WSL2 environment set up
- ✅ Toolchain installed (`gcc-arm-none-eabi`, `pkg-config`, `libpng-dev`)
- ✅ Repo forked, remotes configured (`origin`/`upstream`)
- ✅ Pinned to 1.15.1 on `master`
- ✅ Working branch `hack/ranger-main`
- ✅ First successful build → `pokeemerald.gba` runs in mGBA
- ✅ First text-only edit confirmed: `TEXT_SPEED_FAST` set to `0` in `include/config/text.h`

## Next

### 1. Skip the intro
Killing the Birch intro for faster test cycles. Find new-game entry point and short-circuit the cutscene call:

```bash
grep -rn "CB2_NewGame\|StartNewGame" src/
```

### 2. Install Porymap
Native Windows build from the Porymap releases page. Point at the repo root. Confirm it loads the Hoenn map.

### 3. First custom map
Duplicate a small interior (e.g. a Pokémon Centre), rename to `MAP_RANGER_BASE_TRAINING_HALL`, add one custom NPC event with placeholder dialogue. This teaches the map/warp/event system end to end.

### 4. Install Poryscript
Drop binary in PATH. Write the NPC's dialogue as a `.pory` file and confirm it compiles via `make`.

### 5. First flag-checked interaction
NPC says one thing before "completing a mission" and another after. Wire up via a placeholder flag. This proves the scripting → state → branching loop.

### 6. First var increment
Define `VAR_PLAYER_RANK` and one rank constant. NPC interaction increments it. Inspect the change in mGBA's memory viewer.

## Tech demo done when

- I can build a custom map with a custom NPC
- That NPC reads and writes a var
- I can compile, run, and test the change in under a minute
- I am bored of the loop and want to start building real content

That's the signal.
