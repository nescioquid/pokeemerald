Route114_EventScript_Man::
# 2 "data/maps/Route114/scripts.pory"
	lock
# 3 "data/maps/Route114/scripts.pory"
	faceplayer
# 4 "data/maps/Route114/scripts.pory"
	dotimebasedevents
# 5 "data/maps/Route114/scripts.pory"
	goto_if_unset FLAG_DAILY_ROUTE_114_RECEIVED_BERRY, Route114_EventScript_Man_2
# 11 "data/maps/Route114/scripts.pory"
	msgbox Route114_EventScript_Man_Text_2
Route114_EventScript_Man_1:
# 13 "data/maps/Route114/scripts.pory"
	release
	end

Route114_EventScript_Man_2:
# 6 "data/maps/Route114/scripts.pory"
	msgbox Route114_EventScript_Man_Text_0
# 7 "data/maps/Route114/scripts.pory"
	call Common_PoryScript_GiveBerry_Generic
# 8 "data/maps/Route114/scripts.pory"
	setflag FLAG_DAILY_ROUTE_114_RECEIVED_BERRY
# 9 "data/maps/Route114/scripts.pory"
	msgbox Route114_EventScript_Man_Text_1
	goto Route114_EventScript_Man_1


# 17 "data/maps/Route114/scripts.pory"

# 18 "data/maps/Route114/scripts.pory"
Route114_MapScripts::
# 19 "data/maps/Route114/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route114_OnTransition
# 20 "data/maps/Route114/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route114_OnLoad
# 21 "data/maps/Route114/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route114_OnFrame
# 22 "data/maps/Route114/scripts.pory"
	.byte 0
# 23 "data/maps/Route114/scripts.pory"

# 24 "data/maps/Route114/scripts.pory"
Route114_OnTransition:
# 25 "data/maps/Route114/scripts.pory"
	call_if_eq VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_HideMapNamePopup
# 26 "data/maps/Route114/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_114_NORTH, AbnormalWeather_StartGroudonWeather
# 27 "data/maps/Route114/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_114_SOUTH, AbnormalWeather_StartGroudonWeather
# 28 "data/maps/Route114/scripts.pory"
	end
# 29 "data/maps/Route114/scripts.pory"

# 30 "data/maps/Route114/scripts.pory"
Route114_OnLoad:
# 31 "data/maps/Route114/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_114_NORTH, AbnormalWeather_EventScript_PlaceTilesRoute114North
# 32 "data/maps/Route114/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_114_SOUTH, AbnormalWeather_EventScript_PlaceTilesRoute114South
# 33 "data/maps/Route114/scripts.pory"
	end
# 34 "data/maps/Route114/scripts.pory"

# 35 "data/maps/Route114/scripts.pory"
Route114_OnFrame:
# 36 "data/maps/Route114/scripts.pory"
	map_script_2 VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_EndEventAndCleanup_1
# 37 "data/maps/Route114/scripts.pory"
	.2byte 0
# 38 "data/maps/Route114/scripts.pory"

# 39 "data/maps/Route114/scripts.pory"
@ Route114_EventScript_Man::
# 40 "data/maps/Route114/scripts.pory"
@ 	lock
# 41 "data/maps/Route114/scripts.pory"
@ 	faceplayer
# 42 "data/maps/Route114/scripts.pory"
@ 	dotimebasedevents
# 43 "data/maps/Route114/scripts.pory"
@ 	goto_if_set FLAG_DAILY_ROUTE_114_RECEIVED_BERRY, Route114_EventScript_ReceivedBerry
# 44 "data/maps/Route114/scripts.pory"
@ 	msgbox Route114_Text_LoveUsingBerryCrushShareBerry, MSGBOX_DEFAULT
# 45 "data/maps/Route114/scripts.pory"
@ 	random NUM_ROUTE_114_MAN_BERRIES
# 46 "data/maps/Route114/scripts.pory"
@ 	addvar VAR_RESULT, NUM_ROUTE_114_MAN_BERRIES_SKIPPED
# 47 "data/maps/Route114/scripts.pory"
@ 	addvar VAR_RESULT, FIRST_BERRY_INDEX
# 48 "data/maps/Route114/scripts.pory"
@ 	giveitem VAR_RESULT
# 49 "data/maps/Route114/scripts.pory"
@ 	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 50 "data/maps/Route114/scripts.pory"
@ 	setflag FLAG_DAILY_ROUTE_114_RECEIVED_BERRY
# 51 "data/maps/Route114/scripts.pory"
@ 	msgbox Route114_Text_TryBerryCrushWithFriends, MSGBOX_DEFAULT
# 52 "data/maps/Route114/scripts.pory"
@ 	release
# 53 "data/maps/Route114/scripts.pory"
@ 	end
# 54 "data/maps/Route114/scripts.pory"

# 55 "data/maps/Route114/scripts.pory"
Route114_EventScript_ReceivedBerry::
# 56 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_FunToThinkAboutBerries, MSGBOX_DEFAULT
# 57 "data/maps/Route114/scripts.pory"
	release
# 58 "data/maps/Route114/scripts.pory"
	end
# 59 "data/maps/Route114/scripts.pory"

# 60 "data/maps/Route114/scripts.pory"
Route114_EventScript_RoarGentleman::
# 61 "data/maps/Route114/scripts.pory"
	lock
# 62 "data/maps/Route114/scripts.pory"
	faceplayer
# 63 "data/maps/Route114/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_ROAR, Route114_EventScript_ReceivedRoar
# 64 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_AllMyMonDoesIsRoarTakeThis, MSGBOX_DEFAULT
# 65 "data/maps/Route114/scripts.pory"
	giveitem ITEM_TM_ROAR
# 66 "data/maps/Route114/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 67 "data/maps/Route114/scripts.pory"
	setflag FLAG_RECEIVED_TM_ROAR
# 68 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_ExplainRoar, MSGBOX_DEFAULT
# 69 "data/maps/Route114/scripts.pory"
	release
# 70 "data/maps/Route114/scripts.pory"
	end
# 71 "data/maps/Route114/scripts.pory"

# 72 "data/maps/Route114/scripts.pory"
Route114_EventScript_ReceivedRoar::
# 73 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_ExplainRoar, MSGBOX_DEFAULT
# 74 "data/maps/Route114/scripts.pory"
	release
# 75 "data/maps/Route114/scripts.pory"
	end
# 76 "data/maps/Route114/scripts.pory"

# 77 "data/maps/Route114/scripts.pory"
Route114_EventScript_Poochyena::
# 78 "data/maps/Route114/scripts.pory"
	lock
# 79 "data/maps/Route114/scripts.pory"
	faceplayer
# 80 "data/maps/Route114/scripts.pory"
	waitse
# 81 "data/maps/Route114/scripts.pory"
	playmoncry SPECIES_POOCHYENA, CRY_MODE_ENCOUNTER
# 82 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_Poochyena, MSGBOX_DEFAULT
# 83 "data/maps/Route114/scripts.pory"
	waitmoncry
# 84 "data/maps/Route114/scripts.pory"
	release
# 85 "data/maps/Route114/scripts.pory"
	end
# 86 "data/maps/Route114/scripts.pory"

# 87 "data/maps/Route114/scripts.pory"
Route114_EventScript_MeteorFallsSign::
# 88 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_MeteorFallsSign, MSGBOX_SIGN
# 89 "data/maps/Route114/scripts.pory"
	end
# 90 "data/maps/Route114/scripts.pory"

# 91 "data/maps/Route114/scripts.pory"
Route114_EventScript_FossilManiacsHouseSign::
# 92 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_FossilManiacsHouseSign, MSGBOX_SIGN
# 93 "data/maps/Route114/scripts.pory"
	end
# 94 "data/maps/Route114/scripts.pory"

# 95 "data/maps/Route114/scripts.pory"
Route114_EventScript_LanettesHouseSign::
# 96 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_LanettesHouse, MSGBOX_SIGN
# 97 "data/maps/Route114/scripts.pory"
	end
# 98 "data/maps/Route114/scripts.pory"

# 99 "data/maps/Route114/scripts.pory"
Route114_EventScript_Lenny::
# 100 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_LENNY, Route114_Text_LennyIntro, Route114_Text_LennyDefeat
# 101 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_LennyPostBattle, MSGBOX_AUTOCLOSE
# 102 "data/maps/Route114/scripts.pory"
	end
# 103 "data/maps/Route114/scripts.pory"

# 104 "data/maps/Route114/scripts.pory"
Route114_EventScript_Lucas::
# 105 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_LUCAS_1, Route114_Text_LucasIntro, Route114_Text_LucasDefeat
# 106 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_LucasPostBattle, MSGBOX_AUTOCLOSE
# 107 "data/maps/Route114/scripts.pory"
	end
# 108 "data/maps/Route114/scripts.pory"

# 109 "data/maps/Route114/scripts.pory"
Route114_EventScript_Shane::
# 110 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_SHANE, Route114_Text_ShaneIntro, Route114_Text_ShaneDefeat
# 111 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_ShanePostBattle, MSGBOX_AUTOCLOSE
# 112 "data/maps/Route114/scripts.pory"
	end
# 113 "data/maps/Route114/scripts.pory"

# 114 "data/maps/Route114/scripts.pory"
Route114_EventScript_Nancy::
# 115 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_NANCY, Route114_Text_NancyIntro, Route114_Text_NancyDefeat
# 116 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_NancyPostBattle, MSGBOX_AUTOCLOSE
# 117 "data/maps/Route114/scripts.pory"
	end
# 118 "data/maps/Route114/scripts.pory"

# 119 "data/maps/Route114/scripts.pory"
Route114_EventScript_Steve::
# 120 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_STEVE_1, Route114_Text_SteveIntro, Route114_Text_SteveDefeat, Route114_EventScript_RegisterSteve
# 121 "data/maps/Route114/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 122 "data/maps/Route114/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route114_EventScript_RematchSteve
# 123 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_StevePostBattle, MSGBOX_DEFAULT
# 124 "data/maps/Route114/scripts.pory"
	release
# 125 "data/maps/Route114/scripts.pory"
	end
# 126 "data/maps/Route114/scripts.pory"

# 127 "data/maps/Route114/scripts.pory"
Route114_EventScript_RegisterSteve::
# 128 "data/maps/Route114/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 129 "data/maps/Route114/scripts.pory"
	waitmovement 0
# 130 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_SteveRegister, MSGBOX_DEFAULT
# 131 "data/maps/Route114/scripts.pory"
	register_matchcall TRAINER_STEVE_1
# 132 "data/maps/Route114/scripts.pory"
	release
# 133 "data/maps/Route114/scripts.pory"
	end
# 134 "data/maps/Route114/scripts.pory"

# 135 "data/maps/Route114/scripts.pory"
Route114_EventScript_RematchSteve::
# 136 "data/maps/Route114/scripts.pory"
	trainerbattle_rematch TRAINER_STEVE_1, Route114_Text_SteveRematchIntro, Route114_Text_SteveRematchDefeat
# 137 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_StevePostRematch, MSGBOX_AUTOCLOSE
# 138 "data/maps/Route114/scripts.pory"
	end
# 139 "data/maps/Route114/scripts.pory"

# 140 "data/maps/Route114/scripts.pory"
Route114_EventScript_Bernie::
# 141 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_BERNIE_1, Route114_Text_BernieIntro, Route114_Text_BernieDefeat, Route114_EventScript_RegisterBernie
# 142 "data/maps/Route114/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 143 "data/maps/Route114/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route114_EventScript_RematchBernie
# 144 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_BerniePostBattle, MSGBOX_DEFAULT
# 145 "data/maps/Route114/scripts.pory"
	release
# 146 "data/maps/Route114/scripts.pory"
	end
# 147 "data/maps/Route114/scripts.pory"

# 148 "data/maps/Route114/scripts.pory"
Route114_EventScript_RegisterBernie::
# 149 "data/maps/Route114/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 150 "data/maps/Route114/scripts.pory"
	waitmovement 0
# 151 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_BernieRegister, MSGBOX_DEFAULT
# 152 "data/maps/Route114/scripts.pory"
	register_matchcall TRAINER_BERNIE_1
# 153 "data/maps/Route114/scripts.pory"
	release
# 154 "data/maps/Route114/scripts.pory"
	end
# 155 "data/maps/Route114/scripts.pory"

# 156 "data/maps/Route114/scripts.pory"
Route114_EventScript_RematchBernie::
# 157 "data/maps/Route114/scripts.pory"
	trainerbattle_rematch TRAINER_BERNIE_1, Route114_Text_BernieRematchIntro, Route114_Text_BernieRematchDefeat
# 158 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_BerniePostRematch, MSGBOX_AUTOCLOSE
# 159 "data/maps/Route114/scripts.pory"
	end
# 160 "data/maps/Route114/scripts.pory"

# 161 "data/maps/Route114/scripts.pory"
Route114_EventScript_Claude::
# 162 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_CLAUDE, Route114_Text_ClaudeIntro, Route114_Text_ClaudeDefeat
# 163 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_ClaudePostBattle, MSGBOX_AUTOCLOSE
# 164 "data/maps/Route114/scripts.pory"
	end
# 165 "data/maps/Route114/scripts.pory"

# 166 "data/maps/Route114/scripts.pory"
Route114_EventScript_Nolan::
# 167 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_NOLAN, Route114_Text_NolanIntro, Route114_Text_NolanDefeat
# 168 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_NolanPostBattle, MSGBOX_AUTOCLOSE
# 169 "data/maps/Route114/scripts.pory"
	end
# 170 "data/maps/Route114/scripts.pory"

# 171 "data/maps/Route114/scripts.pory"
Route114_EventScript_Tyra::
# 172 "data/maps/Route114/scripts.pory"
	trainerbattle_double TRAINER_TYRA_AND_IVY, Route114_Text_TyraIntro, Route114_Text_TyraDefeat, Route114_Text_TyraNotEnoughMons
# 173 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_TyraPostBattle, MSGBOX_AUTOCLOSE
# 174 "data/maps/Route114/scripts.pory"
	end
# 175 "data/maps/Route114/scripts.pory"

# 176 "data/maps/Route114/scripts.pory"
Route114_EventScript_Ivy::
# 177 "data/maps/Route114/scripts.pory"
	trainerbattle_double TRAINER_TYRA_AND_IVY, Route114_Text_IvyIntro, Route114_Text_IvyDefeat, Route114_Text_IvyNotEnoughMons
# 178 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_IvyPostBattle, MSGBOX_AUTOCLOSE
# 179 "data/maps/Route114/scripts.pory"
	end
# 180 "data/maps/Route114/scripts.pory"

# 181 "data/maps/Route114/scripts.pory"
Route114_EventScript_Angelina::
# 182 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_ANGELINA, Route114_Text_AngelinaIntro, Route114_Text_AngelinaDefeat
# 183 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_AngelinaPostBattle, MSGBOX_AUTOCLOSE
# 184 "data/maps/Route114/scripts.pory"
	end
# 185 "data/maps/Route114/scripts.pory"

# 186 "data/maps/Route114/scripts.pory"
Route114_EventScript_Charlotte::
# 187 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_CHARLOTTE, Route114_Text_CharlotteIntro, Route114_Text_CharlotteDefeat
# 188 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_CharlottePostBattle, MSGBOX_AUTOCLOSE
# 189 "data/maps/Route114/scripts.pory"
	end
# 190 "data/maps/Route114/scripts.pory"

# 191 "data/maps/Route114/scripts.pory"
Route114_EventScript_Kai::
# 192 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_KAI, Route114_Text_KaiIntro, Route114_Text_KaiDefeat
# 193 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_KaiPostBattle, MSGBOX_AUTOCLOSE
# 194 "data/maps/Route114/scripts.pory"
	end
# 195 "data/maps/Route114/scripts.pory"

# 196 "data/maps/Route114/scripts.pory"
Route114_Text_AllMyMonDoesIsRoarTakeThis:
# 197 "data/maps/Route114/scripts.pory"
	.string "All my POKéMON does is ROAR…\n"
# 198 "data/maps/Route114/scripts.pory"
	.string "No one dares to come near me…\p"
# 199 "data/maps/Route114/scripts.pory"
	.string "Sigh… If you would, please take\n"
# 200 "data/maps/Route114/scripts.pory"
	.string "this TM away…$"
# 201 "data/maps/Route114/scripts.pory"

# 202 "data/maps/Route114/scripts.pory"
Route114_Text_ExplainRoar:
# 203 "data/maps/Route114/scripts.pory"
	.string "TM05 contains ROAR.\n"
# 204 "data/maps/Route114/scripts.pory"
	.string "A ROAR sends POKéMON scurrying.$"
# 205 "data/maps/Route114/scripts.pory"

# 206 "data/maps/Route114/scripts.pory"
Route114_Text_Poochyena:
# 207 "data/maps/Route114/scripts.pory"
	.string "Bow! Bowwow!$"
# 208 "data/maps/Route114/scripts.pory"

# 209 "data/maps/Route114/scripts.pory"
Route114_Text_MeteorFallsSign:
# 210 "data/maps/Route114/scripts.pory"
	.string "METEOR FALLS\n"
# 211 "data/maps/Route114/scripts.pory"
	.string "RUSTBORO CITY THROUGH HERE$"
# 212 "data/maps/Route114/scripts.pory"

# 213 "data/maps/Route114/scripts.pory"
Route114_Text_FossilManiacsHouseSign:
# 214 "data/maps/Route114/scripts.pory"
	.string "FOSSIL MANIAC'S HOUSE\n"
# 215 "data/maps/Route114/scripts.pory"
	.string "“Fossils gratefully accepted!”$"
# 216 "data/maps/Route114/scripts.pory"

# 217 "data/maps/Route114/scripts.pory"
Route114_Text_LanettesHouse:
# 218 "data/maps/Route114/scripts.pory"
	.string "LANETTE'S HOUSE$"

Route114_EventScript_Man_Text_0:
# 6 "data/maps/Route114/scripts.pory"
	.string "I love using the Berry Crush machine, so\n"
	.string "I'm collecting Berries.\p"
	.string "I'll share some with you, if you'd like.$"

Route114_EventScript_Man_Text_1:
# 9 "data/maps/Route114/scripts.pory"
	.string "You should try the Berry Crush machine\n"
	.string "with your friends.$"

Route114_EventScript_Man_Text_2:
# 11 "data/maps/Route114/scripts.pory"
	.string "Which Berry should you plant? Should\n"
	.string "you use or hoard Berries?\p"
	.string "It's fun to think about.$"
