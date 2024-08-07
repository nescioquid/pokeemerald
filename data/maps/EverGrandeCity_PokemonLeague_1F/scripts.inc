EverGrandeCity_PokemonLeague_1F_EventScript_Clerk::
# 2 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	lock
# 3 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	faceplayer
# 4 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto_if_unset FLAG_SYS_GAME_CLEAR, EverGrandeCity_PokemonLeague_1F_EventScript_Clerk_2
# 8 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	message EverGrandeCity_PokemonLeague_1F_EventScript_Clerk_Text_1
EverGrandeCity_PokemonLeague_1F_EventScript_Clerk_1:
# 10 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitmessage
# 11 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	call Common_PoryScript_Clerk_PokemartByBadges
# 12 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto_if_unset FLAG_SYS_GAME_CLEAR, EverGrandeCity_PokemonLeague_1F_EventScript_Clerk_6
# 15 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	random 2
# 16 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	switch VAR_RESULT
# 17 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	case 0, EverGrandeCity_PokemonLeague_1F_EventScript_Clerk_10
# 18 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	case 1, EverGrandeCity_PokemonLeague_1F_EventScript_Clerk_11
EverGrandeCity_PokemonLeague_1F_EventScript_Clerk_5:
# 21 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	release
	end

EverGrandeCity_PokemonLeague_1F_EventScript_Clerk_2:
# 5 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox EverGrandeCity_PokemonLeague_1F_EventScript_Clerk_Text_0
# 6 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	call Common_PoryScript_Clerk_Hellos
	goto EverGrandeCity_PokemonLeague_1F_EventScript_Clerk_1

EverGrandeCity_PokemonLeague_1F_EventScript_Clerk_6:
# 13 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	call Common_PoryScript_Clerk_Goodbyes
	goto EverGrandeCity_PokemonLeague_1F_EventScript_Clerk_5

EverGrandeCity_PokemonLeague_1F_EventScript_Clerk_10:
# 17 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox EverGrandeCity_PokemonLeague_1F_EventScript_Clerk_Text_2
	goto EverGrandeCity_PokemonLeague_1F_EventScript_Clerk_5

EverGrandeCity_PokemonLeague_1F_EventScript_Clerk_11:
# 18 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox EverGrandeCity_PokemonLeague_1F_EventScript_Clerk_Text_3
	goto EverGrandeCity_PokemonLeague_1F_EventScript_Clerk_5


# 25 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 26 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
.set LOCALID_NURSE, 1
# 27 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
.set LOCALID_GUARD_1, 3
# 28 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
.set LOCALID_GUARD_2, 4
# 29 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 30 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_MapScripts::
# 31 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, EverGrandeCity_PokemonLeague_1F_OnTransition
# 32 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 33 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.byte 0
# 34 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 35 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_OnTransition:
# 36 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setrespawn HEAL_LOCATION_EVER_GRANDE_CITY_POKEMON_LEAGUE
# 37 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setflag FLAG_LANDMARK_POKEMON_LEAGUE
# 38 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	call_if_unset FLAG_ENTERED_ELITE_FOUR, EverGrandeCity_PokemonLeague_1F_EventScript_GuardsBlockDoor
# 39 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	end
# 40 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 41 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_EventScript_GuardsBlockDoor::
# 42 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setobjectxyperm LOCALID_GUARD_1, 9, 2
# 43 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setobjectxyperm LOCALID_GUARD_2, 10, 2
# 44 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	return
# 45 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 46 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_EventScript_Nurse::
# 47 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_NURSE
# 48 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 49 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitmessage
# 50 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitbuttonpress
# 51 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	release
# 52 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	end
# 53 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 54 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
@ EverGrandeCity_PokemonLeague_1F_EventScript_Clerk::
# 55 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
@ 	lock
# 56 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
@ 	faceplayer
# 57 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
@ 	message gText_HowMayIServeYou
# 58 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
@ 	waitmessage
# 59 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
@ 	pokemart EverGrandeCity_PokemonLeague_1F_Pokemart
# 60 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
@ 	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 61 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
@ 	release
# 62 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
@ 	end
# 63 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 64 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.align 2
# 65 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_Pokemart:
# 66 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 67 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 68 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_MAX_POTION
# 69 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 70 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 71 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_REVIVE
# 72 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 73 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_NONE
# 74 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	release
# 75 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	end
# 76 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 77 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
@ The door guards only check for FLAG_BADGE06_GET because Winonas badge is the only one that can be skipped
# 78 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
@ Its assumed the player has the remaining badges
# 79 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_EventScript_DoorGuard::
# 80 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	lockall
# 81 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto_if_set FLAG_ENTERED_ELITE_FOUR, EverGrandeCity_PokemonLeague_1F_EventScript_GoForth
# 82 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 83 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	call_if_ge VAR_TEMP_0, 11, EverGrandeCity_PokemonLeague_1F_EventScript_PlayerMoveToFrontFromRight
# 84 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	call_if_le VAR_TEMP_0, 8, EverGrandeCity_PokemonLeague_1F_EventScript_PlayerMoveToFrontFromLeft
# 85 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	message EverGrandeCity_PokemonLeague_1F_Text_MustHaveAllGymBadges
# 86 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitmessage
# 87 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	delay 120
# 88 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto_if_unset FLAG_BADGE06_GET, EverGrandeCity_PokemonLeague_1F_EventScript_NotAllBadges
# 89 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	closemessage
# 90 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	applymovement LOCALID_GUARD_1, EverGrandeCity_PokemonLeague_1F_Movement_LeftGuardOutOfWay
# 91 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	applymovement LOCALID_GUARD_2, EverGrandeCity_PokemonLeague_1F_Movement_RightGuardOutOfWay
# 92 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitmovement 0
# 93 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	delay 10
# 94 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 95 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	message EverGrandeCity_PokemonLeague_1F_Text_GoForth
# 96 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitmessage
# 97 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitfanfare
# 98 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	closemessage
# 99 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	copyobjectxytoperm LOCALID_GUARD_1
# 100 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	copyobjectxytoperm LOCALID_GUARD_2
# 101 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setflag FLAG_ENTERED_ELITE_FOUR
# 102 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	releaseall
# 103 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	end
# 104 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 105 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_EventScript_PlayerMoveToFrontFromRight::
# 106 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EverGrandeCity_PokemonLeague_1F_Movement_MoveToFrontFromRight
# 107 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitmovement 0
# 108 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	return
# 109 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 110 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_EventScript_PlayerMoveToFrontFromLeft::
# 111 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EverGrandeCity_PokemonLeague_1F_Movement_MoveToFrontFromLeft
# 112 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitmovement 0
# 113 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	return
# 114 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 115 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_EventScript_NotAllBadges::
# 116 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	playse SE_FAILURE
# 117 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox EverGrandeCity_PokemonLeague_1F_Text_HaventObtainedAllBadges, MSGBOX_DEFAULT
# 118 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	releaseall
# 119 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	end
# 120 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 121 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_EventScript_GoForth::
# 122 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FacePlayer
# 123 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitmovement 0
# 124 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox EverGrandeCity_PokemonLeague_1F_Text_GoForth, MSGBOX_DEFAULT
# 125 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	closemessage
# 126 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 127 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitmovement 0
# 128 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	releaseall
# 129 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	end
# 130 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 131 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_Movement_MoveToFrontFromRight:
# 132 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	walk_down
# 133 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	walk_left
# 134 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	walk_in_place_faster_up
# 135 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	step_end
# 136 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 137 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_Movement_MoveToFrontFromLeft:
# 138 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	walk_down
# 139 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	walk_right
# 140 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	walk_in_place_faster_up
# 141 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	step_end
# 142 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 143 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_Movement_LeftGuardOutOfWay:
# 144 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	walk_left
# 145 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	walk_in_place_faster_down
# 146 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	step_end
# 147 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 148 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_Movement_RightGuardOutOfWay:
# 149 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	walk_right
# 150 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	walk_in_place_faster_down
# 151 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	step_end
# 152 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 153 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_Text_MustHaveAllGymBadges:
# 154 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "Beyond this point, only those TRAINERS\n"
# 155 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "who have collected all the GYM BADGES\l"
# 156 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "are permitted to enter.\p"
# 157 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "TRAINER, let us confirm that you have\n"
# 158 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "all the GYM BADGES.$"
# 159 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 160 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_Text_HaventObtainedAllBadges:
# 161 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "You haven't obtained all the BADGES.\p"
# 162 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "If you're bound for the POKéMON\n"
# 163 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "LEAGUE, you must return with them.$"
# 164 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 165 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_Text_GoForth:
# 166 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "TRAINER! Believe in yourself and your\n"
# 167 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "POKéMON, and go forth!$"

EverGrandeCity_PokemonLeague_1F_EventScript_Clerk_Text_0:
# 5 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "You made it to Ever Grande! Nice!$"

EverGrandeCity_PokemonLeague_1F_EventScript_Clerk_Text_1:
# 8 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "Wow, you JUST made it to Ever Grande\n"
	.string "and you're already the Champion?!\p"
	.string "{FONT_SMALL}I've been here three years and they\n"
	.string "haven't even given me a raise…\p"
	.string "{FONT_NORMAL}What did you still need exactly?$"

EverGrandeCity_PokemonLeague_1F_EventScript_Clerk_Text_2:
# 17 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "See you later!\n"
	.string "{FONT_SMALL}…Hopefully much later…$"

EverGrandeCity_PokemonLeague_1F_EventScript_Clerk_Text_3:
# 18 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "Good luck!\n"
	.string "{FONT_SMALL}…Like you need it anyway…$"
