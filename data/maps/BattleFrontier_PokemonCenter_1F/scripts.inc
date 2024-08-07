BattleFrontier_PokemonCenter_1F_EventScript_Pikachu::
# 2 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
	lock
# 3 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
	faceplayer
# 4 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
	waitse
# 5 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
	playmoncry SPECIES_PIKACHU, CRY_MODE_NORMAL
# 6 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
	msgbox BattleFrontier_PokemonCenter_1F_EventScript_Pikachu_Text_0
# 7 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
	waitmoncry
# 8 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
	release
	end


# 12 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"

# 13 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
.set LOCALID_NURSE, 1
# 14 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"

# 15 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
BattleFrontier_PokemonCenter_1F_MapScripts::
# 16 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BattleFrontier_PokemonCenter_1F_OnTransition
# 17 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 18 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
	.byte 0
# 19 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"

# 20 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
BattleFrontier_PokemonCenter_1F_OnTransition:
# 21 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_BATTLE_FRONTIER_OUTSIDE_EAST
# 22 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
	end
# 23 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"

# 24 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
BattleFrontier_PokemonCenter_1F_EventScript_Nurse::
# 25 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_NURSE
# 26 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 27 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
	waitmessage
# 28 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 29 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
	release
# 30 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
	end
# 31 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"

# 32 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
BattleFrontier_PokemonCenter_1F_EventScript_SchoolKid::
# 33 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
	msgbox BattleFrontier_PokemonCenter_1F_Text_NeverSeenPokemon, MSGBOX_NPC
# 34 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
	end
# 35 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"

# 36 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
BattleFrontier_PokemonCenter_1F_EventScript_Man::
# 37 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
	msgbox BattleFrontier_PokemonCenter_1F_Text_NextStopBattleArena, MSGBOX_NPC
# 38 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
	end
# 39 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"

# 40 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
BattleFrontier_PokemonCenter_1F_EventScript_Picnicker::
# 41 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
	msgbox BattleFrontier_PokemonCenter_1F_Text_GoingThroughEveryChallenge, MSGBOX_NPC
# 42 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
	end
# 43 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"

# 44 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
BattleFrontier_PokemonCenter_1F_EventScript_Skitty::
# 45 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
	lock
# 46 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
	faceplayer
# 47 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
	waitse
# 48 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
# 49 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
	msgbox BattleFrontier_PokemonCenter_1F_Text_Skitty, MSGBOX_DEFAULT
# 50 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
	waitmoncry
# 51 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
	release
# 52 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
	end
# 53 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"

# 54 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
BattleFrontier_PokemonCenter_1F_Text_NeverSeenPokemon:
# 55 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
	.string "There was someone here using a \n"
# 56 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
	.string "POKéMON I've never seen before.\p"
# 57 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
	.string "I never learned about it at\n"
# 58 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
	.string "TRAINER'S SCHOOL at least.\p"
# 59 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
	.string "I wonder where you can catch POKéMON\n"
# 60 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
	.string "like that.$"
# 61 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"

# 62 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
BattleFrontier_PokemonCenter_1F_Text_NextStopBattleArena:
# 63 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
	.string "Okay! Next stop, the BATTLE ARENA!\n"
# 64 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
	.string "I'd better get the right POKéMON from\l"
# 65 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
	.string "the PC Storage System.$"
# 66 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"

# 67 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
BattleFrontier_PokemonCenter_1F_Text_GoingThroughEveryChallenge:
# 68 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
	.string "Giggle… I'm going to go through every\n"
# 69 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
	.string "challenge with just this baby!$"
# 70 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"

# 71 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
BattleFrontier_PokemonCenter_1F_Text_Skitty:
# 72 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
	.string "SKITTY: Mya myaaah!$"

BattleFrontier_PokemonCenter_1F_EventScript_Pikachu_Text_0:
# 6 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
	.string "Pikachu: Pikaaaa!$"
