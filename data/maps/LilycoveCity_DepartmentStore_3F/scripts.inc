LilycoveCity_DepartmentStore_3F_EventScript_ClerkLeft_Pory::
# 3 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	lock
# 4 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	faceplayer
# 5 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	checkitem ITEM_HARBOR_MAIL
# 6 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LilycoveCity_DepartmentStore_3F_EventScript_ClerkLeft_Pory_2
# 9 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	call Common_PoryScript_Clerk_Hellos
LilycoveCity_DepartmentStore_3F_EventScript_ClerkLeft_Pory_1:
# 11 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	waitmessage
# 12 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	pokemart Pokemart_Mail
# 13 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	checkitem ITEM_HARBOR_MAIL
# 14 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne LilycoveCity_DepartmentStore_3F_EventScript_ClerkLeft_Pory_6
# 17 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	call Common_PoryScript_Clerk_Goodbyes
LilycoveCity_DepartmentStore_3F_EventScript_ClerkLeft_Pory_5:
# 19 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	release
	end

LilycoveCity_DepartmentStore_3F_EventScript_ClerkLeft_Pory_2:
# 7 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	message LilycoveCity_DepartmentStore_3F_EventScript_ClerkLeft_Pory_Text_0
	goto LilycoveCity_DepartmentStore_3F_EventScript_ClerkLeft_Pory_1

LilycoveCity_DepartmentStore_3F_EventScript_ClerkLeft_Pory_6:
# 15 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_3F_EventScript_ClerkLeft_Pory_Text_1
	goto LilycoveCity_DepartmentStore_3F_EventScript_ClerkLeft_Pory_5


LilycoveCity_DepartmentStore_3F_EventScript_ClerkRight_Pory::
# 25 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	lock
# 26 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	faceplayer
# 27 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	random 3
# 28 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LilycoveCity_DepartmentStore_3F_EventScript_ClerkRight_Pory_2
# 33 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	call Common_PoryScript_Clerk_Hellos
LilycoveCity_DepartmentStore_3F_EventScript_ClerkRight_Pory_1:
# 35 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	waitmessage
# 36 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	goto_if_unset FLAG_BADGE07_GET, LilycoveCity_DepartmentStore_3F_EventScript_ClerkRight_Pory_6
# 39 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	pokemart Pokemart_StatBoosters_All
LilycoveCity_DepartmentStore_3F_EventScript_ClerkRight_Pory_5:
# 41 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LilycoveCity_DepartmentStore_3F_EventScript_ClerkRight_Pory_12
# 44 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	call Common_PoryScript_Clerk_Goodbyes
LilycoveCity_DepartmentStore_3F_EventScript_ClerkRight_Pory_11:
# 46 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	release
	end

LilycoveCity_DepartmentStore_3F_EventScript_ClerkRight_Pory_2:
# 29 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	switch VAR_RESULT
# 30 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	case 0, LilycoveCity_DepartmentStore_3F_EventScript_ClerkRight_Pory_10
	goto LilycoveCity_DepartmentStore_3F_EventScript_ClerkRight_Pory_1

LilycoveCity_DepartmentStore_3F_EventScript_ClerkRight_Pory_6:
# 37 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	pokemart Pokemart_StatBoosters_Some
	goto LilycoveCity_DepartmentStore_3F_EventScript_ClerkRight_Pory_5

LilycoveCity_DepartmentStore_3F_EventScript_ClerkRight_Pory_10:
# 30 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	message LilycoveCity_DepartmentStore_3F_EventScript_ClerkRight_Pory_Text_0
	goto LilycoveCity_DepartmentStore_3F_EventScript_ClerkRight_Pory_1

LilycoveCity_DepartmentStore_3F_EventScript_ClerkRight_Pory_12:
# 42 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_3F_EventScript_ClerkRight_Pory_Text_1
	goto LilycoveCity_DepartmentStore_3F_EventScript_ClerkRight_Pory_11


	.align 2
# 51 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
Pokemart_Mail:
# 52 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_ORANGE_MAIL
# 53 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_HARBOR_MAIL
# 54 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_GLITTER_MAIL
# 55 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_MECH_MAIL
# 56 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_WOOD_MAIL
# 57 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_WAVE_MAIL
# 58 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_BEAD_MAIL
# 59 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_SHADOW_MAIL
# 60 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_TROPIC_MAIL
# 61 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_DREAM_MAIL
# 62 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_FAB_MAIL
# 63 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_RETRO_MAIL
	.2byte ITEM_NONE

	.align 2
# 67 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
Pokemart_StatBoosters_All:
# 68 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_PROTEIN
# 69 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_IRON
# 70 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_CALCIUM
# 71 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_ZINC
# 72 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_CARBOS
# 73 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_HP_UP
# 74 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_X_ATTACK
# 75 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_X_DEFENSE
# 76 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_X_SP_ATK
# 77 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_X_SP_DEF
# 78 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_X_SPEED
# 79 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_X_ACCURACY
# 80 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_GUARD_SPEC
# 81 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_DIRE_HIT
	.2byte ITEM_NONE

	.align 2
# 84 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
Pokemart_StatBoosters_Some:
# 85 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_PROTEIN
# 86 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_IRON
# 87 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_CALCIUM
# 88 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_ZINC
# 89 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_CARBOS
# 90 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_HP_UP
# 96 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_X_ACCURACY
# 97 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_GUARD_SPEC
# 98 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_DIRE_HIT
	.2byte ITEM_NONE

# 101 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"

# 102 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
LilycoveCity_DepartmentStore_3F_MapScripts::
# 103 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.byte 0
# 104 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"

# 105 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
LilycoveCity_DepartmentStore_3F_EventScript_ClerkLeft::
# 106 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	lock
# 107 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	faceplayer
# 108 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	message gText_HowMayIServeYou
# 109 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	waitmessage
# 110 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	pokemart LilycoveCity_DepartmentStore_3F_Pokemart_Vitamins
# 111 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 112 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	release
# 113 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	end
# 114 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"

# 115 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.align 2
# 116 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
LilycoveCity_DepartmentStore_3F_Pokemart_Vitamins:
# 117 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_PROTEIN
# 118 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_CALCIUM
# 119 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_IRON
# 120 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_ZINC
# 121 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_CARBOS
# 122 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_HP_UP
# 123 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_NONE
# 124 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	release
# 125 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	end
# 126 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"

# 127 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
LilycoveCity_DepartmentStore_3F_EventScript_ClerkRight::
# 128 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	lock
# 129 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	faceplayer
# 130 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	message gText_HowMayIServeYou
# 131 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	waitmessage
# 132 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	pokemart LilycoveCity_DepartmentStore_3F_Pokemart_StatBoosters
# 133 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 134 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	release
# 135 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	end
# 136 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"

# 137 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.align 2
# 138 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
LilycoveCity_DepartmentStore_3F_Pokemart_StatBoosters:
# 139 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_X_SPEED
# 140 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_X_SP_ATK
# 141 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_X_ATTACK
# 142 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_X_DEFENSE
# 143 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_DIRE_HIT
# 144 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_GUARD_SPEC
# 145 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_X_ACCURACY
# 146 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_NONE
# 147 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	release
# 148 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	end
# 149 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"

# 150 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
LilycoveCity_DepartmentStore_3F_EventScript_TriathleteM::
# 151 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_3F_Text_ItemsBestForTougheningPokemon, MSGBOX_NPC
# 152 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	end
# 153 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"

# 154 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
LilycoveCity_DepartmentStore_3F_EventScript_PokefanM::
# 155 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_3F_Text_WantMoreEndurance, MSGBOX_NPC
# 156 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	end
# 157 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"

# 158 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
LilycoveCity_DepartmentStore_3F_EventScript_Woman::
# 159 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_3F_Text_GaveCarbosToSpeedUpMon, MSGBOX_NPC
# 160 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	end
# 161 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"

# 162 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
LilycoveCity_DepartmentStore_3F_Text_ItemsBestForTougheningPokemon:
# 163 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.string "For quickly toughening up POKéMON,\n"
# 164 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.string "items are the best.\p"
# 165 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.string "PROTEIN boosts ATTACK,\n"
# 166 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.string "and CALCIUM raises SP. ATK.$"
# 167 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"

# 168 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
LilycoveCity_DepartmentStore_3F_Text_WantMoreEndurance:
# 169 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.string "I want my POKéMON to have more\n"
# 170 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.string "endurance.\p"
# 171 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.string "I'm trying to decide whether to raise\n"
# 172 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.string "DEFENSE with IRON, or SP. DEF with ZINC.$"
# 173 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"

# 174 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
LilycoveCity_DepartmentStore_3F_Text_GaveCarbosToSpeedUpMon:
# 175 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.string "I gave a CARBOS to my POKéMON,\n"
# 176 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.string "and its SPEED went up.$"

LilycoveCity_DepartmentStore_3F_EventScript_ClerkLeft_Pory_Text_0:
# 7 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.string "Let me guess… You're looking for Harbor\n"
	.string "Mail? Was I right?$"

LilycoveCity_DepartmentStore_3F_EventScript_ClerkLeft_Pory_Text_1:
# 15 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.string "{FONT_SMALL}Enjoy gambling without me…$"

LilycoveCity_DepartmentStore_3F_EventScript_ClerkRight_Pory_Text_0:
# 30 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.string "Hey kid, you wanna buy some drugs?\n"
	.string "Haha! Of course you do.\p"
	.string "{FONT_SMALL}It's the only reason anyone ever talks\n"
	.string "to me here…$"

LilycoveCity_DepartmentStore_3F_EventScript_ClerkRight_Pory_Text_1:
# 42 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.string "{FONT_SMALL}…I'm so lonely… Maybe I should get a\n"
	.string "hobby or something…$"
