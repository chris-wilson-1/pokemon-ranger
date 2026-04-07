LittlerootTown_RangerBaseTrainingHall_MapScripts::
	.byte 0


LittlerootTown_RangerBaseTrainingHall_EventScript_Greeter::
# 4 "data/maps/LittlerootTown_RangerBaseTrainingHall/scripts.pory"
	lock
# 5 "data/maps/LittlerootTown_RangerBaseTrainingHall/scripts.pory"
	faceplayer
# 6 "data/maps/LittlerootTown_RangerBaseTrainingHall/scripts.pory"
	msgbox LittlerootTown_RangerBaseTrainingHall_EventScript_Greeter_Text_0, MSGBOX_NPC
# 7 "data/maps/LittlerootTown_RangerBaseTrainingHall/scripts.pory"
	release
	return


LittlerootTown_RangerBaseTrainingHall_EventScript_Greeter_Text_0:
# 6 "data/maps/LittlerootTown_RangerBaseTrainingHall/scripts.pory"
	.string "Welcome to the Ranger Base Training\n"
	.string "Hall, recruit!$"
