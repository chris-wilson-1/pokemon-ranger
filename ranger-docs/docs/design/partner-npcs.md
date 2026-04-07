# Partner NPCs

Partner Rangers travel with the player on missions — characters first, gameplay second.

## Goals

- Give the world recurring voices the player can attach to
- Make missions feel like *deployments* not solo errands
- Provide a framing device for tutorials, banter, and exposition that doesn't rely on monologuing NPCs
- Carry emotional weight when the [tone shifts](../vision/tone-and-arc.md)

## Mechanical approach

Use the expansion's follower NPC support. Per partner:

- Overworld follower sprite that trails the player on assigned missions
- Flag-checked dialogue that fires on key environmental triggers (entering a new map, examining a notable object, after a battle)
- Multi Battle support at scripted story moments (the partner brings their own team)
- Swap in/out per story act — different partners for different regions/missions

## What partners are *not*

- They don't auto-battle for the player in the overworld
- They don't replace the player's team
- They don't follow the player everywhere — they're assigned to *missions*, not glued on as pets

## Roster (placeholder)

To be designed once the story turn and faction structure are nailed down. Aim for 3–5 distinct partners across the campaign, each tied to a specific arc.

## Risk

This is the most technically involved feature on the design board. If follower scripting proves painful, downgrade gracefully:

- **Tier 1 (must-have):** partner appears in cutscenes and as a multi-battle ally at climaxes
- **Tier 2 (target):** partner follows during assigned missions with contextual dialogue
- **Tier 3 (stretch):** partner reacts to specific environmental triggers and remembers prior interactions

Ship Tier 1 minimum, aim for Tier 2.
