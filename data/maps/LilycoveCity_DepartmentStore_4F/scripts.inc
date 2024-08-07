LilycoveCity_DepartmentStore_4F_EventScript_ClerkLeft_Pory::
# 3 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	lock
# 4 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	faceplayer
# 5 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	call Common_PoryScript_Clerk_Hellos
# 6 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	waitmessage
# 7 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	pokemart Pokemart_AttackTMs
# 8 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	checkitem ITEM_TM38
# 9 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne LilycoveCity_DepartmentStore_4F_EventScript_ClerkLeft_Pory_2
# 27 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	call Common_PoryScript_Clerk_Goodbyes
LilycoveCity_DepartmentStore_4F_EventScript_ClerkLeft_Pory_1:
# 29 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	release
	end

LilycoveCity_DepartmentStore_4F_EventScript_ClerkLeft_Pory_2:
# 10 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	checkitem ITEM_TM25
# 11 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne LilycoveCity_DepartmentStore_4F_EventScript_ClerkLeft_Pory_5
# 24 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	call Common_PoryScript_Clerk_Goodbyes
	goto LilycoveCity_DepartmentStore_4F_EventScript_ClerkLeft_Pory_1

LilycoveCity_DepartmentStore_4F_EventScript_ClerkLeft_Pory_5:
# 12 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	checkitem ITEM_TM14
# 13 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne LilycoveCity_DepartmentStore_4F_EventScript_ClerkLeft_Pory_8
# 21 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	call Common_PoryScript_Clerk_Goodbyes
	goto LilycoveCity_DepartmentStore_4F_EventScript_ClerkLeft_Pory_1

LilycoveCity_DepartmentStore_4F_EventScript_ClerkLeft_Pory_8:
# 14 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	checkitem ITEM_TM15
# 15 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne LilycoveCity_DepartmentStore_4F_EventScript_ClerkLeft_Pory_11
# 18 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	call Common_PoryScript_Clerk_Goodbyes
	goto LilycoveCity_DepartmentStore_4F_EventScript_ClerkLeft_Pory_1

LilycoveCity_DepartmentStore_4F_EventScript_ClerkLeft_Pory_11:
# 16 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_4F_EventScript_ClerkLeft_Pory_Text_0
	goto LilycoveCity_DepartmentStore_4F_EventScript_ClerkLeft_Pory_1


LilycoveCity_DepartmentStore_4F_EventScript_ClerkRight_Pory::
# 35 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	lock
# 36 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	faceplayer
# 37 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	call Common_PoryScript_Clerk_Hellos
# 38 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	waitmessage
# 39 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	pokemart Pokemart_DefenseTMs
# 40 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	checkitem ITEM_TM17
# 41 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne LilycoveCity_DepartmentStore_4F_EventScript_ClerkRight_Pory_2
# 59 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	call Common_PoryScript_Clerk_Goodbyes
LilycoveCity_DepartmentStore_4F_EventScript_ClerkRight_Pory_1:
# 61 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	release
	end

LilycoveCity_DepartmentStore_4F_EventScript_ClerkRight_Pory_2:
# 42 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	checkitem ITEM_TM20
# 43 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne LilycoveCity_DepartmentStore_4F_EventScript_ClerkRight_Pory_5
# 56 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	call Common_PoryScript_Clerk_Goodbyes
	goto LilycoveCity_DepartmentStore_4F_EventScript_ClerkRight_Pory_1

LilycoveCity_DepartmentStore_4F_EventScript_ClerkRight_Pory_5:
# 44 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	checkitem ITEM_TM33
# 45 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne LilycoveCity_DepartmentStore_4F_EventScript_ClerkRight_Pory_8
# 53 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	call Common_PoryScript_Clerk_Goodbyes
	goto LilycoveCity_DepartmentStore_4F_EventScript_ClerkRight_Pory_1

LilycoveCity_DepartmentStore_4F_EventScript_ClerkRight_Pory_8:
# 46 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	checkitem ITEM_TM16
# 47 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne LilycoveCity_DepartmentStore_4F_EventScript_ClerkRight_Pory_11
# 50 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	call Common_PoryScript_Clerk_Goodbyes
	goto LilycoveCity_DepartmentStore_4F_EventScript_ClerkRight_Pory_1

LilycoveCity_DepartmentStore_4F_EventScript_ClerkRight_Pory_11:
# 48 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_4F_EventScript_ClerkRight_Pory_Text_0
	goto LilycoveCity_DepartmentStore_4F_EventScript_ClerkRight_Pory_1


	.align 2
# 66 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
Pokemart_AttackTMs:
# 67 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_TM38
# 68 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_TM25
# 69 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_TM14
# 70 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_TM15
	.2byte ITEM_NONE

	.align 2
# 74 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
Pokemart_DefenseTMs:
# 75 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_TM17
# 76 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_TM20
# 77 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_TM33
# 78 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_TM16
	.2byte ITEM_NONE

# 81 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"

# 82 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
LilycoveCity_DepartmentStore_4F_MapScripts::
# 83 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.byte 0
# 84 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"

# 85 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
LilycoveCity_DepartmentStore_4F_EventScript_Gentleman::
# 86 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_4F_Text_AttackOrDefenseTM, MSGBOX_NPC
# 87 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	end
# 88 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"

# 89 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
LilycoveCity_DepartmentStore_4F_EventScript_Woman::
# 90 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_4F_Text_FiftyDifferentTMs, MSGBOX_NPC
# 91 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	end
# 92 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"

# 93 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
LilycoveCity_DepartmentStore_4F_EventScript_Youngster::
# 94 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_4F_Text_PokemonOnlyHaveFourMoves, MSGBOX_NPC
# 95 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	end
# 96 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"

# 97 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
LilycoveCity_DepartmentStore_4F_EventScript_ClerkLeft::
# 98 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	lock
# 99 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	faceplayer
# 100 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	message gText_HowMayIServeYou
# 101 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	waitmessage
# 102 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	pokemart LilycoveCity_DepartmentStore_4F_Pokemart_AttackTMs
# 103 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 104 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	release
# 105 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	end
# 106 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"

# 107 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.align 2
# 108 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
LilycoveCity_DepartmentStore_4F_Pokemart_AttackTMs:
# 109 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_TM_FIRE_BLAST
# 110 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_TM_THUNDER
# 111 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_TM_BLIZZARD
# 112 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_TM_HYPER_BEAM
# 113 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_NONE
# 114 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	release
# 115 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	end
# 116 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"

# 117 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
LilycoveCity_DepartmentStore_4F_EventScript_ClerkRight::
# 118 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	lock
# 119 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	faceplayer
# 120 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	message gText_HowMayIServeYou
# 121 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	waitmessage
# 122 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	pokemart LilycoveCity_DepartmentStore_4F_Pokemart_DefenseTMs
# 123 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 124 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	release
# 125 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	end
# 126 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"

# 127 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.align 2
# 128 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
LilycoveCity_DepartmentStore_4F_Pokemart_DefenseTMs:
# 129 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_TM_PROTECT
# 130 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_TM_SAFEGUARD
# 131 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_TM_REFLECT
# 132 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_TM_LIGHT_SCREEN
# 133 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_NONE
# 134 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	release
# 135 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	end
# 136 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"

# 137 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
LilycoveCity_DepartmentStore_4F_Text_AttackOrDefenseTM:
# 138 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.string "Hmm…\p"
# 139 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.string "An attacking move…\n"
# 140 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.string "Or a defensive move…\p"
# 141 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.string "It's no easy matter to decide which TM\n"
# 142 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.string "moves should be taught to POKéMON…$"
# 143 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"

# 144 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
LilycoveCity_DepartmentStore_4F_Text_FiftyDifferentTMs:
# 145 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.string "There are so many different kinds of\n"
# 146 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.string "TM moves.\p"
# 147 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.string "A catalog I read said there are fifty\n"
# 148 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.string "different kinds.$"
# 149 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"

# 150 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
LilycoveCity_DepartmentStore_4F_Text_PokemonOnlyHaveFourMoves:
# 151 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.string "I'd like to get all the different TMs,\n"
# 152 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.string "but a POKéMON learns only four moves.$"

LilycoveCity_DepartmentStore_4F_EventScript_ClerkLeft_Pory_Text_0:
# 16 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.string "Dang, you bought them all? Nice!$"

LilycoveCity_DepartmentStore_4F_EventScript_ClerkRight_Pory_Text_0:
# 48 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.string "Wow! You have all of them! That's so\n"
	.string "cool!$"
