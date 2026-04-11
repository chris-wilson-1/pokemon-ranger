LindenTown_MapScripts::
	.byte 0


LindenTown_PlayerHouseSignScript::
# 6 "data/maps/LindenTown/scripts.pory"
	lock
# 7 "data/maps/LindenTown/scripts.pory"
	msgbox LindenTown_PlayerHouseSignScript_Text_0, MSGBOX_DEFAULT
# 8 "data/maps/LindenTown/scripts.pory"
	closemessage
# 9 "data/maps/LindenTown/scripts.pory"
	release
	return


LindenTown_PipsHouseSignScript::
# 13 "data/maps/LindenTown/scripts.pory"
	lock
# 14 "data/maps/LindenTown/scripts.pory"
	msgbox LindenTown_PipsHouseSignScript_Text_0, MSGBOX_DEFAULT
# 15 "data/maps/LindenTown/scripts.pory"
	closemessage
# 16 "data/maps/LindenTown/scripts.pory"
	release
	return


LindenTown_BransHouseSignScript::
# 20 "data/maps/LindenTown/scripts.pory"
	lock
# 21 "data/maps/LindenTown/scripts.pory"
	msgbox LindenTown_BransHouseSignScript_Text_0, MSGBOX_DEFAULT
# 22 "data/maps/LindenTown/scripts.pory"
	closemessage
# 23 "data/maps/LindenTown/scripts.pory"
	release
	return


LindenTown_AcademySignScript::
# 27 "data/maps/LindenTown/scripts.pory"
	lock
# 28 "data/maps/LindenTown/scripts.pory"
	msgbox LindenTown_AcademySignScript_Text_0, MSGBOX_DEFAULT
# 29 "data/maps/LindenTown/scripts.pory"
	closemessage
# 30 "data/maps/LindenTown/scripts.pory"
	release
	return


LindenTown_PlayerHouseSignScript_Text_0:
# 7 "data/maps/LindenTown/scripts.pory"
	.string "{PLAYER}'s House$"

LindenTown_PipsHouseSignScript_Text_0:
# 14 "data/maps/LindenTown/scripts.pory"
	.string "Pip's House$"

LindenTown_BransHouseSignScript_Text_0:
# 21 "data/maps/LindenTown/scripts.pory"
	.string "Bran's House$"

LindenTown_AcademySignScript_Text_0:
# 28 "data/maps/LindenTown/scripts.pory"
	.string "Linden Town Ranger Academy$"
