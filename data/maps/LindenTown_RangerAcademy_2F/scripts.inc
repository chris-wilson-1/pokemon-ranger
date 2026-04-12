LindenTown_RangerAcademy_2F_MapScripts::
# 24 "data/maps/LindenTown_RangerAcademy_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LindenTown_RangerAcademy_2F_BeatFourTransition
# 25 "data/maps/LindenTown_RangerAcademy_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LindenTown_RangerAcademy_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

LindenTown_RangerAcademy_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 26 "data/maps/LindenTown_RangerAcademy_2F/scripts.pory"
	map_script_2 VAR_LINDEN_INTRO_STATE, 6, LindenTown_RangerAcademy_2F_GraduationScene
	.2byte 0


LindenTown_RangerAcademy_2F_BeatFourTransition::
# 31 "data/maps/LindenTown_RangerAcademy_2F/scripts.pory"
	compare VAR_LINDEN_INTRO_STATE, 6
	goto_if_eq LindenTown_RangerAcademy_2F_BeatFourTransition_1
	return

LindenTown_RangerAcademy_2F_BeatFourTransition_1:
# 33 "data/maps/LindenTown_RangerAcademy_2F/scripts.pory"
	setflag FLAG_HIDE_ACADEMY_1F_CASSIAN_BEAT3
# 34 "data/maps/LindenTown_RangerAcademy_2F/scripts.pory"
	setflag FLAG_HIDE_ACADEMY_1F_BRAN_BEAT3
# 36 "data/maps/LindenTown_RangerAcademy_2F/scripts.pory"
	clearflag FLAG_HIDE_ACADEMY_2F_CASSIAN_BEAT4
# 37 "data/maps/LindenTown_RangerAcademy_2F/scripts.pory"
	clearflag FLAG_HIDE_ACADEMY_2F_MEREN_BEAT4
# 38 "data/maps/LindenTown_RangerAcademy_2F/scripts.pory"
	clearflag FLAG_HIDE_ACADEMY_2F_PIP_BEAT4
# 39 "data/maps/LindenTown_RangerAcademy_2F/scripts.pory"
	clearflag FLAG_HIDE_ACADEMY_2F_BRAN_BEAT4
	return


LindenTown_RangerAcademy_2F_GraduationScene::
# 45 "data/maps/LindenTown_RangerAcademy_2F/scripts.pory"
	lockall
# 46 "data/maps/LindenTown_RangerAcademy_2F/scripts.pory"
	delay 40
# 47 "data/maps/LindenTown_RangerAcademy_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LindenTown_RangerAcademy_2F_PlayerTakesPosition
# 48 "data/maps/LindenTown_RangerAcademy_2F/scripts.pory"
	waitmovement 0
# 51 "data/maps/LindenTown_RangerAcademy_2F/scripts.pory"
	applymovement 4, LindenTown_RangerAcademy_2F_CassianStepsForward
# 52 "data/maps/LindenTown_RangerAcademy_2F/scripts.pory"
	waitmovement 0
# 53 "data/maps/LindenTown_RangerAcademy_2F/scripts.pory"
	msgbox LindenTown_RangerAcademy_2F_GraduationScene_Text_0, MSGBOX_DEFAULT
# 54 "data/maps/LindenTown_RangerAcademy_2F/scripts.pory"
	msgbox LindenTown_RangerAcademy_2F_GraduationScene_Text_1, MSGBOX_DEFAULT
# 55 "data/maps/LindenTown_RangerAcademy_2F/scripts.pory"
	msgbox LindenTown_RangerAcademy_2F_GraduationScene_Text_2, MSGBOX_DEFAULT
# 56 "data/maps/LindenTown_RangerAcademy_2F/scripts.pory"
	msgbox LindenTown_RangerAcademy_2F_GraduationScene_Text_3, MSGBOX_DEFAULT
# 57 "data/maps/LindenTown_RangerAcademy_2F/scripts.pory"
	msgbox LindenTown_RangerAcademy_2F_GraduationScene_Text_4, MSGBOX_DEFAULT
# 58 "data/maps/LindenTown_RangerAcademy_2F/scripts.pory"
	closemessage
# 59 "data/maps/LindenTown_RangerAcademy_2F/scripts.pory"
	delay 20
# 62 "data/maps/LindenTown_RangerAcademy_2F/scripts.pory"
	applymovement 3, LindenTown_RangerAcademy_2F_MerenStepsForward
# 63 "data/maps/LindenTown_RangerAcademy_2F/scripts.pory"
	waitmovement 0
# 64 "data/maps/LindenTown_RangerAcademy_2F/scripts.pory"
	msgbox LindenTown_RangerAcademy_2F_GraduationScene_Text_5, MSGBOX_DEFAULT
# 65 "data/maps/LindenTown_RangerAcademy_2F/scripts.pory"
	closemessage
# 66 "data/maps/LindenTown_RangerAcademy_2F/scripts.pory"
	delay 20
# 67 "data/maps/LindenTown_RangerAcademy_2F/scripts.pory"
	msgbox LindenTown_RangerAcademy_2F_GraduationScene_Text_6, MSGBOX_DEFAULT
# 68 "data/maps/LindenTown_RangerAcademy_2F/scripts.pory"
	msgbox LindenTown_RangerAcademy_2F_GraduationScene_Text_7, MSGBOX_DEFAULT
# 69 "data/maps/LindenTown_RangerAcademy_2F/scripts.pory"
	msgbox LindenTown_RangerAcademy_2F_GraduationScene_Text_8, MSGBOX_DEFAULT
# 70 "data/maps/LindenTown_RangerAcademy_2F/scripts.pory"
	closemessage
# 72 "data/maps/LindenTown_RangerAcademy_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LindenTown_RangerAcademy_2F_PlayerStepsForward
# 73 "data/maps/LindenTown_RangerAcademy_2F/scripts.pory"
	waitmovement 0
# 76 "data/maps/LindenTown_RangerAcademy_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 77 "data/maps/LindenTown_RangerAcademy_2F/scripts.pory"
	special ChooseStarter
# 78 "data/maps/LindenTown_RangerAcademy_2F/scripts.pory"
	waitstate
# 80 "data/maps/LindenTown_RangerAcademy_2F/scripts.pory"
	msgbox LindenTown_RangerAcademy_2F_GraduationScene_Text_9, MSGBOX_DEFAULT
# 81 "data/maps/LindenTown_RangerAcademy_2F/scripts.pory"
	closemessage
# 83 "data/maps/LindenTown_RangerAcademy_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LindenTown_RangerAcademy_2F_PlayerReturnsToPlace
# 84 "data/maps/LindenTown_RangerAcademy_2F/scripts.pory"
	waitmovement 0
# 87 "data/maps/LindenTown_RangerAcademy_2F/scripts.pory"
	applymovement 6, LindenTown_RangerAcademy_2F_PipTakesStarter
# 88 "data/maps/LindenTown_RangerAcademy_2F/scripts.pory"
	waitmovement 0
# 89 "data/maps/LindenTown_RangerAcademy_2F/scripts.pory"
	msgbox LindenTown_RangerAcademy_2F_GraduationScene_Text_10, MSGBOX_DEFAULT
# 90 "data/maps/LindenTown_RangerAcademy_2F/scripts.pory"
	msgbox LindenTown_RangerAcademy_2F_GraduationScene_Text_11, MSGBOX_DEFAULT
# 91 "data/maps/LindenTown_RangerAcademy_2F/scripts.pory"
	closemessage
# 92 "data/maps/LindenTown_RangerAcademy_2F/scripts.pory"
	applymovement 6, LindenTown_RangerAcademy_2F_PipReturnsToPosition
# 93 "data/maps/LindenTown_RangerAcademy_2F/scripts.pory"
	waitmovement 0
# 95 "data/maps/LindenTown_RangerAcademy_2F/scripts.pory"
	applymovement 5, LindenTown_RangerAcademy_2F_BranTakesStarter
# 96 "data/maps/LindenTown_RangerAcademy_2F/scripts.pory"
	waitmovement 0
# 97 "data/maps/LindenTown_RangerAcademy_2F/scripts.pory"
	msgbox LindenTown_RangerAcademy_2F_GraduationScene_Text_12, MSGBOX_DEFAULT
# 98 "data/maps/LindenTown_RangerAcademy_2F/scripts.pory"
	closemessage
# 99 "data/maps/LindenTown_RangerAcademy_2F/scripts.pory"
	applymovement 5, LindenTown_RangerAcademy_2F_BranReturnsToPosition
# 100 "data/maps/LindenTown_RangerAcademy_2F/scripts.pory"
	waitmovement 0
# 101 "data/maps/LindenTown_RangerAcademy_2F/scripts.pory"
	msgbox LindenTown_RangerAcademy_2F_GraduationScene_Text_13, MSGBOX_DEFAULT
# 102 "data/maps/LindenTown_RangerAcademy_2F/scripts.pory"
	closemessage
# 105 "data/maps/LindenTown_RangerAcademy_2F/scripts.pory"
	msgbox LindenTown_RangerAcademy_2F_GraduationScene_Text_14, MSGBOX_DEFAULT
# 106 "data/maps/LindenTown_RangerAcademy_2F/scripts.pory"
	msgbox LindenTown_RangerAcademy_2F_GraduationScene_Text_15, MSGBOX_DEFAULT
# 107 "data/maps/LindenTown_RangerAcademy_2F/scripts.pory"
	closemessage
# 109 "data/maps/LindenTown_RangerAcademy_2F/scripts.pory"
	setvar VAR_LINDEN_INTRO_STATE, 8
# 110 "data/maps/LindenTown_RangerAcademy_2F/scripts.pory"
	releaseall
	return


# 113 "data/maps/LindenTown_RangerAcademy_2F/scripts.pory"
LindenTown_RangerAcademy_2F_PlayerTakesPosition:
# 114 "data/maps/LindenTown_RangerAcademy_2F/scripts.pory"
	walk_up
# 115 "data/maps/LindenTown_RangerAcademy_2F/scripts.pory"
	walk_up
# 116 "data/maps/LindenTown_RangerAcademy_2F/scripts.pory"
	walk_up
	step_end

# 119 "data/maps/LindenTown_RangerAcademy_2F/scripts.pory"
LindenTown_RangerAcademy_2F_CassianStepsForward:
# 120 "data/maps/LindenTown_RangerAcademy_2F/scripts.pory"
	walk_down
	step_end

# 123 "data/maps/LindenTown_RangerAcademy_2F/scripts.pory"
LindenTown_RangerAcademy_2F_MerenStepsForward:
# 124 "data/maps/LindenTown_RangerAcademy_2F/scripts.pory"
	walk_down
	step_end

# 127 "data/maps/LindenTown_RangerAcademy_2F/scripts.pory"
LindenTown_RangerAcademy_2F_PlayerStepsForward:
# 128 "data/maps/LindenTown_RangerAcademy_2F/scripts.pory"
	walk_up
# 129 "data/maps/LindenTown_RangerAcademy_2F/scripts.pory"
	walk_up
	step_end

# 132 "data/maps/LindenTown_RangerAcademy_2F/scripts.pory"
LindenTown_RangerAcademy_2F_PlayerReturnsToPlace:
# 133 "data/maps/LindenTown_RangerAcademy_2F/scripts.pory"
	walk_down
# 134 "data/maps/LindenTown_RangerAcademy_2F/scripts.pory"
	walk_down
# 135 "data/maps/LindenTown_RangerAcademy_2F/scripts.pory"
	walk_in_place_up
	step_end

# 138 "data/maps/LindenTown_RangerAcademy_2F/scripts.pory"
LindenTown_RangerAcademy_2F_PipTakesStarter:
# 139 "data/maps/LindenTown_RangerAcademy_2F/scripts.pory"
	walk_up
# 140 "data/maps/LindenTown_RangerAcademy_2F/scripts.pory"
	walk_up
# 141 "data/maps/LindenTown_RangerAcademy_2F/scripts.pory"
	walk_right
# 142 "data/maps/LindenTown_RangerAcademy_2F/scripts.pory"
	walk_in_place_up
	step_end

# 145 "data/maps/LindenTown_RangerAcademy_2F/scripts.pory"
LindenTown_RangerAcademy_2F_PipReturnsToPosition:
# 146 "data/maps/LindenTown_RangerAcademy_2F/scripts.pory"
	walk_left
# 147 "data/maps/LindenTown_RangerAcademy_2F/scripts.pory"
	walk_down
# 148 "data/maps/LindenTown_RangerAcademy_2F/scripts.pory"
	walk_down
# 149 "data/maps/LindenTown_RangerAcademy_2F/scripts.pory"
	walk_in_place_up
	step_end

# 152 "data/maps/LindenTown_RangerAcademy_2F/scripts.pory"
LindenTown_RangerAcademy_2F_BranTakesStarter:
# 153 "data/maps/LindenTown_RangerAcademy_2F/scripts.pory"
	walk_up
# 154 "data/maps/LindenTown_RangerAcademy_2F/scripts.pory"
	walk_up
# 155 "data/maps/LindenTown_RangerAcademy_2F/scripts.pory"
	walk_left
# 156 "data/maps/LindenTown_RangerAcademy_2F/scripts.pory"
	walk_in_place_up
	step_end

# 159 "data/maps/LindenTown_RangerAcademy_2F/scripts.pory"
LindenTown_RangerAcademy_2F_BranReturnsToPosition:
# 160 "data/maps/LindenTown_RangerAcademy_2F/scripts.pory"
	walk_right
# 161 "data/maps/LindenTown_RangerAcademy_2F/scripts.pory"
	walk_down
# 162 "data/maps/LindenTown_RangerAcademy_2F/scripts.pory"
	walk_down
# 163 "data/maps/LindenTown_RangerAcademy_2F/scripts.pory"
	walk_in_place_up
	step_end

LindenTown_RangerAcademy_2F_GraduationScene_Text_0:
# 53 "data/maps/LindenTown_RangerAcademy_2F/scripts.pory"
	.string "Cassian: Stand tall, you three.\p"
	.string "You've earned this day.$"

LindenTown_RangerAcademy_2F_GraduationScene_Text_1:
# 54 "data/maps/LindenTown_RangerAcademy_2F/scripts.pory"
	.string "Cassian: The academy teaches you a lot.\n"
	.string "The history, the technique, the reports\l"
	.string "nobody reads.\p"
	.string "But there's a thing we can't teach you.\n"
	.string "A thing you have to feel in your bones.\p"
	.string "A ranger is nothing without their\n"
	.string "partner. You're going to spend your\l"
	.string "whole career learning what that means.$"

LindenTown_RangerAcademy_2F_GraduationScene_Text_2:
# 55 "data/maps/LindenTown_RangerAcademy_2F/scripts.pory"
	.string "Cassian: My grandfather used to talk\n"
	.string "about the old rangers.\p"
	.string "The ones he worked beside, before the\n"
	.string "Withdrawal.\p"
	.string "He said the bond between a ranger and\n"
	.string "their partner was a kind of contract.\l"
	.string "Written in a language only the two of\l"
	.string "you knew.$"

LindenTown_RangerAcademy_2F_GraduationScene_Text_3:
# 56 "data/maps/LindenTown_RangerAcademy_2F/scripts.pory"
	.string "Cassian: …I think about that a lot, if\n"
	.string "I'm honest.\p"
	.string "What it must have been, to know your\n"
	.string "partner like that.\p"
	.string "We don't always have the old words\n"
	.string "anymore. But we have this.$"

LindenTown_RangerAcademy_2F_GraduationScene_Text_4:
# 57 "data/maps/LindenTown_RangerAcademy_2F/scripts.pory"
	.string "Cassian: So when you meet your partner\n"
	.string "today, remember: they'll meet you too.\l"
	.string "Make no mistake about that.\p"
	.string "You're the start of something. That's\n"
	.string "what a ranger is.\p"
	.string "That's what you are, from this day\n"
	.string "forward.$"

LindenTown_RangerAcademy_2F_GraduationScene_Text_5:
# 64 "data/maps/LindenTown_RangerAcademy_2F/scripts.pory"
	.string "Meren: Thank you, Director Cassian.\p"
	.string "That was beautiful.$"

LindenTown_RangerAcademy_2F_GraduationScene_Text_6:
# 67 "data/maps/LindenTown_RangerAcademy_2F/scripts.pory"
	.string "Meren: Graduates.\p"
	.string "On behalf of the Thorne Foundation's\n"
	.string "Partner Program, it is our privilege to\l"
	.string "place these three partners with you\l"
	.string "today.$"

LindenTown_RangerAcademy_2F_GraduationScene_Text_7:
# 68 "data/maps/LindenTown_RangerAcademy_2F/scripts.pory"
	.string "Meren: I've been a ranger for\n"
	.string "twenty-three years, and I still\l"
	.string "remember the day I met mine.\p"
	.string "You will too.$"

LindenTown_RangerAcademy_2F_GraduationScene_Text_8:
# 69 "data/maps/LindenTown_RangerAcademy_2F/scripts.pory"
	.string "Meren: {PLAYER}, please step forward.\p"
	.string "Pick the one that looks back at you.$"

LindenTown_RangerAcademy_2F_GraduationScene_Text_9:
# 80 "data/maps/LindenTown_RangerAcademy_2F/scripts.pory"
	.string "Meren: A fine match.\p"
	.string "Take good care of each other.$"

LindenTown_RangerAcademy_2F_GraduationScene_Text_10:
# 89 "data/maps/LindenTown_RangerAcademy_2F/scripts.pory"
	.string "Pip: …alright.$"

LindenTown_RangerAcademy_2F_GraduationScene_Text_11:
# 90 "data/maps/LindenTown_RangerAcademy_2F/scripts.pory"
	.string "Pip: Hi.\p"
	.string "I'm Pip.\p"
	.string "We're going to be a team.$"

LindenTown_RangerAcademy_2F_GraduationScene_Text_12:
# 97 "data/maps/LindenTown_RangerAcademy_2F/scripts.pory"
	.string "Bran: I'll take what's left.\n"
	.string "Like it matters. I'd win with any of\l"
	.string "them.$"

LindenTown_RangerAcademy_2F_GraduationScene_Text_13:
# 101 "data/maps/LindenTown_RangerAcademy_2F/scripts.pory"
	.string "Bran: Hope the Partner Program's proud\n"
	.string "of me today, Dad.$"

LindenTown_RangerAcademy_2F_GraduationScene_Text_14:
# 105 "data/maps/LindenTown_RangerAcademy_2F/scripts.pory"
	.string "Cassian: Congratulations.\p"
	.string "It's an honour to send you out from\n"
	.string "this room today.$"

LindenTown_RangerAcademy_2F_GraduationScene_Text_15:
# 106 "data/maps/LindenTown_RangerAcademy_2F/scripts.pory"
	.string "Cassian: Take a moment if you need to.\p"
	.string "And then, come down to the square.\p"
	.string "There's someone here who wanted to be\n"
	.string "the first to meet our new rangers.$"
