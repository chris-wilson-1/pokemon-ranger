# Tone & Story Arc

> Authoritative detail lives in [story.md](../design/story.md). This page is the vision-level summary — the *feel* the story is aiming for. When the two disagree, `story.md` wins.

## The shape

```
Act 1: unguarded warmth ────┐
                            ├── the staggered reveal ──▶ Act 3: desaturated, grieving, careful
Act 2: warmth + unease ─────┘
```

The opening is deliberately, almost suspiciously wholesome. Standard Pokémon Ranger fare:

- You're a recruit at a Ranger training school in Linden (station 3, the academy).
- Your first missions rescue children, escort biologists, clear routes of "dangerous" wild Pokémon.
- The mentor is warm. The rival is smug. The parent figure is kind. The town feels safe.
- Stakes are low and personal — a lost little sister, a stray in the woods, a train to catch for a first outward posting.

This is not a fakeout — it is a *foundation*. The wholesomeness has to be earned and felt for the turn to land. No winks to camera, no foreshadowing the player is meant to catch on first play. (The story makes heavy use of [fair-play foreshadowing](../design/story.md#craft-commitments), but the fairness cuts both ways: the player is meant to *miss* it the first time.)

## The turn

The turn is not a single scene. It is a **staggered three-beat reveal** spread across the first stations of the player's tour of duty. Each beat lets the player feel smart for catching it before the next.

1. **Beat 1 — deniable.** One mission at the Quarry (station 4) feels off. Atmosphere only. The player can file it under "odd day."
2. **Beat 2 — undeniable but abstract.** A pattern surfaces across missions — a document, a roster number, a return to a familiar map. The player now knows *something* is wrong but not what.
3. **Beat 3 — the unflinching scene.** The only moment the game does not soften. Earned, deliberate, never repeated. The game trusts the player to remember it for the rest of the runtime.

After Beat 3 the tone shifts. Not edgy-for-the-sake-of-it — warmth remains, in places, and those small recovered warmths hit harder against the muted backdrop than they would against unbroken brightness. The stakes are real, the institution the player joined is compromised, and the player's own early actions turn out to have been part of the harm.

## What this asks of the design

- **Early game must be genuinely good** on its own merits. If act 1 reads as filler before "the real game," the contrast fails. See the [academy arc spec](../design/academy-arc.md) for how this is executed beat-by-beat.
- **The turn must be unsignaled** in marketing, in the opening hours, and in the early game's tone. Fair-play foreshadowing is placed for the second playthrough; the first playthrough should feel unguarded.
- **Post-turn content must earn the shift.** Act 3 is desaturated, not grimdark. Models: Mother 3, late *Outer Wilds*, post-Aerith *FF7*.
- **No clean faction in act 3.** The Ranger Corps is captured, the Thorne Foundation is the villain, the ex-ranger cell is correct and broken. The player builds the right answer; they do not join one.
