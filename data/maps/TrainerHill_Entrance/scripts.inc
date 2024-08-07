TrainerHill_Entrance_EventScript_Clerk::
# 2 "data/maps/TrainerHill_Entrance/scripts.pory"
	lock
# 3 "data/maps/TrainerHill_Entrance/scripts.pory"
	faceplayer
# 4 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_EventScript_Clerk_Text_0
# 5 "data/maps/TrainerHill_Entrance/scripts.pory"
	call Common_PoryScript_Clerk_Hellos
# 6 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmessage
# 7 "data/maps/TrainerHill_Entrance/scripts.pory"
	call Common_PoryScript_Clerk_PokemartByBadges
# 8 "data/maps/TrainerHill_Entrance/scripts.pory"
	call Common_PoryScript_Clerk_Goodbyes
# 9 "data/maps/TrainerHill_Entrance/scripts.pory"
	release
	end


# 13 "data/maps/TrainerHill_Entrance/scripts.pory"

# 14 "data/maps/TrainerHill_Entrance/scripts.pory"
.set LOCALID_ATTENDANT, 1
# 15 "data/maps/TrainerHill_Entrance/scripts.pory"
.set LOCALID_NURSE, 2
# 16 "data/maps/TrainerHill_Entrance/scripts.pory"
.set LOCALID_GIRL, 4
# 17 "data/maps/TrainerHill_Entrance/scripts.pory"
.set LOCALID_MAN, 5
# 18 "data/maps/TrainerHill_Entrance/scripts.pory"

# 19 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_MapScripts::
# 20 "data/maps/TrainerHill_Entrance/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, TrainerHill_Entrance_OnResume
# 21 "data/maps/TrainerHill_Entrance/scripts.pory"
	map_script MAP_SCRIPT_ON_RETURN_TO_FIELD, TrainerHill_Entrance_OnReturn
# 22 "data/maps/TrainerHill_Entrance/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, TrainerHill_Entrance_OnTransition
# 23 "data/maps/TrainerHill_Entrance/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, TrainerHill_Entrance_OnLoad
# 24 "data/maps/TrainerHill_Entrance/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TrainerHill_Entrance_OnFrame
# 25 "data/maps/TrainerHill_Entrance/scripts.pory"
	.byte 0
# 26 "data/maps/TrainerHill_Entrance/scripts.pory"

# 27 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_OnTransition:
# 28 "data/maps/TrainerHill_Entrance/scripts.pory"
	setflag FLAG_LANDMARK_TRAINER_HILL
# 29 "data/maps/TrainerHill_Entrance/scripts.pory"
	getplayerxy VAR_TEMP_D, VAR_RESULT
# 30 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 31 "data/maps/TrainerHill_Entrance/scripts.pory"

# 32 "data/maps/TrainerHill_Entrance/scripts.pory"
@ Unused
# 33 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_OnWarp:
# 34 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 35 "data/maps/TrainerHill_Entrance/scripts.pory"

# 36 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_OnResume:
# 37 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_resumetimer
# 38 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_0, 0
# 39 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_getusingereader
# 40 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, TrainerHill_Entrance_EventScript_TryFaceAttendant  @ VAR_RESULT always FALSE here
# 41 "data/maps/TrainerHill_Entrance/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 9, 6
# 42 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TrainerHill_Entrance_Movement_PlayerFaceAttendant
# 43 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 44 "data/maps/TrainerHill_Entrance/scripts.pory"

# 45 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_TryFaceAttendant::
# 46 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_getwon
# 47 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, TrainerHill_Entrance_EventScript_PlayerDontFaceAttendant
# 48 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TrainerHill_Entrance_Movement_PlayerFaceAttendant
# 49 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 50 "data/maps/TrainerHill_Entrance/scripts.pory"

# 51 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_PlayerDontFaceAttendant::
# 52 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 53 "data/maps/TrainerHill_Entrance/scripts.pory"

# 54 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_OnReturn:
# 55 "data/maps/TrainerHill_Entrance/scripts.pory"
	addobject LOCALID_NURSE
# 56 "data/maps/TrainerHill_Entrance/scripts.pory"
	addobject LOCALID_ATTENDANT
# 57 "data/maps/TrainerHill_Entrance/scripts.pory"
	addobject LOCALID_MAN
# 58 "data/maps/TrainerHill_Entrance/scripts.pory"
	addobject LOCALID_GIRL
# 59 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 60 "data/maps/TrainerHill_Entrance/scripts.pory"

# 61 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_OnLoad:
# 62 "data/maps/TrainerHill_Entrance/scripts.pory"
	call_if_eq VAR_TEMP_D, 17, TrainerHill_Entrance_EventScript_OpenCounterDoor
# 63 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 64 "data/maps/TrainerHill_Entrance/scripts.pory"

# 65 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_OpenCounterDoor::
# 66 "data/maps/TrainerHill_Entrance/scripts.pory"
	setmetatile 17, 10, METATILE_TrainerHill_GreenFloorTile, FALSE
# 67 "data/maps/TrainerHill_Entrance/scripts.pory"
	return
# 68 "data/maps/TrainerHill_Entrance/scripts.pory"

# 69 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_OnFrame:
# 70 "data/maps/TrainerHill_Entrance/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, TrainerHill_Entrance_EventScript_ExitChallenge
# 71 "data/maps/TrainerHill_Entrance/scripts.pory"
	map_script_2 VAR_TEMP_D, 17, TrainerHill_Entrance_EventScript_ExitElevator
# 72 "data/maps/TrainerHill_Entrance/scripts.pory"
	map_script_2 VAR_TEMP_5, 1, TrainerHill_Entrance_EventScript_EntryTrigger
# 73 "data/maps/TrainerHill_Entrance/scripts.pory"
	map_script_2 VAR_TEMP_1, 1, TrainerHill_EventScript_WarpToEntranceCounter
# 74 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte 0
# 75 "data/maps/TrainerHill_Entrance/scripts.pory"

# 76 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_ExitElevator::
# 77 "data/maps/TrainerHill_Entrance/scripts.pory"
	lockall
# 78 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TrainerHill_Entrance_Movement_PlayerExitElevator
# 79 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmovement 0
# 80 "data/maps/TrainerHill_Entrance/scripts.pory"
	setmetatile 17, 10, METATILE_TrainerHill_CounterDoor, TRUE
# 81 "data/maps/TrainerHill_Entrance/scripts.pory"
	special DrawWholeMapView
# 82 "data/maps/TrainerHill_Entrance/scripts.pory"
	playse SE_CLICK
# 83 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitse
# 84 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_D, 0
# 85 "data/maps/TrainerHill_Entrance/scripts.pory"
	releaseall
# 86 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 87 "data/maps/TrainerHill_Entrance/scripts.pory"

# 88 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_ExitChallenge::
# 89 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_0, 1
# 90 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_getstatus
# 91 "data/maps/TrainerHill_Entrance/scripts.pory"
	switch VAR_RESULT
# 92 "data/maps/TrainerHill_Entrance/scripts.pory"
	case TRAINER_HILL_PLAYER_STATUS_LOST, TrainerHill_Entrance_EventScript_ExitChallengeLost
# 93 "data/maps/TrainerHill_Entrance/scripts.pory"
	case TRAINER_HILL_PLAYER_STATUS_ECARD_SCANNED, TrainerHill_Entrance_EventScript_ExitChallengeECard
# 94 "data/maps/TrainerHill_Entrance/scripts.pory"
	case TRAINER_HILL_PLAYER_STATUS_NORMAL, TrainerHill_Entrance_EventScript_EndExitChallenge
# 95 "data/maps/TrainerHill_Entrance/scripts.pory"

# 96 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_ExitChallengeLost::
# 97 "data/maps/TrainerHill_Entrance/scripts.pory"
	lockall
# 98 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TrainerHill_Entrance_Movement_PlayerFaceAttendant
# 99 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_TooBadTremendousEffort, MSGBOX_DEFAULT
# 100 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_PlayerExitChallenge
# 101 "data/maps/TrainerHill_Entrance/scripts.pory"

# 102 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_ExitChallengeECard::
# 103 "data/maps/TrainerHill_Entrance/scripts.pory"
	lockall
# 104 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TrainerHill_Entrance_Movement_PlayerFaceAttendant
# 105 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_MovedReceptionHereForSwitch, MSGBOX_DEFAULT
# 106 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_PlayerExitChallenge::
# 107 "data/maps/TrainerHill_Entrance/scripts.pory"
	closemessage
# 108 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TrainerHill_Entrance_Movement_PushPlayerBackFromCounter
# 109 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmovement 0
# 110 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TRAINER_HILL_IS_ACTIVE, 0
# 111 "data/maps/TrainerHill_Entrance/scripts.pory"
	special HealPlayerParty
# 112 "data/maps/TrainerHill_Entrance/scripts.pory"
	callnative UpdateFollowingPokemon
# 113 "data/maps/TrainerHill_Entrance/scripts.pory"
	releaseall
# 114 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_EndExitChallenge::
# 115 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 116 "data/maps/TrainerHill_Entrance/scripts.pory"

# 117 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_Nurse::
# 118 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_0x800B, LOCALID_NURSE
# 119 "data/maps/TrainerHill_Entrance/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 120 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmessage
# 121 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitbuttonpress
# 122 "data/maps/TrainerHill_Entrance/scripts.pory"
	release
# 123 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 124 "data/maps/TrainerHill_Entrance/scripts.pory"

# 125 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_Attendant::
# 126 "data/maps/TrainerHill_Entrance/scripts.pory"
	lock
# 127 "data/maps/TrainerHill_Entrance/scripts.pory"
	faceplayer
# 128 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_inchallenge
# 129 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, TrainerHill_Entrance_EventScript_ThanksForPlaying
# 130 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_HopeYouGiveItYourBest, MSGBOX_DEFAULT
# 131 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_AttendantEnd
# 132 "data/maps/TrainerHill_Entrance/scripts.pory"

# 133 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_ThanksForPlaying::
# 134 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_ThankYouForPlaying, MSGBOX_DEFAULT
# 135 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_AttendantEnd::
# 136 "data/maps/TrainerHill_Entrance/scripts.pory"
	release
# 137 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 138 "data/maps/TrainerHill_Entrance/scripts.pory"

# 139 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_EntryTrigger::
# 140 "data/maps/TrainerHill_Entrance/scripts.pory"
	lockall
# 141 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TrainerHill_Entrance_Movement_PlayerFaceAttendant
# 142 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto_if_unset FLAG_SYS_GAME_CLEAR, TrainerHill_Entrance_EventScript_Closed
# 143 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_WelcomeToTrainerHill, MSGBOX_DEFAULT
# 144 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_getsaved
# 145 "data/maps/TrainerHill_Entrance/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, TrainerHill_Entrance_EventScript_SaveGame
# 146 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_allfloorsused
# 147 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, TrainerHill_Entrance_EventScript_AllFloorsUsed
# 148 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_TrainersUpToFloorX, MSGBOX_DEFAULT
# 149 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_AskChallengeTrainers
# 150 "data/maps/TrainerHill_Entrance/scripts.pory"

# 151 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_AllFloorsUsed::
# 152 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_TrainersInEveryRoom, MSGBOX_DEFAULT
# 153 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_AskChallengeTrainers::
# 154 "data/maps/TrainerHill_Entrance/scripts.pory"
	message TrainerHill_Entrance_Text_LikeToChallengeTrainers
# 155 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmessage
# 156 "data/maps/TrainerHill_Entrance/scripts.pory"
	multichoice 15, 6, MULTI_YESNOINFO, FALSE
# 157 "data/maps/TrainerHill_Entrance/scripts.pory"
	switch VAR_RESULT
# 158 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 0, TrainerHill_Entrance_EventScript_ChooseChallenge
# 159 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 1, TrainerHill_Entrance_EventScript_CancelEntry
# 160 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 2, TrainerHill_Entrance_EventScript_Info
# 161 "data/maps/TrainerHill_Entrance/scripts.pory"
	case MULTI_B_PRESSED, TrainerHill_Entrance_EventScript_CancelEntry
# 162 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 163 "data/maps/TrainerHill_Entrance/scripts.pory"

# 164 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_Info::
# 165 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_ExplainTrainerHill, MSGBOX_DEFAULT
# 166 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_AskChallengeTrainers
# 167 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 168 "data/maps/TrainerHill_Entrance/scripts.pory"

# 169 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_ChooseChallenge::
# 170 "data/maps/TrainerHill_Entrance/scripts.pory"
	multichoice 13, 2, MULTI_TAG_MATCH_TYPE, FALSE
# 171 "data/maps/TrainerHill_Entrance/scripts.pory"
	switch VAR_RESULT
# 172 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 4, TrainerHill_Entrance_EventScript_CancelEntry
# 173 "data/maps/TrainerHill_Entrance/scripts.pory"
	case MULTI_B_PRESSED, TrainerHill_Entrance_EventScript_CancelEntry
# 174 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_setmode VAR_RESULT
# 175 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TRAINER_HILL_IS_ACTIVE, 1
# 176 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_5, 0
# 177 "data/maps/TrainerHill_Entrance/scripts.pory"
	special HealPlayerParty
# 178 "data/maps/TrainerHill_Entrance/scripts.pory"
	callnative UpdateFollowingPokemon
# 179 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_TimeProgessGetSetGo, MSGBOX_DEFAULT
# 180 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_start
# 181 "data/maps/TrainerHill_Entrance/scripts.pory"
	releaseall
# 182 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 183 "data/maps/TrainerHill_Entrance/scripts.pory"

# 184 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_CancelEntry::
# 185 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_5, 0
# 186 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_PleaseVisitUsAgain, MSGBOX_DEFAULT
# 187 "data/maps/TrainerHill_Entrance/scripts.pory"
	closemessage
# 188 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TrainerHill_Entrance_Movement_PushPlayerBackFromCounter
# 189 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmovement 0
# 190 "data/maps/TrainerHill_Entrance/scripts.pory"
	releaseall
# 191 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 192 "data/maps/TrainerHill_Entrance/scripts.pory"

# 193 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_SaveGame::
# 194 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_SaveGameBeforeEnter, MSGBOX_DEFAULT
# 195 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_setsaved
# 196 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_5, 1
# 197 "data/maps/TrainerHill_Entrance/scripts.pory"
	call Common_EventScript_SaveGame
# 198 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, TrainerHill_Entrance_EventScript_SaveFailed
# 199 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_setsaved
# 200 "data/maps/TrainerHill_Entrance/scripts.pory"
	return
# 201 "data/maps/TrainerHill_Entrance/scripts.pory"

# 202 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_SaveFailed::
# 203 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_clearsaved
# 204 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_CancelEntry
# 205 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 206 "data/maps/TrainerHill_Entrance/scripts.pory"

# 207 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_Closed::
# 208 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_StillGettingReady, MSGBOX_DEFAULT
# 209 "data/maps/TrainerHill_Entrance/scripts.pory"
	closemessage
# 210 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TrainerHill_Entrance_Movement_PushPlayerBackFromCounter
# 211 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmovement 0
# 212 "data/maps/TrainerHill_Entrance/scripts.pory"
	releaseall
# 213 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 214 "data/maps/TrainerHill_Entrance/scripts.pory"

# 215 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Movement_PlayerFaceAttendant:
# 216 "data/maps/TrainerHill_Entrance/scripts.pory"
	face_right
# 217 "data/maps/TrainerHill_Entrance/scripts.pory"
	step_end
# 218 "data/maps/TrainerHill_Entrance/scripts.pory"

# 219 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Movement_PushPlayerBackFromCounter:
# 220 "data/maps/TrainerHill_Entrance/scripts.pory"
	walk_down
# 221 "data/maps/TrainerHill_Entrance/scripts.pory"
	step_end
# 222 "data/maps/TrainerHill_Entrance/scripts.pory"

# 223 "data/maps/TrainerHill_Entrance/scripts.pory"
@ Unused
# 224 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Movement_FaceUp:
# 225 "data/maps/TrainerHill_Entrance/scripts.pory"
	face_up
# 226 "data/maps/TrainerHill_Entrance/scripts.pory"
	step_end
# 227 "data/maps/TrainerHill_Entrance/scripts.pory"

# 228 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Movement_PlayerExitElevator:
# 229 "data/maps/TrainerHill_Entrance/scripts.pory"
	walk_down
# 230 "data/maps/TrainerHill_Entrance/scripts.pory"
	walk_down
# 231 "data/maps/TrainerHill_Entrance/scripts.pory"
	step_end
# 232 "data/maps/TrainerHill_Entrance/scripts.pory"

# 233 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_Records::
# 234 "data/maps/TrainerHill_Entrance/scripts.pory"
	lockall
# 235 "data/maps/TrainerHill_Entrance/scripts.pory"
	fadescreen FADE_TO_BLACK
# 236 "data/maps/TrainerHill_Entrance/scripts.pory"
	special ShowTrainerHillRecords
# 237 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitstate
# 238 "data/maps/TrainerHill_Entrance/scripts.pory"
	releaseall
# 239 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 240 "data/maps/TrainerHill_Entrance/scripts.pory"

# 241 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_Man::
# 242 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto_if_unset FLAG_SYS_GAME_CLEAR, TrainerHill_Entrance_EventScript_ManTrainerHillClosed
# 243 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_WhatSortOfTrainersAreAhead, MSGBOX_NPC
# 244 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 245 "data/maps/TrainerHill_Entrance/scripts.pory"

# 246 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_ManTrainerHillClosed::
# 247 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_CantWaitToTestTheWaters, MSGBOX_NPC
# 248 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 249 "data/maps/TrainerHill_Entrance/scripts.pory"

# 250 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_Girl::
# 251 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto_if_unset FLAG_SYS_GAME_CLEAR, TrainerHill_Entrance_EventScript_GirlTrainerHillClosed
# 252 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_FriendsTryingToReachTimeBoardTop, MSGBOX_NPC
# 253 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 254 "data/maps/TrainerHill_Entrance/scripts.pory"

# 255 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_GirlTrainerHillClosed::
# 256 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_DoYouKnowWhenTheyOpen, MSGBOX_NPC
# 257 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 258 "data/maps/TrainerHill_Entrance/scripts.pory"

# 259 "data/maps/TrainerHill_Entrance/scripts.pory"
@ TrainerHill_Entrance_EventScript_Clerk::
# 260 "data/maps/TrainerHill_Entrance/scripts.pory"
@ 	lock
# 261 "data/maps/TrainerHill_Entrance/scripts.pory"
@ 	faceplayer
# 262 "data/maps/TrainerHill_Entrance/scripts.pory"
@ 	message gText_HowMayIServeYou
# 263 "data/maps/TrainerHill_Entrance/scripts.pory"
@ 	waitmessage
# 264 "data/maps/TrainerHill_Entrance/scripts.pory"
@ 	goto_if_set FLAG_SYS_GAME_CLEAR, TrainerHill_Entrance_EventScript_ExpandedPokemart
# 265 "data/maps/TrainerHill_Entrance/scripts.pory"
@ 	pokemart TrainerHill_Entrance_Pokemart_Basic
# 266 "data/maps/TrainerHill_Entrance/scripts.pory"
@ 	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 267 "data/maps/TrainerHill_Entrance/scripts.pory"
@ 	release
# 268 "data/maps/TrainerHill_Entrance/scripts.pory"
@ 	end
# 269 "data/maps/TrainerHill_Entrance/scripts.pory"

# 270 "data/maps/TrainerHill_Entrance/scripts.pory"
	.align 2
# 271 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Pokemart_Basic:
# 272 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 273 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 274 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 275 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_AWAKENING
# 276 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_X_SPEED
# 277 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_X_SP_ATK
# 278 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_X_ATTACK
# 279 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_X_DEFENSE
# 280 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_DIRE_HIT
# 281 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_GUARD_SPEC
# 282 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_X_ACCURACY
# 283 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_NONE
# 284 "data/maps/TrainerHill_Entrance/scripts.pory"
	release
# 285 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 286 "data/maps/TrainerHill_Entrance/scripts.pory"

# 287 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_ExpandedPokemart::
# 288 "data/maps/TrainerHill_Entrance/scripts.pory"
	pokemart TrainerHill_Entrance_Pokemart_Expanded
# 289 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 290 "data/maps/TrainerHill_Entrance/scripts.pory"
	release
# 291 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 292 "data/maps/TrainerHill_Entrance/scripts.pory"

# 293 "data/maps/TrainerHill_Entrance/scripts.pory"
	.align 2
# 294 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Pokemart_Expanded:
# 295 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 296 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_MAX_POTION
# 297 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 298 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 299 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_REVIVE
# 300 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_X_SPEED
# 301 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_X_SP_ATK
# 302 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_X_ATTACK
# 303 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_X_DEFENSE
# 304 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_DIRE_HIT
# 305 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_GUARD_SPEC
# 306 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_X_ACCURACY
# 307 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_NONE
# 308 "data/maps/TrainerHill_Entrance/scripts.pory"
	release
# 309 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 310 "data/maps/TrainerHill_Entrance/scripts.pory"

# 311 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_StillGettingReady:
# 312 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "This is the TRAINER HILL where\n"
# 313 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "you may enjoy tag battles with many\l"
# 314 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "TRAINERS.\p"
# 315 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Unfortunately, we're still getting\n"
# 316 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "things ready. Please come back later!$"
# 317 "data/maps/TrainerHill_Entrance/scripts.pory"

# 318 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_WelcomeToTrainerHill:
# 319 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Welcome!\p"
# 320 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "This is the TRAINER HILL where\n"
# 321 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "you may enjoy tag battles with many\l"
# 322 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "TRAINERS!$"
# 323 "data/maps/TrainerHill_Entrance/scripts.pory"

# 324 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_SaveGameBeforeEnter:
# 325 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Is this your first visit here?\p"
# 326 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Before you enter, please save\n"
# 327 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "your game.$"
# 328 "data/maps/TrainerHill_Entrance/scripts.pory"

# 329 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_TrainersUpToFloorX:
# 330 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Let's see…\n"
# 331 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "The TRAINERS here now are…\p"
# 332 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Up to floor no. {STR_VAR_1}.$"
# 333 "data/maps/TrainerHill_Entrance/scripts.pory"

# 334 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_TrainersInEveryRoom:
# 335 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Let's see…\n"
# 336 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "The TRAINERS here now are…\p"
# 337 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "There appear to be TRAINERS gathered\n"
# 338 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "in every room.$"
# 339 "data/maps/TrainerHill_Entrance/scripts.pory"

# 340 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_LikeToChallengeTrainers:
# 341 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Would you like to challenge the\n"
# 342 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "waiting TRAINERS?$"
# 343 "data/maps/TrainerHill_Entrance/scripts.pory"

# 344 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_TimeProgessGetSetGo:
# 345 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I will time your progress.\n"
# 346 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Best of luck!\p"
# 347 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "On your marks…\p"
# 348 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Get set…\p"
# 349 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Go!$"
# 350 "data/maps/TrainerHill_Entrance/scripts.pory"

# 351 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_PleaseVisitUsAgain:
# 352 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Please do visit us again!$"
# 353 "data/maps/TrainerHill_Entrance/scripts.pory"

# 354 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_TooBadTremendousEffort:
# 355 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "That was too bad.\p"
# 356 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I think you put in a tremendous\n"
# 357 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "effort in your battling.\p"
# 358 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Please come back and try again!$"
# 359 "data/maps/TrainerHill_Entrance/scripts.pory"

# 360 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_HopeYouGiveItYourBest:
# 361 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I hope you give it your best.$"
# 362 "data/maps/TrainerHill_Entrance/scripts.pory"

# 363 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_MovedReceptionHereForSwitch:
# 364 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "When the TRAINERS switch places,\n"
# 365 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "the movement can be hectic.\p"
# 366 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "To avoid the stampede, we moved\n"
# 367 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "the reception counter here.\p"
# 368 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I'm sorry for the inconvenience.$"
# 369 "data/maps/TrainerHill_Entrance/scripts.pory"

# 370 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_ThankYouForPlaying:
# 371 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Thank you for playing!$"
# 372 "data/maps/TrainerHill_Entrance/scripts.pory"

# 373 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_ExplainTrainerHill:
# 374 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Here at the TRAINER HILL, we conduct\n"
# 375 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "an event called the Time Attack.\p"
# 376 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "It is a race that measures how long\n"
# 377 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "you take to reach our owner on\l"
# 378 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "the rooftop from this counter.\p"
# 379 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "The fastest times are posted on\n"
# 380 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "the Time Board--try competing with\l"
# 381 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "your friends.\p"
# 382 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "In TRAINER battles along the way,\n"
# 383 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "neither Exp. Points nor money will\l"
# 384 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "be awarded.$"
# 385 "data/maps/TrainerHill_Entrance/scripts.pory"

# 386 "data/maps/TrainerHill_Entrance/scripts.pory"
@ Unused
# 387 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_NeedAtLeastTwoPokemon:
# 388 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Oh, I'm sorry, but you appear to have\n"
# 389 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "only one POKéMON with you.\p"
# 390 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "You will need at least two POKéMON\n"
# 391 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "to enter this event.$"
# 392 "data/maps/TrainerHill_Entrance/scripts.pory"

# 393 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Roof_Text_YouFinallyCameBravo:
# 394 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Hm! Hm!\p"
# 395 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "You finally came!\n"
# 396 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Yes, you have arrived!\p"
# 397 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Wait! Don't say it!\n"
# 398 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I know why you came all the way\l"
# 399 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "here by yourself!\p"
# 400 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "You wanted to see me, the owner\n"
# 401 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "of the TRAINER HILL, because…\p"
# 402 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "You want to form a tag team with me!\n"
# 403 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Wa-hoo!\p"
# 404 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "…Uh?\n"
# 405 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "That's not it?\p"
# 406 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Anyway, I watched you on your way up.\n"
# 407 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Marvelous battling! Bravo, indeed!$"
# 408 "data/maps/TrainerHill_Entrance/scripts.pory"

# 409 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Roof_Text_HaveTheMostMarvelousGift:
# 410 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "For a marvelous someone like you,\n"
# 411 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I have the most marvelous gift!$"
# 412 "data/maps/TrainerHill_Entrance/scripts.pory"

# 413 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Roof_Text_FullUpBeBackLaterForThis:
# 414 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Oh, no, full up with things!\n"
# 415 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "You'll be back later for this!$"
# 416 "data/maps/TrainerHill_Entrance/scripts.pory"

# 417 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Roof_Text_GotHereMarvelouslyQuickly:
# 418 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Oh, hold on here! Did you possibly get\n"
# 419 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "here marvelously quickly?\p"
# 420 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "How splendid! You needn't have\n"
# 421 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "hurried so to see me!\p"
# 422 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "That is so delightful. I'll have the Time\n"
# 423 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Board at the reception updated!$"
# 424 "data/maps/TrainerHill_Entrance/scripts.pory"

# 425 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Roof_Text_YouWerentVeryQuick:
# 426 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "But, oh…\n"
# 427 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "You weren't very quick getting here.$"
# 428 "data/maps/TrainerHill_Entrance/scripts.pory"

# 429 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Roof_Text_ArriveZippierNextTime:
# 430 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Perhaps it would please me more if you\n"
# 431 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "arrived zippier next time.\p"
# 432 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Then, I should be pleased to form\n"
# 433 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "a tag team with you!\p"
# 434 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Until we meet again, amigo!$"
# 435 "data/maps/TrainerHill_Entrance/scripts.pory"

# 436 "data/maps/TrainerHill_Entrance/scripts.pory"
@ Unused
# 437 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Roof_Text_BuiltTrainerHillToFindPartner:
# 438 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I had the TRAINER HILL built for but\n"
# 439 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "one reason and one only!\p"
# 440 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "To find the most suitable partner\n"
# 441 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "with whom I may form a tag team!$"
# 442 "data/maps/TrainerHill_Entrance/scripts.pory"

# 443 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_ChallengeTime:
# 444 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "{STR_VAR_1} min. {STR_VAR_2}.{STR_VAR_3} sec.$"
# 445 "data/maps/TrainerHill_Entrance/scripts.pory"

# 446 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_WhatSortOfTrainersAreAhead:
# 447 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Who knows what sort of TRAINERS\n"
# 448 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "and POKéMON combos are ahead?\p"
# 449 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "All I know is that I'll knock aside\n"
# 450 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "anyone that stands in my way!$"
# 451 "data/maps/TrainerHill_Entrance/scripts.pory"

# 452 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_CantWaitToTestTheWaters:
# 453 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I heard tough TRAINERS come to this\n"
# 454 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "TRAINER HILL from all over.\p"
# 455 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I can't wait to test the waters!\p"
# 456 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I'll knock aside anyone that stands\n"
# 457 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "in my way!$"
# 458 "data/maps/TrainerHill_Entrance/scripts.pory"

# 459 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_FriendsTryingToReachTimeBoardTop:
# 460 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Do you see the Time Board over there?\p"
# 461 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "My friends and I are trying to see who\n"
# 462 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "can reach the top in the least time.$"
# 463 "data/maps/TrainerHill_Entrance/scripts.pory"

# 464 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_DoYouKnowWhenTheyOpen:
# 465 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Do you know when they're opening\n"
# 466 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "this place up?\p"
# 467 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I'm waiting here to be the first\n"
# 468 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "challenger ever!$"
# 469 "data/maps/TrainerHill_Entrance/scripts.pory"

# 470 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Elevator_Text_ReturnToReception:
# 471 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Would you like to return to\n"
# 472 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "the reception counter?$"

TrainerHill_Entrance_EventScript_Clerk_Text_0:
# 4 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "It's the Hill, Baby!\n"
	.string "{FONT_SMALL}…Why do they make me say that every\l"
	.string "time?$"
