LindenTown_RangerAcademy_1F_MapScripts::
# 2 "data/maps/LindenTown_RangerAcademy_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LindenTown_RangerAcademy_1F_MattyStairblock
# 3 "data/maps/LindenTown_RangerAcademy_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LindenTown_RangerAcademy_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

LindenTown_RangerAcademy_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/LindenTown_RangerAcademy_1F/scripts.pory"
	map_script_2 VAR_LINDEN_INTRO_STATE, 4, LindenTown_RangerAcademy_1F_BeatThreeEntry
	.2byte 0


LindenTown_RangerAcademy_1F_BeatThreeEntry::
# 12 "data/maps/LindenTown_RangerAcademy_1F/scripts.pory"
	lockall
# 13 "data/maps/LindenTown_RangerAcademy_1F/scripts.pory"
	delay 30
# 14 "data/maps/LindenTown_RangerAcademy_1F/scripts.pory"
	applymovement 2, LindenTown_RangerAcademy_1F_CassianStandsUp
# 15 "data/maps/LindenTown_RangerAcademy_1F/scripts.pory"
	waitmovement 0
# 16 "data/maps/LindenTown_RangerAcademy_1F/scripts.pory"
	msgbox LindenTown_RangerAcademy_1F_BeatThreeEntry_Text_0, MSGBOX_DEFAULT
# 17 "data/maps/LindenTown_RangerAcademy_1F/scripts.pory"
	msgbox LindenTown_RangerAcademy_1F_BeatThreeEntry_Text_1, MSGBOX_DEFAULT
# 18 "data/maps/LindenTown_RangerAcademy_1F/scripts.pory"
	applymovement 2, LindenTown_RangerAcademy_1F_CassianSitsDown
# 19 "data/maps/LindenTown_RangerAcademy_1F/scripts.pory"
	waitmovement 0
# 20 "data/maps/LindenTown_RangerAcademy_1F/scripts.pory"
	setvar VAR_LINDEN_INTRO_STATE, 5
# 21 "data/maps/LindenTown_RangerAcademy_1F/scripts.pory"
	releaseall
	return


# 24 "data/maps/LindenTown_RangerAcademy_1F/scripts.pory"
LindenTown_RangerAcademy_1F_CassianStandsUp:
# 25 "data/maps/LindenTown_RangerAcademy_1F/scripts.pory"
	walk_in_place_right
	step_end

# 28 "data/maps/LindenTown_RangerAcademy_1F/scripts.pory"
LindenTown_RangerAcademy_1F_CassianSitsDown:
# 29 "data/maps/LindenTown_RangerAcademy_1F/scripts.pory"
	walk_in_place_left
	step_end

LindenTown_RangerAcademy_1F_MattyStairblock::
# 35 "data/maps/LindenTown_RangerAcademy_1F/scripts.pory"
	compare VAR_LINDEN_INTRO_STATE, 5
	goto_if_lt LindenTown_RangerAcademy_1F_MattyStairblock_1
	return

LindenTown_RangerAcademy_1F_MattyStairblock_1:
# 36 "data/maps/LindenTown_RangerAcademy_1F/scripts.pory"
	setobjectxyperm 1, 11, 2
	return


LindenTown_RangerAcademy_1F_MattyTalk::
# 41 "data/maps/LindenTown_RangerAcademy_1F/scripts.pory"
	lock
# 42 "data/maps/LindenTown_RangerAcademy_1F/scripts.pory"
	faceplayer
# 43 "data/maps/LindenTown_RangerAcademy_1F/scripts.pory"
	compare VAR_LINDEN_INTRO_STATE, 5
	goto_if_eq LindenTown_RangerAcademy_1F_MattyTalk_2
# 55 "data/maps/LindenTown_RangerAcademy_1F/scripts.pory"
	compare VAR_LINDEN_INTRO_STATE, 6
	goto_if_ge LindenTown_RangerAcademy_1F_MattyTalk_3
LindenTown_RangerAcademy_1F_MattyTalk_1:
# 60 "data/maps/LindenTown_RangerAcademy_1F/scripts.pory"
	release
	return

LindenTown_RangerAcademy_1F_MattyTalk_2:
# 44 "data/maps/LindenTown_RangerAcademy_1F/scripts.pory"
	msgbox LindenTown_RangerAcademy_1F_MattyTalk_Text_0, MSGBOX_DEFAULT
# 45 "data/maps/LindenTown_RangerAcademy_1F/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
# 46 "data/maps/LindenTown_RangerAcademy_1F/scripts.pory"
	giveitem ITEM_POTION, 3
# 48 "data/maps/LindenTown_RangerAcademy_1F/scripts.pory"
	msgbox LindenTown_RangerAcademy_1F_MattyTalk_Text_1, MSGBOX_DEFAULT
# 50 "data/maps/LindenTown_RangerAcademy_1F/scripts.pory"
	msgbox LindenTown_RangerAcademy_1F_MattyTalk_Text_2, MSGBOX_DEFAULT
# 51 "data/maps/LindenTown_RangerAcademy_1F/scripts.pory"
	closemessage
# 52 "data/maps/LindenTown_RangerAcademy_1F/scripts.pory"
	applymovement 1, LindenTown_RangerAcademy_1F_MattyWalksToDesk
# 53 "data/maps/LindenTown_RangerAcademy_1F/scripts.pory"
	waitmovement 0
# 54 "data/maps/LindenTown_RangerAcademy_1F/scripts.pory"
	setvar VAR_LINDEN_INTRO_STATE, 6
	goto LindenTown_RangerAcademy_1F_MattyTalk_1

LindenTown_RangerAcademy_1F_MattyTalk_3:
# 57 "data/maps/LindenTown_RangerAcademy_1F/scripts.pory"
	msgbox LindenTown_RangerAcademy_1F_MattyTalk_Text_3, MSGBOX_DEFAULT
# 58 "data/maps/LindenTown_RangerAcademy_1F/scripts.pory"
	closemessage
	goto LindenTown_RangerAcademy_1F_MattyTalk_1


# 63 "data/maps/LindenTown_RangerAcademy_1F/scripts.pory"
LindenTown_RangerAcademy_1F_MattyWalksToDesk:
# 64 "data/maps/LindenTown_RangerAcademy_1F/scripts.pory"
	walk_right
# 65 "data/maps/LindenTown_RangerAcademy_1F/scripts.pory"
	walk_down
# 66 "data/maps/LindenTown_RangerAcademy_1F/scripts.pory"
	walk_down
# 67 "data/maps/LindenTown_RangerAcademy_1F/scripts.pory"
	walk_right
# 68 "data/maps/LindenTown_RangerAcademy_1F/scripts.pory"
	walk_in_place_down
	step_end

LindenTown_RangerAcademy_1F_CassianTalk::
# 72 "data/maps/LindenTown_RangerAcademy_1F/scripts.pory"
	lock
# 73 "data/maps/LindenTown_RangerAcademy_1F/scripts.pory"
	faceplayer
# 74 "data/maps/LindenTown_RangerAcademy_1F/scripts.pory"
	compare VAR_LINDEN_INTRO_STATE, 5
	goto_if_eq LindenTown_RangerAcademy_1F_CassianTalk_2
# 77 "data/maps/LindenTown_RangerAcademy_1F/scripts.pory"
	compare VAR_LINDEN_INTRO_STATE, 6
	goto_if_eq LindenTown_RangerAcademy_1F_CassianTalk_3
# 82 "data/maps/LindenTown_RangerAcademy_1F/scripts.pory"
	msgbox LindenTown_RangerAcademy_1F_CassianTalk_Text_2, MSGBOX_DEFAULT
LindenTown_RangerAcademy_1F_CassianTalk_1:
# 84 "data/maps/LindenTown_RangerAcademy_1F/scripts.pory"
	closemessage
# 85 "data/maps/LindenTown_RangerAcademy_1F/scripts.pory"
	release
	return

LindenTown_RangerAcademy_1F_CassianTalk_2:
# 76 "data/maps/LindenTown_RangerAcademy_1F/scripts.pory"
	msgbox LindenTown_RangerAcademy_1F_CassianTalk_Text_0, MSGBOX_DEFAULT
	goto LindenTown_RangerAcademy_1F_CassianTalk_1

LindenTown_RangerAcademy_1F_CassianTalk_3:
# 79 "data/maps/LindenTown_RangerAcademy_1F/scripts.pory"
	msgbox LindenTown_RangerAcademy_1F_CassianTalk_Text_1, MSGBOX_DEFAULT
	goto LindenTown_RangerAcademy_1F_CassianTalk_1


LindenTown_RangerAcademy_1F_BranTalk::
# 89 "data/maps/LindenTown_RangerAcademy_1F/scripts.pory"
	lock
# 90 "data/maps/LindenTown_RangerAcademy_1F/scripts.pory"
	faceplayer
# 91 "data/maps/LindenTown_RangerAcademy_1F/scripts.pory"
	msgbox LindenTown_RangerAcademy_1F_BranTalk_Text_0, MSGBOX_DEFAULT
# 92 "data/maps/LindenTown_RangerAcademy_1F/scripts.pory"
	closemessage
# 93 "data/maps/LindenTown_RangerAcademy_1F/scripts.pory"
	release
	return


LindenTown_RangerAcademy_1F_GenericNPC1Talk::
# 98 "data/maps/LindenTown_RangerAcademy_1F/scripts.pory"
	lock
# 99 "data/maps/LindenTown_RangerAcademy_1F/scripts.pory"
	faceplayer
# 100 "data/maps/LindenTown_RangerAcademy_1F/scripts.pory"
	msgbox LindenTown_RangerAcademy_1F_GenericNPC1Talk_Text_0, MSGBOX_DEFAULT
# 101 "data/maps/LindenTown_RangerAcademy_1F/scripts.pory"
	closemessage
# 102 "data/maps/LindenTown_RangerAcademy_1F/scripts.pory"
	release
	return


LindenTown_RangerAcademy_1F_GenericNPC2Talk::
# 106 "data/maps/LindenTown_RangerAcademy_1F/scripts.pory"
	lock
# 107 "data/maps/LindenTown_RangerAcademy_1F/scripts.pory"
	faceplayer
# 108 "data/maps/LindenTown_RangerAcademy_1F/scripts.pory"
	msgbox LindenTown_RangerAcademy_1F_GenericNPC2Talk_Text_0, MSGBOX_DEFAULT
# 109 "data/maps/LindenTown_RangerAcademy_1F/scripts.pory"
	closemessage
# 110 "data/maps/LindenTown_RangerAcademy_1F/scripts.pory"
	release
	return


LindenTown_RangerAcademy_1F_GenericNPC3Talk::
# 114 "data/maps/LindenTown_RangerAcademy_1F/scripts.pory"
	lock
# 115 "data/maps/LindenTown_RangerAcademy_1F/scripts.pory"
	faceplayer
# 116 "data/maps/LindenTown_RangerAcademy_1F/scripts.pory"
	msgbox LindenTown_RangerAcademy_1F_GenericNPC3Talk_Text_0, MSGBOX_DEFAULT
# 117 "data/maps/LindenTown_RangerAcademy_1F/scripts.pory"
	closemessage
# 118 "data/maps/LindenTown_RangerAcademy_1F/scripts.pory"
	release
	return


LindenTown_RangerAcademy_1F_BeatThreeEntry_Text_0:
# 16 "data/maps/LindenTown_RangerAcademy_1F/scripts.pory"
	.string "Cassian: {PLAYER}!\n"
	.string "There you are - come on in.$"

LindenTown_RangerAcademy_1F_BeatThreeEntry_Text_1:
# 17 "data/maps/LindenTown_RangerAcademy_1F/scripts.pory"
	.string "Cassian: Big day. Head over to Matty\n"
	.string "first - he's got your starter pack\l"
	.string "ready.\p"
	.string "I'll meet you upstairs when you're done.$"

LindenTown_RangerAcademy_1F_MattyTalk_Text_0:
# 44 "data/maps/LindenTown_RangerAcademy_1F/scripts.pory"
	.string "Matty: There you are! {PLAYER},\n"
	.string "right?\p"
	.string "All right - here's your starter kit.\n"
	.string "First-aid, potions, a few balls to get\l"
	.string "you started.$"

LindenTown_RangerAcademy_1F_MattyTalk_Text_1:
# 48 "data/maps/LindenTown_RangerAcademy_1F/scripts.pory"
	.string "Matty: My granddad used to call these\n"
	.string "the best tools we've got.\p"
	.string "Said they'd do you right as well as\n"
	.string "anything they used in his day.\p"
	.string "He'd know.$"

LindenTown_RangerAcademy_1F_MattyTalk_Text_2:
# 50 "data/maps/LindenTown_RangerAcademy_1F/scripts.pory"
	.string "Matty: Anyway - you're all set.\n"
	.string "Cassian's waiting for you upstairs.$"

LindenTown_RangerAcademy_1F_MattyTalk_Text_3:
# 57 "data/maps/LindenTown_RangerAcademy_1F/scripts.pory"
	.string "Matty: You got what you need?\n"
	.string "Go on up - don't keep them waiting.$"

LindenTown_RangerAcademy_1F_CassianTalk_Text_0:
# 76 "data/maps/LindenTown_RangerAcademy_1F/scripts.pory"
	.string "Cassian: Get your supplies from Matty\n"
	.string "first,\n"
	.string "then come find me upstairs.$"

LindenTown_RangerAcademy_1F_CassianTalk_Text_1:
# 79 "data/maps/LindenTown_RangerAcademy_1F/scripts.pory"
	.string "Cassian: All set? Head on up.\n"
	.string "I'll see you in the classroom.$"

LindenTown_RangerAcademy_1F_CassianTalk_Text_2:
# 82 "data/maps/LindenTown_RangerAcademy_1F/scripts.pory"
	.string "Cassian: Everything's ready for you\n"
	.string "upstairs.$"

LindenTown_RangerAcademy_1F_BranTalk_Text_0:
# 91 "data/maps/LindenTown_RangerAcademy_1F/scripts.pory"
	.string "Bran: Oh, look who finally showed up.\p"
	.string "Try not to embarrass yourself in the\n"
	.string "ceremony, yeah?$"

LindenTown_RangerAcademy_1F_GenericNPC1Talk_Text_0:
# 100 "data/maps/LindenTown_RangerAcademy_1F/scripts.pory"
	.string "Ranger: First graduation day I've been\n"
	.string "back for. Makes you remember yours,\l"
	.string "huh?$"

LindenTown_RangerAcademy_1F_GenericNPC2Talk_Text_0:
# 108 "data/maps/LindenTown_RangerAcademy_1F/scripts.pory"
	.string "Ranger: You three nervous? I was a\n"
	.string "wreck at mine. You'll be fine.$"

LindenTown_RangerAcademy_1F_GenericNPC3Talk_Text_0:
# 116 "data/maps/LindenTown_RangerAcademy_1F/scripts.pory"
	.string "Ranger: Welcome to the Corps, recruit.\n"
	.string "Stay sharp out there.$"
