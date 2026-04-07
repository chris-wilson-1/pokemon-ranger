# Ranger Hack Docs

Design and development docs for the Pokémon Ranger ROM hack, built with [MkDocs Material](https://squidfunk.github.io/mkdocs-material/).

## Running locally

```bash
cd ranger-docs
python3 -m venv .venv
source .venv/bin/activate
pip install -r requirements.txt
mkdocs serve
```

Then open http://127.0.0.1:8000.

## Structure

- `docs/index.md` — landing page and navigation hub
- `docs/vision/` — high-level pillars, inspirations, tone
- `docs/design/` — gameplay and narrative design docs
- `docs/dev/` — engineering setup, workflow, conventions
- `docs/reference/` — decisions log, open questions, glossary

Edit `mkdocs.yml` to change navigation order.
