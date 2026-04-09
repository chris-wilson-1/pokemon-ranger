# Setting — Ardenna

The region the hack takes place in. Drafted 2026-04-07; station spine skeleton and traversal structure added 2026-04-09. Region-level setting is fully laid out; station names are still descriptive placeholders. The villain corporation is **the Thorne Foundation** (see [story.md](story.md) for the full thesis). Remaining open items are listed at the bottom.

> See also: [Story](story.md), [Tone & Story Arc](../vision/tone-and-arc.md).

## One-line identity

A vast, old wilderness threaded by a single industrial spine — a rail line and a parallel river — quietly recovering from a generation-ago ecological wound whose true cause sleeps under the trees.

## The name

**Ardenna.** Pulls on Arden / Ardennes — centuries of literary association with forests that are older than the people walking through them. Phonetically heavy, sits well next to "Xerneas," and matches the mythic-European-wilderness register the story wants.

## Geography

### The wilderness is the dominant fact of life

Most of Ardenna's surface area is wild. Old-growth forest, mountains, coast, wetlands — the exact biome mix is still open, but the *proportion* is locked: settlements are small, sparse, and exist *in* the wilderness, not carved out from it. Wild Pokémon populations are visible, abundant, and treated by locals as neighbours rather than resources.

Off-spine travel is slow, dangerous, and ranger-assisted. Most off-spine residents will never see a regional authority figure who isn't a ranger. The Corps's centrality to daily life is geographic before it is institutional.

### The spine

A single linear infrastructure corridor runs the length of Ardenna. It has two parts:

- **The river.** Older than living memory. The original artery. Carries barges, used by locals and rangers for off-spine travel, fed by tributaries from across the wilderness.
- **The rail line.** Built during the post-wound rebuild, parallel to the river for almost its entire length. Steam/diesel-era technology. Stations are literal stations. Cargo and people both move on the rails. The rail line has progressively replaced the river as the main route over the last generation.

Together they are the only practical way to move long distances through Ardenna. They are also the geographic axis the entire game takes place along.

### How the player travels the spine — hybrid train/walk model

The spine is *not* uniformly train-served. Travel along Ardenna splits into three regimes, each doing distinct story work:

- **The served spine (stations 3–8: Academy through Terminus).** Standard train service outbound. The player boards trains at stations and rides the rails between them; connecting overworld routes between these stations *do not exist* for the outbound journey. The polluted river is visible from the train window on every trip, in every direction, from hour one. The train is Foundation-built infrastructure — riding it is participating in the Foundation's axis.
- **The abandoned tail (stations 1–2: retirement village, Eternal Tree).** *No rail service.* The Foundation never extended — or quietly discontinued — service to the tail after the Withdrawal. The retirement village was abandoned by the Foundation's reconstruction; the Foundation actively does not want people near the dormant Tree. The player walks to the tail on foot from the academy, heading south. The lack of rail is itself a clue the player files under "nothing important down there" until they realise what "nothing important" means to the Foundation. **Visited twice**: first during the act-2 detour to the retirement village, second for the finale pilgrimage to the Tree.
- **The forced walk back (Terminus → Marsh → Flagship).** After Beat 3 at Terminus, the train the player arrived on has failed (cause ambiguous — mechanical failure, Foundation sabotage, or cell action). The player must walk back *northwest* from Terminus through the Marsh to the Flagship, fighting Foundation enforcers the entire way. This reverses the direction of the entire outbound journey: the player, who has been traveling east toward the sea for the whole game, is now walking home. The terrain they saw through a train window — extraction sites, pollution gradient, thinning encounter tables — they now walk through on foot. The combat arc and grief arc are the same arc.

Each station itself is a **town + walkable wilderness routes**. Routes live *inside* stations, not between them. Ranger missions — the rank-up content — happen on these in-station routes. This preserves the classic Pokémon walking/exploration/wild-encounter loop while keeping station-to-station travel on rails for the outbound half and forced-walk for the return half.

**Why this specific shape:**

- The train does the "the spine is the Foundation's axis" theme delivery (every outbound journey is on Foundation-built infrastructure, the polluted river is guaranteed-visible).
- The tail walk delivers the "the Foundation forgot this place" feeling *through* the traversal itself — no ticket, no schedule, you just have to go there.
- The walk back is the geographic inverse of the outbound train rides: the train carried you *past* the atrocity sites; the walk forces you to *see* every downstream effect at the moment the story needs you to. Off-spine-is-more-alive stops being an abstract claim and becomes a thing the player walks through.
- The Foundation's enforcers deployed through the Marsh on the walk-back are the first time Foundation-affiliated trainers are *enemies*. The tonal dissonance is deliberate: institutional violence looks exactly like institutional kindness, with uniforms and professional courtesy, except the Pokémon are security-grade and the battles are hard.
- The ex-ranger cell ghost-helps through the Marsh — enemies found already defeated, campfires with supplies, paths cleared — but the player never interacts with them directly. They are professionals in their own territory, doing what rangers do by the old method.
- Scope stays controlled: two walkable chunks (tail, walked twice; Terminus→Marsh→Flagship walk-back) instead of seven inter-station routes.

### The river is visibly degraded

Wherever the rail line runs alongside the river — which is most of its length — the river is wrong. The colour is off. There is foam on the banks in places. The Wailmer counts in old ranger field journals don't match the Wailmer counts you can see today. Migrations that used to happen along the river either don't happen any more or happen on different schedules.

Locals don't talk about it. It has been like this their whole lives. The Company's annual environmental report — which is *real* and *audited* — shows the river is "within acceptable parameters for an active industrial corridor," and that has been true every year for two decades.

The pollution is not a metaphor. It is the Company's actual material harm, visible from the train, in hour one, while the tutorial is happening. The player will not notice in act 1. They will not be able to stop noticing in act 3.

A direct consequence: **off-spine wilderness is dramatically more alive than spine-adjacent areas.** The further the player gets from the rail, the cleaner the water and the more abundant the populations. Rangers know this implicitly. Nobody bothers to measure it.

### Stations

**8 stations along the spine.** The academy sits near one end with a 2-station tail behind it (visited late), and 5 outward stations ahead of it. Names are descriptive placeholders — a dedicated naming pass comes later.

The spine runs **mountains → sea**. The Eternal Tree is at the mountain source; the river flows downhill the length of Ardenna and meets the sea at the terminus. The pollution flows the same direction — the closer to the source, the cleaner; the closer to the sea, the worse. This is a *visible* gradient the player can feel without anyone explaining it.

A direct thematic consequence: **the further from the Tree, the more the Company has rewritten the land.** The mountain tail has the strangest, oldest, most fairy-coded ecology. The coastal terminus has the most Company-managed, most domesticated, most thinned ecology. The middle stations are a gradient between.

#### Geographic layout

```
mountains ───────────────────────────────────────────────────────────── sea
(Tree)                                                              (terminus)

[1. Tail Terminus] ── [2. Tail Station] ── [3. ACADEMY] ── [4. Quarry]
  alpine fairy forest   high foothills       temperate forest    rocky foothills
  The Eternal Tree      ruins of old Corps   home base          first posting
  No settlement         retirement village   academy town       industrial town
  FINALE                Visited twice                           BEAT 1

  ── [5. Jungle] ── [6. Flagship] ── [7. Marsh] ── [8. Terminus]
     warm valley      broad river valley  downstream marsh   coastal estuary
     hot springs      industrial periphery ex-ranger outpost port town
     old village      Foundation town      walked-back only   older than Foundation
                      BEAT 2 (outbound)    no beat            BEAT 3
```

#### Traversal order

The player does **not** visit stations in geographic order. The traversal is:

```
Academy (rank 1) → train → Quarry (rank 2, Beat 1)
  → train back to Linden → walk south → Retirement Village (detour, no rank)
  → walk back to Linden → train → Jungle (rank 3)
  → train → Flagship outbound (rank 4, Beat 2)
  → train → Terminus (rank 5, Beat 3)
  → WALK BACK northwest → Marsh (no rank) → Flagship return (Meren fight)
  → train west → Linden (Cassian: rank 5→7, Tree reveal, Thorne has gone south)
  → walk south → Retirement Village (second visit, brief)
  → walk south → Eternal Tree (finale)
```

#### Rank mapping

Each outbound station has a **gym-style commander battle** — the senior Corps ranger at that station, who must be defeated for the rank-up. Rank 6 is deliberately skipped; Cassian promotes the player from 5 straight to 7 at Linden as the Corps's last institutional act.

| Rank gain | Station | Commander fight |
|---|---|---|
| 0 → 1 | 3 Academy | Graduation; no commander battle |
| 1 → 2 | 4 Quarry | Quarry commander (placeholder) |
| 2 → 3 | 5 Jungle | Jungle commander (placeholder) |
| 3 → 4 | 6 Flagship (outbound) | Flagship commander (placeholder) |
| 4 → 5 | 8 Terminus | Terminus commander (placeholder) |
| *(skip)* | — | *Rank 6 Elite Ranger is never awarded* |
| 5 → 7 | 3 Linden (Cassian) | No battle. A broken institution's last act. |

#### Level curve

Anchored on academy arc end at ~L10 (per [academy-arc.md](academy-arc.md)). Finale boss team targets ~L52–56. Tunable in a balance pass; late-evolving species (Dragonite L55, Tyranitar L55, Hydreigon L64) will be hard to reach final form — accepted for now.

| Stage | Wild band | Trainer band | Station boss | Player team (expected) |
|---|---|---|---|---|
| Academy arc end | 5–9 | 6–10 | Houndour ~L11 | ~L10 |
| Quarry (rank 2) | 12–17 | 13–19 | Commander ~L20 | ~L18 |
| Retirement village detour | 16–20 | 16–20 (3–4 trainers) | — | ~L20 |
| Jungle (rank 3) | 20–25 | 22–27 | Commander ~L28 | ~L26 |
| Flagship outbound (rank 4) | 26–31 | 28–33 | Commander ~L34 | ~L32 |
| Terminus (rank 5) | 40–45 | 42–47 | Commander ~L48 | ~L46 |
| Walk back (Terminus → Marsh → Flagship) | 36–45 | 38–47 | Meren ~L48 | ~L46–48 |
| Tail wilderness (finale approach) | 46–50 | — | — | ~L50 |
| Eternal Tree finale | — | — | **Thorne ~L52–56** | ~L50–52 |

#### Station-by-station

**1. Tail Terminus — The Eternal Tree.** Alpine old-growth fairy forest. No settlement. The player approaches on foot from station 2 through the fairy-coded alpine wilderness. Sacred-space framing. Fairy, Ice, Dragon (rare), Ghost. The only place in Ardenna where Xerneas's old influence is still visible in the ecology. **The finale happens here.** See [story.md — The finale](story.md#the-finale) for the full scene. The Foundation has been quietly building infrastructure at or near the Tree for years, framed publicly as "watershed preservation" and "restoration work at the source." Thorne is here to oversee its activation.

**2. Tail Station — the retirement village.** High foothills, the ruins of the old Corps headquarters, now a retirement village of ~30 residents. Half the buildings are abandoned. The cemetery is the biggest structure. Old rangers who remember the Withdrawal live here. Ghost, Normal, some Fairy. **Visited twice:**

- **First visit (act-2 detour, between Quarry and Jungle):** Cassian asks the player to check on an old colleague who hasn't answered his last letter. The player walks south from Linden past the train station for the first time. ~1.5 hours. 1 walked route (3–4 trainers, wandering old rangers; wild L16–20). The player finds the **veteran** — old, calm, credible, not a crank. The first person to make the Ranger stylus tradition explicit. The veteran shows the player the old gesture; a wild Pokémon in the garden lends brief aid and walks off. The player leaves carrying an unresolved impression. Cassian asks how it went. The game does not mention the stylus tradition again until the ex-ranger cell uses it fluently on the walk back.
- **Second visit (finale approach):** the player passes through briefly on the walk south from Linden to the Tree. The veteran has one short exchange: *"You made it back. Keep going."* No lore dump; the player now knows more than the veteran does.

**3. Academy — the player's home base (Linden).** Temperate river-valley forest. The academy town: the player's house, Pip and Poppy's house, Bran's house, the ranger academy (two floors), a central pond with a Surf-gated item. The Foundation's logo is present but in a sponsorly way. The river is still relatively clean here. Grass, Bug, Normal, Flying, Water. **See [academy-arc.md](academy-arc.md) for the full act-1 spec.** The academy is pure act 1; the warmth settles here before any unease is introduced.

**The Linden endgame (act 3).** After the Meren fight at Flagship, the player takes the train home to Linden. Linden is slightly different. Not desaturated dramatically — the change is subtle and the player notices.

- **Thorne has been and gone.** He visited before the player arrived — sat with Mum, was charming with Pip, remembered Poppy's name, gave her a small gift, mentioned he was heading south. He was welcomed. The horror is institutional: the Foundation's reach is such that Thorne can stand in the player's family kitchen and be beloved, and there is nothing the player can do about it. Mum is quieter than she should be. Poppy is excited about "the Ranger man who knew my name." Pip is confused.
- **Cassian's revelation.** Cassian is at his open desk, waiting. He looks older. In one extended scene he: explains what he has let himself not think about for twenty years (the stylus tradition, the Foundation's adoption, the full history of his own nostalgic half-remembering); describes his failed attempt to confront Thorne directly (Thorne out-argued him; the mentor's loss is the setup for the player's win at the Tree); reveals the **Foundation's Tree plan** — the long-term infrastructure at the Tree designed to channel Xerneas's dormant bond-influence through Foundation systems, making every Pokémon in Ardenna a Foundation-aligned partner without consent. Not a new crime. The partnership program's logical endpoint. And: **the player's own investigations accelerated the timeline** — Thorne is executing now because the player's journey became evidence the model is no longer stable. Even the player's resistance became Foundation leverage. Final act: Cassian promotes the player from rank 5 (Captain) to rank 7 (Commander), skipping rank 6 entirely. *"There's nothing between Captain and Commander that matters any more. Take both. I can't give you anything else."*
- **The walk south.** Mum is at the door. Pip is worried. Poppy says something sweet. The player walks south past the train station, through the retirement village one last time, into the alpine fairy forest.

**4. Quarry Station — the first posting (rank 2, BEAT 1).** Rocky foothills and a working Foundation quarry. An *industrial town* — but a prosperous one. Workers' housing is well-built, the facility is clean, the welfare officers are sincere, the Pokémon look healthy, everyone seems happy. This is the Foundation at its "responsible" best; the player's first reaction should be approval. Rock, Ground, Fighting, some Steel. Cave access for early team-building.

**Pacing:** ~3 hours. 2 in-station wilderness routes (quarry approach, cave route). 3 rank missions + 1 story mission (Beat 1). ~12 trainers. Wild L12–17, trainers L13–19. Commander battle for rank 2 (Ranger → Field Ranger) — placeholder personality.

**Cast (draft):** the station commander, a Foundation welfare officer (compartmentalised, second Meren-class Foundation face), a fellow junior ranger (peer who recurs at later stations).

**BEAT 1:** The player's last rank mission is a routine inventory check at a processing shed. One number doesn't add up — "partnership candidates" outbound exceeds inbound by a small margin, across several weeks. The welfare officer explains it as natural attrition. The explanation is reasonable. No NPC flags unease. Deniable. Atmospheric. The player files it.

**5. Jungle Station — the old village (rank 3).** Warm river valley with hot springs, dense humid forest. An *old village* — traditional architecture, predates the Foundation, older population. The Foundation runs a "botanical research outpost" on the edge of town. Grass, Bug, Poison, some Water, some Psychic.

**Pacing:** ~3 hours. 2–3 in-station routes (jungle routes, hot springs). 3 rank missions. ~14 trainers. Wild L20–25, trainers L22–27. Commander battle for rank 3 (Field → Senior Ranger) — placeholder personality.

**Cast (draft):** the station commander, a Foundation botanical researcher (young, earnest, escort missions), **the commitment #2 NPC** — a dismissed old ranger who keeps talking about the stylus way. Correct about the Foundation AND factually wrong about something the player can verify. Filed under "unreliable." Rhymes with the veteran's credible telling from the detour; the attentive player catches it.

**No beat.** Foreshadowing station. The game plants stylus seed #3 here (after Matty and Cassian's soft act-1 seeds and the veteran's act-2 explicit one).

**6. Flagship — the Foundation's model facility (rank 4, BEAT 2 outbound; Meren fight on return).** Broad river valley with an industrial periphery. The model facility — the wildlife sanctuary the academy took recruits to visit on a field trip. A *Foundation town*: the newest, prettiest, most prosperous settlement on the spine. Manicured. Beautiful. *Wrong somehow.* Fire (industrial), Electric, Normal, some Steel.

**Outbound pacing:** ~3 hours. 2 in-station routes (sanctuary walks, facility edge). 2 rank missions + 1 story mission (Beat 2). ~10 trainers. Wild L26–31, trainers L28–33. **Commander battle** (gym-style, separate from Beat 2) for rank 4 (Senior → Specialist) — the most polished Foundation-adjacent ranger in the game. **Thorne visits the Flagship** for a second warm encounter with the player.

**BEAT 2 (separate mission, after the rank-up):** A **facility compliance audit** — the player shadows the commander checking the partnership-program wing against Foundation welfare metrics. Everything passes. The metrics are real, the audit is honest, the partnership Pokémon look healthy. **The player realises the metrics themselves are the hiding place** — a Pokémon is visibly tired in a way the checklist has no column for. The Quarry manifest snaps into focus: not as evidence of a discrepancy but as a thing the Foundation's framework was built to never measure. Every facility is in perfect compliance. That is the problem. Undeniable but still abstract.

**Return (post-Beat-3, walked back from Terminus):** the Foundation has fortified the Flagship. **Meren** is here defending the Foundation. The Meren fight is the penultimate major battle of the game. **Exact character shape and Bran implications deferred to a dedicated Meren/Bran session — placeholder only.** After Meren falls, Meren tells the player Thorne has gone to Linden — *"home, to finish what his family started."* The player takes the still-functioning train west.

**7. Marsh Station — the ranger outpost (no rank, walked-back only).** Downstream marsh where the river broadens into a wetland maze. A small *ranger outpost* settlement — a few houses, an inn, a Pokémon Center. Water, Poison, Bug, Ghost (will-o'-wisp / fog register), Dark, some Grass. **The eco-terrorist cell's old outpost** is deep in the marsh beyond — a pre-Withdrawal Ranger outpost preserved because the Foundation's metrics dismissed the marsh as low-value. The marsh absorbs much of the spine's pollution and is quietly abundant despite it.

**Reached only on the walk back from Terminus, not outbound.** ~2 hours. No commander battle. No rank. Rank 6 (Elite Ranger) is deliberately never awarded — the skip from rank 5 to rank 7 is diegetic.

**Ex-ranger cell presence:** the cell ghost-helps through the marsh. Enemies found already defeated. Campfires with supplies laid out. Paths cleared. The player never interacts with the cell directly. They are professionals in their own territory, doing what rangers do by the old method, in the one biome the Foundation never reached. The cell's presence is an extended silent demonstration that the stylus way still works.

**One of act 3's small recovered warmths lives here** — the marsh settlement's innkeeper, a person who stayed because someone had to, tending wounds the player may or may not notice in the quiet hour before the walk continues northwest to the Flagship.

**8. Terminus — the port town (rank 5, BEAT 3).** Coastal, polluted estuary where the river meets the sea. A *port town* older than the Foundation — fishing culture, maritime tradition, salt-stained architecture. The ocean is louder than the people. Fishing has been declining for a generation. Water, Ice (cold ocean), Steel (port), Dark.

**Pacing:** ~4 hours. 2 in-station routes (docks, old town) + 1 walked approach from where the train broke down mid-route. 1 rank mission + Beat 3. ~14 trainers. Wild L40–45, trainers L42–47. Commander battle for rank 5 (Specialist → Captain) — one routine rank mission (port security, local aid) before Beat 3 lands. The promotion is warm and professional. Nothing in it prepares the player.

**How the player arrives:** the train from Flagship fails mid-route (cause ambiguous). The player walks the remainder into Terminus through the outer marsh. The pollution is at its worst. Encounter tables visibly thin — fewer species, smaller populations.

**BEAT 3:** Immediately after rank 5. The player's next assigned task is routine dock work. In a back warehouse or during a manifest inspection, the player sees the thing the game does not soften — the cumulative wound of the entire spine arriving at the sea. **The specific scene needs its own dedicated design session.** Leading candidates: the Beat-7 Houndour pack being processed as decommissioned assets; a face from Linden on a manifest; a silent walk through the warehouse endpoint. See [story.md craft commitment #7](story.md#craft-commitments).

**After Beat 3:** the world has changed colour. No train. The player walks back northwest — through the Marsh, through Foundation combat, to the Flagship. The walk-back is ~3 hours of sustained traversal and combat (trainers L38–47). Foundation enforcers in the marsh — the first time Foundation-affiliated trainers are enemies. The ex-ranger cell ghost-helps. The Meren fight at the Flagship caps the walk.

#### The walk back — Terminus to Flagship

After Beat 3, the player walks northwest from Terminus through the Marsh to the Flagship. This is the game's back-half combat arc — Foundation enforcers, security Pokémon, and field agents deployed through the marsh and along the approach to the Flagship. ~3 hours of sustained traversal and combat. The ex-ranger cell's ghost-help is visible throughout (see station 7 above).

The walk reverses the direction of the outbound journey: the player, who has traveled east toward the sea for the whole second act, is now walking home. The terrain they saw through a train window — the pollution gradient, the extraction sites, the thinning encounter tables — they walk through on foot, fighting the Foundation's people on the Foundation's infrastructure. Act 3's tonal shift happens *through this traversal*, not in a separate silent pilgrimage.

**Foundation combat throughout.** This is the first time the player fights Foundation-affiliated trainers as *enemies*. Up to this point, Foundation staff were warm, helpful, compartmentalised. On the walk back they are enforcers. The tonal dissonance is deliberate: institutional violence looks exactly like institutional kindness, with uniforms and professional courtesy, except the Pokémon are security-grade and the battles are hard.

**The Meren fight at the Flagship** caps the walk-back. See station 6 (Flagship return) above.

#### Type coverage

The station layout is engineered to give the player a roughly complete team-building toolkit by mid-game:

| By the time the player has reached | They have access to |
|---|---|
| End of the academy arc (station 3) | Grass, Bug, Normal, Flying, Water |
| End of quarry posting (station 4) | + Rock, Ground, Fighting, Steel, cave access |
| End of jungle station (station 5) | + Poison, Psychic |
| End of flagship (station 6) | + Fire, Electric |
| Marsh (station 7) | + Ghost, Dark |
| Terminus (station 8) | + Ice |
| Tail (stations 1–2, visited late) | + Fairy, Dragon, deeper Ghost |

**Fire types in Ardenna are an *industrial* ecology, not a volcanic one.** There are no volcanoes along the spine. Fire types (Slugma, Magcargo, Numel, Houndour, Magmar, Torkoal etc.) colonise Company industrial facilities — smelters, foundries, kilns, heat exchangers — because the Company's extraction operations produce exactly the thermal environments these species thrive in. This does double thematic work:

1. It gives Ardenna Fire types without forcing a volcanic biome into a geography that doesn't want one.
2. It makes Fire-type encounter tables quietly reinforce the welfare-washing horror — the Company points at flourishing Fire populations as proof their facilities are "ecologically integrated," and they are not technically wrong, and the populations also have the worst long-term health metrics on the spine by a significant margin.

**Fairy types in Ardenna are rare and geographically isolated** — they survive mainly in the tail's alpine fairy forest, where Xerneas's old influence is still present in the ecology. The player gets Fairy access late, right around the time they're learning to question the Company. This is mechanical foreshadowing: Fairy types are the inheritance Ardenna almost lost, and the player's first Fairy encounter should feel like meeting something that shouldn't still exist.

## The historical wound — the Withdrawal

About 25–30 years before the game starts, **Ardenna's guardian legendary withdrew**. Not in a battle. Not in a cataclysm. Quietly, and in a way no one fully understood at the time and still doesn't.

The legendary is **Xerneas**. (See "The legendary" below for details and rules.)

What Ardenna experienced over the following years:

- Wild populations thinned dramatically. Migrations broke. Species that had been common became rare. A few species *left entirely* and never returned.
- The wilderness didn't die — it got *quieter* and *stranger*. The seasonal rhythms locals had relied on for generations stopped being reliable.
- Ranger work, which had been a respected but stable profession, became urgent and overwhelming. Many rangers died trying to manage populations they no longer understood. The Corps was hollowed out by years of attrition during the worst of it — not by one expedition but by sustained loss.
- Ardenna's economy, which depended heavily on its relationship with the wilderness, cratered. Settlements emptied. The old river-spine fell into disrepair.

Locals today talk about the Withdrawal the way people talk about a recession their parents lived through. Far enough in the past to feel finished. Close enough that the geography still carries marks.

## The Company's role in the recovery

The Company arrived in the back half of the crisis. Their pitch:

- Money, biologists, and a framework for *partnering* with surviving wild populations directly — protecting them, supplementing food sources, providing veterinary care, managing migrations actively.
- Reconstruction of the spine. They built the rail line alongside the old river, restoring the flow of medicine, food, mail, and rangers to remote settlements.
- Reconstruction of the Corps. New training, new equipment, a new academy — built on the site of an older institution that had not survived the lean years. The current Ardenna Ranger Academy is a *Company-built* institution from its foundations up.

**They were not lying.** The wild populations did recover. The region did stabilise. Many species are abundant again *because of* the Company's programs. They have receipts that go back decades and the receipts are real.

This is the thing the act-3 recontextualisation has to hold without breaking:

- The populations that recovered are not quite the same populations. They are tamer, more predictable, more dependent on Company-managed food sources, more willing to enter "partnership programs" because they were *raised* in a context where humans were the source of safety.
- A generation of wild Pokémon in Ardenna grew up never knowing Xerneas's influence. They imprinted on the Company instead.
- The species that left during the Withdrawal mostly never came back, and the Company quietly stopped trying to bring them back, because the absence of Xerneas's influence meant they couldn't survive in the manufactured ecology *and* the species that did recover were the ones that fit the Company's industrial logic. The recovery was real *and* selective.
- The Company's ideology (see [story.md](story.md#the-company)) is a *direct corruption* of what Xerneas's influence used to do. The legendary's actual gift was bonds of life. The Company's product is bonds of partnership. They are not opposing Xerneas — they are imitating it badly, at industrial scale, on populations that no longer have the original to compare against.

## The legendary — Xerneas

**Xerneas is the wound's centre and the finale's question.** Three rules govern its use in this hack:

1. **No counterpart.** No Yveltal. No Zygarde. No Kalos tie-in beyond the species itself. This is *Ardenna's* Xerneas. Its existence in canon Kalos is irrelevant to this story. Introducing a paired legendary would pull the story toward cosmic-balance territory and away from the human-scale tragedy the spine is built around.
2. **Eternal Tree form is the default.** Xerneas is dormant for the entire game. Its current form is the Eternal Tree, sleeping. The player never battles it as a normal encounter, never catches it casually, and may never see it in active form *at all* — depending on how the ending lands. The Tree is somewhere in Ardenna, possibly visible from the rail, possibly walked-past in act 1.
3. **The Company's exact role in the Withdrawal is permanently unresolved.** The game never confirms whether the Company caused Xerneas's dormancy, exploited an unrelated event, or merely arrived at the right time. This is deliberate. The horror works in all three readings, and is *worst* when the player cannot be sure.

### Why Xerneas fits

- Canon Xerneas is the life-giving legendary. A region whose wild populations thinned when Xerneas withdrew is the canon-consistent reading of what its absence would mean. Nothing has to be invented.
- Canon Xerneas already has a dormancy mechanic — after sharing its life force, it becomes the Eternal Tree and sleeps for ~1000 years. This is the *exact* mechanism for "withdrew, fell silent, no one is sure what happened." It didn't die. It didn't leave. It went dormant on a timescale longer than human memory, in a form most people would walk past without recognising.
- Fairy-type and bond-coded. The Company's welfare-washing rhetoric is a *direct* corruption of Xerneas's actual influence on the region — the inheritance the Company stole and rebranded.
- Gentle, beautiful, mythic — not destructive. Locals who remember the time before Xerneas withdrew remember it as "when the world felt alive," not as "when the monster ruled." Tonally compatible with act 1 wholesomeness.
- The eco-terrorist cell's position — *the bond is real and sacred and cannot be scaled* — is, in a deep sense, the Xerneas position. Most of them would never frame it that way. Some of them would.

### The Foundation's Tree plan

The Foundation has been working toward the Eternal Tree for decades. The plan is not a separate crime from the partnership program — it is the partnership program's **logical endpoint**.

Xerneas's dormant influence is the thing the partnership program has been imitating badly for two generations. The Foundation's long-term strategic goal is to *stop imitating it and channel it directly*:

- **Xerneas stays dormant.** The Foundation does *not* want it to wake. A waking Xerneas would reassert its own will and overwrite the Foundation's system. The dormancy is the Foundation's operating condition.
- **The Foundation has been quietly building infrastructure at or near the Tree for years**, framed publicly as "watershed preservation" and "restoration work at the source" — background dialogue the player may catch without flagging. The infrastructure is designed to channel Xerneas's dormant bond-influence through Foundation systems.
- **If activated, the plan makes every wild Pokémon in Ardenna a Foundation-aligned partner automatically**, without consent, without the friction of the retail-level partnership program. The partnership program becomes region-wide and instantaneous.
- **This is not a pivot for the Foundation. It is what the partnership program was always structurally heading toward.** Every welfare officer who sincerely believes in the program is correct *within its framework* — and the framework was always headed here. Thorne is finishing the work his grandfather started. The sincere people are not being betrayed; they are being promoted into a bigger version of the same sincere job.

The Tree plan is not revealed until Cassian's act-3 scene at Linden (see [Linden endgame above](#stations)). The player's own investigations are what accelerated the timeline — Thorne is executing now because the player's journey became evidence the Foundation's model is no longer stable. Even the player's resistance became Foundation leverage.

### The finale question

If Xerneas is the wound, the climactic question is not "stop the Foundation." It is **whether to wake the Tree.**

- **Not acting** means Thorne activates the infrastructure and the Foundation's channeled influence spreads — every Pokémon in Ardenna imprinted through Foundation systems, the partnership program scaled to its logical endpoint. The river continues to die.
- **Waking Xerneas** means the Foundation's manufactured ecology — the one Pokémon and humans across Ardenna now depend on — does not survive contact with the original. The infrastructure collapses. The harm stops. Unknown consequences for populations raised entirely inside the Foundation's framework.
- **The player's act at the Tree** — releasing their Foundation-gifted starter, performing the old Ranger gesture in Xerneas's presence — is a third answer. The Tree stirs but does not fully wake. The Foundation's infrastructure cannot hold against the reassertion of the thing it was imitating, even partially. Thorne's composure breaks because *the metric his machine is built on is moving*. The starter's return for the fight is the old gesture working in front of Thorne. Whether Xerneas fully wakes remains permanently unresolved — the player has narrowed the distance, not crossed it.
- There is no option that costs nothing. The CEO's argument ("you cannot take this from us without taking everything we built with it") gets the natural counter: *you are also taking the river from us, and you have been the entire time.*

This is the ending the [story spine](story.md) has been building toward. See [story.md — The finale](story.md#the-finale) for the full scene.

## Implications for design downstream

Locking these specific facts has consequences for other design areas:

- **The starter.** Player's starter is Company-bred (already locked in story.md). It loves humans because the Company spent three generations engineering ecologies in which humans were the source of safety. The starter's bond is real, manufactured, and a pale copy of an older relationship none of them ever knew. The CEO's finale argument lands on the starter specifically.
- **Wild encounters.** Spine-adjacent encounter tables should be slightly tamer, slightly more "domesticated" species, lower variety. Off-spine tables should be richer, stranger, with rarer species. This is mechanical foreshadowing the player can feel before they can articulate.
- **Pokédex curation.** The species that "left during the Withdrawal" — fairy-types especially, plus a small number of others — should be *absent* from Ardenna's regional dex except in specific late-game off-spine locations. Their absence is the wound made playable.
- **Mission design.** Early missions should *literally* take place along the spine for the player's benefit (protecting the rail, helping at Company facilities, escorting Company biologists). The act-3 recontextualisation of these missions is half the story's emotional weight.
- **Rank progression.** One gym-style commander battle per outbound station (ranks 2–5), rank 6 deliberately skipped, rank 7 from Cassian at Linden pre-finale. See [rank mapping above](#rank-mapping).
- **Tilesets and environmental art.** Whatever the river-degradation looks like (colour shift, foam, sparse encounters near the banks) needs to be *visible from the train* in the train-ride scenes. This is a real art-direction constraint.

## What is still open

- **Station names** — all stations use descriptive placeholders. A naming pass comes later.
- **Station commander personalities** — placeholder only; each outbound station has a gym-style battle but the commanders are uncharacterised. Needs its own pass.
- **The Thorne Foundation's visual identity** (logo, colour, typography)
- **The Meren/Bran arc** — Meren fights the player at the Flagship return. Exact character shape and Bran implications deferred to a dedicated session.
- **The 2–3 ex-ranger cell members** — names, prior Corps roles, current state. The cell ghost-helps through the Marsh but never speaks to the player directly.
- **Beat 3's specific scene** at Terminus — the highest-leverage unspecced moment in the story. Needs its own dedicated design session. Candidates in [story.md craft commitment #7](story.md#craft-commitments).
- **The cause of the train breakdown** on the Flagship → Terminus leg — mechanical failure, Foundation sabotage, or cell action. Left deliberately ambiguous in the doc; resolve if needed.
- **Visible-victim species at extraction sites** beyond Houndour packs (Machoke, Wailmer, Graveler remain placeholders)
- **Species "left during the Withdrawal"** — absent from the regional dex except in specific late-game off-spine locations. Needs a Pokédex curation pass.
- **Tile/encounter art direction for the river degradation** — the pollution gradient must be *visible from the train* in act 1 and walked-through in the walk-back.
- **What the old Ranger gesture actually looks like visually** — required for the finale, the coda, the ex-ranger scenes, and the veteran's act-2 demonstration.
- **The Foundation's Tree infrastructure** — what it looks like, how much of it is visible before the finale, whether the player can see it from the train in acts 1–2 without understanding it.
- **Level curve tuning** — the draft curve is anchored on ~L10 end-of-academy to ~L52 finale boss; late-evolving species are known to be inaccessible at this cap. Balance pass later.

**Resolved this session (2026-04-08/09):** station count (8), biome layout (mountains→sea), station traversal order, rank mapping (gym-style commanders, rank-6 skip, Cassian rank-7), level curve draft, Beat 1 (Quarry manifest discrepancy), Beat 2 (Flagship compliance audit), Tree plan (channeled Xerneas influence as partnership program endpoint), Linden endgame (Thorne visits family, Cassian reveals Tree plan + grants rank 7), walk-back structure (Terminus→Marsh→Flagship, Foundation combat, ex-ranger ghost-help), Meren at Flagship return.

**Resolved in earlier sessions:** Company name → Thorne Foundation; CEO → Tobias Thorne; region → Ardenna; wound → Xerneas dormancy / the Withdrawal; hybrid train/walk model; the Ranger stylus tradition and Foundation's Pokéball adoption; the finale shape at the Tree. See [decisions.md](../reference/decisions.md).
