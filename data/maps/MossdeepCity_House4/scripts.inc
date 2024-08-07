MossdeepCity_House4_EventScript_Pikachu::
# 2 "data/maps/MossdeepCity_House4/scripts.pory"
	lock
# 3 "data/maps/MossdeepCity_House4/scripts.pory"
	faceplayer
# 4 "data/maps/MossdeepCity_House4/scripts.pory"
	waitse
# 5 "data/maps/MossdeepCity_House4/scripts.pory"
	playmoncry SPECIES_PIKACHU, CRY_MODE_NORMAL
# 6 "data/maps/MossdeepCity_House4/scripts.pory"
	msgbox MossdeepCity_House4_EventScript_Pikachu_Text_0
# 7 "data/maps/MossdeepCity_House4/scripts.pory"
	waitmoncry
# 8 "data/maps/MossdeepCity_House4/scripts.pory"
	release
	end


# 12 "data/maps/MossdeepCity_House4/scripts.pory"

# 13 "data/maps/MossdeepCity_House4/scripts.pory"
MossdeepCity_House4_MapScripts::
# 14 "data/maps/MossdeepCity_House4/scripts.pory"
	.byte 0
# 15 "data/maps/MossdeepCity_House4/scripts.pory"

# 16 "data/maps/MossdeepCity_House4/scripts.pory"
MossdeepCity_House4_EventScript_Woman::
# 17 "data/maps/MossdeepCity_House4/scripts.pory"
	lock
# 18 "data/maps/MossdeepCity_House4/scripts.pory"
	faceplayer
# 19 "data/maps/MossdeepCity_House4/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, MossdeepCity_House4_EventScript_CanBattleAtSecretBases
# 20 "data/maps/MossdeepCity_House4/scripts.pory"
	msgbox MossdeepCity_House4_Text_BrotherLikesToFindBases, MSGBOX_DEFAULT
# 21 "data/maps/MossdeepCity_House4/scripts.pory"
	release
# 22 "data/maps/MossdeepCity_House4/scripts.pory"
	end
# 23 "data/maps/MossdeepCity_House4/scripts.pory"

# 24 "data/maps/MossdeepCity_House4/scripts.pory"
MossdeepCity_House4_EventScript_CanBattleAtSecretBases::
# 25 "data/maps/MossdeepCity_House4/scripts.pory"
	msgbox MossdeepCity_House4_Text_BrotherLikesToVisitBasesAndBattle, MSGBOX_DEFAULT
# 26 "data/maps/MossdeepCity_House4/scripts.pory"
	release
# 27 "data/maps/MossdeepCity_House4/scripts.pory"
	end
# 28 "data/maps/MossdeepCity_House4/scripts.pory"

# 29 "data/maps/MossdeepCity_House4/scripts.pory"
MossdeepCity_House4_EventScript_NinjaBoy::
# 30 "data/maps/MossdeepCity_House4/scripts.pory"
	lock
# 31 "data/maps/MossdeepCity_House4/scripts.pory"
	faceplayer
# 32 "data/maps/MossdeepCity_House4/scripts.pory"
	special CheckPlayerHasSecretBase
# 33 "data/maps/MossdeepCity_House4/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MossdeepCity_House4_EventScript_NoSecretBase
# 34 "data/maps/MossdeepCity_House4/scripts.pory"
	special GetSecretBaseNearbyMapName
# 35 "data/maps/MossdeepCity_House4/scripts.pory"
	msgbox MossdeepCity_House4_Text_YouMadeSecretBaseNearX, MSGBOX_DEFAULT
# 36 "data/maps/MossdeepCity_House4/scripts.pory"
	release
# 37 "data/maps/MossdeepCity_House4/scripts.pory"
	end
# 38 "data/maps/MossdeepCity_House4/scripts.pory"

# 39 "data/maps/MossdeepCity_House4/scripts.pory"
MossdeepCity_House4_EventScript_NoSecretBase::
# 40 "data/maps/MossdeepCity_House4/scripts.pory"
	msgbox MossdeepCity_House4_Text_MakeSecretBase, MSGBOX_DEFAULT
# 41 "data/maps/MossdeepCity_House4/scripts.pory"
	release
# 42 "data/maps/MossdeepCity_House4/scripts.pory"
	end
# 43 "data/maps/MossdeepCity_House4/scripts.pory"

# 44 "data/maps/MossdeepCity_House4/scripts.pory"
MossdeepCity_House4_EventScript_Skitty::
# 45 "data/maps/MossdeepCity_House4/scripts.pory"
	lock
# 46 "data/maps/MossdeepCity_House4/scripts.pory"
	faceplayer
# 47 "data/maps/MossdeepCity_House4/scripts.pory"
	waitse
# 48 "data/maps/MossdeepCity_House4/scripts.pory"
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
# 49 "data/maps/MossdeepCity_House4/scripts.pory"
	msgbox MossdeepCity_House4_Text_Skitty, MSGBOX_DEFAULT
# 50 "data/maps/MossdeepCity_House4/scripts.pory"
	waitmoncry
# 51 "data/maps/MossdeepCity_House4/scripts.pory"
	release
# 52 "data/maps/MossdeepCity_House4/scripts.pory"
	end
# 53 "data/maps/MossdeepCity_House4/scripts.pory"

# 54 "data/maps/MossdeepCity_House4/scripts.pory"
MossdeepCity_House4_Text_BrotherLikesToFindBases:
# 55 "data/maps/MossdeepCity_House4/scripts.pory"
	.string "My little brother says he likes to go\n"
# 56 "data/maps/MossdeepCity_House4/scripts.pory"
	.string "find people's SECRET BASES.$"
# 57 "data/maps/MossdeepCity_House4/scripts.pory"

# 58 "data/maps/MossdeepCity_House4/scripts.pory"
MossdeepCity_House4_Text_BrotherLikesToVisitBasesAndBattle:
# 59 "data/maps/MossdeepCity_House4/scripts.pory"
	.string "My little brother says he likes to\n"
# 60 "data/maps/MossdeepCity_House4/scripts.pory"
	.string "visit people's SECRET BASES and have\l"
# 61 "data/maps/MossdeepCity_House4/scripts.pory"
	.string "POKéMON battles.$"
# 62 "data/maps/MossdeepCity_House4/scripts.pory"

# 63 "data/maps/MossdeepCity_House4/scripts.pory"
MossdeepCity_House4_Text_YouMadeSecretBaseNearX:
# 64 "data/maps/MossdeepCity_House4/scripts.pory"
	.string "Was it you who made a SECRET BASE\n"
# 65 "data/maps/MossdeepCity_House4/scripts.pory"
	.string "near {STR_VAR_1}?$"
# 66 "data/maps/MossdeepCity_House4/scripts.pory"

# 67 "data/maps/MossdeepCity_House4/scripts.pory"
MossdeepCity_House4_Text_MakeSecretBase:
# 68 "data/maps/MossdeepCity_House4/scripts.pory"
	.string "You should make a SECRET BASE\n"
# 69 "data/maps/MossdeepCity_House4/scripts.pory"
	.string "somewhere. I'll go find it!$"
# 70 "data/maps/MossdeepCity_House4/scripts.pory"

# 71 "data/maps/MossdeepCity_House4/scripts.pory"
MossdeepCity_House4_Text_Skitty:
# 72 "data/maps/MossdeepCity_House4/scripts.pory"
	.string "SKITTY: Miyaan?$"

MossdeepCity_House4_EventScript_Pikachu_Text_0:
# 6 "data/maps/MossdeepCity_House4/scripts.pory"
	.string "Pikachu: Pikaaaa!$"
