# Build & Test Loop

## Build

```bash
make -j$(nproc)
```

Output: `pokeemerald.gba` in the repo root. First build is slow; incremental builds after a small edit are quick.

## Run

Load `pokeemerald.gba` in mGBA. Keep mGBA open between builds — it'll reload the ROM in place.

## Useful flags

```bash
make clean              # nuke build artifacts; use after toolchain changes
make -j4 MODERN=1       # default; modern toolchain
make tidy               # remove .o files but keep tool builds
```

## The loop

```
edit ──▶ make -j$(nproc) ──▶ load .gba in mGBA ──▶ test ──▶ edit
```

Optimisations as we scale:
- Save states at the start of each test scenario
- A debug warp room for jumping straight to the area being tested
- mGBA memory viewer for inspecting `VAR_*` and flag state during runtime
- Keep a `debug` build branch with skip-intro and a tester loadout

## Common breakages

| Symptom | Cause | Fix |
|---|---|---|
| `arm-none-eabi-gcc: command not found` | Missing toolchain | `sudo apt install gcc-arm-none-eabi` |
| `pkg-config: No such file` | Missing pkg-config | `sudo apt install pkg-config` |
| `libpng` errors | Missing dev headers | `sudo apt install libpng-dev zlib1g-dev` |
| Permission errors on `/mnt/c/` | WSL filesystem perms | Clone inside WSL home dir instead |
