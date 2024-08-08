Route111_EventScript_Girl::
# 2 "data/maps/Route111/scripts.pory"
	lock
# 3 "data/maps/Route111/scripts.pory"
	faceplayer
# 4 "data/maps/Route111/scripts.pory"
	goto_if_unset FLAG_DAILY_ROUTE_111_RECEIVED_BERRY, Route111_EventScript_Girl_2
# 10 "data/maps/Route111/scripts.pory"
	msgbox Route111_EventScript_Girl_Text_2
Route111_EventScript_Girl_1:
# 12 "data/maps/Route111/scripts.pory"
	release
	end

Route111_EventScript_Girl_2:
# 5 "data/maps/Route111/scripts.pory"
	msgbox Route111_EventScript_Girl_Text_0
# 6 "data/maps/Route111/scripts.pory"
	call Common_PoryScript_GiveBerry_Generic
# 7 "data/maps/Route111/scripts.pory"
	setflag FLAG_DAILY_ROUTE_111_RECEIVED_BERRY
# 8 "data/maps/Route111/scripts.pory"
	msgbox Route111_EventScript_Girl_Text_1
	goto Route111_EventScript_Girl_1


# 16 "data/maps/Route111/scripts.pory"

# 17 "data/maps/Route111/scripts.pory"
.set LOCALID_VICTOR, 1
# 18 "data/maps/Route111/scripts.pory"
.set LOCALID_VICTORIA, 2
# 19 "data/maps/Route111/scripts.pory"
.set LOCALID_VIVI, 3
# 20 "data/maps/Route111/scripts.pory"
.set LOCALID_VICKY, 4
# 21 "data/maps/Route111/scripts.pory"
.set LOCALID_ROCK_SMASH_MAN, 46
# 22 "data/maps/Route111/scripts.pory"

# 23 "data/maps/Route111/scripts.pory"
@ Note: LOCALID_ROUTE111_PLAYER_FALLING is a local id for this map used elsewhere. It's defined in event_objects.h
# 24 "data/maps/Route111/scripts.pory"

# 25 "data/maps/Route111/scripts.pory"
Route111_MapScripts::
# 26 "data/maps/Route111/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route111_OnLoad
# 27 "data/maps/Route111/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route111_OnTransition
# 28 "data/maps/Route111/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Route111_OnWarp
# 29 "data/maps/Route111/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route111_OnFrame
# 30 "data/maps/Route111/scripts.pory"
	.byte 0
# 31 "data/maps/Route111/scripts.pory"

# 32 "data/maps/Route111/scripts.pory"
Route111_OnLoad:
# 33 "data/maps/Route111/scripts.pory"
	call_if_unset FLAG_REGI_DOORS_OPENED, Route111_EventScript_CloseDesertRuins
# 34 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_MIRAGE_TOWER_STATE, 1, Route111_EventScript_ShowTemporaryMirageTower
# 35 "data/maps/Route111/scripts.pory"
	end
# 36 "data/maps/Route111/scripts.pory"

# 37 "data/maps/Route111/scripts.pory"
Route111_EventScript_CloseDesertRuins::
# 38 "data/maps/Route111/scripts.pory"
	setmetatile 29, 86, METATILE_General_RockWall_RockBase, TRUE
# 39 "data/maps/Route111/scripts.pory"
	setmetatile 29, 87, METATILE_General_RockWall_SandBase, TRUE
# 40 "data/maps/Route111/scripts.pory"
	return
# 41 "data/maps/Route111/scripts.pory"

# 42 "data/maps/Route111/scripts.pory"
@ Show Mirage Tower just prior to disintegration. Mirage Tower is otherwise handled by the map layout
# 43 "data/maps/Route111/scripts.pory"
Route111_EventScript_ShowTemporaryMirageTower::
# 44 "data/maps/Route111/scripts.pory"
	setmetatile 18, 53, METATILE_Mauville_MirageTower_Tile0, FALSE
# 45 "data/maps/Route111/scripts.pory"
	setmetatile 19, 53, METATILE_Mauville_MirageTower_Tile1, FALSE
# 46 "data/maps/Route111/scripts.pory"
	setmetatile 20, 53, METATILE_Mauville_MirageTower_Tile2, FALSE
# 47 "data/maps/Route111/scripts.pory"
	setmetatile 18, 54, METATILE_Mauville_MirageTower_Tile3, FALSE
# 48 "data/maps/Route111/scripts.pory"
	setmetatile 19, 54, METATILE_Mauville_MirageTower_Tile4, FALSE
# 49 "data/maps/Route111/scripts.pory"
	setmetatile 20, 54, METATILE_Mauville_MirageTower_Tile5, FALSE
# 50 "data/maps/Route111/scripts.pory"
	setmetatile 18, 55, METATILE_Mauville_MirageTower_Tile6, FALSE
# 51 "data/maps/Route111/scripts.pory"
	setmetatile 19, 55, METATILE_Mauville_MirageTower_Tile7, FALSE
# 52 "data/maps/Route111/scripts.pory"
	setmetatile 20, 55, METATILE_Mauville_MirageTower_Tile8, FALSE
# 53 "data/maps/Route111/scripts.pory"
	setmetatile 18, 56, METATILE_Mauville_MirageTower_Tile9, FALSE
# 54 "data/maps/Route111/scripts.pory"
	setmetatile 19, 56, METATILE_Mauville_MirageTower_TileA, FALSE
# 55 "data/maps/Route111/scripts.pory"
	setmetatile 20, 56, METATILE_Mauville_MirageTower_TileB, FALSE
# 56 "data/maps/Route111/scripts.pory"
	setmetatile 18, 57, METATILE_Mauville_MirageTower_TileC, FALSE
# 57 "data/maps/Route111/scripts.pory"
	setmetatile 19, 57, METATILE_Mauville_MirageTower_TileD, FALSE
# 58 "data/maps/Route111/scripts.pory"
	setmetatile 20, 57, METATILE_Mauville_MirageTower_TileE, FALSE
# 59 "data/maps/Route111/scripts.pory"
	setmetatile 18, 58, METATILE_Mauville_MirageTower_TileF, FALSE
# 60 "data/maps/Route111/scripts.pory"
	setmetatile 19, 58, METATILE_Mauville_MirageTower_Tile10, FALSE
# 61 "data/maps/Route111/scripts.pory"
	setmetatile 20, 58, METATILE_Mauville_MirageTower_Tile11, FALSE
# 62 "data/maps/Route111/scripts.pory"
	return
# 63 "data/maps/Route111/scripts.pory"

# 64 "data/maps/Route111/scripts.pory"
Route111_OnTransition:
# 65 "data/maps/Route111/scripts.pory"
	setvar VAR_TRAINER_HILL_IS_ACTIVE, 0
# 66 "data/maps/Route111/scripts.pory"
	special SetMirageTowerVisibility
# 67 "data/maps/Route111/scripts.pory"
	call_if_unset FLAG_MIRAGE_TOWER_VISIBLE, Route111_EventScript_SetLayoutNoMirageTower
# 68 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_MIRAGE_TOWER_STATE, 1, Route111_EventScript_SetFallingPlayerGfx
# 69 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_MIRAGE_TOWER_STATE, 2, Route111_EventScript_SetMirageTowerGone
# 70 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CheckSetSandstorm
# 71 "data/maps/Route111/scripts.pory"
	call GabbyAndTy_EventScript_UpdateLocation
# 72 "data/maps/Route111/scripts.pory"
	goto_if_not_defeated TRAINER_VICKY, Route111_EventScript_SetWinstratesNotDefeated
# 73 "data/maps/Route111/scripts.pory"
	end
# 74 "data/maps/Route111/scripts.pory"

# 75 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetFallingPlayerGfx::
# 76 "data/maps/Route111/scripts.pory"
	checkplayergender
# 77 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Route111_EventScript_SetFallingPlayerGfxMale
# 78 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, Route111_EventScript_SetFallingPlayerGfxFemale
# 79 "data/maps/Route111/scripts.pory"
	return
# 80 "data/maps/Route111/scripts.pory"

# 81 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetFallingPlayerGfxMale::
# 82 "data/maps/Route111/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RIVAL_BRENDAN_NORMAL
# 83 "data/maps/Route111/scripts.pory"
	return
# 84 "data/maps/Route111/scripts.pory"

# 85 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetFallingPlayerGfxFemale::
# 86 "data/maps/Route111/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RIVAL_MAY_NORMAL
# 87 "data/maps/Route111/scripts.pory"
	return
# 88 "data/maps/Route111/scripts.pory"

# 89 "data/maps/Route111/scripts.pory"
Route111_EventScript_CheckSetSandstorm::
# 90 "data/maps/Route111/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 91 "data/maps/Route111/scripts.pory"
	goto_if_lt VAR_TEMP_1, 34, Route111_EventScript_EndCheckSetSandstorm
# 92 "data/maps/Route111/scripts.pory"
	goto_if_gt VAR_TEMP_1, 107, Route111_EventScript_EndCheckSetSandstorm
# 93 "data/maps/Route111/scripts.pory"
	goto_if_gt VAR_TEMP_1, 72, Route111_EventScript_SetSandstorm
# 94 "data/maps/Route111/scripts.pory"
	goto_if_gt VAR_TEMP_0, 2000, Route111_EventScript_EndCheckSetSandstorm
# 95 "data/maps/Route111/scripts.pory"
	goto_if_lt VAR_TEMP_0, 8, Route111_EventScript_EndCheckSetSandstorm
# 96 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetSandstorm::
# 97 "data/maps/Route111/scripts.pory"
	setweather WEATHER_SANDSTORM
# 98 "data/maps/Route111/scripts.pory"
Route111_EventScript_EndCheckSetSandstorm::
# 99 "data/maps/Route111/scripts.pory"
	return
# 100 "data/maps/Route111/scripts.pory"

# 101 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetWinstratesNotDefeated::
# 102 "data/maps/Route111/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_111_VICTOR_WINSTRATE
# 103 "data/maps/Route111/scripts.pory"
	setflag FLAG_HIDE_ROUTE_111_VICTORIA_WINSTRATE
# 104 "data/maps/Route111/scripts.pory"
	setflag FLAG_HIDE_ROUTE_111_VIVI_WINSTRATE
# 105 "data/maps/Route111/scripts.pory"
	setflag FLAG_HIDE_ROUTE_111_VICKY_WINSTRATE
# 106 "data/maps/Route111/scripts.pory"
	cleartrainerflag TRAINER_VICTOR
# 107 "data/maps/Route111/scripts.pory"
	cleartrainerflag TRAINER_VICTORIA
# 108 "data/maps/Route111/scripts.pory"
	cleartrainerflag TRAINER_VIVI
# 109 "data/maps/Route111/scripts.pory"
	end
# 110 "data/maps/Route111/scripts.pory"

# 111 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetLayoutNoMirageTower::
# 112 "data/maps/Route111/scripts.pory"
	setmaplayoutindex LAYOUT_ROUTE111_NO_MIRAGE_TOWER
# 113 "data/maps/Route111/scripts.pory"
	return
# 114 "data/maps/Route111/scripts.pory"

# 115 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetMirageTowerGone::
# 116 "data/maps/Route111/scripts.pory"
	setvar VAR_MIRAGE_TOWER_STATE, 3
# 117 "data/maps/Route111/scripts.pory"
	return
# 118 "data/maps/Route111/scripts.pory"

# 119 "data/maps/Route111/scripts.pory"
Route111_OnWarp:
# 120 "data/maps/Route111/scripts.pory"
	map_script_2 VAR_MIRAGE_TOWER_STATE, 1, Route111_EventScript_HidePlayerForMirageTower
# 121 "data/maps/Route111/scripts.pory"
	.2byte 0
# 122 "data/maps/Route111/scripts.pory"

# 123 "data/maps/Route111/scripts.pory"
Route111_EventScript_HidePlayerForMirageTower::
# 124 "data/maps/Route111/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_LITTLEROOT_TOWN
# 125 "data/maps/Route111/scripts.pory"
	end
# 126 "data/maps/Route111/scripts.pory"

# 127 "data/maps/Route111/scripts.pory"
Route111_OnFrame:
# 128 "data/maps/Route111/scripts.pory"
	map_script_2 VAR_MIRAGE_TOWER_STATE, 1, Route111_EventScript_MirageTowerDisappear
# 129 "data/maps/Route111/scripts.pory"
	.2byte 0
# 130 "data/maps/Route111/scripts.pory"

# 131 "data/maps/Route111/scripts.pory"
Route111_EventScript_MirageTowerDisappear::
# 132 "data/maps/Route111/scripts.pory"
	lockall
# 133 "data/maps/Route111/scripts.pory"
	special StartMirageTowerShake
# 134 "data/maps/Route111/scripts.pory"
	waitstate
# 135 "data/maps/Route111/scripts.pory"
	delay 24
# 136 "data/maps/Route111/scripts.pory"
	playse SE_FALL
# 137 "data/maps/Route111/scripts.pory"
	addobject LOCALID_ROUTE111_PLAYER_FALLING
# 138 "data/maps/Route111/scripts.pory"
	special StartPlayerDescendMirageTower
# 139 "data/maps/Route111/scripts.pory"
	waitstate
# 140 "data/maps/Route111/scripts.pory"
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_LITTLEROOT_TOWN
# 141 "data/maps/Route111/scripts.pory"
	removeobject LOCALID_ROUTE111_PLAYER_FALLING
# 142 "data/maps/Route111/scripts.pory"
	delay 16
# 143 "data/maps/Route111/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 144 "data/maps/Route111/scripts.pory"
	delay 16
# 145 "data/maps/Route111/scripts.pory"
	special StartMirageTowerDisintegration
# 146 "data/maps/Route111/scripts.pory"
	waitstate
# 147 "data/maps/Route111/scripts.pory"
	special StartMirageTowerFossilFallAndSink
# 148 "data/maps/Route111/scripts.pory"
	waitstate
# 149 "data/maps/Route111/scripts.pory"
	setvar VAR_MIRAGE_TOWER_STATE, 2
# 150 "data/maps/Route111/scripts.pory"
	clearflag FLAG_HIDE_DESERT_UNDERPASS_FOSSIL
# 151 "data/maps/Route111/scripts.pory"
	goto_if_set FLAG_CHOSE_CLAW_FOSSIL, Route111_EventScript_RootFossilDisappeared
# 152 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ClawFossilDisappeared, MSGBOX_DEFAULT
# 153 "data/maps/Route111/scripts.pory"
	releaseall
# 154 "data/maps/Route111/scripts.pory"
	end
# 155 "data/maps/Route111/scripts.pory"

# 156 "data/maps/Route111/scripts.pory"
Route111_EventScript_RootFossilDisappeared::
# 157 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_RootFossilDisappeared, MSGBOX_DEFAULT
# 158 "data/maps/Route111/scripts.pory"
	releaseall
# 159 "data/maps/Route111/scripts.pory"
	end
# 160 "data/maps/Route111/scripts.pory"

# 161 "data/maps/Route111/scripts.pory"
@ Unused
# 162 "data/maps/Route111/scripts.pory"
Route111_Movement_PlayerFall::
# 163 "data/maps/Route111/scripts.pory"
	lock_anim
# 164 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 165 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 166 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 167 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 168 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 169 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 170 "data/maps/Route111/scripts.pory"
	step_end
# 171 "data/maps/Route111/scripts.pory"

# 172 "data/maps/Route111/scripts.pory"
@ Route111_EventScript_Girl::
# 173 "data/maps/Route111/scripts.pory"
@ 	lock
# 174 "data/maps/Route111/scripts.pory"
@ 	faceplayer
# 175 "data/maps/Route111/scripts.pory"
@ 	dotimebasedevents
# 176 "data/maps/Route111/scripts.pory"
@ 	goto_if_set FLAG_DAILY_ROUTE_111_RECEIVED_BERRY, Route111_EventScript_ReceivedBerry
# 177 "data/maps/Route111/scripts.pory"
@ 	msgbox Route111_Text_WateredPlantsEveryDayTakeBerry, MSGBOX_DEFAULT
# 178 "data/maps/Route111/scripts.pory"
@ 	giveitem ITEM_RAZZ_BERRY
# 179 "data/maps/Route111/scripts.pory"
@ 	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 180 "data/maps/Route111/scripts.pory"
@ 	setflag FLAG_DAILY_ROUTE_111_RECEIVED_BERRY
# 181 "data/maps/Route111/scripts.pory"
@ 	special GetPlayerBigGuyGirlString
# 182 "data/maps/Route111/scripts.pory"
@ 	msgbox Route111_Text_GoingToTryToMakeDifferentColorBerries, MSGBOX_DEFAULT
# 183 "data/maps/Route111/scripts.pory"
@ 	release
# 184 "data/maps/Route111/scripts.pory"
@ 	end
# 185 "data/maps/Route111/scripts.pory"

# 186 "data/maps/Route111/scripts.pory"
Route111_EventScript_ReceivedBerry::
# 187 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WhatColorBerriesToLookForToday, MSGBOX_DEFAULT
# 188 "data/maps/Route111/scripts.pory"
	release
# 189 "data/maps/Route111/scripts.pory"
	end
# 190 "data/maps/Route111/scripts.pory"

# 191 "data/maps/Route111/scripts.pory"
@ Unused
# 192 "data/maps/Route111/scripts.pory"
Route111_EventScript_ViciousSandstormTriggerUp::
# 193 "data/maps/Route111/scripts.pory"
	lockall
# 194 "data/maps/Route111/scripts.pory"
	setvar VAR_0x8004, 0
# 195 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_ViciousSandstormTrigger
# 196 "data/maps/Route111/scripts.pory"
	end
# 197 "data/maps/Route111/scripts.pory"

# 198 "data/maps/Route111/scripts.pory"
Route111_EventScript_ViciousSandstormTriggerDown::
# 199 "data/maps/Route111/scripts.pory"
	lockall
# 200 "data/maps/Route111/scripts.pory"
	setvar VAR_0x8004, 1
# 201 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_ViciousSandstormTrigger
# 202 "data/maps/Route111/scripts.pory"
	end
# 203 "data/maps/Route111/scripts.pory"

# 204 "data/maps/Route111/scripts.pory"
Route111_EventScript_ViciousSandstormTriggerLeft::
# 205 "data/maps/Route111/scripts.pory"
	lockall
# 206 "data/maps/Route111/scripts.pory"
	setvar VAR_0x8004, 2
# 207 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_ViciousSandstormTrigger
# 208 "data/maps/Route111/scripts.pory"
	end
# 209 "data/maps/Route111/scripts.pory"

# 210 "data/maps/Route111/scripts.pory"
@ Unused
# 211 "data/maps/Route111/scripts.pory"
Route111_EventScript_ViciousSandstormTriggerRight::
# 212 "data/maps/Route111/scripts.pory"
	lockall
# 213 "data/maps/Route111/scripts.pory"
	setvar VAR_0x8004, 3
# 214 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_ViciousSandstormTrigger
# 215 "data/maps/Route111/scripts.pory"
	end
# 216 "data/maps/Route111/scripts.pory"

# 217 "data/maps/Route111/scripts.pory"
Route111_EventScript_ViciousSandstormTrigger::
# 218 "data/maps/Route111/scripts.pory"
	checkitem ITEM_GO_GOGGLES
# 219 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route111_EventScript_PreventRouteAccess
# 220 "data/maps/Route111/scripts.pory"
	setvar VAR_TEMP_3, 1
# 221 "data/maps/Route111/scripts.pory"
	releaseall
# 222 "data/maps/Route111/scripts.pory"
	end
# 223 "data/maps/Route111/scripts.pory"

# 224 "data/maps/Route111/scripts.pory"
Route111_EventScript_PreventRouteAccess::
# 225 "data/maps/Route111/scripts.pory"
	msgbox gText_SandstormIsVicious, MSGBOX_DEFAULT
# 226 "data/maps/Route111/scripts.pory"
	closemessage
# 227 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_0x8004, 0, Route111_EventScript_PushUpFromRoute
# 228 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_0x8004, 1, Route111_EventScript_PushDownFromRoute
# 229 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_0x8004, 2, Route111_EventScript_PushLeftFromRoute
# 230 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_0x8004, 3, Route111_EventScript_PushRightFromRoute
# 231 "data/maps/Route111/scripts.pory"
	releaseall
# 232 "data/maps/Route111/scripts.pory"
	end
# 233 "data/maps/Route111/scripts.pory"

# 234 "data/maps/Route111/scripts.pory"
Route111_EventScript_PushUpFromRoute::
# 235 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_PushUpFromRoute
# 236 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 237 "data/maps/Route111/scripts.pory"
	return
# 238 "data/maps/Route111/scripts.pory"

# 239 "data/maps/Route111/scripts.pory"
Route111_EventScript_PushDownFromRoute::
# 240 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_PushDownFromRoute
# 241 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 242 "data/maps/Route111/scripts.pory"
	return
# 243 "data/maps/Route111/scripts.pory"

# 244 "data/maps/Route111/scripts.pory"
Route111_EventScript_PushLeftFromRoute::
# 245 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_PushLeftFromRoute
# 246 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 247 "data/maps/Route111/scripts.pory"
	return
# 248 "data/maps/Route111/scripts.pory"

# 249 "data/maps/Route111/scripts.pory"
Route111_EventScript_PushRightFromRoute::
# 250 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_PushRightFromRoute
# 251 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 252 "data/maps/Route111/scripts.pory"
	return
# 253 "data/maps/Route111/scripts.pory"

# 254 "data/maps/Route111/scripts.pory"
Route111_Movement_PushUpFromRoute:
# 255 "data/maps/Route111/scripts.pory"
	walk_up
# 256 "data/maps/Route111/scripts.pory"
	step_end
# 257 "data/maps/Route111/scripts.pory"

# 258 "data/maps/Route111/scripts.pory"
Route111_Movement_PushDownFromRoute:
# 259 "data/maps/Route111/scripts.pory"
	walk_down
# 260 "data/maps/Route111/scripts.pory"
	step_end
# 261 "data/maps/Route111/scripts.pory"

# 262 "data/maps/Route111/scripts.pory"
Route111_Movement_PushLeftFromRoute:
# 263 "data/maps/Route111/scripts.pory"
	walk_left
# 264 "data/maps/Route111/scripts.pory"
	step_end
# 265 "data/maps/Route111/scripts.pory"

# 266 "data/maps/Route111/scripts.pory"
Route111_Movement_PushRightFromRoute:
# 267 "data/maps/Route111/scripts.pory"
	walk_right
# 268 "data/maps/Route111/scripts.pory"
	step_end
# 269 "data/maps/Route111/scripts.pory"

# 270 "data/maps/Route111/scripts.pory"
Route111_EventScript_SunTrigger::
# 271 "data/maps/Route111/scripts.pory"
	setweather WEATHER_SUNNY
# 272 "data/maps/Route111/scripts.pory"
	fadenewbgm MUS_ROUTE110
# 273 "data/maps/Route111/scripts.pory"
	doweather
# 274 "data/maps/Route111/scripts.pory"
	setvar VAR_TEMP_3, 0
# 275 "data/maps/Route111/scripts.pory"
	end
# 276 "data/maps/Route111/scripts.pory"

# 277 "data/maps/Route111/scripts.pory"
Route111_EventScript_SandstormTrigger::
# 278 "data/maps/Route111/scripts.pory"
	setweather WEATHER_SANDSTORM
# 279 "data/maps/Route111/scripts.pory"
	fadenewbgm MUS_DESERT
# 280 "data/maps/Route111/scripts.pory"
	doweather
# 281 "data/maps/Route111/scripts.pory"
	end
# 282 "data/maps/Route111/scripts.pory"

# 283 "data/maps/Route111/scripts.pory"
Route111_EventScript_Victor::
# 284 "data/maps/Route111/scripts.pory"
	lock
# 285 "data/maps/Route111/scripts.pory"
	faceplayer
# 286 "data/maps/Route111/scripts.pory"
	setflag FLAG_LANDMARK_WINSTRATE_FAMILY
# 287 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BattleOurFamily, MSGBOX_YESNO
# 288 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route111_EventScript_BattleWinstrates
# 289 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_IsThatSo, MSGBOX_DEFAULT
# 290 "data/maps/Route111/scripts.pory"
	release
# 291 "data/maps/Route111/scripts.pory"
	end
# 292 "data/maps/Route111/scripts.pory"

# 293 "data/maps/Route111/scripts.pory"
Route111_EventScript_BattleWinstrates::
# 294 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VictorIntro, MSGBOX_DEFAULT
# 295 "data/maps/Route111/scripts.pory"
	trainerbattle_no_intro TRAINER_VICTOR, Route111_Text_VictorDefeat
# 296 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_VICTOR, Common_Movement_WalkInPlaceFasterUp
# 297 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 298 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 299 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VictorPostBattle, MSGBOX_DEFAULT
# 300 "data/maps/Route111/scripts.pory"
	closemessage
# 301 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_VICTOR, Route111_Movement_WinstrateEnterHouse
# 302 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 303 "data/maps/Route111/scripts.pory"
	removeobject LOCALID_VICTOR
# 304 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 305 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_WaitForNextWinstrate
# 306 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 307 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 308 "data/maps/Route111/scripts.pory"
	addobject LOCALID_VICTORIA
# 309 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_VICTORIA, Route111_Movement_WinstrateExitHouse
# 310 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 311 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 312 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VictoriaIntro, MSGBOX_DEFAULT
# 313 "data/maps/Route111/scripts.pory"
	trainerbattle_no_intro TRAINER_VICTORIA, Route111_Text_VictoriaDefeat
# 314 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_VICTORIA, Common_Movement_WalkInPlaceFasterUp
# 315 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 316 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 317 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VictoriaPostBattle, MSGBOX_DEFAULT
# 318 "data/maps/Route111/scripts.pory"
	closemessage
# 319 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_VICTORIA, Route111_Movement_WinstrateEnterHouse
# 320 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 321 "data/maps/Route111/scripts.pory"
	removeobject LOCALID_VICTORIA
# 322 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 323 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_WaitForNextWinstrate
# 324 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 325 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 326 "data/maps/Route111/scripts.pory"
	addobject LOCALID_VIVI
# 327 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_VIVI, Route111_Movement_WinstrateExitHouse
# 328 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 329 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 330 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ViviIntro, MSGBOX_DEFAULT
# 331 "data/maps/Route111/scripts.pory"
	trainerbattle_no_intro TRAINER_VIVI, Route111_Text_ViviDefeat
# 332 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_VIVI, Common_Movement_WalkInPlaceFasterUp
# 333 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 334 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 335 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ViviPostBattle, MSGBOX_DEFAULT
# 336 "data/maps/Route111/scripts.pory"
	closemessage
# 337 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_VIVI, Route111_Movement_WinstrateEnterHouse
# 338 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 339 "data/maps/Route111/scripts.pory"
	removeobject LOCALID_VIVI
# 340 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 341 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_WaitForNextWinstrate
# 342 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 343 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 344 "data/maps/Route111/scripts.pory"
	addobject LOCALID_VICKY
# 345 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_VICKY, Route111_Movement_WinstrateExitHouse
# 346 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 347 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 348 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VickyIntro, MSGBOX_DEFAULT
# 349 "data/maps/Route111/scripts.pory"
	trainerbattle_no_intro TRAINER_VICKY, Route111_Text_VickyDefeat
# 350 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VickyPostBattle, MSGBOX_DEFAULT
# 351 "data/maps/Route111/scripts.pory"
	closemessage
# 352 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_VICKY, Common_Movement_WalkInPlaceFasterUp
# 353 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 354 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 355 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_VICKY, Route111_Movement_WinstrateEnterHouse
# 356 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 357 "data/maps/Route111/scripts.pory"
	removeobject LOCALID_VICKY
# 358 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 359 "data/maps/Route111/scripts.pory"
	release
# 360 "data/maps/Route111/scripts.pory"
	end
# 361 "data/maps/Route111/scripts.pory"

# 362 "data/maps/Route111/scripts.pory"
Route111_EventScript_OpenWinstrateDoor::
# 363 "data/maps/Route111/scripts.pory"
	opendoor 13, 113
# 364 "data/maps/Route111/scripts.pory"
	waitdooranim
# 365 "data/maps/Route111/scripts.pory"
	return
# 366 "data/maps/Route111/scripts.pory"

# 367 "data/maps/Route111/scripts.pory"
Route111_EventScript_CloseWinstrateDoor::
# 368 "data/maps/Route111/scripts.pory"
	closedoor 13, 113
# 369 "data/maps/Route111/scripts.pory"
	waitdooranim
# 370 "data/maps/Route111/scripts.pory"
	return
# 371 "data/maps/Route111/scripts.pory"

# 372 "data/maps/Route111/scripts.pory"
Route111_Movement_WinstrateEnterHouse:
# 373 "data/maps/Route111/scripts.pory"
	walk_in_place_faster_up
# 374 "data/maps/Route111/scripts.pory"
	walk_up
# 375 "data/maps/Route111/scripts.pory"
	step_end
# 376 "data/maps/Route111/scripts.pory"

# 377 "data/maps/Route111/scripts.pory"
Route111_Movement_WinstrateExitHouse:
# 378 "data/maps/Route111/scripts.pory"
	walk_down
# 379 "data/maps/Route111/scripts.pory"
	step_end
# 380 "data/maps/Route111/scripts.pory"

# 381 "data/maps/Route111/scripts.pory"
Route111_Movement_WaitForNextWinstrate:
# 382 "data/maps/Route111/scripts.pory"
	delay_16
# 383 "data/maps/Route111/scripts.pory"
	delay_16
# 384 "data/maps/Route111/scripts.pory"
	delay_16
# 385 "data/maps/Route111/scripts.pory"
	step_end
# 386 "data/maps/Route111/scripts.pory"

# 387 "data/maps/Route111/scripts.pory"
Route111_EventScript_RouteSignMauville::
# 388 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_RouteSignMauville, MSGBOX_SIGN
# 389 "data/maps/Route111/scripts.pory"
	end
# 390 "data/maps/Route111/scripts.pory"

# 391 "data/maps/Route111/scripts.pory"
Route111_EventScript_WinstrateHouseSign::
# 392 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WinstrateHouseSign, MSGBOX_SIGN
# 393 "data/maps/Route111/scripts.pory"
	end
# 394 "data/maps/Route111/scripts.pory"

# 395 "data/maps/Route111/scripts.pory"
Route111_EventScript_RouteSign112::
# 396 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_RouteSign112, MSGBOX_SIGN
# 397 "data/maps/Route111/scripts.pory"
	end
# 398 "data/maps/Route111/scripts.pory"

# 399 "data/maps/Route111/scripts.pory"
Route111_EventScript_RouteSign113::
# 400 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_RouteSign113, MSGBOX_SIGN
# 401 "data/maps/Route111/scripts.pory"
	end
# 402 "data/maps/Route111/scripts.pory"

# 403 "data/maps/Route111/scripts.pory"
Route111_EventScript_OldLadysRestStopSign::
# 404 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_OldLadysRestStopSign, MSGBOX_SIGN
# 405 "data/maps/Route111/scripts.pory"
	end
# 406 "data/maps/Route111/scripts.pory"

# 407 "data/maps/Route111/scripts.pory"
Route111_EventScript_TrainerTipsSpAtkSpDef::
# 408 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_TrainerTipsSpAtkSpDef, MSGBOX_SIGN
# 409 "data/maps/Route111/scripts.pory"
	end
# 410 "data/maps/Route111/scripts.pory"

# 411 "data/maps/Route111/scripts.pory"
Route111_EventScript_Man1::
# 412 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ToughToKeepWinningUpTheRanks, MSGBOX_NPC
# 413 "data/maps/Route111/scripts.pory"
	end
# 414 "data/maps/Route111/scripts.pory"

# 415 "data/maps/Route111/scripts.pory"
Route111_EventScript_Man2::
# 416 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WinstrateFamilyDestroyedMe, MSGBOX_NPC
# 417 "data/maps/Route111/scripts.pory"
	end
# 418 "data/maps/Route111/scripts.pory"

# 419 "data/maps/Route111/scripts.pory"
Route111_EventScript_Hiker::
# 420 "data/maps/Route111/scripts.pory"
	lock
# 421 "data/maps/Route111/scripts.pory"
	faceplayer
# 422 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_MIRAGE_TOWER_STATE, 3, Route111_EventScript_HikerMirageTowerGone
# 423 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_MIRAGE_TOWER_STATE, 2, Route111_EventScript_HikerMirageTowerDisintegrated
# 424 "data/maps/Route111/scripts.pory"
	goto_if_set FLAG_MIRAGE_TOWER_VISIBLE, Route111_EventScript_HikerMirageTowerVisible
# 425 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ShouldBeMirageTowerAroundHere, MSGBOX_DEFAULT
# 426 "data/maps/Route111/scripts.pory"
	release
# 427 "data/maps/Route111/scripts.pory"
	end
# 428 "data/maps/Route111/scripts.pory"

# 429 "data/maps/Route111/scripts.pory"
Route111_EventScript_HikerMirageTowerGone::
# 430 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_MirageTowerHasntBeenSeenSince, MSGBOX_DEFAULT
# 431 "data/maps/Route111/scripts.pory"
	release
# 432 "data/maps/Route111/scripts.pory"
	end
# 433 "data/maps/Route111/scripts.pory"

# 434 "data/maps/Route111/scripts.pory"
Route111_EventScript_HikerMirageTowerDisintegrated::
# 435 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ThatWasShockingSandRainedDown, MSGBOX_DEFAULT
# 436 "data/maps/Route111/scripts.pory"
	release
# 437 "data/maps/Route111/scripts.pory"
	end
# 438 "data/maps/Route111/scripts.pory"

# 439 "data/maps/Route111/scripts.pory"
Route111_EventScript_HikerMirageTowerVisible::
# 440 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_MirageTowerClearlyVisible, MSGBOX_DEFAULT
# 441 "data/maps/Route111/scripts.pory"
	release
# 442 "data/maps/Route111/scripts.pory"
	end
# 443 "data/maps/Route111/scripts.pory"

# 444 "data/maps/Route111/scripts.pory"
Route111_EventScript_RockSmashTipFatMan::
# 445 "data/maps/Route111/scripts.pory"
	lockall
# 446 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROCK_SMASH_MAN, Common_Movement_FacePlayer
# 447 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 448 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_MauvilleUncleToldMeToTakeRockSmash, MSGBOX_DEFAULT
# 449 "data/maps/Route111/scripts.pory"
	closemessage
# 450 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROCK_SMASH_MAN, Common_Movement_FaceOriginalDirection
# 451 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 452 "data/maps/Route111/scripts.pory"
	releaseall
# 453 "data/maps/Route111/scripts.pory"
	end
# 454 "data/maps/Route111/scripts.pory"

# 455 "data/maps/Route111/scripts.pory"
Route111_EventScript_Drew::
# 456 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_DREW, Route111_Text_DrewIntro, Route111_Text_DrewDefeat
# 457 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DrewPostBattle, MSGBOX_AUTOCLOSE
# 458 "data/maps/Route111/scripts.pory"
	end
# 459 "data/maps/Route111/scripts.pory"

# 460 "data/maps/Route111/scripts.pory"
Route111_EventScript_Heidi::
# 461 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_HEIDI, Route111_Text_HeidiIntro, Route111_Text_HeidiDefeat
# 462 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_HeidiPostBattle, MSGBOX_AUTOCLOSE
# 463 "data/maps/Route111/scripts.pory"
	end
# 464 "data/maps/Route111/scripts.pory"

# 465 "data/maps/Route111/scripts.pory"
Route111_EventScript_Beau::
# 466 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BEAU, Route111_Text_BeauIntro, Route111_Text_BeauDefeat
# 467 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BeauPostBattle, MSGBOX_AUTOCLOSE
# 468 "data/maps/Route111/scripts.pory"
	end
# 469 "data/maps/Route111/scripts.pory"

# 470 "data/maps/Route111/scripts.pory"
Route111_EventScript_Becky::
# 471 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BECKY, Route111_Text_BeckyIntro, Route111_Text_BeckyDefeat
# 472 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BeckyPostBattle, MSGBOX_AUTOCLOSE
# 473 "data/maps/Route111/scripts.pory"
	end
# 474 "data/maps/Route111/scripts.pory"

# 475 "data/maps/Route111/scripts.pory"
Route111_EventScript_Dusty::
# 476 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_DUSTY_1, Route111_Text_DustyIntro, Route111_Text_DustyDefeat, Route111_EventScript_RegisterDusty
# 477 "data/maps/Route111/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 478 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route111_EventScript_RematchDusty
# 479 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DustyPostBattle, MSGBOX_DEFAULT
# 480 "data/maps/Route111/scripts.pory"
	release
# 481 "data/maps/Route111/scripts.pory"
	end
# 482 "data/maps/Route111/scripts.pory"

# 483 "data/maps/Route111/scripts.pory"
Route111_EventScript_RegisterDusty::
# 484 "data/maps/Route111/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 485 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 486 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DustyRegister, MSGBOX_DEFAULT
# 487 "data/maps/Route111/scripts.pory"
	register_matchcall TRAINER_DUSTY_1
# 488 "data/maps/Route111/scripts.pory"
	release
# 489 "data/maps/Route111/scripts.pory"
	end
# 490 "data/maps/Route111/scripts.pory"

# 491 "data/maps/Route111/scripts.pory"
Route111_EventScript_RematchDusty::
# 492 "data/maps/Route111/scripts.pory"
	trainerbattle_rematch TRAINER_DUSTY_1, Route111_Text_DustyRematchIntro, Route111_Text_DustyRematchDefeat
# 493 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DustyPostRematch, MSGBOX_AUTOCLOSE
# 494 "data/maps/Route111/scripts.pory"
	end
# 495 "data/maps/Route111/scripts.pory"

# 496 "data/maps/Route111/scripts.pory"
Route111_EventScript_Travis::
# 497 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_TRAVIS, Route111_Text_TravisIntro, Route111_Text_TravisDefeat
# 498 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_TravisPostBattle, MSGBOX_AUTOCLOSE
# 499 "data/maps/Route111/scripts.pory"
	end
# 500 "data/maps/Route111/scripts.pory"

# 501 "data/maps/Route111/scripts.pory"
Route111_EventScript_Irene::
# 502 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_IRENE, Route111_Text_IreneIntro, Route111_Text_IreneDefeat
# 503 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_IrenePostBattle, MSGBOX_AUTOCLOSE
# 504 "data/maps/Route111/scripts.pory"
	end
# 505 "data/maps/Route111/scripts.pory"

# 506 "data/maps/Route111/scripts.pory"
Route111_EventScript_Daisuke::
# 507 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_DAISUKE, Route111_Text_DaisukeIntro, Route111_Text_DaisukeDefeat
# 508 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DaisukePostBattle, MSGBOX_AUTOCLOSE
# 509 "data/maps/Route111/scripts.pory"
	end
# 510 "data/maps/Route111/scripts.pory"

# 511 "data/maps/Route111/scripts.pory"
Route111_EventScript_Wilton::
# 512 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_WILTON_1, Route111_Text_WiltonIntro, Route111_Text_WiltonDefeat, Route111_EventScript_RegisterWilton
# 513 "data/maps/Route111/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 514 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route111_EventScript_RematchWilton
# 515 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WiltonPostBattle, MSGBOX_DEFAULT
# 516 "data/maps/Route111/scripts.pory"
	release
# 517 "data/maps/Route111/scripts.pory"
	end
# 518 "data/maps/Route111/scripts.pory"

# 519 "data/maps/Route111/scripts.pory"
Route111_EventScript_RegisterWilton::
# 520 "data/maps/Route111/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 521 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 522 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WiltonRegister, MSGBOX_DEFAULT
# 523 "data/maps/Route111/scripts.pory"
	register_matchcall TRAINER_WILTON_1
# 524 "data/maps/Route111/scripts.pory"
	release
# 525 "data/maps/Route111/scripts.pory"
	end
# 526 "data/maps/Route111/scripts.pory"

# 527 "data/maps/Route111/scripts.pory"
Route111_EventScript_RematchWilton::
# 528 "data/maps/Route111/scripts.pory"
	trainerbattle_rematch TRAINER_WILTON_1, Route111_Text_WiltonRematchIntro, Route111_Text_WiltonRematchDefeat
# 529 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WiltonPostRematch, MSGBOX_AUTOCLOSE
# 530 "data/maps/Route111/scripts.pory"
	end
# 531 "data/maps/Route111/scripts.pory"

# 532 "data/maps/Route111/scripts.pory"
Route111_EventScript_Brooke::
# 533 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BROOKE_1, Route111_Text_BrookeIntro, Route111_Text_BrookeDefeat, Route111_EventScript_RegisterBrooke
# 534 "data/maps/Route111/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 535 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route111_EventScript_RematchBrooke
# 536 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BrookePostBattle, MSGBOX_DEFAULT
# 537 "data/maps/Route111/scripts.pory"
	release
# 538 "data/maps/Route111/scripts.pory"
	end
# 539 "data/maps/Route111/scripts.pory"

# 540 "data/maps/Route111/scripts.pory"
Route111_EventScript_RegisterBrooke::
# 541 "data/maps/Route111/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 542 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 543 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BrookeRegister, MSGBOX_DEFAULT
# 544 "data/maps/Route111/scripts.pory"
	register_matchcall TRAINER_BROOKE_1
# 545 "data/maps/Route111/scripts.pory"
	release
# 546 "data/maps/Route111/scripts.pory"
	end
# 547 "data/maps/Route111/scripts.pory"

# 548 "data/maps/Route111/scripts.pory"
Route111_EventScript_RematchBrooke::
# 549 "data/maps/Route111/scripts.pory"
	trainerbattle_rematch TRAINER_BROOKE_1, Route111_Text_BrookeRematchIntro, Route111_Text_BrookeRematchDefeat
# 550 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BrookePostRematch, MSGBOX_AUTOCLOSE
# 551 "data/maps/Route111/scripts.pory"
	end
# 552 "data/maps/Route111/scripts.pory"

# 553 "data/maps/Route111/scripts.pory"
Route111_EventScript_Hayden::
# 554 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_HAYDEN, Route111_Text_HaydenIntro, Route111_Text_HaydenDefeat
# 555 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_HaydenPostBattle, MSGBOX_AUTOCLOSE
# 556 "data/maps/Route111/scripts.pory"
	end
# 557 "data/maps/Route111/scripts.pory"

# 558 "data/maps/Route111/scripts.pory"
Route111_EventScript_Bianca::
# 559 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BIANCA, Route111_Text_BiancaIntro, Route111_Text_BiancaDefeat
# 560 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BiancaPostBattle, MSGBOX_AUTOCLOSE
# 561 "data/maps/Route111/scripts.pory"
	end
# 562 "data/maps/Route111/scripts.pory"

# 563 "data/maps/Route111/scripts.pory"
Route111_EventScript_Tyron::
# 564 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_TYRON, Route111_Text_TyronIntro, Route111_Text_TyronDefeat
# 565 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_TyronPostBattle, MSGBOX_AUTOCLOSE
# 566 "data/maps/Route111/scripts.pory"
	end
# 567 "data/maps/Route111/scripts.pory"

# 568 "data/maps/Route111/scripts.pory"
Route111_EventScript_Celina::
# 569 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_CELINA, Route111_Text_CelinaIntro, Route111_Text_CelinaDefeat
# 570 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_CelinaPostBattle, MSGBOX_AUTOCLOSE
# 571 "data/maps/Route111/scripts.pory"
	end
# 572 "data/maps/Route111/scripts.pory"

# 573 "data/maps/Route111/scripts.pory"
Route111_EventScript_Celia::
# 574 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_CELIA, Route111_Text_CeliaIntro, Route111_Text_CeliaDefeat
# 575 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_CeliaPostBattle, MSGBOX_AUTOCLOSE
# 576 "data/maps/Route111/scripts.pory"
	end
# 577 "data/maps/Route111/scripts.pory"

# 578 "data/maps/Route111/scripts.pory"
Route111_EventScript_Bryan::
# 579 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BRYAN, Route111_Text_BryanIntro, Route111_Text_BryanDefeat
# 580 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BryanPostBattle, MSGBOX_AUTOCLOSE
# 581 "data/maps/Route111/scripts.pory"
	end
# 582 "data/maps/Route111/scripts.pory"

# 583 "data/maps/Route111/scripts.pory"
Route111_EventScript_Branden::
# 584 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BRANDEN, Route111_Text_BrandenIntro, Route111_Text_BrandenDefeat
# 585 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BrandenPostBattle, MSGBOX_AUTOCLOSE
# 586 "data/maps/Route111/scripts.pory"
	end
# 587 "data/maps/Route111/scripts.pory"

# 588 "data/maps/Route111/scripts.pory"
Route111_EventScript_TrainerHillSign::
# 589 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_TrainerHillSign, MSGBOX_SIGN
# 590 "data/maps/Route111/scripts.pory"
	end
# 591 "data/maps/Route111/scripts.pory"

# 592 "data/maps/Route111/scripts.pory"
Route111_Text_BattleOurFamily:
# 593 "data/maps/Route111/scripts.pory"
	.string "Hello! I take it you're a traveler.\p"
# 594 "data/maps/Route111/scripts.pory"
	.string "How's this? What do you say to taking\n"
# 595 "data/maps/Route111/scripts.pory"
	.string "on our family of four in a series of\l"
# 596 "data/maps/Route111/scripts.pory"
	.string "POKéMON battles?$"
# 597 "data/maps/Route111/scripts.pory"

# 598 "data/maps/Route111/scripts.pory"
Route111_Text_IsThatSo:
# 599 "data/maps/Route111/scripts.pory"
	.string "Is that so?\n"
# 600 "data/maps/Route111/scripts.pory"
	.string "Drop in, if you change your mind!$"
# 601 "data/maps/Route111/scripts.pory"

# 602 "data/maps/Route111/scripts.pory"
Route111_Text_VictorIntro:
# 603 "data/maps/Route111/scripts.pory"
	.string "That's the spirit! I like you!$"
# 604 "data/maps/Route111/scripts.pory"

# 605 "data/maps/Route111/scripts.pory"
Route111_Text_VictorDefeat:
# 606 "data/maps/Route111/scripts.pory"
	.string "Aiyah!\n"
# 607 "data/maps/Route111/scripts.pory"
	.string "You're a lot tougher than I expected!$"
# 608 "data/maps/Route111/scripts.pory"

# 609 "data/maps/Route111/scripts.pory"
Route111_Text_VictorPostBattle:
# 610 "data/maps/Route111/scripts.pory"
	.string "Hey, all!\n"
# 611 "data/maps/Route111/scripts.pory"
	.string "I've found a pretty strong TRAINER!$"
# 612 "data/maps/Route111/scripts.pory"

# 613 "data/maps/Route111/scripts.pory"
Route111_Text_VictoriaIntro:
# 614 "data/maps/Route111/scripts.pory"
	.string "Oh, my goodness! Aren't you young?\p"
# 615 "data/maps/Route111/scripts.pory"
	.string "You must be quite the TRAINER to beat\n"
# 616 "data/maps/Route111/scripts.pory"
	.string "my husband, though.\p"
# 617 "data/maps/Route111/scripts.pory"
	.string "It's my turn to battle now!$"
# 618 "data/maps/Route111/scripts.pory"

# 619 "data/maps/Route111/scripts.pory"
Route111_Text_VictoriaDefeat:
# 620 "data/maps/Route111/scripts.pory"
	.string "Oh, gosh!\n"
# 621 "data/maps/Route111/scripts.pory"
	.string "I can't get over how strong you are!$"
# 622 "data/maps/Route111/scripts.pory"

# 623 "data/maps/Route111/scripts.pory"
Route111_Text_VictoriaPostBattle:
# 624 "data/maps/Route111/scripts.pory"
	.string "There's a strong TRAINER here!\n"
# 625 "data/maps/Route111/scripts.pory"
	.string "This one's really strong!$"
# 626 "data/maps/Route111/scripts.pory"

# 627 "data/maps/Route111/scripts.pory"
Route111_Text_ViviIntro:
# 628 "data/maps/Route111/scripts.pory"
	.string "You're stronger than Mommy? Wow!\p"
# 629 "data/maps/Route111/scripts.pory"
	.string "But I'm strong, too!\n"
# 630 "data/maps/Route111/scripts.pory"
	.string "Really! Honestly!$"
# 631 "data/maps/Route111/scripts.pory"

# 632 "data/maps/Route111/scripts.pory"
Route111_Text_ViviDefeat:
# 633 "data/maps/Route111/scripts.pory"
	.string "Huh? Did I just lose?$"
# 634 "data/maps/Route111/scripts.pory"

# 635 "data/maps/Route111/scripts.pory"
Route111_Text_ViviPostBattle:
# 636 "data/maps/Route111/scripts.pory"
	.string "This stinks…\p"
# 637 "data/maps/Route111/scripts.pory"
	.string "…Snivel… Grandma!$"
# 638 "data/maps/Route111/scripts.pory"

# 639 "data/maps/Route111/scripts.pory"
Route111_Text_VickyIntro:
# 640 "data/maps/Route111/scripts.pory"
	.string "How dare you make my granddaughter\n"
# 641 "data/maps/Route111/scripts.pory"
	.string "cry!\p"
# 642 "data/maps/Route111/scripts.pory"
	.string "For that, I'm going to smack you!\n"
# 643 "data/maps/Route111/scripts.pory"
	.string "Prepare to lose!$"
# 644 "data/maps/Route111/scripts.pory"

# 645 "data/maps/Route111/scripts.pory"
Route111_Text_VickyDefeat:
# 646 "data/maps/Route111/scripts.pory"
	.string "Kwah! You are strong…\n"
# 647 "data/maps/Route111/scripts.pory"
	.string "My granddaughter was right…$"
# 648 "data/maps/Route111/scripts.pory"

# 649 "data/maps/Route111/scripts.pory"
Route111_Text_VickyPostBattle:
# 650 "data/maps/Route111/scripts.pory"
	.string "If you're not in any hurry,\n"
# 651 "data/maps/Route111/scripts.pory"
	.string "visit with us awhile.$"
# 652 "data/maps/Route111/scripts.pory"

# 653 "data/maps/Route111/scripts.pory"
Route111_Text_ToughToKeepWinningUpTheRanks:
# 654 "data/maps/Route111/scripts.pory"
	.string "If you don't raise your POKéMON some\n"
# 655 "data/maps/Route111/scripts.pory"
	.string "more, it could be tough to keep winning\l"
# 656 "data/maps/Route111/scripts.pory"
	.string "up through the ranks.\p"
# 657 "data/maps/Route111/scripts.pory"
	.string "I've heard the POKéMON LEAGUE's\n"
# 658 "data/maps/Route111/scripts.pory"
	.string "ELITE FOUR are far stronger than\l"
# 659 "data/maps/Route111/scripts.pory"
	.string "any GYM LEADER.$"
# 660 "data/maps/Route111/scripts.pory"

# 661 "data/maps/Route111/scripts.pory"
Route111_Text_WinstrateFamilyDestroyedMe:
# 662 "data/maps/Route111/scripts.pory"
	.string "I challenged the WINSTRATE family,\n"
# 663 "data/maps/Route111/scripts.pory"
	.string "but four matches in a row is tough\l"
# 664 "data/maps/Route111/scripts.pory"
	.string "going… They destroyed me.$"
# 665 "data/maps/Route111/scripts.pory"

# 666 "data/maps/Route111/scripts.pory"
Route111_Text_RouteSignMauville:
# 667 "data/maps/Route111/scripts.pory"
	.string "ROUTE 111\n"
# 668 "data/maps/Route111/scripts.pory"
	.string "{DOWN_ARROW} MAUVILLE CITY$"
# 669 "data/maps/Route111/scripts.pory"

# 670 "data/maps/Route111/scripts.pory"
Route111_Text_WinstrateHouseSign:
# 671 "data/maps/Route111/scripts.pory"
	.string "“Our family's hearts beat as one!”\n"
# 672 "data/maps/Route111/scripts.pory"
	.string "THE WINSTRATE'S HOUSE$"
# 673 "data/maps/Route111/scripts.pory"

# 674 "data/maps/Route111/scripts.pory"
Route111_Text_RouteSign112:
# 675 "data/maps/Route111/scripts.pory"
	.string "ROUTE 111\n"
# 676 "data/maps/Route111/scripts.pory"
	.string "{LEFT_ARROW} ROUTE 112$"
# 677 "data/maps/Route111/scripts.pory"

# 678 "data/maps/Route111/scripts.pory"
Route111_Text_RouteSign113:
# 679 "data/maps/Route111/scripts.pory"
	.string "ROUTE 111\n"
# 680 "data/maps/Route111/scripts.pory"
	.string "{LEFT_ARROW} ROUTE 113$"
# 681 "data/maps/Route111/scripts.pory"

# 682 "data/maps/Route111/scripts.pory"
Route111_Text_OldLadysRestStopSign:
# 683 "data/maps/Route111/scripts.pory"
	.string "OLD LADY'S REST STOP\n"
# 684 "data/maps/Route111/scripts.pory"
	.string "“Come in and rest your tired bones.”$"
# 685 "data/maps/Route111/scripts.pory"

# 686 "data/maps/Route111/scripts.pory"
Route111_Text_TrainerTipsSpAtkSpDef:
# 687 "data/maps/Route111/scripts.pory"
	.string "TRAINER TIPS\p"
# 688 "data/maps/Route111/scripts.pory"
	.string "One of the indicators of a POKéMON's\n"
# 689 "data/maps/Route111/scripts.pory"
	.string "powerfulness is SP. ATK. It stands for\l"
# 690 "data/maps/Route111/scripts.pory"
	.string "“SPECIAL ATTACK.”\p"
# 691 "data/maps/Route111/scripts.pory"
	.string "Likewise, SP. DEF stands for “SPECIAL\n"
# 692 "data/maps/Route111/scripts.pory"
	.string "DEFENSE.”$"
# 693 "data/maps/Route111/scripts.pory"

# 694 "data/maps/Route111/scripts.pory"
Route111_Text_ShouldBeMirageTowerAroundHere:
# 695 "data/maps/Route111/scripts.pory"
	.string "There should be a tower made of sand\n"
# 696 "data/maps/Route111/scripts.pory"
	.string "around here somewhere.\p"
# 697 "data/maps/Route111/scripts.pory"
	.string "But for some reason, it can be seen\n"
# 698 "data/maps/Route111/scripts.pory"
	.string "sometimes, and sometimes not.\p"
# 699 "data/maps/Route111/scripts.pory"
	.string "That's why I call it the MIRAGE TOWER.$"
# 700 "data/maps/Route111/scripts.pory"

# 701 "data/maps/Route111/scripts.pory"
Route111_Text_MirageTowerClearlyVisible:
# 702 "data/maps/Route111/scripts.pory"
	.string "I see it!\n"
# 703 "data/maps/Route111/scripts.pory"
	.string "The tower of sand!\p"
# 704 "data/maps/Route111/scripts.pory"
	.string "The sand tower they called a mirage\n"
# 705 "data/maps/Route111/scripts.pory"
	.string "is clearly visible!\p"
# 706 "data/maps/Route111/scripts.pory"
	.string "But it looks so fragile…\n"
# 707 "data/maps/Route111/scripts.pory"
	.string "It could crumble away anytime…\p"
# 708 "data/maps/Route111/scripts.pory"
	.string "I want to go inside it, but I can't\n"
# 709 "data/maps/Route111/scripts.pory"
	.string "get my courage up for it…$"
# 710 "data/maps/Route111/scripts.pory"

# 711 "data/maps/Route111/scripts.pory"
Route111_Text_ThatWasShockingSandRainedDown:
# 712 "data/maps/Route111/scripts.pory"
	.string "Whoa…\n"
# 713 "data/maps/Route111/scripts.pory"
	.string "That was shocking.\p"
# 714 "data/maps/Route111/scripts.pory"
	.string "Sand rained down in chunks all of\n"
# 715 "data/maps/Route111/scripts.pory"
	.string "a sudden.\p"
# 716 "data/maps/Route111/scripts.pory"
	.string "What was it like inside?\n"
# 717 "data/maps/Route111/scripts.pory"
	.string "Were there sandy ghosts and such?$"
# 718 "data/maps/Route111/scripts.pory"

# 719 "data/maps/Route111/scripts.pory"
Route111_Text_MirageTowerHasntBeenSeenSince:
# 720 "data/maps/Route111/scripts.pory"
	.string "Since I spoke to you, the tower of sand\n"
# 721 "data/maps/Route111/scripts.pory"
	.string "hasn't been seen.\p"
# 722 "data/maps/Route111/scripts.pory"
	.string "Perhaps it really was\n"
# 723 "data/maps/Route111/scripts.pory"
	.string "the MIRAGE TOWER…$"
# 724 "data/maps/Route111/scripts.pory"

# 725 "data/maps/Route111/scripts.pory"
Route111_Text_ClawFossilDisappeared:
# 726 "data/maps/Route111/scripts.pory"
	.string "The CLAW FOSSIL disappeared into\n"
# 727 "data/maps/Route111/scripts.pory"
	.string "the sand…$"
# 728 "data/maps/Route111/scripts.pory"

# 729 "data/maps/Route111/scripts.pory"
Route111_Text_RootFossilDisappeared:
# 730 "data/maps/Route111/scripts.pory"
	.string "The ROOT FOSSIL disappeared into\n"
# 731 "data/maps/Route111/scripts.pory"
	.string "the sand…$"
# 732 "data/maps/Route111/scripts.pory"

# 733 "data/maps/Route111/scripts.pory"
Route111_Text_MauvilleUncleToldMeToTakeRockSmash:
# 734 "data/maps/Route111/scripts.pory"
	.string "Oh, no!\p"
# 735 "data/maps/Route111/scripts.pory"
	.string "My uncle in MAUVILLE told me to take\n"
# 736 "data/maps/Route111/scripts.pory"
	.string "ROCK SMASH with me if I was going to\l"
# 737 "data/maps/Route111/scripts.pory"
	.string "ROUTE 111!\p"
# 738 "data/maps/Route111/scripts.pory"
	.string "My uncle? He lives across from\n"
# 739 "data/maps/Route111/scripts.pory"
	.string "the bike shop in MAUVILLE.$"
# 740 "data/maps/Route111/scripts.pory"

# 741 "data/maps/Route111/scripts.pory"
Route111_Text_TrainerHillSign:
# 742 "data/maps/Route111/scripts.pory"
	.string "{RIGHT_ARROW} TRAINER HILL ENTRANCE\p"
# 743 "data/maps/Route111/scripts.pory"
	.string "“Scale the heights, you hot-blooded\n"
# 744 "data/maps/Route111/scripts.pory"
	.string "TRAINERS!”$"

Route111_EventScript_Girl_Text_0:
# 5 "data/maps/Route111/scripts.pory"
	.string "I watered the plants every day. They\n"
	.string "grew lots of flowers.\p"
	.string "And they gave me lots of Berries, too.\p"
	.string "Here you go! You can have these!$"

Route111_EventScript_Girl_Text_1:
# 8 "data/maps/Route111/scripts.pory"
	.string "I'm going to try really hard and make\n"
	.string "Berries in different colors.\p"
	.string "I hope you try hard, too!$"

Route111_EventScript_Girl_Text_2:
# 10 "data/maps/Route111/scripts.pory"
	.string "I wonder what color Berries I'll look for\n"
	.string "today?$"
