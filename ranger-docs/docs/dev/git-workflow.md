# Git Workflow

## Remotes

| Remote | URL | Role |
|---|---|---|
| `origin` | `chris-wilson-1/pokemon-ranger` | Personal fork — push here |
| `upstream` | `rh-hideout/pokeemerald-expansion` | Source of truth for the expansion |

## Branches

| Branch | Role |
|---|---|
| `master` | Vanilla `pokeemerald-expansion` 1.15.1 baseline. **Do not commit hack work here.** Useful for diffs against vanilla. |
| `hack/ranger-main` | Working branch for all hack development. |
| `feature/*` | Per-feature topic branches off `hack/ranger-main`. |

## Pinning

We are pinned to **`pokeemerald-expansion` 1.15.1**. Do not pull `upstream/master` wholesale — it carries breaking changes.

## Cherry-picking upstream fixes

When a relevant bug fix lands upstream:

```bash
git fetch upstream
git log upstream/master --oneline | grep -i "fix"
git cherry-pick <commit-hash>
```

Cherry-pick *individual* fixes, not merges. Test the build immediately after each pick.

## Per-feature workflow

```bash
git checkout hack/ranger-main
git pull origin hack/ranger-main
git checkout -b feature/rank-system
# ... work ...
git push -u origin feature/rank-system
# open PR into hack/ranger-main on GitHub
```

Even for solo work, the PR step is worth it — it gives a review surface and a place to write up the change.
