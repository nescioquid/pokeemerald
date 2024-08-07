LilycoveCity_DepartmentStore_5F_EventScript_ClerkFarLeft_Pory::
# 3 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	lock
# 4 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	faceplayer
# 5 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	call Common_PoryScript_Clerk_Hellos
# 6 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	waitmessage
# 7 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	pokemartdecoration2 LilycoveCity_DepartmentStore_5F_Pokemart_Dolls
# 8 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	call Common_PoryScript_Clerk_Goodbyes
# 9 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	release
	end


LilycoveCity_DepartmentStore_5F_EventScript_ClerkMidLeft_Pory::
# 15 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	lock
# 16 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	faceplayer
# 17 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	call Common_PoryScript_Clerk_Hellos
# 18 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	waitmessage
# 19 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	pokemartdecoration2 LilycoveCity_DepartmentStore_5F_Pokemart_Cushions
# 20 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	call Common_PoryScript_Clerk_Goodbyes
# 21 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	release
	end


LilycoveCity_DepartmentStore_5F_EventScript_ClerkMidRight_Pory::
# 27 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	lock
# 28 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	faceplayer
# 29 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	call Common_PoryScript_Clerk_Hellos
# 30 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	waitmessage
# 31 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	pokemartdecoration2 LilycoveCity_DepartmentStore_5F_Pokemart_Posters
# 32 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	call Common_PoryScript_Clerk_Goodbyes
# 33 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	release
	end


LilycoveCity_DepartmentStore_5F_EventScript_ClerkFarRight_Pory::
# 39 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	lock
# 40 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	faceplayer
# 41 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	call Common_PoryScript_Clerk_Hellos
# 42 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	waitmessage
# 43 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	pokemartdecoration2 LilycoveCity_DepartmentStore_5F_Pokemart_Mats
# 44 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	call Common_PoryScript_Clerk_Goodbyes
# 45 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	release
	end


# 49 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"

# 50 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
.set LOCALID_WOMAN, 7
# 51 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"

# 52 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
LilycoveCity_DepartmentStore_5F_MapScripts::
# 53 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LilycoveCity_DepartmentStore_5F_OnWarp
# 54 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.byte 0
# 55 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"

# 56 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
@ During the abnormal weather from Kyogre/Groudon awakening the dept store rooftop is inaccessible
# 57 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
@ Likely done to avoid dealing with showing the weather. Technically the rooftop is indoors
# 58 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
LilycoveCity_DepartmentStore_5F_OnWarp:
# 59 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	map_script_2 VAR_SOOTOPOLIS_CITY_STATE, 1, LilycoveCity_DepartmentStore_5F_EventScript_BlockRoofStairs
# 60 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	map_script_2 VAR_SOOTOPOLIS_CITY_STATE, 2, LilycoveCity_DepartmentStore_5F_EventScript_BlockRoofStairs
# 61 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	map_script_2 VAR_SOOTOPOLIS_CITY_STATE, 3, LilycoveCity_DepartmentStore_5F_EventScript_BlockRoofStairs
# 62 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte 0
# 63 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"

# 64 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
LilycoveCity_DepartmentStore_5F_EventScript_BlockRoofStairs::
# 65 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	setobjectxy LOCALID_WOMAN, 16, 2
# 66 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	turnobject LOCALID_WOMAN, DIR_NORTH
# 67 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	end
# 68 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"

# 69 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
LilycoveCity_DepartmentStore_5F_EventScript_ClerkFarLeft::
# 70 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	lock
# 71 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	faceplayer
# 72 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	message gText_HowMayIServeYou
# 73 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	waitmessage
# 74 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	pokemartdecoration2 LilycoveCity_DepartmentStore_5F_Pokemart_Dolls
# 75 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 76 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	release
# 77 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	end
# 78 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"

# 79 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.align 2
# 80 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
LilycoveCity_DepartmentStore_5F_Pokemart_Dolls:
# 81 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_PICHU_DOLL
# 82 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_PIKACHU_DOLL
# 83 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_MARILL_DOLL
# 84 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_JIGGLYPUFF_DOLL
# 85 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_DUSKULL_DOLL
# 86 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_WYNAUT_DOLL
# 87 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_BALTOY_DOLL
# 88 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_KECLEON_DOLL
# 89 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_AZURILL_DOLL
# 90 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_SKITTY_DOLL
# 91 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_SWABLU_DOLL
# 92 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_GULPIN_DOLL
# 93 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_NONE
# 94 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	release
# 95 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	end
# 96 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"

# 97 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
LilycoveCity_DepartmentStore_5F_EventScript_ClerkMidLeft::
# 98 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	lock
# 99 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	faceplayer
# 100 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	message gText_HowMayIServeYou
# 101 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	waitmessage
# 102 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	pokemartdecoration2 LilycoveCity_DepartmentStore_5F_Pokemart_Cushions
# 103 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 104 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	release
# 105 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	end
# 106 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"

# 107 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.align 2
# 108 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
LilycoveCity_DepartmentStore_5F_Pokemart_Cushions:
# 109 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_PIKA_CUSHION
# 110 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_ROUND_CUSHION
# 111 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_ZIGZAG_CUSHION
# 112 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_SPIN_CUSHION
# 113 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_DIAMOND_CUSHION
# 114 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_BALL_CUSHION
# 115 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_GRASS_CUSHION
# 116 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_FIRE_CUSHION
# 117 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_WATER_CUSHION
# 118 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_NONE
# 119 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	release
# 120 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	end
# 121 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"

# 122 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
LilycoveCity_DepartmentStore_5F_EventScript_ClerkMidRight::
# 123 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	lock
# 124 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	faceplayer
# 125 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	message gText_HowMayIServeYou
# 126 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	waitmessage
# 127 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	pokemartdecoration2 LilycoveCity_DepartmentStore_5F_Pokemart_Posters
# 128 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 129 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	release
# 130 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	end
# 131 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"

# 132 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.align 2
# 133 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
LilycoveCity_DepartmentStore_5F_Pokemart_Posters:
# 134 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_BALL_POSTER
# 135 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_GREEN_POSTER
# 136 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_RED_POSTER
# 137 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_BLUE_POSTER
# 138 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_CUTE_POSTER
# 139 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_PIKA_POSTER
# 140 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_LONG_POSTER
# 141 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_SEA_POSTER
# 142 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_SKY_POSTER
# 143 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_NONE
# 144 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	release
# 145 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	end
# 146 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"

# 147 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
LilycoveCity_DepartmentStore_5F_EventScript_ClerkFarRight::
# 148 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	lock
# 149 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	faceplayer
# 150 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	message gText_HowMayIServeYou
# 151 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	waitmessage
# 152 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	pokemartdecoration2 LilycoveCity_DepartmentStore_5F_Pokemart_Mats
# 153 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 154 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	release
# 155 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	end
# 156 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"

# 157 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.align 2
# 158 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
LilycoveCity_DepartmentStore_5F_Pokemart_Mats:
# 159 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_SURF_MAT
# 160 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_THUNDER_MAT
# 161 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_FIRE_BLAST_MAT
# 162 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_POWDER_SNOW_MAT
# 163 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_ATTRACT_MAT
# 164 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_FISSURE_MAT
# 165 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_SPIKES_MAT
# 166 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_GLITTER_MAT
# 167 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_JUMP_MAT
# 168 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_SPIN_MAT
# 169 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_NONE
# 170 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	release
# 171 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	end
# 172 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"

# 173 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
LilycoveCity_DepartmentStore_5F_EventScript_PokefanF::
# 174 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_5F_Text_PlaceFullOfCuteDolls, MSGBOX_NPC
# 175 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	end
# 176 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"

# 177 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
LilycoveCity_DepartmentStore_5F_EventScript_Woman::
# 178 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	lockall
# 179 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	applymovement LOCALID_WOMAN, Common_Movement_FacePlayer
# 180 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	waitmovement 0
# 181 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 0, LilycoveCity_DepartmentStore_5F_EventScript_WomanNormal
# 182 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 4, LilycoveCity_DepartmentStore_5F_EventScript_WomanNormal
# 183 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	goto LilycoveCity_DepartmentStore_5F_EventScript_WomanLegendaryWeather
# 184 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	end
# 185 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"

# 186 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
LilycoveCity_DepartmentStore_5F_EventScript_WomanNormal::
# 187 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_5F_Text_SellManyCuteMatsHere, MSGBOX_DEFAULT
# 188 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	closemessage
# 189 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	releaseall
# 190 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	end
# 191 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"

# 192 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
LilycoveCity_DepartmentStore_5F_EventScript_WomanLegendaryWeather::
# 193 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_5F_Text_ClosedRooftopForWeather, MSGBOX_DEFAULT
# 194 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	closemessage
# 195 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	applymovement LOCALID_WOMAN, Common_Movement_WalkInPlaceFasterUp
# 196 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	waitmovement 0
# 197 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	releaseall
# 198 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	end
# 199 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"

# 200 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
LilycoveCity_DepartmentStore_5F_EventScript_LittleGirl::
# 201 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_5F_Text_GettingDollInsteadOfPokemon, MSGBOX_NPC
# 202 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	end
# 203 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"

# 204 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
LilycoveCity_DepartmentStore_5F_Text_PlaceFullOfCuteDolls:
# 205 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.string "This place is full of cute DOLLS.\p"
# 206 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.string "I should buy some for me, instead of\n"
# 207 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.string "just for my children.$"
# 208 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"

# 209 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
LilycoveCity_DepartmentStore_5F_Text_GettingDollInsteadOfPokemon:
# 210 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.string "I'm not big enough to raise POKéMON,\n"
# 211 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.string "so I'm getting a cute DOLL instead.$"
# 212 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"

# 213 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
LilycoveCity_DepartmentStore_5F_Text_SellManyCuteMatsHere:
# 214 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.string "They sell many cute MATS here.\p"
# 215 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.string "I wonder which one I should get?\n"
# 216 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.string "Maybe I'll buy them all…$"
# 217 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"

# 218 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
LilycoveCity_DepartmentStore_5F_Text_ClosedRooftopForWeather:
# 219 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.string "I think they closed the rooftop\n"
# 220 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.string "because the weather is wild today.$"
