LindenTown_PipsHouse_2F_MapScripts::
# 2 "data/maps/LindenTown_PipsHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LindenTown_PipsHouse_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

LindenTown_PipsHouse_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/LindenTown_PipsHouse_2F/scripts.pory"
	map_script_2 VAR_LINDEN_INTRO_STATE, 3, LindenTown_PipsHouse_2F_IntroTalk
	.2byte 0


LindenTown_PipsHouse_2F_IntroTalk::
# 10 "data/maps/LindenTown_PipsHouse_2F/scripts.pory"
	lockall
# 11 "data/maps/LindenTown_PipsHouse_2F/scripts.pory"
	delay 40
# 12 "data/maps/LindenTown_PipsHouse_2F/scripts.pory"
	applymovement 1, LindenTown_PipsHouse_2F_PipWalkToPlayer
# 13 "data/maps/LindenTown_PipsHouse_2F/scripts.pory"
	waitmovement 0
# 14 "data/maps/LindenTown_PipsHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LindenTown_PipsHouse_2F_PlayerFaceLeft
# 15 "data/maps/LindenTown_PipsHouse_2F/scripts.pory"
	waitmovement 0
# 16 "data/maps/LindenTown_PipsHouse_2F/scripts.pory"
	msgbox LindenTown_PipsHouse_2F_IntroTalk_Text_0, MSGBOX_DEFAULT
# 17 "data/maps/LindenTown_PipsHouse_2F/scripts.pory"
	msgbox LindenTown_PipsHouse_2F_IntroTalk_Text_1, MSGBOX_DEFAULT
# 18 "data/maps/LindenTown_PipsHouse_2F/scripts.pory"
	msgbox LindenTown_PipsHouse_2F_IntroTalk_Text_2, MSGBOX_DEFAULT
# 19 "data/maps/LindenTown_PipsHouse_2F/scripts.pory"
	msgbox LindenTown_PipsHouse_2F_IntroTalk_Text_3, MSGBOX_DEFAULT
# 20 "data/maps/LindenTown_PipsHouse_2F/scripts.pory"
	msgbox LindenTown_PipsHouse_2F_IntroTalk_Text_4, MSGBOX_DEFAULT
# 21 "data/maps/LindenTown_PipsHouse_2F/scripts.pory"
	closemessage
# 22 "data/maps/LindenTown_PipsHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LindenTown_PipsHouse_2F_PlayerMoveOutOfTheWay
# 23 "data/maps/LindenTown_PipsHouse_2F/scripts.pory"
	applymovement 1, LindenTown_PipsHouse_2F_PipWalkOut
# 24 "data/maps/LindenTown_PipsHouse_2F/scripts.pory"
	waitmovement 0
# 25 "data/maps/LindenTown_PipsHouse_2F/scripts.pory"
	removeobject 1
# 26 "data/maps/LindenTown_PipsHouse_2F/scripts.pory"
	setflag FLAG_HIDE_LINDEN_PIPS_HOUSE_2F_PIP
# 27 "data/maps/LindenTown_PipsHouse_2F/scripts.pory"
	setvar VAR_LINDEN_INTRO_STATE, 4
# 28 "data/maps/LindenTown_PipsHouse_2F/scripts.pory"
	releaseall
	return


# 31 "data/maps/LindenTown_PipsHouse_2F/scripts.pory"
LindenTown_PipsHouse_2F_PipWalkToPlayer:
# 32 "data/maps/LindenTown_PipsHouse_2F/scripts.pory"
	walk_right
# 33 "data/maps/LindenTown_PipsHouse_2F/scripts.pory"
	walk_right
# 34 "data/maps/LindenTown_PipsHouse_2F/scripts.pory"
	walk_right
# 35 "data/maps/LindenTown_PipsHouse_2F/scripts.pory"
	walk_right
# 36 "data/maps/LindenTown_PipsHouse_2F/scripts.pory"
	walk_right
# 37 "data/maps/LindenTown_PipsHouse_2F/scripts.pory"
	walk_right
	step_end

# 40 "data/maps/LindenTown_PipsHouse_2F/scripts.pory"
LindenTown_PipsHouse_2F_PlayerFaceLeft:
# 41 "data/maps/LindenTown_PipsHouse_2F/scripts.pory"
	walk_in_place_left
	step_end

# 44 "data/maps/LindenTown_PipsHouse_2F/scripts.pory"
LindenTown_PipsHouse_2F_PlayerMoveOutOfTheWay:
# 45 "data/maps/LindenTown_PipsHouse_2F/scripts.pory"
	walk_right
# 46 "data/maps/LindenTown_PipsHouse_2F/scripts.pory"
	walk_in_place_left
	step_end

# 49 "data/maps/LindenTown_PipsHouse_2F/scripts.pory"
LindenTown_PipsHouse_2F_PipWalkOut:
# 50 "data/maps/LindenTown_PipsHouse_2F/scripts.pory"
	walk_right
# 51 "data/maps/LindenTown_PipsHouse_2F/scripts.pory"
	walk_up
	step_end

LindenTown_PipsHouse_2F_IntroTalk_Text_0:
# 16 "data/maps/LindenTown_PipsHouse_2F/scripts.pory"
	.string "Pip: Oh... {PLAYER}. You made it.$"

LindenTown_PipsHouse_2F_IntroTalk_Text_1:
# 17 "data/maps/LindenTown_PipsHouse_2F/scripts.pory"
	.string "Pip: I've been up since… I don't know\n"
	.string "when.$"

LindenTown_PipsHouse_2F_IntroTalk_Text_2:
# 18 "data/maps/LindenTown_PipsHouse_2F/scripts.pory"
	.string "Pip: Kept checking my bag. I think I've\n"
	.string "checked it three times.$"

LindenTown_PipsHouse_2F_IntroTalk_Text_3:
# 19 "data/maps/LindenTown_PipsHouse_2F/scripts.pory"
	.string "Pip: I'm really glad it's you and me\n"
	.string "today.\p"
	.string "I don't think I could do this on my own.$"

LindenTown_PipsHouse_2F_IntroTalk_Text_4:
# 20 "data/maps/LindenTown_PipsHouse_2F/scripts.pory"
	.string "Pip: …I just have to grab some things\n"
	.string "from downstairs.\p"
	.string "I'll see you at the academy.$"
