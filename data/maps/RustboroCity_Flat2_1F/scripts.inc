RustboroCity_Flat2_1F_EventScript_Pikachu::
# 2 "data/maps/RustboroCity_Flat2_1F/scripts.pory"
	lock
# 3 "data/maps/RustboroCity_Flat2_1F/scripts.pory"
	faceplayer
# 4 "data/maps/RustboroCity_Flat2_1F/scripts.pory"
	waitse
# 5 "data/maps/RustboroCity_Flat2_1F/scripts.pory"
	playmoncry SPECIES_PIKACHU, CRY_MODE_NORMAL
# 6 "data/maps/RustboroCity_Flat2_1F/scripts.pory"
	msgbox RustboroCity_Flat2_1F_EventScript_Pikachu_Text_0
# 7 "data/maps/RustboroCity_Flat2_1F/scripts.pory"
	waitmoncry
# 8 "data/maps/RustboroCity_Flat2_1F/scripts.pory"
	release
	end


# 12 "data/maps/RustboroCity_Flat2_1F/scripts.pory"

# 13 "data/maps/RustboroCity_Flat2_1F/scripts.pory"
RustboroCity_Flat2_1F_MapScripts::
# 14 "data/maps/RustboroCity_Flat2_1F/scripts.pory"
	.byte 0
# 15 "data/maps/RustboroCity_Flat2_1F/scripts.pory"

# 16 "data/maps/RustboroCity_Flat2_1F/scripts.pory"
RustboroCity_Flat2_1F_EventScript_OldWoman::
# 17 "data/maps/RustboroCity_Flat2_1F/scripts.pory"
	msgbox RustboroCity_Flat2_1F_Text_DevonWorkersLiveHere, MSGBOX_NPC
# 18 "data/maps/RustboroCity_Flat2_1F/scripts.pory"
	end
# 19 "data/maps/RustboroCity_Flat2_1F/scripts.pory"

# 20 "data/maps/RustboroCity_Flat2_1F/scripts.pory"
RustboroCity_Flat2_1F_EventScript_Skitty::
# 21 "data/maps/RustboroCity_Flat2_1F/scripts.pory"
	lock
# 22 "data/maps/RustboroCity_Flat2_1F/scripts.pory"
	faceplayer
# 23 "data/maps/RustboroCity_Flat2_1F/scripts.pory"
	waitse
# 24 "data/maps/RustboroCity_Flat2_1F/scripts.pory"
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
# 25 "data/maps/RustboroCity_Flat2_1F/scripts.pory"
	msgbox RustboroCity_Flat2_1F_Text_Skitty, MSGBOX_DEFAULT
# 26 "data/maps/RustboroCity_Flat2_1F/scripts.pory"
	waitmoncry
# 27 "data/maps/RustboroCity_Flat2_1F/scripts.pory"
	release
# 28 "data/maps/RustboroCity_Flat2_1F/scripts.pory"
	end
# 29 "data/maps/RustboroCity_Flat2_1F/scripts.pory"

# 30 "data/maps/RustboroCity_Flat2_1F/scripts.pory"
RustboroCity_Flat2_1F_Text_DevonWorkersLiveHere:
# 31 "data/maps/RustboroCity_Flat2_1F/scripts.pory"
	.string "DEVON CORPORATION's workers live in\n"
# 32 "data/maps/RustboroCity_Flat2_1F/scripts.pory"
	.string "this building.$"
# 33 "data/maps/RustboroCity_Flat2_1F/scripts.pory"

# 34 "data/maps/RustboroCity_Flat2_1F/scripts.pory"
RustboroCity_Flat2_1F_Text_Skitty:
# 35 "data/maps/RustboroCity_Flat2_1F/scripts.pory"
	.string "SKITTY: Gyaaaah!$"

RustboroCity_Flat2_1F_EventScript_Pikachu_Text_0:
# 6 "data/maps/RustboroCity_Flat2_1F/scripts.pory"
	.string "Pikachu: Pikaaaa!$"
