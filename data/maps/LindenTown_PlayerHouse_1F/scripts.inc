LindenTown_PlayerHouse_1F_MapScripts::
# 2 "data/maps/LindenTown_PlayerHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LindenTown_PlayerHouse_1F_InitialTransition
# 3 "data/maps/LindenTown_PlayerHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LindenTown_PlayerHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

LindenTown_PlayerHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/LindenTown_PlayerHouse_1F/scripts.pory"
	map_script_2 VAR_LINDEN_INTRO_STATE, 1, LindenTown_PlayerHouse_1F_InitialScene
	.2byte 0


LindenTown_PlayerHouse_1F_MumTalkScript::
# 11 "data/maps/LindenTown_PlayerHouse_1F/scripts.pory"
	lock
# 12 "data/maps/LindenTown_PlayerHouse_1F/scripts.pory"
	faceplayer
# 13 "data/maps/LindenTown_PlayerHouse_1F/scripts.pory"
	compare VAR_LINDEN_INTRO_STATE, 2
	goto_if_eq LindenTown_PlayerHouse_1F_MumTalkScript_2
# 19 "data/maps/LindenTown_PlayerHouse_1F/scripts.pory"
	msgbox LindenTown_PlayerHouse_1F_MumTalkScript_Text_2, MSGBOX_DEFAULT
# 20 "data/maps/LindenTown_PlayerHouse_1F/scripts.pory"
	closemessage
LindenTown_PlayerHouse_1F_MumTalkScript_1:
# 22 "data/maps/LindenTown_PlayerHouse_1F/scripts.pory"
	release
	return

LindenTown_PlayerHouse_1F_MumTalkScript_2:
# 14 "data/maps/LindenTown_PlayerHouse_1F/scripts.pory"
	msgbox LindenTown_PlayerHouse_1F_MumTalkScript_Text_0, MSGBOX_DEFAULT
# 15 "data/maps/LindenTown_PlayerHouse_1F/scripts.pory"
	msgbox LindenTown_PlayerHouse_1F_MumTalkScript_Text_1, MSGBOX_DEFAULT
# 16 "data/maps/LindenTown_PlayerHouse_1F/scripts.pory"
	closemessage
	goto LindenTown_PlayerHouse_1F_MumTalkScript_1


LindenTown_PlayerHouse_1F_InitialTransition::
# 26 "data/maps/LindenTown_PlayerHouse_1F/scripts.pory"
	compare VAR_LINDEN_INTRO_STATE, 1
	goto_if_eq LindenTown_PlayerHouse_1F_InitialTransition_1
	return

LindenTown_PlayerHouse_1F_InitialTransition_1:
# 27 "data/maps/LindenTown_PlayerHouse_1F/scripts.pory"
	setobjectxyperm 1, 1, 3
# 28 "data/maps/LindenTown_PlayerHouse_1F/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_UP
	return


LindenTown_PlayerHouse_1F_InitialScene::
# 33 "data/maps/LindenTown_PlayerHouse_1F/scripts.pory"
	lockall
# 34 "data/maps/LindenTown_PlayerHouse_1F/scripts.pory"
	applymovement 1, LindenTown_PlayerHouse_1F_MumWalkToPlayer
# 35 "data/maps/LindenTown_PlayerHouse_1F/scripts.pory"
	waitmovement 0
# 36 "data/maps/LindenTown_PlayerHouse_1F/scripts.pory"
	msgbox LindenTown_PlayerHouse_1F_InitialScene_Text_0, MSGBOX_DEFAULT
# 37 "data/maps/LindenTown_PlayerHouse_1F/scripts.pory"
	msgbox LindenTown_PlayerHouse_1F_InitialScene_Text_1, MSGBOX_DEFAULT
# 38 "data/maps/LindenTown_PlayerHouse_1F/scripts.pory"
	closemessage
# 39 "data/maps/LindenTown_PlayerHouse_1F/scripts.pory"
	applymovement 1, LindenTown_PlayerHouse_1F_MumWalktoTable
# 40 "data/maps/LindenTown_PlayerHouse_1F/scripts.pory"
	waitmovement 0
# 41 "data/maps/LindenTown_PlayerHouse_1F/scripts.pory"
	setvar VAR_LINDEN_INTRO_STATE, 2
# 42 "data/maps/LindenTown_PlayerHouse_1F/scripts.pory"
	releaseall
	return


# 45 "data/maps/LindenTown_PlayerHouse_1F/scripts.pory"
LindenTown_PlayerHouse_1F_MumWalkToPlayer:
# 46 "data/maps/LindenTown_PlayerHouse_1F/scripts.pory"
	walk_right
# 47 "data/maps/LindenTown_PlayerHouse_1F/scripts.pory"
	walk_right
# 48 "data/maps/LindenTown_PlayerHouse_1F/scripts.pory"
	walk_right
# 49 "data/maps/LindenTown_PlayerHouse_1F/scripts.pory"
	walk_right
# 50 "data/maps/LindenTown_PlayerHouse_1F/scripts.pory"
	walk_right
# 51 "data/maps/LindenTown_PlayerHouse_1F/scripts.pory"
	walk_right
	step_end

# 54 "data/maps/LindenTown_PlayerHouse_1F/scripts.pory"
LindenTown_PlayerHouse_1F_MumWalktoTable:
# 55 "data/maps/LindenTown_PlayerHouse_1F/scripts.pory"
	walk_down
# 56 "data/maps/LindenTown_PlayerHouse_1F/scripts.pory"
	walk_down
# 57 "data/maps/LindenTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 58 "data/maps/LindenTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 59 "data/maps/LindenTown_PlayerHouse_1F/scripts.pory"
	walk_down
# 60 "data/maps/LindenTown_PlayerHouse_1F/scripts.pory"
	walk_in_place_left
	step_end

LindenTown_PlayerHouse_1F_MumTalkScript_Text_0:
# 14 "data/maps/LindenTown_PlayerHouse_1F/scripts.pory"
	.string "Mum: Have you been talking to Pip?\n"
	.string "They've been waiting for you to come\l"
	.string "over!$"

LindenTown_PlayerHouse_1F_MumTalkScript_Text_1:
# 15 "data/maps/LindenTown_PlayerHouse_1F/scripts.pory"
	.string "Mum: You should head over to their\n"
	.string "house!$"

LindenTown_PlayerHouse_1F_MumTalkScript_Text_2:
# 19 "data/maps/LindenTown_PlayerHouse_1F/scripts.pory"
	.string "Mum: Hey son!$"

LindenTown_PlayerHouse_1F_InitialScene_Text_0:
# 36 "data/maps/LindenTown_PlayerHouse_1F/scripts.pory"
	.string "Mum: There you are!\n"
	.string "Breakfast is on the table.$"

LindenTown_PlayerHouse_1F_InitialScene_Text_1:
# 37 "data/maps/LindenTown_PlayerHouse_1F/scripts.pory"
	.string "Mum: Pip's been waiting you.\n"
	.string "You'd better head over to their house!$"
