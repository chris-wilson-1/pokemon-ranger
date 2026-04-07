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
- ✅ Birch intro skipped — `CB2_NewGameRangerSkipIntro` wrapper in `src/main_menu.c` drops the player straight into the truck with a fixed identity (`RANGER`, male). Naming screen and Birch monologue gone.
- ✅ Porymap installed (`C:\Users\Chris\Tools\Porymap\porymap.exe`), opens the repo via `\\wsl.localhost\...` and loads Hoenn maps cleanly.
- ✅ First custom map: `LittlerootTown_RangerBaseTrainingHall` (created in Porymap, registered in `layouts.json` + `map_groups.json`). New game spawns directly into it via patched `WarpToTruck` in `src/new_game.c`. Truck wake-up cutscene removed from `CB2_NewGame`.
- ✅ Poryscript installed (`tools/poryscript/poryscript`, built from source via `apt install golang-go`). Build auto-compiles `*.pory` → `*.inc`.

## Next

### 1. First NPC + dialogue
Add an NPC object event to the Training Hall in Porymap, point it at a script, and write a one-line greeting in `scripts.pory`. Proves the event → poryscript → in-game text path.

### 2. First flag-checked interaction
NPC says one thing before "completing a mission" and another after. Wire up via a placeholder flag. This proves the scripting → state → branching loop.

### 3. First var increment
Define `VAR_PLAYER_RANK` and one rank constant. NPC interaction increments it. Inspect the change in mGBA's memory viewer.

## Tech demo done when

- I can build a custom map with a custom NPC
- That NPC reads and writes a var
- I can compile, run, and test the change in under a minute
- I am bored of the loop and want to start building real content

That's the signal.
