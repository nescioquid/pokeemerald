LilycoveCity_DepartmentStore_2F_EventScript_ClerkLeft::
# 4 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	lock
# 5 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	faceplayer
# 6 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	random 2
# 7 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LilycoveCity_DepartmentStore_2F_EventScript_ClerkLeft_2
# 12 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	call Common_PoryScript_Clerk_Hellos
LilycoveCity_DepartmentStore_2F_EventScript_ClerkLeft_1:
# 14 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmessage
# 15 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	goto_if_unset FLAG_BADGE06_GET, LilycoveCity_DepartmentStore_2F_EventScript_ClerkLeft_6
# 17 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	goto_if_unset FLAG_BADGE08_GET, LilycoveCity_DepartmentStore_2F_EventScript_ClerkLeft_7
# 20 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	pokemart Pokemart_Items_All
LilycoveCity_DepartmentStore_2F_EventScript_ClerkLeft_5:
# 22 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LilycoveCity_DepartmentStore_2F_EventScript_ClerkLeft_14
# 25 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	call Common_PoryScript_Clerk_Goodbyes
LilycoveCity_DepartmentStore_2F_EventScript_ClerkLeft_13:
# 27 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	release
	end

LilycoveCity_DepartmentStore_2F_EventScript_ClerkLeft_2:
# 8 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	switch VAR_RESULT
# 9 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	case 0, LilycoveCity_DepartmentStore_2F_EventScript_ClerkLeft_12
	goto LilycoveCity_DepartmentStore_2F_EventScript_ClerkLeft_1

LilycoveCity_DepartmentStore_2F_EventScript_ClerkLeft_6:
# 16 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	pokemart Pokemart_Items_Some
	goto LilycoveCity_DepartmentStore_2F_EventScript_ClerkLeft_5

LilycoveCity_DepartmentStore_2F_EventScript_ClerkLeft_7:
# 18 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	pokemart Pokemart_Items_Most
	goto LilycoveCity_DepartmentStore_2F_EventScript_ClerkLeft_5

LilycoveCity_DepartmentStore_2F_EventScript_ClerkLeft_12:
# 9 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	message LilycoveCity_DepartmentStore_2F_EventScript_ClerkLeft_Text_0
	goto LilycoveCity_DepartmentStore_2F_EventScript_ClerkLeft_1

LilycoveCity_DepartmentStore_2F_EventScript_ClerkLeft_14:
# 23 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_2F_EventScript_ClerkLeft_Text_1
	goto LilycoveCity_DepartmentStore_2F_EventScript_ClerkLeft_13


LilycoveCity_DepartmentStore_2F_EventScript_ClerkRight::
# 33 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	lock
# 34 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	faceplayer
# 35 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	random 3
# 36 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LilycoveCity_DepartmentStore_2F_EventScript_ClerkRight_2
# 41 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	call Common_PoryScript_Clerk_Hellos
LilycoveCity_DepartmentStore_2F_EventScript_ClerkRight_1:
# 43 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmessage
# 44 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	goto_if_unset FLAG_BADGE06_GET, LilycoveCity_DepartmentStore_2F_EventScript_ClerkRight_6
# 47 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	pokemart Pokemart_PokeBalls_All
LilycoveCity_DepartmentStore_2F_EventScript_ClerkRight_5:
# 49 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LilycoveCity_DepartmentStore_2F_EventScript_ClerkRight_12
# 52 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	call Common_PoryScript_Clerk_Goodbyes
LilycoveCity_DepartmentStore_2F_EventScript_ClerkRight_11:
# 54 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	release
	end

LilycoveCity_DepartmentStore_2F_EventScript_ClerkRight_2:
# 37 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	switch VAR_RESULT
# 38 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	case 0, LilycoveCity_DepartmentStore_2F_EventScript_ClerkRight_10
	goto LilycoveCity_DepartmentStore_2F_EventScript_ClerkRight_1

LilycoveCity_DepartmentStore_2F_EventScript_ClerkRight_6:
# 45 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	pokemart Pokemart_PokeBalls_Some
	goto LilycoveCity_DepartmentStore_2F_EventScript_ClerkRight_5

LilycoveCity_DepartmentStore_2F_EventScript_ClerkRight_10:
# 38 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	message LilycoveCity_DepartmentStore_2F_EventScript_ClerkRight_Text_0
	goto LilycoveCity_DepartmentStore_2F_EventScript_ClerkRight_1

LilycoveCity_DepartmentStore_2F_EventScript_ClerkRight_12:
# 50 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_2F_EventScript_ClerkRight_Text_1
	goto LilycoveCity_DepartmentStore_2F_EventScript_ClerkRight_11


	.align 2
# 60 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
Pokemart_Items_All:
# 61 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_PEWTER_CRUNCHIES
# 62 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_RAGE_CANDY_BAR
# 63 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_POTION
# 64 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 65 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 66 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_MAX_POTION
# 67 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 68 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 69 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 70 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_AWAKENING
# 71 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 72 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 73 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 74 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_REVIVE
# 75 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_REPEL
# 76 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 77 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 78 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_POKE_DOLL
# 79 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_FLUFFY_TAIL
	.2byte ITEM_NONE

	.align 2
# 82 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
Pokemart_Items_Most:
# 83 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_PEWTER_CRUNCHIES
# 84 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_RAGE_CANDY_BAR
# 85 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_POTION
# 86 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 87 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 88 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_MAX_POTION
# 90 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 91 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 92 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_AWAKENING
# 93 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 94 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 95 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 96 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_REVIVE
# 97 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_REPEL
# 98 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 99 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 100 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_POKE_DOLL
# 101 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_FLUFFY_TAIL
	.2byte ITEM_NONE

	.align 2
# 104 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
Pokemart_Items_Some:
# 105 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_PEWTER_CRUNCHIES
# 106 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_RAGE_CANDY_BAR
# 107 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_POTION
# 108 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 109 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 112 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 113 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 114 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_AWAKENING
# 115 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 116 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 117 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 118 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_REVIVE
# 119 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_REPEL
# 120 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 121 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 122 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_POKE_DOLL
# 123 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_FLUFFY_TAIL
	.2byte ITEM_NONE

	.align 2
# 127 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
Pokemart_PokeBalls_All:
# 128 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_POKE_BALL
# 129 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 130 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 131 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_QUICK_BALL
# 132 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_DIVE_BALL
# 133 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_DUSK_BALL
# 134 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_HEAL_BALL
# 135 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_LUXURY_BALL
# 136 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_NET_BALL
# 137 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_NEST_BALL
# 138 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_REPEAT_BALL
# 139 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_TIMER_BALL
	.2byte ITEM_NONE

	.align 2
# 142 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
Pokemart_PokeBalls_Some:
# 143 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_POKE_BALL
# 144 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 146 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_QUICK_BALL
# 147 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_DIVE_BALL
# 148 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_DUSK_BALL
# 149 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_HEAL_BALL
# 150 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_LUXURY_BALL
# 151 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_NET_BALL
# 152 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_NEST_BALL
# 153 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_REPEAT_BALL
# 154 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_TIMER_BALL
	.2byte ITEM_NONE

# 157 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"

# 158 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_MapScripts::
# 159 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.byte 0
# 160 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"

# 161 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_EventScript_Cook::
# 162 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_2F_Text_LearnToUseItemsProperly, MSGBOX_NPC
# 163 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	end
# 164 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"

# 165 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_EventScript_PokefanF::
# 166 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_2F_Text_GoodGiftForHusband, MSGBOX_NPC
# 167 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	end
# 168 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"

# 169 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_EventScript_Sailor::
# 170 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_2F_Text_StockUpOnItems, MSGBOX_NPC
# 171 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	end
# 172 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"

# 173 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
@ LilycoveCity_DepartmentStore_2F_EventScript_ClerkLeft::
# 174 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
@ 	lock
# 175 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
@ 	faceplayer
# 176 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
@ 	message gText_HowMayIServeYou
# 177 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
@ 	waitmessage
# 178 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
@ 	pokemart LilycoveCity_DepartmentStore_2F_Pokemart1
# 179 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
@ 	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 180 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
@ 	release
# 181 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
@ 	end
# 182 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"

# 183 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.align 2
# 184 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_Pokemart1:
# 185 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_POKE_BALL
# 186 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 187 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 188 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 189 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 190 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 191 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 192 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 193 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 194 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_AWAKENING
# 195 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_FLUFFY_TAIL
# 196 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_NONE
# 197 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	release
# 198 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	end
# 199 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"

# 200 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
@ LilycoveCity_DepartmentStore_2F_EventScript_ClerkRight::
# 201 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
@ 	lock
# 202 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
@ 	faceplayer
# 203 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
@ 	message gText_HowMayIServeYou
# 204 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
@ 	waitmessage
# 205 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
@ 	pokemart LilycoveCity_DepartmentStore_2F_Pokemart2
# 206 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
@ 	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 207 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
@ 	release
# 208 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
@ 	end
# 209 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"

# 210 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.align 2
# 211 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_Pokemart2:
# 212 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_POTION
# 213 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 214 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 215 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_MAX_POTION
# 216 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_REVIVE
# 217 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_REPEL
# 218 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 219 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 220 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_WAVE_MAIL
# 221 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_MECH_MAIL
# 222 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_NONE
# 223 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	release
# 224 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	end
# 225 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"

# 226 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_Text_LearnToUseItemsProperly:
# 227 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.string "Learn to use items properly.\n"
# 228 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.string "That's basic, really.$"
# 229 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"

# 230 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_Text_GoodGiftForHusband:
# 231 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.string "My husband is waiting at home.\n"
# 232 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.string "What would make a good gift for him?$"
# 233 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"

# 234 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_Text_StockUpOnItems:
# 235 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.string "I'm leaving on a long journey soon.\n"
# 236 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.string "I need to stock up on items.$"

LilycoveCity_DepartmentStore_2F_EventScript_ClerkLeft_Text_0:
# 9 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.string "We got some awesome new snacks in! The\n"
	.string "crunchies are my favorite!$"

LilycoveCity_DepartmentStore_2F_EventScript_ClerkLeft_Text_1:
# 23 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.string "{FONT_SHORT}…munch… …munch…$"

LilycoveCity_DepartmentStore_2F_EventScript_ClerkRight_Text_0:
# 38 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.string "Sure, I'll let you touch my balls… But\n"
	.string "only if you ask nicely! Haha!$"

LilycoveCity_DepartmentStore_2F_EventScript_ClerkRight_Text_1:
# 50 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.string "Seriously though, you're not gonna tell\n"
	.string "my boss I said that, are you?$"
