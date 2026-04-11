# Cast Voices

How named characters sound on the page. Each entry lists the character's **voice rules** (concrete, mechanical patterns that keep them recognizable across scenes) and a few **example lines** drawn from shipped or drafted dialogue.

This file exists so that voice drifts are caught before they ship. If a scene puts a line in a character's mouth that breaks their rules, the rule is either wrong (update it) or the line is wrong (rewrite it). Don't let the rules quietly erode — the whole point of nailing a voice is that the character stays recognizable across a game's worth of text.

Add a new section when a character gets their first real scripted line. Don't pre-write voices for characters who haven't been touched yet — speculative voice design ages badly.

Cross-reference [academy-arc.md](../design/academy-arc.md) for who these people are in the story.

---

## Pip (the friend)

**Tone keywords:** reserved, nervous-excited, quietly warm, uncomplicated. The character whose warmth is unbroken and who survives all three acts as a "never finds out" figure.

### Voice rules

1. **Ellipses for all pauses.** Pip pauses a lot, and every pause is an ellipsis (`…`, charmap byte `B0`). Use them at the start of a line when Pip is startled or caught off-guard (*"…{PLAYER}. You made it."*) and mid-line before emotional statements (*"…I'm really glad it's you and me today."*). Never deliver Pip's feelings flat; always let them gather themselves first. **Do not use em-dashes** — U+2014 isn't in the pokeemerald charmap and the GBA font's hyphen glyph reads as a typo, not a pause.
2. **Specific small details instead of big feelings.** Pip doesn't say *"I'm so nervous"*; Pip says *"I've checked my bag three times."* Concrete nervous tics, never abstract anxiety statements.
3. **Never uses exclamation marks.** Not in excitement, not in surprise, not in joy. Pip's excitement is quiet. Save exclamations for characters who deserve them (Poppy, Mum, Bran). **The first time Pip uses an exclamation mark will be a moment** — hold it in reserve for a beat in Act 3 where it would actually land, whether that's joy, terror, or grief.
4. **Never self-aggrandizes.** Pip doesn't boast, doesn't claim to be good at anything, doesn't compare themselves favourably to anyone. When Pip talks about the future, it's *"I don't think I could do this on my own"*, never *"we're going to be great."*
5. **Uses the player's name as verbal punctuation.** Pip anchors themselves on `{PLAYER}` when they're nervous. Often the name lands right after an opening ellipsis: *"…{PLAYER}. You made it."*
6. **Pivots from emotion back to practical.** After any emotional beat, Pip catches themselves and redirects to something practical they can do. *"…I'm really glad it's you and me today. / …I should finish getting ready."* This is how nervous people survive emotional moments — they move their hands.

### Example lines (Beat 2, first meeting on graduation morning)

```
Pip: …{PLAYER}.
You made it.

Pip: I've been up since… I don't know when.

Pip: Kept checking my bag. I think I've checked it three times.

Pip: …I'm really glad it's you and me today.
I don't think I could do this on my own.

Pip: …I should finish getting ready.
I'll see you at the academy.
```

### Anti-patterns (what Pip never sounds like)

- ❌ *"I'm so excited! I can't wait!"* — too loud, too certain, no pauses.
- ❌ *"Let's go kick butt out there!"* — bravado is not in Pip's register.
- ❌ *"I've always dreamed of this day."* — too clean, no verbal fumbling.
- ❌ *"You're my best friend!"* — direct emotional declarations. Pip says these things obliquely or not at all.
- ❌ *"Anyway, I'll see you at the academy."* — "Anyway" is a shrug-off. Pip doesn't shrug off emotional beats; Pip pivots from them to something practical.
- ❌ Any em-dash. If you typed one, you broke the build. The charmap doesn't know U+2014.

---

## Poppy (Pip's little sister)

**Tone keywords:** bright, excitable, adoring of the player, says everything the way a six-ish-year-old says things. The emotional stake of Beat 7 — the player has to care about her before the rescue mission.

### Voice rules

1. **Short declarative bursts.** Kid cadence. *"Pip says they're gonna be the best ranger ever."*
2. **Uses exclamation marks freely.** Unlike Pip. Poppy's excitement is loud.
3. **Hero-worships the player explicitly.** *"Just like you and Pip!"* The player is her role model — this is what makes the Beat 7 betrayal personal.
4. **"Big sib Pip"** or *"Pip"* — never "Pip-chan" or cutesy nicknames that don't belong in the setting.
5. **Simple vocabulary.** *"when I'm big"*, not *"when I grow up"*. *"gonna"*, not *"going to"*. Keep her reading age low without making her feel like a baby.

### Example lines

```
Poppy: {PLAYER}! Is it really graduation day?

Poppy: Pip says they're gonna be the best ranger ever.
I'm gonna be one too when I'm big!
Just like you and Pip!
```

---

## Player's Mum

**Tone keywords:** warm, standard Pokémon-mum idiom, motherly without being saccharine. Linden-rooted. The voice of Act 1's wholesomeness.

### Voice rules

1. **Speaker tag:** `Mum:` (not "Mom" — British-ish spelling consistent with the Linden tree / temperate-European vibe).
2. **Uses the player's name or an affectionate form** often — *"{PLAYER}!"*, *"sleepyhead"*. Never gendered (no "son" / "daughter"); always either `{PLAYER}` or gender-neutral endearments.
3. **Brief, warm imperatives.** *"Wake up, sleepyhead!"* / *"Get dressed and come downstairs!"* Mum gets to the point.
4. **Exclamation marks allowed.** She's warm and emphatic.
5. **Heal-script voice is gentle, not nagging.** *"Let me take care of your Pokémon."* / *"There, all better. Be careful out there, okay?"* — kind, not fussing.

### Example lines (Beat 1 wake-up and post-heal)

```
Mum: {PLAYER}! Wake up, sleepyhead!

Mum: It's graduation day!
You don't want to be late!

Mum: Pip will be waiting for you.
Get dressed and come downstairs!

---

Mum: {PLAYER}! You've been working so hard.
Let me take care of your Pokémon.

Mum: There, all better.
Be careful out there, okay?
```

---

## Pip's Mum

**Tone keywords:** warm background parent. Named presence in Pip's house, soft watcher, voice of "the adults of Linden." Not yet given a proper name — [placeholder](open-questions.md).

### Voice rules

1. **Speaker tag:** `Pip's Mum:` until she's named. Update this file and all shipped lines when the name lands.
2. **Gentle, slightly slower than Player's Mum.** Where Player's Mum is brisk and warm, Pip's Mum is softer and observes more. She comments on Pip's state rather than on the player's.
3. **Uses *"you two"*** when addressing the player — frames Pip and the player as a pair.
4. **Never explains anything the player should figure out.** Pip's Mum is atmosphere, not exposition.

### Example lines (generic, first-morning visit)

```
Pip's Mum: {PLAYER}, good morning!
Big day for you two, isn't it?

Pip's Mum: Pip was up half the night fretting over it.
You'll look after each other out there, won't you?
```

The *"look after each other"* line is a fair-play atmospheric beat — warm on first read, quietly load-bearing on replay after Beat 7. See [academy-arc.md Beat 7](../design/academy-arc.md#beat-7--first-ranger-mission-rescue-poppy).

---

## Characters not yet voiced

Stubs to fill in when they get their first real scripted dialogue. **Do not write voice rules speculatively** — wait until there's shipped text to anchor to, then document the rules that text is following.

- **Bran** (the rival) — Gary-coded, smug, secretly fond, hyper-competitive, proud of Meren.
- **Meren** (Bran's parent / Foundation Partner Program liaison) — sincere, polished, professionally warm, does not lie in Act 1.
- **Cassian** (academy director, mentor) — heartfelt, institutional, carries one nostalgic stylus-era half-memory he doesn't know is load-bearing.
- **Matty** (academy quartermaster) — rugged old-timer, one wistful stylus-era half-line delivered without emphasis.
- **Tobias Thorne** (Foundation CEO) — warm, articulate, self-deprecating, slightly manipulative in texture; supersedes rather than argues.
