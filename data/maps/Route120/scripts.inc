Route120_EventScript_BerryBeauty::
# 2 "data/maps/Route120/scripts.pory"
	lock
# 3 "data/maps/Route120/scripts.pory"
	faceplayer
# 4 "data/maps/Route120/scripts.pory"
	dotimebasedevents
# 5 "data/maps/Route120/scripts.pory"
	goto_if_unset FLAG_DAILY_ROUTE_120_RECEIVED_BERRY, Route120_EventScript_BerryBeauty_2
# 11 "data/maps/Route120/scripts.pory"
	msgbox Route120_EventScript_BerryBeauty_Text_2
Route120_EventScript_BerryBeauty_1:
# 13 "data/maps/Route120/scripts.pory"
	release
	end

Route120_EventScript_BerryBeauty_2:
# 6 "data/maps/Route120/scripts.pory"
	msgbox Route120_EventScript_BerryBeauty_Text_0
# 7 "data/maps/Route120/scripts.pory"
	call Common_PoryScript_GiveBerry_Generic
# 8 "data/maps/Route120/scripts.pory"
	setflag FLAG_DAILY_ROUTE_120_RECEIVED_BERRY
# 9 "data/maps/Route120/scripts.pory"
	msgbox Route120_EventScript_BerryBeauty_Text_1
	goto Route120_EventScript_BerryBeauty_1


# 17 "data/maps/Route120/scripts.pory"

# 18 "data/maps/Route120/scripts.pory"
.set LOCALID_BRIDGE_KECLEON, 30
# 19 "data/maps/Route120/scripts.pory"
.set LOCALID_STEVEN, 31
# 20 "data/maps/Route120/scripts.pory"
.set LOCALID_BRIDGE_KECLEON_SHADOW, 36  @ They use a second object which is identical to Kecleon but has a reflection palette tag for the bridge shadow
# 21 "data/maps/Route120/scripts.pory"

# 22 "data/maps/Route120/scripts.pory"
Route120_MapScripts::
# 23 "data/maps/Route120/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route120_OnResume
# 24 "data/maps/Route120/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route120_OnTransition
# 25 "data/maps/Route120/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route120_OnLoad
# 26 "data/maps/Route120/scripts.pory"
	.byte 0
# 27 "data/maps/Route120/scripts.pory"

# 28 "data/maps/Route120/scripts.pory"
Route120_OnResume:
# 29 "data/maps/Route120/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, Route120_EventScript_RemoveKecleonObject
# 30 "data/maps/Route120/scripts.pory"
	end
# 31 "data/maps/Route120/scripts.pory"

# 32 "data/maps/Route120/scripts.pory"
Route120_EventScript_RemoveKecleonObject::
# 33 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_0x8009, 0, Route120_EventScript_RemoveBridgeKecleon
# 34 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_0x8009, 1, Route120_EventScript_RemoveKecleon
# 35 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_0x8009, 2, Route120_EventScript_RemoveKecleon
# 36 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_0x8009, 3, Route120_EventScript_RemoveKecleon
# 37 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_0x8009, 4, Route120_EventScript_RemoveKecleon
# 38 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_0x8009, 5, Route120_EventScript_RemoveKecleon
# 39 "data/maps/Route120/scripts.pory"
	return
# 40 "data/maps/Route120/scripts.pory"

# 41 "data/maps/Route120/scripts.pory"
Route120_EventScript_RemoveBridgeKecleon::
# 42 "data/maps/Route120/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 43 "data/maps/Route120/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
# 44 "data/maps/Route120/scripts.pory"
	removeobject LOCALID_BRIDGE_KECLEON
# 45 "data/maps/Route120/scripts.pory"
	removeobject LOCALID_BRIDGE_KECLEON_SHADOW
# 46 "data/maps/Route120/scripts.pory"
	return
# 47 "data/maps/Route120/scripts.pory"

# 48 "data/maps/Route120/scripts.pory"
Route120_EventScript_RemoveKecleon::
# 49 "data/maps/Route120/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 50 "data/maps/Route120/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
# 51 "data/maps/Route120/scripts.pory"
	removeobject VAR_LAST_TALKED
# 52 "data/maps/Route120/scripts.pory"
	return
# 53 "data/maps/Route120/scripts.pory"

# 54 "data/maps/Route120/scripts.pory"
Route120_OnLoad:
# 55 "data/maps/Route120/scripts.pory"
	call_if_unset FLAG_REGI_DOORS_OPENED, Route120_EventScript_CloseAncientTomb
# 56 "data/maps/Route120/scripts.pory"
	call_if_set FLAG_RECEIVED_DEVON_SCOPE, Route120_EventScript_SetBridgeClearMetatiles
# 57 "data/maps/Route120/scripts.pory"
	call_if_unset FLAG_RECEIVED_DEVON_SCOPE, Route120_EventScript_SetBridgeKecleonMovement
# 58 "data/maps/Route120/scripts.pory"
	end
# 59 "data/maps/Route120/scripts.pory"

# 60 "data/maps/Route120/scripts.pory"
Route120_EventScript_CloseAncientTomb::
# 61 "data/maps/Route120/scripts.pory"
	setmetatile 7, 54, METATILE_General_RockWall_RockBase, TRUE
# 62 "data/maps/Route120/scripts.pory"
	setmetatile 7, 55, METATILE_General_RockWall_SandBase, TRUE
# 63 "data/maps/Route120/scripts.pory"
	return
# 64 "data/maps/Route120/scripts.pory"

# 65 "data/maps/Route120/scripts.pory"
Route120_EventScript_SetBridgeClearMetatiles::
# 66 "data/maps/Route120/scripts.pory"
	setmetatile 13, 15, METATILE_Fortree_WoodBridge1_Top, FALSE
# 67 "data/maps/Route120/scripts.pory"
	setmetatile 12, 16, METATILE_Fortree_WoodBridge1_Bottom, FALSE
# 68 "data/maps/Route120/scripts.pory"
	setmetatile 12, 17, METATILE_General_ReflectiveWater, FALSE
# 69 "data/maps/Route120/scripts.pory"
	setmetatile 13, 17, METATILE_General_ReflectiveWater, FALSE
# 70 "data/maps/Route120/scripts.pory"
	return
# 71 "data/maps/Route120/scripts.pory"

# 72 "data/maps/Route120/scripts.pory"
Route120_EventScript_SetBridgeKecleonMovement::
# 73 "data/maps/Route120/scripts.pory"
	setobjectmovementtype LOCALID_BRIDGE_KECLEON_SHADOW, MOVEMENT_TYPE_FACE_RIGHT
# 74 "data/maps/Route120/scripts.pory"
	return
# 75 "data/maps/Route120/scripts.pory"

# 76 "data/maps/Route120/scripts.pory"
Route120_OnTransition:
# 77 "data/maps/Route120/scripts.pory"
	call GabbyAndTy_EventScript_UpdateLocation
# 78 "data/maps/Route120/scripts.pory"
	call Route120_EventScript_SetWeather
# 79 "data/maps/Route120/scripts.pory"
	end
# 80 "data/maps/Route120/scripts.pory"

# 81 "data/maps/Route120/scripts.pory"
Route120_EventScript_SetWeather::
# 82 "data/maps/Route120/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 83 "data/maps/Route120/scripts.pory"
	goto_if_le VAR_TEMP_1, 14, Route120_EventScript_SetSunnyWeather
# 84 "data/maps/Route120/scripts.pory"
	goto_if_le VAR_TEMP_1, 60, Route120_EventScript_TrySetRainyWeather
# 85 "data/maps/Route120/scripts.pory"
	goto_if_ge VAR_TEMP_1, 61, Route120_EventScript_SetCloudyWeather
# 86 "data/maps/Route120/scripts.pory"
	return
# 87 "data/maps/Route120/scripts.pory"

# 88 "data/maps/Route120/scripts.pory"
Route120_EventScript_SetCloudyWeather::
# 89 "data/maps/Route120/scripts.pory"
	setweather WEATHER_SUNNY_CLOUDS
# 90 "data/maps/Route120/scripts.pory"
	return
# 91 "data/maps/Route120/scripts.pory"

# 92 "data/maps/Route120/scripts.pory"
Route120_EventScript_SetSunnyWeather::
# 93 "data/maps/Route120/scripts.pory"
	setweather WEATHER_SUNNY
# 94 "data/maps/Route120/scripts.pory"
	return
# 95 "data/maps/Route120/scripts.pory"

# 96 "data/maps/Route120/scripts.pory"
Route120_EventScript_TrySetRainyWeather::
# 97 "data/maps/Route120/scripts.pory"
	goto_if_le VAR_TEMP_0, 7, Route120_EventScript_SetRainyWeather
# 98 "data/maps/Route120/scripts.pory"
	goto_if_le VAR_TEMP_0, 19, Route120_EventScript_SetSunnyWeather
# 99 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_SetRainyWeather
# 100 "data/maps/Route120/scripts.pory"
	end
# 101 "data/maps/Route120/scripts.pory"

# 102 "data/maps/Route120/scripts.pory"
Route120_EventScript_SetRainyWeather::
# 103 "data/maps/Route120/scripts.pory"
	setweather WEATHER_RAIN
# 104 "data/maps/Route120/scripts.pory"
	return
# 105 "data/maps/Route120/scripts.pory"

# 106 "data/maps/Route120/scripts.pory"
@ Route120_EventScript_BerryBeauty::
# 107 "data/maps/Route120/scripts.pory"
@ 	lock
# 108 "data/maps/Route120/scripts.pory"
@ 	faceplayer
# 109 "data/maps/Route120/scripts.pory"
@ 	dotimebasedevents
# 110 "data/maps/Route120/scripts.pory"
@ 	goto_if_set FLAG_DAILY_ROUTE_120_RECEIVED_BERRY, Route120_EventScript_ReceivedBerry
# 111 "data/maps/Route120/scripts.pory"
@ 	msgbox Route120_Text_BerriesExpressionOfLoveIsntIt, MSGBOX_YESNO
# 112 "data/maps/Route120/scripts.pory"
@ 	call_if_eq VAR_RESULT, YES, Route120_EventScript_BerryLove
# 113 "data/maps/Route120/scripts.pory"
@ 	call_if_eq VAR_RESULT, NO, Route120_EventScript_BerryNotLove
# 114 "data/maps/Route120/scripts.pory"
@ 	specialvar VAR_RESULT, GetPlayerTrainerIdOnesDigit
# 115 "data/maps/Route120/scripts.pory"
@ 	switch VAR_RESULT
# 116 "data/maps/Route120/scripts.pory"
@ 	case 0, Route120_EventScript_GiveFigyBerry
# 117 "data/maps/Route120/scripts.pory"
@ 	case 5, Route120_EventScript_GiveFigyBerry
# 118 "data/maps/Route120/scripts.pory"
@ 	case 1, Route120_EventScript_GiveWikiBerry
# 119 "data/maps/Route120/scripts.pory"
@ 	case 6, Route120_EventScript_GiveWikiBerry
# 120 "data/maps/Route120/scripts.pory"
@ 	case 2, Route120_EventScript_GiveMagoBerry
# 121 "data/maps/Route120/scripts.pory"
@ 	case 7, Route120_EventScript_GiveMagoBerry
# 122 "data/maps/Route120/scripts.pory"
@ 	case 3, Route120_EventScript_GiveAguavBerry
# 123 "data/maps/Route120/scripts.pory"
@ 	case 8, Route120_EventScript_GiveAguavBerry
# 124 "data/maps/Route120/scripts.pory"
@ 	case 4, Route120_EventScript_GiveIapapaBerry
# 125 "data/maps/Route120/scripts.pory"
@ 	case 9, Route120_EventScript_GiveIapapaBerry
# 126 "data/maps/Route120/scripts.pory"
@ 	end
# 127 "data/maps/Route120/scripts.pory"

# 128 "data/maps/Route120/scripts.pory"
Route120_EventScript_GiveFigyBerry::
# 129 "data/maps/Route120/scripts.pory"
	setvar VAR_0x8004, ITEM_FIGY_BERRY
# 130 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_GiveBerry
# 131 "data/maps/Route120/scripts.pory"
	end
# 132 "data/maps/Route120/scripts.pory"

# 133 "data/maps/Route120/scripts.pory"
Route120_EventScript_GiveWikiBerry::
# 134 "data/maps/Route120/scripts.pory"
	setvar VAR_0x8004, ITEM_WIKI_BERRY
# 135 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_GiveBerry
# 136 "data/maps/Route120/scripts.pory"
	end
# 137 "data/maps/Route120/scripts.pory"

# 138 "data/maps/Route120/scripts.pory"
Route120_EventScript_GiveMagoBerry::
# 139 "data/maps/Route120/scripts.pory"
	setvar VAR_0x8004, ITEM_MAGO_BERRY
# 140 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_GiveBerry
# 141 "data/maps/Route120/scripts.pory"
	end
# 142 "data/maps/Route120/scripts.pory"

# 143 "data/maps/Route120/scripts.pory"
Route120_EventScript_GiveAguavBerry::
# 144 "data/maps/Route120/scripts.pory"
	setvar VAR_0x8004, ITEM_AGUAV_BERRY
# 145 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_GiveBerry
# 146 "data/maps/Route120/scripts.pory"
	end
# 147 "data/maps/Route120/scripts.pory"

# 148 "data/maps/Route120/scripts.pory"
Route120_EventScript_GiveIapapaBerry::
# 149 "data/maps/Route120/scripts.pory"
	setvar VAR_0x8004, ITEM_IAPAPA_BERRY
# 150 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_GiveBerry
# 151 "data/maps/Route120/scripts.pory"
	end
# 152 "data/maps/Route120/scripts.pory"

# 153 "data/maps/Route120/scripts.pory"
Route120_EventScript_GiveBerry::
# 154 "data/maps/Route120/scripts.pory"
	giveitem VAR_0x8004
# 155 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 156 "data/maps/Route120/scripts.pory"
	setflag FLAG_DAILY_ROUTE_120_RECEIVED_BERRY
# 157 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_BerryIsRareRaiseItWithCare, MSGBOX_DEFAULT
# 158 "data/maps/Route120/scripts.pory"
	release
# 159 "data/maps/Route120/scripts.pory"
	end
# 160 "data/maps/Route120/scripts.pory"

# 161 "data/maps/Route120/scripts.pory"
Route120_EventScript_ReceivedBerry::
# 162 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_IllGetMoreBerriesFromBerryMaster, MSGBOX_DEFAULT
# 163 "data/maps/Route120/scripts.pory"
	release
# 164 "data/maps/Route120/scripts.pory"
	end
# 165 "data/maps/Route120/scripts.pory"

# 166 "data/maps/Route120/scripts.pory"
Route120_EventScript_BerryLove::
# 167 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_YesYouUnderstand, MSGBOX_DEFAULT
# 168 "data/maps/Route120/scripts.pory"
	return
# 169 "data/maps/Route120/scripts.pory"

# 170 "data/maps/Route120/scripts.pory"
Route120_EventScript_BerryNotLove::
# 171 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_MakeYourOwnImpressions, MSGBOX_DEFAULT
# 172 "data/maps/Route120/scripts.pory"
	return
# 173 "data/maps/Route120/scripts.pory"

# 174 "data/maps/Route120/scripts.pory"
Route120_EventScript_Steven::
# 175 "data/maps/Route120/scripts.pory"
	lock
# 176 "data/maps/Route120/scripts.pory"
	faceplayer
# 177 "data/maps/Route120/scripts.pory"
	goto_if_set FLAG_NOT_READY_FOR_BATTLE_ROUTE_120, Route120_EventScript_StevenAskReadyForBattle
# 178 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenGreeting, MSGBOX_YESNO
# 179 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route120_EventScript_StevenNotReady
# 180 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_StevenBattleKecleon
# 181 "data/maps/Route120/scripts.pory"
	end
# 182 "data/maps/Route120/scripts.pory"

# 183 "data/maps/Route120/scripts.pory"
Route120_EventScript_StevenNotReady::
# 184 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenIllWaitHere, MSGBOX_DEFAULT
# 185 "data/maps/Route120/scripts.pory"
	setflag FLAG_NOT_READY_FOR_BATTLE_ROUTE_120
# 186 "data/maps/Route120/scripts.pory"
	release
# 187 "data/maps/Route120/scripts.pory"
	end
# 188 "data/maps/Route120/scripts.pory"

# 189 "data/maps/Route120/scripts.pory"
Route120_EventScript_StevenAskReadyForBattle::
# 190 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenReadyForBattle, MSGBOX_YESNO
# 191 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route120_EventScript_StevenNotReady
# 192 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_StevenBattleKecleon
# 193 "data/maps/Route120/scripts.pory"
	end
# 194 "data/maps/Route120/scripts.pory"

# 195 "data/maps/Route120/scripts.pory"
Route120_EventScript_StevenBattleKecleon::
# 196 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenShowMeYourPower, MSGBOX_DEFAULT
# 197 "data/maps/Route120/scripts.pory"
	closemessage
# 198 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, Route120_EventScript_PlayerApproachKecleonNorth
# 199 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, Route120_EventScript_PlayerApproachKecleonWest
# 200 "data/maps/Route120/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceFasterLeft
# 201 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 202 "data/maps/Route120/scripts.pory"
	delay 20
# 203 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenUsedDevonScope, MSGBOX_DEFAULT
# 204 "data/maps/Route120/scripts.pory"
	closemessage
# 205 "data/maps/Route120/scripts.pory"
	applymovement LOCALID_BRIDGE_KECLEON, Common_Movement_WalkInPlaceFasterRight
# 206 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 207 "data/maps/Route120/scripts.pory"
	applymovement LOCALID_BRIDGE_KECLEON, Movement_KecleonAppears
# 208 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 209 "data/maps/Route120/scripts.pory"
	waitse
# 210 "data/maps/Route120/scripts.pory"
	playmoncry SPECIES_KECLEON, CRY_MODE_ENCOUNTER
# 211 "data/maps/Route120/scripts.pory"
	delay 40
# 212 "data/maps/Route120/scripts.pory"
	waitmoncry
# 213 "data/maps/Route120/scripts.pory"
	setwildbattle SPECIES_KECLEON, 30
# 214 "data/maps/Route120/scripts.pory"
	setvar VAR_0x8009, 0
# 215 "data/maps/Route120/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 216 "data/maps/Route120/scripts.pory"
	dowildbattle
# 217 "data/maps/Route120/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 218 "data/maps/Route120/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 219 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, Route120_EventScript_RemoveBridgeKecleonPostBattle
# 220 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, Route120_EventScript_RemoveBridgeKecleonPostBattle
# 221 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, Route120_EventScript_RemoveBridgeKecleonPostBattle
# 222 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_StevenGiveDeconScope
# 223 "data/maps/Route120/scripts.pory"
	end
# 224 "data/maps/Route120/scripts.pory"

# 225 "data/maps/Route120/scripts.pory"
Route120_EventScript_RemoveBridgeKecleonPostBattle::
# 226 "data/maps/Route120/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 227 "data/maps/Route120/scripts.pory"
	removeobject LOCALID_BRIDGE_KECLEON
# 228 "data/maps/Route120/scripts.pory"
	removeobject LOCALID_BRIDGE_KECLEON_SHADOW
# 229 "data/maps/Route120/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 230 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_StevenGiveDeconScope
# 231 "data/maps/Route120/scripts.pory"
	end
# 232 "data/maps/Route120/scripts.pory"

# 233 "data/maps/Route120/scripts.pory"
Route120_EventScript_StevenGiveDeconScope::
# 234 "data/maps/Route120/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceFasterDown
# 235 "data/maps/Route120/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 236 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 237 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenGiveDevonScope, MSGBOX_DEFAULT
# 238 "data/maps/Route120/scripts.pory"
	giveitem ITEM_DEVON_SCOPE
# 239 "data/maps/Route120/scripts.pory"
	setflag FLAG_RECEIVED_DEVON_SCOPE
# 240 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenGoodbye, MSGBOX_DEFAULT
# 241 "data/maps/Route120/scripts.pory"
	closemessage
# 242 "data/maps/Route120/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceFasterDown
# 243 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 244 "data/maps/Route120/scripts.pory"
	delay 50
# 245 "data/maps/Route120/scripts.pory"
	setfieldeffectargument 0, 1
# 246 "data/maps/Route120/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 247 "data/maps/Route120/scripts.pory"
	delay 15
# 248 "data/maps/Route120/scripts.pory"
	removeobject LOCALID_STEVEN
# 249 "data/maps/Route120/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 250 "data/maps/Route120/scripts.pory"
	setmetatile 13, 15, METATILE_Fortree_WoodBridge1_Top, FALSE
# 251 "data/maps/Route120/scripts.pory"
	setmetatile 12, 16, METATILE_Fortree_WoodBridge1_Bottom, FALSE
# 252 "data/maps/Route120/scripts.pory"
	setmetatile 12, 17, METATILE_General_ReflectiveWater, FALSE
# 253 "data/maps/Route120/scripts.pory"
	setmetatile 13, 17, METATILE_General_ReflectiveWater, FALSE
# 254 "data/maps/Route120/scripts.pory"
	special DrawWholeMapView
# 255 "data/maps/Route120/scripts.pory"
	release
# 256 "data/maps/Route120/scripts.pory"
	end
# 257 "data/maps/Route120/scripts.pory"

# 258 "data/maps/Route120/scripts.pory"
Route120_EventScript_PlayerApproachKecleonNorth::
# 259 "data/maps/Route120/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 260 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 261 "data/maps/Route120/scripts.pory"
	return
# 262 "data/maps/Route120/scripts.pory"

# 263 "data/maps/Route120/scripts.pory"
Route120_EventScript_PlayerApproachKecleonWest::
# 264 "data/maps/Route120/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route120_Movement_ApproachKecleonWest
# 265 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 266 "data/maps/Route120/scripts.pory"
	return
# 267 "data/maps/Route120/scripts.pory"

# 268 "data/maps/Route120/scripts.pory"
Route120_Movement_ApproachKecleonWest:
# 269 "data/maps/Route120/scripts.pory"
	walk_down
# 270 "data/maps/Route120/scripts.pory"
	walk_left
# 271 "data/maps/Route120/scripts.pory"
	step_end
# 272 "data/maps/Route120/scripts.pory"

# 273 "data/maps/Route120/scripts.pory"
Route120_EventScript_BridgeKecleon::
# 274 "data/maps/Route120/scripts.pory"
	msgbox Kecleon_Text_SomethingUnseeable, MSGBOX_NPC
# 275 "data/maps/Route120/scripts.pory"
	end
# 276 "data/maps/Route120/scripts.pory"

# 277 "data/maps/Route120/scripts.pory"
Route120_EventScript_RouteSignFortree::
# 278 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RouteSignFortree, MSGBOX_SIGN
# 279 "data/maps/Route120/scripts.pory"
	end
# 280 "data/maps/Route120/scripts.pory"

# 281 "data/maps/Route120/scripts.pory"
Route120_EventScript_RouteSign121::
# 282 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RouteSign121, MSGBOX_SIGN
# 283 "data/maps/Route120/scripts.pory"
	end
# 284 "data/maps/Route120/scripts.pory"

# 285 "data/maps/Route120/scripts.pory"
Route120_EventScript_Colin::
# 286 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_COLIN, Route120_Text_ColinIntro, Route120_Text_ColinDefeat
# 287 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_ColinPostBattle, MSGBOX_AUTOCLOSE
# 288 "data/maps/Route120/scripts.pory"
	end
# 289 "data/maps/Route120/scripts.pory"

# 290 "data/maps/Route120/scripts.pory"
Route120_EventScript_Robert::
# 291 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_ROBERT_1, Route120_Text_RobertIntro, Route120_Text_RobertDefeat, Route120_EventScript_RegisterRobert
# 292 "data/maps/Route120/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 293 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route120_EventScript_RematchRobert
# 294 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RobertPostBattle, MSGBOX_DEFAULT
# 295 "data/maps/Route120/scripts.pory"
	release
# 296 "data/maps/Route120/scripts.pory"
	end
# 297 "data/maps/Route120/scripts.pory"

# 298 "data/maps/Route120/scripts.pory"
Route120_EventScript_RegisterRobert::
# 299 "data/maps/Route120/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 300 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 301 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RobertRegister, MSGBOX_DEFAULT
# 302 "data/maps/Route120/scripts.pory"
	register_matchcall TRAINER_ROBERT_1
# 303 "data/maps/Route120/scripts.pory"
	release
# 304 "data/maps/Route120/scripts.pory"
	end
# 305 "data/maps/Route120/scripts.pory"

# 306 "data/maps/Route120/scripts.pory"
Route120_EventScript_RematchRobert::
# 307 "data/maps/Route120/scripts.pory"
	trainerbattle_rematch TRAINER_ROBERT_1, Route120_Text_RobertRematchIntro, Route120_Text_RobertRematchDefeat
# 308 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RobertPostRematch, MSGBOX_AUTOCLOSE
# 309 "data/maps/Route120/scripts.pory"
	end
# 310 "data/maps/Route120/scripts.pory"

# 311 "data/maps/Route120/scripts.pory"
Route120_EventScript_Lorenzo::
# 312 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_LORENZO, Route120_Text_LorenzoIntro, Route120_Text_LorenzoDefeat
# 313 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_LorenzoPostBattle, MSGBOX_AUTOCLOSE
# 314 "data/maps/Route120/scripts.pory"
	end
# 315 "data/maps/Route120/scripts.pory"

# 316 "data/maps/Route120/scripts.pory"
Route120_EventScript_Jenna::
# 317 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_JENNA, Route120_Text_JennaIntro, Route120_Text_JennaDefeat
# 318 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_JennaPostBattle, MSGBOX_AUTOCLOSE
# 319 "data/maps/Route120/scripts.pory"
	end
# 320 "data/maps/Route120/scripts.pory"

# 321 "data/maps/Route120/scripts.pory"
Route120_EventScript_Jeffrey::
# 322 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_JEFFREY_1, Route120_Text_JeffreyIntro, Route120_Text_JeffreyDefeat, Route120_EventScript_RegisterJeffrey
# 323 "data/maps/Route120/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 324 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route120_EventScript_RematchJeffrey
# 325 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_JeffreyPostBattle, MSGBOX_DEFAULT
# 326 "data/maps/Route120/scripts.pory"
	release
# 327 "data/maps/Route120/scripts.pory"
	end
# 328 "data/maps/Route120/scripts.pory"

# 329 "data/maps/Route120/scripts.pory"
Route120_EventScript_RegisterJeffrey::
# 330 "data/maps/Route120/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 331 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 332 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_JeffreyRegister, MSGBOX_DEFAULT
# 333 "data/maps/Route120/scripts.pory"
	register_matchcall TRAINER_JEFFREY_1
# 334 "data/maps/Route120/scripts.pory"
	release
# 335 "data/maps/Route120/scripts.pory"
	end
# 336 "data/maps/Route120/scripts.pory"

# 337 "data/maps/Route120/scripts.pory"
Route120_EventScript_RematchJeffrey::
# 338 "data/maps/Route120/scripts.pory"
	trainerbattle_rematch TRAINER_JEFFREY_1, Route120_Text_JeffreyRematchIntro, Route120_Text_JeffreyRematchDefeat
# 339 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_JeffreyPostRematch, MSGBOX_AUTOCLOSE
# 340 "data/maps/Route120/scripts.pory"
	end
# 341 "data/maps/Route120/scripts.pory"

# 342 "data/maps/Route120/scripts.pory"
Route120_EventScript_Jennifer::
# 343 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_JENNIFER, Route120_Text_JenniferIntro, Route120_Text_JenniferDefeat
# 344 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_JenniferPostBattle, MSGBOX_AUTOCLOSE
# 345 "data/maps/Route120/scripts.pory"
	end
# 346 "data/maps/Route120/scripts.pory"

# 347 "data/maps/Route120/scripts.pory"
Route120_EventScript_Chip::
# 348 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_CHIP, Route120_Text_ChipIntro, Route120_Text_ChipDefeat
# 349 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_ChipPostBattle, MSGBOX_AUTOCLOSE
# 350 "data/maps/Route120/scripts.pory"
	end
# 351 "data/maps/Route120/scripts.pory"

# 352 "data/maps/Route120/scripts.pory"
Route120_EventScript_Clarissa::
# 353 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_CLARISSA, Route120_Text_ClarissaIntro, Route120_Text_ClarissaDefeat
# 354 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_ClarissaPostBattle, MSGBOX_AUTOCLOSE
# 355 "data/maps/Route120/scripts.pory"
	end
# 356 "data/maps/Route120/scripts.pory"

# 357 "data/maps/Route120/scripts.pory"
Route120_EventScript_Angelica::
# 358 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_ANGELICA, Route120_Text_AngelicaIntro, Route120_Text_AngelicaDefeat
# 359 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_AngelicaPostBattle, MSGBOX_AUTOCLOSE
# 360 "data/maps/Route120/scripts.pory"
	end
# 361 "data/maps/Route120/scripts.pory"

# 362 "data/maps/Route120/scripts.pory"
Route120_EventScript_Keigo::
# 363 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_KEIGO, Route120_Text_KeigoIntro, Route120_Text_KeigoDefeat
# 364 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_KeigoPostBattle, MSGBOX_AUTOCLOSE
# 365 "data/maps/Route120/scripts.pory"
	end
# 366 "data/maps/Route120/scripts.pory"

# 367 "data/maps/Route120/scripts.pory"
Route120_EventScript_Riley::
# 368 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_RILEY, Route120_Text_RileyIntro, Route120_Text_RileyDefeat
# 369 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RileyPostBattle, MSGBOX_AUTOCLOSE
# 370 "data/maps/Route120/scripts.pory"
	end
# 371 "data/maps/Route120/scripts.pory"

# 372 "data/maps/Route120/scripts.pory"
Route120_EventScript_Leonel::
# 373 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_LEONEL, Route120_Text_LeonelIntro, Route120_Text_LeonelDefeat
# 374 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_LeonelPostBattle, MSGBOX_AUTOCLOSE
# 375 "data/maps/Route120/scripts.pory"
	end
# 376 "data/maps/Route120/scripts.pory"

# 377 "data/maps/Route120/scripts.pory"
Route120_EventScript_Callie::
# 378 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_CALLIE, Route120_Text_CallieIntro, Route120_Text_CallieDefeat
# 379 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_CalliePostBattle, MSGBOX_AUTOCLOSE
# 380 "data/maps/Route120/scripts.pory"
	end
# 381 "data/maps/Route120/scripts.pory"

# 382 "data/maps/Route120/scripts.pory"
Route120_Text_StevenGreeting:
# 383 "data/maps/Route120/scripts.pory"
	.string "STEVEN: Hm? {PLAYER}{KUN}, hi.\n"
# 384 "data/maps/Route120/scripts.pory"
	.string "It's been a while.\p"
# 385 "data/maps/Route120/scripts.pory"
	.string "There's something here that you can't\n"
# 386 "data/maps/Route120/scripts.pory"
	.string "see, right?\p"
# 387 "data/maps/Route120/scripts.pory"
	.string "Now, if I were to use this device on\n"
# 388 "data/maps/Route120/scripts.pory"
	.string "the invisible obstacle…\p"
# 389 "data/maps/Route120/scripts.pory"
	.string "No, no. Rather than describing it,\n"
# 390 "data/maps/Route120/scripts.pory"
	.string "I should just show you.\l"
# 391 "data/maps/Route120/scripts.pory"
	.string "That would be more fun.\p"
# 392 "data/maps/Route120/scripts.pory"
	.string "{PLAYER}{KUN}, are your POKéMON ready for\n"
# 393 "data/maps/Route120/scripts.pory"
	.string "battle?$"
# 394 "data/maps/Route120/scripts.pory"

# 395 "data/maps/Route120/scripts.pory"
Route120_Text_StevenIllWaitHere:
# 396 "data/maps/Route120/scripts.pory"
	.string "STEVEN: No?\p"
# 397 "data/maps/Route120/scripts.pory"
	.string "I'll wait here, so you can get ready.$"
# 398 "data/maps/Route120/scripts.pory"

# 399 "data/maps/Route120/scripts.pory"
Route120_Text_StevenReadyForBattle:
# 400 "data/maps/Route120/scripts.pory"
	.string "STEVEN: {PLAYER}{KUN}, are your POKéMON\n"
# 401 "data/maps/Route120/scripts.pory"
	.string "ready for battle?$"
# 402 "data/maps/Route120/scripts.pory"

# 403 "data/maps/Route120/scripts.pory"
Route120_Text_StevenShowMeYourPower:
# 404 "data/maps/Route120/scripts.pory"
	.string "STEVEN: {PLAYER}{KUN}, show me your true\n"
# 405 "data/maps/Route120/scripts.pory"
	.string "power as a TRAINER!$"
# 406 "data/maps/Route120/scripts.pory"

# 407 "data/maps/Route120/scripts.pory"
Route120_Text_StevenUsedDevonScope:
# 408 "data/maps/Route120/scripts.pory"
	.string "STEVEN used the DEVON SCOPE.\p"
# 409 "data/maps/Route120/scripts.pory"
	.string "An invisible POKéMON became completely\n"
# 410 "data/maps/Route120/scripts.pory"
	.string "visible!\p"
# 411 "data/maps/Route120/scripts.pory"
	.string "The startled POKéMON attacked!$"
# 412 "data/maps/Route120/scripts.pory"

# 413 "data/maps/Route120/scripts.pory"
Route120_Text_StevenGiveDevonScope:
# 414 "data/maps/Route120/scripts.pory"
	.string "STEVEN: I see…\n"
# 415 "data/maps/Route120/scripts.pory"
	.string "Your battle style is intriguing.\p"
# 416 "data/maps/Route120/scripts.pory"
	.string "Your POKéMON have obviously grown\n"
# 417 "data/maps/Route120/scripts.pory"
	.string "since I first met you in DEWFORD.\p"
# 418 "data/maps/Route120/scripts.pory"
	.string "I'd like you to have this\n"
# 419 "data/maps/Route120/scripts.pory"
	.string "DEVON SCOPE.\p"
# 420 "data/maps/Route120/scripts.pory"
	.string "Who knows, there may be other\n"
# 421 "data/maps/Route120/scripts.pory"
	.string "concealed POKéMON.$"
# 422 "data/maps/Route120/scripts.pory"

# 423 "data/maps/Route120/scripts.pory"
Route120_Text_StevenGoodbye:
# 424 "data/maps/Route120/scripts.pory"
	.string "STEVEN: {PLAYER}{KUN}.\p"
# 425 "data/maps/Route120/scripts.pory"
	.string "I enjoy seeing POKéMON and TRAINERS\n"
# 426 "data/maps/Route120/scripts.pory"
	.string "who strive together.\p"
# 427 "data/maps/Route120/scripts.pory"
	.string "I think you're doing great.\p"
# 428 "data/maps/Route120/scripts.pory"
	.string "Well, let's meet again somewhere.$"
# 429 "data/maps/Route120/scripts.pory"

# 430 "data/maps/Route120/scripts.pory"
Kecleon_Text_SomethingUnseeable:
# 431 "data/maps/Route120/scripts.pory"
	.string "Something unseeable is in the way.$"
# 432 "data/maps/Route120/scripts.pory"

# 433 "data/maps/Route120/scripts.pory"
Kecleon_Text_WantToUseDevonScope:
# 434 "data/maps/Route120/scripts.pory"
	.string "Something unseeable is in the way.\p"
# 435 "data/maps/Route120/scripts.pory"
	.string "Want to use the DEVON SCOPE?$"
# 436 "data/maps/Route120/scripts.pory"

# 437 "data/maps/Route120/scripts.pory"
Kecleon_Text_UseDevonScopeMonAttacked:
# 438 "data/maps/Route120/scripts.pory"
	.string "{PLAYER} used the DEVON SCOPE.\p"
# 439 "data/maps/Route120/scripts.pory"
	.string "An invisible POKéMON became completely\n"
# 440 "data/maps/Route120/scripts.pory"
	.string "visible!\p"
# 441 "data/maps/Route120/scripts.pory"
	.string "The startled POKéMON attacked!$"
# 442 "data/maps/Route120/scripts.pory"

# 443 "data/maps/Route120/scripts.pory"
Route120_Text_RouteSignFortree:
# 444 "data/maps/Route120/scripts.pory"
	.string "ROUTE 120\n"
# 445 "data/maps/Route120/scripts.pory"
	.string "{LEFT_ARROW} FORTREE CITY$"
# 446 "data/maps/Route120/scripts.pory"

# 447 "data/maps/Route120/scripts.pory"
Route120_Text_RouteSign121:
# 448 "data/maps/Route120/scripts.pory"
	.string "{RIGHT_ARROW} ROUTE 121\n"
# 449 "data/maps/Route120/scripts.pory"
	.string "{LEFT_ARROW} ROUTE 120$"

Route120_EventScript_BerryBeauty_Text_0:
# 6 "data/maps/Route120/scripts.pory"
	.string "Berries grow by soaking up sunlight.\n"
	.string "We help the Berries grow by watering\l"
	.string "them regularly.\p"
	.string "It's an expression of love, isn't it?\p"
	.string "Yes, yes. You understand what I mean.\n"
	.string "You should take these.$"

Route120_EventScript_BerryBeauty_Text_1:
# 9 "data/maps/Route120/scripts.pory"
	.string "I think those Berries are rare. I hope\n"
	.string "you raise them with loving care.$"

Route120_EventScript_BerryBeauty_Text_2:
# 11 "data/maps/Route120/scripts.pory"
	.string "I'm going to get more Berries from the\n"
	.string "Berry Master, I think.$"
