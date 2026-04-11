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
# 18 "data/maps/LindenTown_PlayerHouse_1F/scripts.pory"
	specialvar VAR_RESULT, CalculatePlayerPartyCount
# 19 "data/maps/LindenTown_PlayerHouse_1F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LindenTown_PlayerHouse_1F_MumTalkScript_5
# 23 "data/maps/LindenTown_PlayerHouse_1F/scripts.pory"
	msgbox LindenTown_PlayerHouse_1F_MumTalkScript_Text_3, MSGBOX_DEFAULT
# 24 "data/maps/LindenTown_PlayerHouse_1F/scripts.pory"
	closemessage
# 25 "data/maps/LindenTown_PlayerHouse_1F/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 26 "data/maps/LindenTown_PlayerHouse_1F/scripts.pory"
	incrementgamestat GAME_STAT_RESTED_AT_HOME
# 27 "data/maps/LindenTown_PlayerHouse_1F/scripts.pory"
	msgbox LindenTown_PlayerHouse_1F_MumTalkScript_Text_4, MSGBOX_DEFAULT
# 28 "data/maps/LindenTown_PlayerHouse_1F/scripts.pory"
	closemessage
LindenTown_PlayerHouse_1F_MumTalkScript_1:
# 31 "data/maps/LindenTown_PlayerHouse_1F/scripts.pory"
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

LindenTown_PlayerHouse_1F_MumTalkScript_5:
# 20 "data/maps/LindenTown_PlayerHouse_1F/scripts.pory"
	msgbox LindenTown_PlayerHouse_1F_MumTalkScript_Text_2, MSGBOX_DEFAULT
# 21 "data/maps/LindenTown_PlayerHouse_1F/scripts.pory"
	closemessage
	goto LindenTown_PlayerHouse_1F_MumTalkScript_1


LindenTown_PlayerHouse_1F_InitialTransition::
# 35 "data/maps/LindenTown_PlayerHouse_1F/scripts.pory"
	compare VAR_LINDEN_INTRO_STATE, 1
	goto_if_eq LindenTown_PlayerHouse_1F_InitialTransition_1
	return

LindenTown_PlayerHouse_1F_InitialTransition_1:
# 36 "data/maps/LindenTown_PlayerHouse_1F/scripts.pory"
	setobjectxyperm 1, 1, 3
# 37 "data/maps/LindenTown_PlayerHouse_1F/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_UP
	return


LindenTown_PlayerHouse_1F_InitialScene::
# 42 "data/maps/LindenTown_PlayerHouse_1F/scripts.pory"
	lockall
# 43 "data/maps/LindenTown_PlayerHouse_1F/scripts.pory"
	applymovement 1, LindenTown_PlayerHouse_1F_MumWalkToPlayer
# 44 "data/maps/LindenTown_PlayerHouse_1F/scripts.pory"
	waitmovement 0
# 45 "data/maps/LindenTown_PlayerHouse_1F/scripts.pory"
	msgbox LindenTown_PlayerHouse_1F_InitialScene_Text_0, MSGBOX_DEFAULT
# 46 "data/maps/LindenTown_PlayerHouse_1F/scripts.pory"
	msgbox LindenTown_PlayerHouse_1F_InitialScene_Text_1, MSGBOX_DEFAULT
# 47 "data/maps/LindenTown_PlayerHouse_1F/scripts.pory"
	closemessage
# 48 "data/maps/LindenTown_PlayerHouse_1F/scripts.pory"
	applymovement 1, LindenTown_PlayerHouse_1F_MumWalktoTable
# 49 "data/maps/LindenTown_PlayerHouse_1F/scripts.pory"
	waitmovement 0
# 50 "data/maps/LindenTown_PlayerHouse_1F/scripts.pory"
	setvar VAR_LINDEN_INTRO_STATE, 2
# 51 "data/maps/LindenTown_PlayerHouse_1F/scripts.pory"
	releaseall
	return


# 54 "data/maps/LindenTown_PlayerHouse_1F/scripts.pory"
LindenTown_PlayerHouse_1F_MumWalkToPlayer:
# 55 "data/maps/LindenTown_PlayerHouse_1F/scripts.pory"
	walk_right
# 56 "data/maps/LindenTown_PlayerHouse_1F/scripts.pory"
	walk_right
# 57 "data/maps/LindenTown_PlayerHouse_1F/scripts.pory"
	walk_right
# 58 "data/maps/LindenTown_PlayerHouse_1F/scripts.pory"
	walk_right
# 59 "data/maps/LindenTown_PlayerHouse_1F/scripts.pory"
	walk_right
# 60 "data/maps/LindenTown_PlayerHouse_1F/scripts.pory"
	walk_right
	step_end

# 63 "data/maps/LindenTown_PlayerHouse_1F/scripts.pory"
LindenTown_PlayerHouse_1F_MumWalktoTable:
# 64 "data/maps/LindenTown_PlayerHouse_1F/scripts.pory"
	walk_down
# 65 "data/maps/LindenTown_PlayerHouse_1F/scripts.pory"
	walk_down
# 66 "data/maps/LindenTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 67 "data/maps/LindenTown_PlayerHouse_1F/scripts.pory"
	walk_left
# 68 "data/maps/LindenTown_PlayerHouse_1F/scripts.pory"
	walk_down
# 69 "data/maps/LindenTown_PlayerHouse_1F/scripts.pory"
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
# 20 "data/maps/LindenTown_PlayerHouse_1F/scripts.pory"
	.string "Mum: Hi, {PLAYER}!\n"
	.string "Take care of yourself out there.$"

LindenTown_PlayerHouse_1F_MumTalkScript_Text_3:
# 23 "data/maps/LindenTown_PlayerHouse_1F/scripts.pory"
	.string "Mum: {PLAYER}! You've been working so\n"
	.string "hard.\n"
	.string "Let me take care of your Pokémon.$"

LindenTown_PlayerHouse_1F_MumTalkScript_Text_4:
# 27 "data/maps/LindenTown_PlayerHouse_1F/scripts.pory"
	.string "Mum: There, all better.\n"
	.string "Be careful out there, okay?$"

LindenTown_PlayerHouse_1F_InitialScene_Text_0:
# 45 "data/maps/LindenTown_PlayerHouse_1F/scripts.pory"
	.string "Mum: There you are!\n"
	.string "Breakfast is on the table.$"

LindenTown_PlayerHouse_1F_InitialScene_Text_1:
# 46 "data/maps/LindenTown_PlayerHouse_1F/scripts.pory"
	.string "Mum: Pip's been waiting for you.\n"
	.string "You'd better head over to their house!$"
