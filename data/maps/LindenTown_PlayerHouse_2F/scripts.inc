LindenTown_PlayerHouse_2F_MapScripts::
# 2 "data/maps/LindenTown_PlayerHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LindenTown_PlayerHouse_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

LindenTown_PlayerHouse_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/LindenTown_PlayerHouse_2F/scripts.pory"
	map_script_2 VAR_LINDEN_INTRO_STATE, 0, LindenTown_PlayerHouse_2F_WakeUpScene
	.2byte 0


LindenTown_PlayerHouse_2F_WakeUpScene::
# 10 "data/maps/LindenTown_PlayerHouse_2F/scripts.pory"
	lockall
# 11 "data/maps/LindenTown_PlayerHouse_2F/scripts.pory"
	delay 40
# 12 "data/maps/LindenTown_PlayerHouse_2F/scripts.pory"
	applymovement 1, LindenTown_PlayerHouse_2F_MumWalkToBed
# 13 "data/maps/LindenTown_PlayerHouse_2F/scripts.pory"
	waitmovement 0
# 14 "data/maps/LindenTown_PlayerHouse_2F/scripts.pory"
	msgbox LindenTown_PlayerHouse_2F_WakeUpScene_Text_0, MSGBOX_DEFAULT
# 15 "data/maps/LindenTown_PlayerHouse_2F/scripts.pory"
	msgbox LindenTown_PlayerHouse_2F_WakeUpScene_Text_1, MSGBOX_DEFAULT
# 16 "data/maps/LindenTown_PlayerHouse_2F/scripts.pory"
	msgbox LindenTown_PlayerHouse_2F_WakeUpScene_Text_2, MSGBOX_DEFAULT
# 17 "data/maps/LindenTown_PlayerHouse_2F/scripts.pory"
	closemessage
# 18 "data/maps/LindenTown_PlayerHouse_2F/scripts.pory"
	applymovement 1, LindenTown_PlayerHouse_2F_MumWalkDownstairs
# 19 "data/maps/LindenTown_PlayerHouse_2F/scripts.pory"
	waitmovement 0
# 20 "data/maps/LindenTown_PlayerHouse_2F/scripts.pory"
	removeobject 1
# 21 "data/maps/LindenTown_PlayerHouse_2F/scripts.pory"
	setflag FLAG_HIDE_LINDEN_MUM_2F
# 22 "data/maps/LindenTown_PlayerHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LindenTown_PlayerHouse_2F_PlayerGetUp
# 23 "data/maps/LindenTown_PlayerHouse_2F/scripts.pory"
	waitmovement 0
# 24 "data/maps/LindenTown_PlayerHouse_2F/scripts.pory"
	setvar VAR_LINDEN_INTRO_STATE, 1
# 25 "data/maps/LindenTown_PlayerHouse_2F/scripts.pory"
	releaseall
	return


# 29 "data/maps/LindenTown_PlayerHouse_2F/scripts.pory"
LindenTown_PlayerHouse_2F_PlayerGetUp:
# 30 "data/maps/LindenTown_PlayerHouse_2F/scripts.pory"
	walk_in_place_right
# 31 "data/maps/LindenTown_PlayerHouse_2F/scripts.pory"
	delay_16
# 32 "data/maps/LindenTown_PlayerHouse_2F/scripts.pory"
	walk_right
	step_end

# 35 "data/maps/LindenTown_PlayerHouse_2F/scripts.pory"
LindenTown_PlayerHouse_2F_MumWalkToBed:
# 36 "data/maps/LindenTown_PlayerHouse_2F/scripts.pory"
	walk_down
# 37 "data/maps/LindenTown_PlayerHouse_2F/scripts.pory"
	walk_down
# 38 "data/maps/LindenTown_PlayerHouse_2F/scripts.pory"
	walk_left
# 39 "data/maps/LindenTown_PlayerHouse_2F/scripts.pory"
	walk_left
# 40 "data/maps/LindenTown_PlayerHouse_2F/scripts.pory"
	walk_left
# 41 "data/maps/LindenTown_PlayerHouse_2F/scripts.pory"
	walk_left
# 42 "data/maps/LindenTown_PlayerHouse_2F/scripts.pory"
	walk_down
# 43 "data/maps/LindenTown_PlayerHouse_2F/scripts.pory"
	walk_left
	step_end

# 46 "data/maps/LindenTown_PlayerHouse_2F/scripts.pory"
LindenTown_PlayerHouse_2F_MumWalkDownstairs:
# 47 "data/maps/LindenTown_PlayerHouse_2F/scripts.pory"
	walk_right
# 48 "data/maps/LindenTown_PlayerHouse_2F/scripts.pory"
	walk_right
# 49 "data/maps/LindenTown_PlayerHouse_2F/scripts.pory"
	walk_right
# 50 "data/maps/LindenTown_PlayerHouse_2F/scripts.pory"
	walk_right
# 51 "data/maps/LindenTown_PlayerHouse_2F/scripts.pory"
	walk_up
# 52 "data/maps/LindenTown_PlayerHouse_2F/scripts.pory"
	walk_right
# 53 "data/maps/LindenTown_PlayerHouse_2F/scripts.pory"
	walk_up
# 54 "data/maps/LindenTown_PlayerHouse_2F/scripts.pory"
	walk_up
	step_end

LindenTown_PlayerHouse_2F_WakeUpScene_Text_0:
# 14 "data/maps/LindenTown_PlayerHouse_2F/scripts.pory"
	.string "Mum: {PLAYER}! Wake up, sleepyhead!$"

LindenTown_PlayerHouse_2F_WakeUpScene_Text_1:
# 15 "data/maps/LindenTown_PlayerHouse_2F/scripts.pory"
	.string "Mum: It's graduation day!\n"
	.string "You don't want to be late!$"

LindenTown_PlayerHouse_2F_WakeUpScene_Text_2:
# 16 "data/maps/LindenTown_PlayerHouse_2F/scripts.pory"
	.string "Mum: Pip will be waiting for you.\n"
	.string "Get dressed and come downstairs!$"
