# Environment Setup

## WSL2 (Windows) — current setup

```bash
sudo apt update
sudo apt install build-essential binutils-arm-none-eabi gcc-arm-none-eabi \
                 git libpng-dev pkg-config zlib1g-dev
```

Verify the toolchain:

```bash
arm-none-eabi-gcc --version
```

If you cloned on the Windows side (`/mnt/c/...`) and hit perms or speed issues, re-clone inside WSL (`~/pokeemerald-expansion`).

## macOS — alternative

```bash
xcode-select --install
brew install arm-none-eabi-gcc libpng pkg-config
```

Build on a **case-sensitive APFS volume**. macOS's default case-insensitive FS will produce subtle build errors. Disk Utility → new APFS volume → format `APFS (Case-sensitive)` → clone there.

## Editor

VS Code, with the Remote-WSL extension if on Windows. Open the repo with `code .` from inside WSL.

## Tools we'll add later

- **Porymap** — map editor for pokeemerald, native Windows/macOS builds. Point at the repo root.
- **Poryscript** — higher-level scripting compiled to raw `.s`. Drop binary in PATH; integrates with `make`.
- **mGBA** — emulator. Memory viewer is invaluable for debugging var/flag state.
