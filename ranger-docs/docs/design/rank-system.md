# Rank System

Replaces the 8-badge structure. Same underlying progression gates, reframed as Ranger Corps promotions.

## Ranks

| # | Rank | Notes |
|---|------|-------|
| 0 | Cadet | Starting state |
| 1 | Ranger | First promotion — end of training arc (Academy graduation) |
| 2 | Field Ranger | Quarry station commander battle |
| 3 | Senior Ranger | Jungle station commander battle |
| 4 | Ranger Specialist | Flagship station commander battle |
| 5 | Ranger Captain | Terminus station commander battle |
| 6 | ~~Elite Ranger~~ | **Deliberately skipped.** Never awarded. |
| 7 | Ranger Commander | Cassian promotes the player at Linden, skipping rank 6 |

**Rank 6 skip:** The player is promoted directly from rank 5 (Captain) to rank 7 (Commander) by Cassian at Linden as the Corps's last institutional act. The skip is diegetic — the Corps's promotion structure has broken and Cassian is making a two-step jump he has no authority to make. *"There's nothing between Captain and Commander that matters any more. Take both."* See [setting.md — Rank mapping](setting.md#rank-mapping) and [story.md — The finale](story.md#the-finale).

Names are placeholder — likely to change once the setting and Ranger Corps fiction are nailed down.

## Implementation

Use a single var, **not** a flag per rank.

```c
// include/constants/ranger_ranks.h (to create)
#define RANK_CADET             0
#define RANK_RANGER            1
#define RANK_FIELD_RANGER      2
#define RANK_SENIOR_RANGER     3
#define RANK_RANGER_SPECIALIST 4
#define RANK_RANGER_CAPTAIN    5
#define RANK_ELITE_RANGER      6
#define RANK_RANGER_COMMANDER  7
```

Pick an unused `VAR_*` slot for `VAR_PLAYER_RANK`. Scripts gate on rank with comparisons:

```
if (var(VAR_PLAYER_RANK) >= RANK_FIELD_RANGER) { ... }
```

## Rank-up beat

Per the [Pillars](../vision/pillars.md), rank-up moments get custom presentation budget. Each promotion should:

1. Trigger from a debrief NPC at a Ranger Base
2. Play a dedicated rank-up animation/screen (custom — TBD)
3. Increment `VAR_PLAYER_RANK`
4. Unlock the next region/mission territory
5. Sometimes hand over new gear (see [Ranger Gear](ranger-gear.md))

## Replaces what

| Vanilla | Ranger equivalent |
|---|---|
| Gym badge | Rank promotion |
| Gym leader fight | Mission climax (varies — battle, escort, time-pressured rescue, boss) |
| Badge ceremony | Debrief + rank-up animation |
| HM access gate | Gear access gate (often, not always) |
| Trainer cap obedience | Rank-based obedience (same mechanic, reskinned) |
