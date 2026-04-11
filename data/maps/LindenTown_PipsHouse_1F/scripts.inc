LindenTown_PipsHouse_1F_MapScripts::
# 2 "data/maps/LindenTown_PipsHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LindenTown_PipsHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

LindenTown_PipsHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/LindenTown_PipsHouse_1F/scripts.pory"
	map_script_2 VAR_LINDEN_INTRO_STATE, 2, LindenTown_PipsHouse_1F_InitialScene
	.2byte 0


LindenTown_PipsHouse_1F_InitialScene::
# 10 "data/maps/LindenTown_PipsHouse_1F/scripts.pory"
	lockall
# 11 "data/maps/LindenTown_PipsHouse_1F/scripts.pory"
	applymovement 2, LindenTown_PipsHouse_1F_PoppyWalkToPlayer
# 12 "data/maps/LindenTown_PipsHouse_1F/scripts.pory"
	waitmovement 0
# 13 "data/maps/LindenTown_PipsHouse_1F/scripts.pory"
	msgbox LindenTown_PipsHouse_1F_InitialScene_Text_0, MSGBOX_DEFAULT
# 14 "data/maps/LindenTown_PipsHouse_1F/scripts.pory"
	msgbox LindenTown_PipsHouse_1F_InitialScene_Text_1, MSGBOX_DEFAULT
# 15 "data/maps/LindenTown_PipsHouse_1F/scripts.pory"
	closemessage
# 16 "data/maps/LindenTown_PipsHouse_1F/scripts.pory"
	applymovement 2, LindenTown_PipsHouse_1F_PoppyWalkAway
# 17 "data/maps/LindenTown_PipsHouse_1F/scripts.pory"
	waitmovement 0
# 18 "data/maps/LindenTown_PipsHouse_1F/scripts.pory"
	setvar VAR_LINDEN_INTRO_STATE, 3
# 19 "data/maps/LindenTown_PipsHouse_1F/scripts.pory"
	releaseall
	return


# 22 "data/maps/LindenTown_PipsHouse_1F/scripts.pory"
LindenTown_PipsHouse_1F_PoppyWalkToPlayer:
# 23 "data/maps/LindenTown_PipsHouse_1F/scripts.pory"
	walk_fast_right
# 24 "data/maps/LindenTown_PipsHouse_1F/scripts.pory"
	walk_fast_right
# 25 "data/maps/LindenTown_PipsHouse_1F/scripts.pory"
	walk_fast_down
# 26 "data/maps/LindenTown_PipsHouse_1F/scripts.pory"
	walk_fast_right
# 27 "data/maps/LindenTown_PipsHouse_1F/scripts.pory"
	walk_fast_down
# 28 "data/maps/LindenTown_PipsHouse_1F/scripts.pory"
	walk_fast_down
	step_end

# 31 "data/maps/LindenTown_PipsHouse_1F/scripts.pory"
LindenTown_PipsHouse_1F_PoppyWalkAway:
# 32 "data/maps/LindenTown_PipsHouse_1F/scripts.pory"
	walk_fast_up
# 33 "data/maps/LindenTown_PipsHouse_1F/scripts.pory"
	walk_fast_up
# 34 "data/maps/LindenTown_PipsHouse_1F/scripts.pory"
	walk_fast_up
# 35 "data/maps/LindenTown_PipsHouse_1F/scripts.pory"
	walk_fast_left
# 36 "data/maps/LindenTown_PipsHouse_1F/scripts.pory"
	walk_fast_left
# 37 "data/maps/LindenTown_PipsHouse_1F/scripts.pory"
	walk_fast_left
	step_end

LindenTown_PipsHouse_1F_PoppyTalk::
# 43 "data/maps/LindenTown_PipsHouse_1F/scripts.pory"
	lock
# 44 "data/maps/LindenTown_PipsHouse_1F/scripts.pory"
	faceplayer
# 45 "data/maps/LindenTown_PipsHouse_1F/scripts.pory"
	msgbox LindenTown_PipsHouse_1F_PoppyTalk_Text_0, MSGBOX_DEFAULT
# 46 "data/maps/LindenTown_PipsHouse_1F/scripts.pory"
	msgbox LindenTown_PipsHouse_1F_PoppyTalk_Text_1, MSGBOX_DEFAULT
# 47 "data/maps/LindenTown_PipsHouse_1F/scripts.pory"
	closemessage
# 48 "data/maps/LindenTown_PipsHouse_1F/scripts.pory"
	release
	return


LindenTown_PipsHouse_1F_MumTalk::
# 54 "data/maps/LindenTown_PipsHouse_1F/scripts.pory"
	lock
# 55 "data/maps/LindenTown_PipsHouse_1F/scripts.pory"
	faceplayer
# 56 "data/maps/LindenTown_PipsHouse_1F/scripts.pory"
	msgbox LindenTown_PipsHouse_1F_MumTalk_Text_0, MSGBOX_DEFAULT
# 57 "data/maps/LindenTown_PipsHouse_1F/scripts.pory"
	msgbox LindenTown_PipsHouse_1F_MumTalk_Text_1, MSGBOX_DEFAULT
# 58 "data/maps/LindenTown_PipsHouse_1F/scripts.pory"
	closemessage
# 59 "data/maps/LindenTown_PipsHouse_1F/scripts.pory"
	release
	return


LindenTown_PipsHouse_1F_InitialScene_Text_0:
# 13 "data/maps/LindenTown_PipsHouse_1F/scripts.pory"
	.string "Poppy: Hey, {PLAYER}!\n"
	.string "Pip's waiting for you upstairs!$"

LindenTown_PipsHouse_1F_InitialScene_Text_1:
# 14 "data/maps/LindenTown_PipsHouse_1F/scripts.pory"
	.string "Poppy: Good luck on your graduation!\n"
	.string "One day, I'm gonna be a great ranger\l"
	.string "like you and Pip!$"

LindenTown_PipsHouse_1F_PoppyTalk_Text_0:
# 45 "data/maps/LindenTown_PipsHouse_1F/scripts.pory"
	.string "Poppy: {PLAYER}! Is it really\n"
	.string "graduation day?$"

LindenTown_PipsHouse_1F_PoppyTalk_Text_1:
# 46 "data/maps/LindenTown_PipsHouse_1F/scripts.pory"
	.string "Poppy: Pip says they're gonna be the\n"
	.string "best ranger ever.\p"
	.string "I'm gonna be one too when I'm big!\n"
	.string "Just like you and Pip!$"

LindenTown_PipsHouse_1F_MumTalk_Text_0:
# 56 "data/maps/LindenTown_PipsHouse_1F/scripts.pory"
	.string "Pip's Mum: {PLAYER}, good morning!\n"
	.string "Big day for you two, isn't it?$"

LindenTown_PipsHouse_1F_MumTalk_Text_1:
# 57 "data/maps/LindenTown_PipsHouse_1F/scripts.pory"
	.string "Pip's Mum: Pip was up half the night\n"
	.string "fretting over it.\p"
	.string "You'll look after each other out there,\n"
	.string "won't you?$"
