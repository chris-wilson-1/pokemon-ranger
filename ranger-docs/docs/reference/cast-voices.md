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

## Cassian (academy director, mentor)

**Sprite:** Norman. **Tone keywords:** warm institutional gravitas, self-deprecating, reaches back to his grandfather's stories when he wants to say something that matters. The voice of "the academy as it is" — and, on Act 3 replay, of "the academy as it doesn't know it was once."

### Voice rules

1. **Direct, warm imperatives.** Cassian leads with action verbs. *"Stand tall, you three."* / *"Head on up."* / *"Come on in."* He doesn't wind up; he opens a door.
2. **`\p` for dramatic pauses, not ellipses.** Cassian is confident — his pauses are for effect (let the line land), not for hesitation. Contrast Pip's ellipses, which are nervous-gather pauses. Cassian's `\p` breaks are a director's beat.
3. **Self-deprecating institutional humour.** *"The history, the technique, the reports nobody reads."* Cassian gently undercuts his own institution before he praises it. This is what makes him bearable instead of preachy.
4. **Repetition-for-weight.** When Cassian wants something to matter, he says it twice in slightly different shapes. *"A thing we can't teach you. A thing you have to feel in your bones."* / *"You're the start of something. That's what a ranger is. / That's what you are, from this day forward."*
5. **Reaches for his grandfather when he wants to be honest.** Cassian's deepest moments are quoted from someone else — *"My grandfather used to talk about…"* — and then hedged with *"…I think about that a lot, if I'm honest."* The *"if I'm honest"* tag is Cassian's single vulnerability marker, and it's the only place he uses an ellipsis. Use both sparingly.
6. **Uses "partner" not "Pokémon"** in institutional/ceremonial contexts. This is Ranger Corps language and Cassian is a company man.
7. **Exclamation marks allowed but sparing.** Mostly at greetings (*"{PLAYER}!"*), not in speeches. Cassian doesn't shout declarations; he speaks them plainly.
8. **Addresses graduates collectively as *"you three"*** during the ceremony. This is deliberate — it's part of how the academy frames cohorts as units.

### Example lines (Beat 3 greeting + Beat 4 speech)

```
Cassian: {PLAYER}!
There you are - come on in.

Cassian: Big day. Head over to Matty first - he's got your starter pack ready.
I'll meet you upstairs when you're done.

---

Cassian: Stand tall, you three.
You've earned this day.

Cassian: The academy teaches you a lot. The history, the technique, the reports nobody reads.
But there's a thing we can't teach you. A thing you have to feel in your bones.
A ranger is nothing without their partner. You're going to spend your whole career learning what that means.

Cassian: My grandfather used to talk about the old rangers.
The ones he worked beside, before the Withdrawal.
He said the bond between a ranger and their partner was a kind of contract. Written in a language only the two of you knew.

Cassian: …I think about that a lot, if I'm honest.
What it must have been, to know your partner like that.
We don't always have the old words anymore. But we have this.
```

### Load-bearing Act 3 callback

The Beat 4 speech carries **stylus seed #2**: *"a kind of contract. Written in a language only the two of you knew."* On first read this is warm institutional humility about the old partner-bond. On Act 3 replay, it's literal — the old rangers had stylus-assisted partner contracts, and Cassian's grandfather was describing the *technology*, not a metaphor. **Do not let any subsequent Cassian dialogue break this ambiguity.** He must continue to think he's reaching for a beautiful old memory, not describing something that used to be real.

### Anti-patterns

- ❌ *"You kids are going to be amazing!"* — too loud, too generic, no weight.
- ❌ *"When I was your age…"* — Cassian doesn't narrate his own past. He narrates his *grandfather's* past. That's the whole engine.
- ❌ *"I'm so proud of you."* — too direct. Cassian's pride lives in the imperatives he chooses, not in declarations.
- ❌ Ellipses outside the *"if I'm honest"* moment. Cassian is not nervous.

---

## Matty (academy quartermaster)

**Sprite:** Brawly. **Tone keywords:** young (mid-20s), athletic, cheerful, casually warm. Recently inherited the quartermaster role from an older predecessor. Repeats his grandfather's phrases without knowing they're load-bearing.

### Voice rules

1. **Enthusiastic forward-momentum cadence.** Short sentences, always moving. *"There you are!"* / *"All right - here's your starter kit."* / *"Anyway - you're all set."*
2. **"All right" / "Anyway" as natural connectives.** These are Matty's conjunctions. He uses them to segue between thoughts the way a chattier younger person does.
3. **Quotes his grandfather casually, without reverence.** This is the critical rule. The stylus seed — *"My granddad used to call these the best tools we've got. / Said they'd do you right as well as anything they used in his day. / He'd know."* — is delivered as an **inherited phrase**, not a personal memory. Matty never met the old rangers. He is repeating something his granddad said because it sounded nice and because the kit reminds him of it. **He must not be allowed to explain what his granddad meant.** If you add more Matty lines about the past, keep him breezy and second-hand.
4. **Pivots away from the emotional moment with *"Anyway"*.** After the grandfather line, Matty immediately shifts gears: *"Anyway - you're all set."* Structurally similar to how Cassian's speech handles the old-ranger callback, but the pivot is effortless because Matty doesn't know what he's pivoting past.
5. **Exclamation marks freely.** Matty is warm and energetic. He's allowed to be loud.
6. **Direct, professional delivery for item hand-offs.** *"First-aid, potions, a few balls to get you started."* Matty knows his gear and lists it matter-of-factly.
7. **Speaker tag `Matty:`** — first-name only, reflecting the casual generational handover from his grandfather's day when quartermasters were *"old Mister So-and-so."*

### Example lines (Beat 3 starter pack)

```
Matty: There you are! {PLAYER}, right?
All right - here's your starter kit.
First-aid, potions, a few balls to get you started.

Matty: My granddad used to call these the best tools we've got.
Said they'd do you right as well as anything they used in his day.
He'd know.

Matty: Anyway - you're all set. Cassian's waiting for you upstairs.
```

### Load-bearing Act 3 callback

Matty's grandfather line is **stylus seed #1**. Same mechanics as Cassian's seed: warm on first read, literal on replay. Matty's specific craft note is that the seed must stay **second-hand** — the lost tradition is now two generations back, carried forward through a young man's mouth unknowingly. When writing future Matty dialogue, do not let him reach for his own memory of the old ways; if he reaches for anything, it's another inherited fragment from granddad.

### Anti-patterns

- ❌ *"My granddad used to say…"* delivered with reverence or slowed pacing. Matty doesn't know the line is load-bearing.
- ❌ *"I remember when…"* — Matty is too young to remember. He remembers his granddad remembering.
- ❌ Matty lingering on the grandfather line. The *"Anyway - you're all set"* pivot is the whole point.
- ❌ Rugged old-timer cadence. Matty is young. If a line sounds like a weathered old-timer, rewrite it — his predecessor was the old-timer, not Matty.

---

## Meren (Foundation Partner Program liaison, Bran's dad)

**Sprite:** Steven. **Tone keywords:** polished, institutionally sincere, professionally warm. Does not lie in Act 1. Future trainer-fight opponent at the Flagship in Act 2/3.

### Voice rules

1. **Formal speaker protocol.** Meren addresses people with titles and collective nouns. *"Thank you, Director Cassian."* / *"Graduates."* He is visibly good at this part of his job.
2. **Foundation-branded language, proudly.** *"On behalf of the Thorne Foundation's Partner Program, it is our privilege to place these three partners with you today."* Meren names his institution fully and without irony. **Do not soften this into a casual "Foundation"** — the formal register is part of how Meren signals sincerity. He means it.
3. **Specific numbers for personal warmth.** When Meren gets vulnerable, he reaches for a count, not an adjective. *"I've been a ranger for twenty-three years, and I still remember the day I met mine."* Vague nostalgia is not his register — specificity is how he grounds feeling.
4. **`\p` breaks after every thought.** Meren lets every line breathe. He is the most deliberately-paced character in Act 1. If a Meren line has more than one idea crammed on the same `\p`, you're probably writing him wrong.
5. **Soft mysticism is allowed, once.** *"Pick the one that looks back at you."* is the warmest Meren gets. This kind of gently-spiritual framing is in-register for him precisely because it's so restrained — he would never push it harder.
6. **Gentle verdicts, not exuberant praise.** *"A fine match."* / *"Take good care of each other."* Meren doesn't gush.
7. **Formal verb choices over casual contractions** in ceremonial moments. *"it is our privilege"*, not *"it's our privilege"*. This is subtle but it's part of how Meren reads as composed rather than casual. He can use contractions in private conversation — but in front of a room, he speaks in full.
8. **No ellipses, no fumbling.** Meren is composed. If he pauses, it's a `\p`, and it's deliberate.
9. **Addresses the player by name** (*"{PLAYER}, please step forward."*) — ceremonial formality, not Pip's nervous anchoring.

### Example lines (Beat 4 graduation presentation)

```
Meren: Thank you, Director Cassian.
That was beautiful.

Meren: Graduates.
On behalf of the Thorne Foundation's Partner Program, it is our privilege to place these three partners with you today.

Meren: I've been a ranger for twenty-three years, and I still remember the day I met mine.
You will too.

Meren: {PLAYER}, please step forward.
Pick the one that looks back at you.

Meren: A fine match.
Take good care of each other.
```

### Act 1 rule: Meren does not lie

Meren's Act 1 sincerity is load-bearing. Every line he says in Act 1 must be something he genuinely believes. The Act 2/3 reveal only hits if the audience can look back and say *"he wasn't lying — he just didn't know."* **Do not put any deliberately-hollow PR language in Meren's mouth in Act 1.** If a line feels corporate, it must also feel true to him.

### Anti-patterns

- ❌ *"We at the Foundation are committed to…"* — corporate boilerplate. Meren's institutional voice is warm, not slick.
- ❌ *"It's great to see you all."* — too casual, too generic. Meren doesn't do small talk in ceremonial contexts.
- ❌ Exclamation marks in ceremonial speech. Meren's warmth is in the specifics (twenty-three years), not in volume.
- ❌ Any line that sounds like a sales pitch. Meren is a **ranger** first, a liaison second, and he believes it.

---

## Bran (the rival, Meren's son)

**Sprite:** Link RS Brendan. **Tone keywords:** Gary-coded, smug-dismissive to the player, hyper-competitive, visibly proud of his dad in ways he doesn't fully hide. Secretly fond of the player but performing rivalry hard.

### Voice rules

1. **Smug-dismissive opener.** *"Oh, look who finally showed up."* / *"Try not to embarrass yourself in the ceremony, yeah?"* Bran starts every encounter by acting unimpressed. Vary the specific put-down but keep the shape.
2. **"yeah?" as conversational tag.** Bran pushes at the player with half-questions. It's a challenge, not an invitation.
3. **Downplays stakes to seem above them.** *"I'll take what's left. / Like it matters. I'd win with any of them."* This is bravado covering uncertainty — classic rival tell. Bran's *"like it matters"* is not actually cool; it's a tell, and the scene is set up so the player can clock it as one.
4. **Specific put-downs, not vague sneers.** *"embarrass yourself in the ceremony"* — targeted. Bran always sneers at a *specific* thing, never just *"loser"* or *"dork"*. The specificity is what makes him read as smart-mean instead of dumb-mean.
5. **Softens visibly when he addresses his dad.** *"Hope the Partner Program's proud of me today, Dad."* This is the one place Bran's armour drops — and it drops partially in front of the player, which matters. He's performing "good son" for the audience at the same time as he's genuinely reaching for his dad. Both are true.
6. **Contractions always.** *"I'll"*, *"it's"*, *"don't"*. Bran is casual-cool; formal speech is not his register.
7. **Exclamation marks rare.** Bran is dry-sarcastic, not loud. His put-downs land harder for being flat.
8. **Never says "please" or softens verbally to the player.** Bran's warmth toward the player (when it comes) will show up in *actions* — a cover in a fight, a grudging respect — never in polite verbal framing.
9. **Proud of Meren in public, always.** Even his rival swagger in Beat 4 routes back to *"Dad"*. Bran's ambition is partly about being seen by his father. This is the load-bearing setup for when the father-son relationship breaks in Act 2/3.

### Example lines (Beat 3 1F + Beat 4 graduation)

```
Bran: Oh, look who finally showed up.
Try not to embarrass yourself in the ceremony, yeah?

---

Bran: I'll take what's left.
Like it matters. I'd win with any of them.

Bran: Hope the Partner Program's proud of me today, Dad.
```

### Anti-patterns

- ❌ *"You're going down!"* — too loud, too cartoonish, too generic.
- ❌ *"Hey buddy."* — Bran doesn't use friendly terms of address for the player. Ever.
- ❌ Earnest declarations of rivalry. Bran never says *"I'm going to be the best."* He implies it by dismissing everyone else.
- ❌ Bran softening verbally *to* the player. His softness routes through his dad, or later through actions — never through what he says to the player's face.

---

## Characters not yet voiced

Stubs to fill in when they get their first real scripted dialogue. **Do not write voice rules speculatively** — wait until there's shipped text to anchor to, then document the rules that text is following.

- **Tobias Thorne** (Foundation CEO, Beat 5 arrival) — sprite candidate: **Mr Stone** (not yet committed). Tone keywords: warm, articulate, self-deprecating, slightly manipulative in texture; supersedes rather than argues. The voice of "a man who never needs to raise his."
