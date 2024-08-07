RustboroCity_DevonCorp_2F_EventScript_FossilScientist::
# 5 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	lock
# 6 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	faceplayer
# 7 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_EventScript_FossilScientist_Text_0
# 8 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	checkitem ITEM_HELIX_FOSSIL
# 9 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne RustboroCity_DevonCorp_2F_EventScript_FossilScientist_2
# 14 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	checkitem ITEM_DOME_FOSSIL
# 15 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne RustboroCity_DevonCorp_2F_EventScript_FossilScientist_5
# 20 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	checkitem ITEM_OLD_AMBER
# 21 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne RustboroCity_DevonCorp_2F_EventScript_FossilScientist_8
# 26 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	checkitem ITEM_ROOT_FOSSIL
# 27 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne RustboroCity_DevonCorp_2F_EventScript_FossilScientist_11
# 32 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	checkitem ITEM_CLAW_FOSSIL
# 33 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne RustboroCity_DevonCorp_2F_EventScript_FossilScientist_14
# 38 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
	end

RustboroCity_DevonCorp_2F_EventScript_FossilScientist_2:
# 10 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call PoryScript_FossilScientist_ReviveFossil
# 11 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
	end

RustboroCity_DevonCorp_2F_EventScript_FossilScientist_5:
# 16 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call PoryScript_FossilScientist_ReviveFossil
# 17 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
	end

RustboroCity_DevonCorp_2F_EventScript_FossilScientist_8:
# 22 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call PoryScript_FossilScientist_ReviveFossil
# 23 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
	end

RustboroCity_DevonCorp_2F_EventScript_FossilScientist_11:
# 28 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call PoryScript_FossilScientist_ReviveFossil
# 29 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
	end

RustboroCity_DevonCorp_2F_EventScript_FossilScientist_14:
# 34 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call PoryScript_FossilScientist_ReviveFossil
# 35 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
	end


PoryScript_FossilScientist_ReviveFossil::
# 43 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_unset FLAG_TEMP_1, PoryScript_FossilScientist_ReviveFossil_2
# 46 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	message PoryScript_FossilScientist_ReviveFossil_Text_1
PoryScript_FossilScientist_ReviveFossil_1:
# 48 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmessage
# 49 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_8, ITEM_HELIX_FOSSIL
# 50 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_PoryScript_PushItemToDynmultistackIfOwned
# 51 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_8, ITEM_DOME_FOSSIL
# 52 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_PoryScript_PushItemToDynmultistackIfOwned
# 53 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_8, ITEM_OLD_AMBER
# 54 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_PoryScript_PushItemToDynmultistackIfOwned
# 55 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_8, ITEM_ROOT_FOSSIL
# 56 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_PoryScript_PushItemToDynmultistackIfOwned
# 57 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_8, ITEM_CLAW_FOSSIL
# 58 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_PoryScript_PushItemToDynmultistackIfOwned
# 59 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_ITEM
# 60 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	switch VAR_RESULT
# 61 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case ITEM_HELIX_FOSSIL, PoryScript_FossilScientist_ReviveFossil_7
# 66 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case ITEM_DOME_FOSSIL, PoryScript_FossilScientist_ReviveFossil_8
# 71 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case ITEM_OLD_AMBER, PoryScript_FossilScientist_ReviveFossil_9
# 76 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case ITEM_ROOT_FOSSIL, PoryScript_FossilScientist_ReviveFossil_10
# 81 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case ITEM_CLAW_FOSSIL, PoryScript_FossilScientist_ReviveFossil_11
# 86 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case MULTI_B_PRESSED, PoryScript_FossilScientist_ReviveFossil_12
PoryScript_FossilScientist_ReviveFossil_5:
# 91 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox PoryScript_FossilScientist_ReviveFossil_Text_7
# 92 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	switch VAR_WHICH_FOSSIL_REVIVED
# 93 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case ITEM_HELIX_FOSSIL, PoryScript_FossilScientist_ReviveFossil_15
# 97 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case ITEM_DOME_FOSSIL, PoryScript_FossilScientist_ReviveFossil_16
# 101 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case ITEM_OLD_AMBER, PoryScript_FossilScientist_ReviveFossil_17
# 105 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case ITEM_ROOT_FOSSIL, PoryScript_FossilScientist_ReviveFossil_18
# 109 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case ITEM_CLAW_FOSSIL, PoryScript_FossilScientist_ReviveFossil_19
PoryScript_FossilScientist_ReviveFossil_13:
# 114 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_PoryScript_GivemonHelper
# 115 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setflag FLAG_RECEIVED_REVIVED_FOSSIL_MON
# 116 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setflag FLAG_TEMP_1
# 117 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox PoryScript_FossilScientist_ReviveFossil_Text_8
	return

PoryScript_FossilScientist_ReviveFossil_2:
# 44 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	message PoryScript_FossilScientist_ReviveFossil_Text_0
	goto PoryScript_FossilScientist_ReviveFossil_1

PoryScript_FossilScientist_ReviveFossil_7:
# 62 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, ITEM_HELIX_FOSSIL
# 63 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_HELIX_FOSSIL
# 64 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox PoryScript_FossilScientist_ReviveFossil_Text_2
# 65 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	removeitem ITEM_HELIX_FOSSIL
	goto PoryScript_FossilScientist_ReviveFossil_5

PoryScript_FossilScientist_ReviveFossil_8:
# 67 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, ITEM_DOME_FOSSIL
# 68 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_DOME_FOSSIL
# 69 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox PoryScript_FossilScientist_ReviveFossil_Text_3
# 70 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	removeitem ITEM_DOME_FOSSIL
	goto PoryScript_FossilScientist_ReviveFossil_5

PoryScript_FossilScientist_ReviveFossil_9:
# 72 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, ITEM_OLD_AMBER
# 73 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_OLD_AMBER
# 74 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox PoryScript_FossilScientist_ReviveFossil_Text_4
# 75 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	removeitem ITEM_OLD_AMBER
	goto PoryScript_FossilScientist_ReviveFossil_5

PoryScript_FossilScientist_ReviveFossil_10:
# 77 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, ITEM_ROOT_FOSSIL
# 78 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ROOT_FOSSIL
# 79 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox PoryScript_FossilScientist_ReviveFossil_Text_5
# 80 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	removeitem ITEM_ROOT_FOSSIL
	goto PoryScript_FossilScientist_ReviveFossil_5

PoryScript_FossilScientist_ReviveFossil_11:
# 82 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, ITEM_CLAW_FOSSIL
# 83 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_CLAW_FOSSIL
# 84 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox PoryScript_FossilScientist_ReviveFossil_Text_5
# 85 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	removeitem ITEM_CLAW_FOSSIL
	goto PoryScript_FossilScientist_ReviveFossil_5

PoryScript_FossilScientist_ReviveFossil_12:
# 87 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox PoryScript_FossilScientist_ReviveFossil_Text_6
# 88 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
	end

PoryScript_FossilScientist_ReviveFossil_15:
# 94 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_OMANYTE
# 95 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_9, 2
# 96 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	givemon SPECIES_OMANYTE, 25
	goto PoryScript_FossilScientist_ReviveFossil_13

PoryScript_FossilScientist_ReviveFossil_16:
# 98 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_KABUTO
# 99 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_9, 1
# 100 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	givemon SPECIES_KABUTO, 25
	goto PoryScript_FossilScientist_ReviveFossil_13

PoryScript_FossilScientist_ReviveFossil_17:
# 102 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_AERODACTYL
# 103 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_9, 2
# 104 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	givemon SPECIES_AERODACTYL, 25
	goto PoryScript_FossilScientist_ReviveFossil_13

PoryScript_FossilScientist_ReviveFossil_18:
# 106 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_LILEEP
# 107 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_9, 1
# 108 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	givemon SPECIES_LILEEP, 25
	goto PoryScript_FossilScientist_ReviveFossil_13

PoryScript_FossilScientist_ReviveFossil_19:
# 110 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_ANORITH
# 111 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_9, 2
# 112 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	givemon SPECIES_ANORITH, 25
	goto PoryScript_FossilScientist_ReviveFossil_13


# 120 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 121 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
.set LOCALID_FOSSIL_SCIENTIST, 5
# 122 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 123 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_MapScripts::
# 124 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RustboroCity_DevonCorp_2F_OnTransition
# 125 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.byte 0
# 126 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 127 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_OnTransition:
# 128 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call_if_eq VAR_FOSSIL_RESURRECTION_STATE, 1, RustboroCity_DevonCorp_2F_EventScript_SetFossilReady
# 129 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 130 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 131 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_SetFossilReady::
# 132 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_FOSSIL_RESURRECTION_STATE, 2
# 133 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	return
# 134 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 135 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_TalkToPokemonScientist::
# 136 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	lock
# 137 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	faceplayer
# 138 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call_if_eq VAR_FOSSIL_RESURRECTION_STATE, 1, RustboroCity_DevonCorp_2F_EventScript_SetFossilReady
# 139 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_DeviceForTalkingToPokemon, MSGBOX_DEFAULT
# 140 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 141 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 142 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 143 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_BallScientist::
# 144 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	lock
# 145 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	faceplayer
# 146 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call_if_eq VAR_FOSSIL_RESURRECTION_STATE, 1, RustboroCity_DevonCorp_2F_EventScript_SetFossilReady
# 147 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_set FLAG_MET_DEVON_EMPLOYEE, RustboroCity_DevonCorp_2F_EventScript_DevelopedBalls
# 148 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_DevelopingNewBalls, MSGBOX_DEFAULT
# 149 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 150 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 151 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 152 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_DevelopedBalls::
# 153 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_WeFinallyMadeNewBalls, MSGBOX_DEFAULT
# 154 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 155 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 156 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 157 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_PokenavScientist::
# 158 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	lock
# 159 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	faceplayer
# 160 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call_if_eq VAR_FOSSIL_RESURRECTION_STATE, 1, RustboroCity_DevonCorp_2F_EventScript_SetFossilReady
# 161 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_set FLAG_RECEIVED_POKENAV, RustboroCity_DevonCorp_2F_EventScript_HasPokenav
# 162 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_IMadePokenav, MSGBOX_DEFAULT
# 163 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 164 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 165 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 166 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_HasPokenav::
# 167 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_WowThatsAPokenav, MSGBOX_DEFAULT
# 168 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 169 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 170 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 171 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_PokemonDreamsScientist::
# 172 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	lock
# 173 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	faceplayer
# 174 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call_if_eq VAR_FOSSIL_RESURRECTION_STATE, 1, RustboroCity_DevonCorp_2F_EventScript_SetFossilReady
# 175 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_DeviceToVisualizePokemonDreams, MSGBOX_DEFAULT
# 176 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 177 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 178 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 179 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
@ RustboroCity_DevonCorp_2F_EventScript_FossilScientist::
# 180 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
@ 	lock
# 181 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
@ 	faceplayer
# 182 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
@ 	goto_if_eq VAR_FOSSIL_RESURRECTION_STATE, 2, RustboroCity_DevonCorp_2F_EventScript_FossilMonReady
# 183 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
@ 	goto_if_eq VAR_FOSSIL_RESURRECTION_STATE, 1, RustboroCity_DevonCorp_2F_EventScript_StillRegenerating
# 184 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
@ 	msgbox RustboroCity_DevonCorp_2F_Text_DevelopDeviceToResurrectFossils, MSGBOX_DEFAULT
# 185 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
@ 	checkitem ITEM_ROOT_FOSSIL
# 186 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
@ 	goto_if_eq VAR_RESULT, TRUE, RustboroCity_DevonCorp_2F_EventScript_NoticeRootFossil
# 187 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
@ 	checkitem ITEM_CLAW_FOSSIL
# 188 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
@ 	goto_if_eq VAR_RESULT, TRUE, RustboroCity_DevonCorp_2F_EventScript_NoticeClawFossil
# 189 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
@ 	release
# 190 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
@ 	end
# 191 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 192 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
@ This whole section has needless duplication and could be condensed considerably
# 193 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_NoticeRootFossil::
# 194 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	closemessage
# 195 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	playse SE_PIN
# 196 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	applymovement LOCALID_FOSSIL_SCIENTIST, Common_Movement_ExclamationMark
# 197 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmovement 0
# 198 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	applymovement LOCALID_FOSSIL_SCIENTIST, Common_Movement_Delay48
# 199 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmovement 0
# 200 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_WantToBringFossilBackToLife, MSGBOX_YESNO
# 201 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, RustboroCity_DevonCorp_2F_EventScript_DeclineGiveFossil
# 202 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	checkitem ITEM_CLAW_FOSSIL
# 203 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, RustboroCity_DevonCorp_2F_EventScript_ChooseFossil
# 204 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_GiveRootFossil
# 205 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 206 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 207 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_GiveRootFossil::
# 208 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ROOT_FOSSIL
# 209 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_HandedFossilToResearcher, MSGBOX_DEFAULT
# 210 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	removeitem ITEM_ROOT_FOSSIL
# 211 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_FOSSIL_RESURRECTION_STATE, 1
# 212 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, 1
# 213 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 214 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 215 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 216 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_NoticeClawFossil::
# 217 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	closemessage
# 218 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	playse SE_PIN
# 219 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	applymovement LOCALID_FOSSIL_SCIENTIST, Common_Movement_ExclamationMark
# 220 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmovement 0
# 221 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	applymovement LOCALID_FOSSIL_SCIENTIST, Common_Movement_Delay48
# 222 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmovement 0
# 223 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_WantToBringFossilBackToLife, MSGBOX_YESNO
# 224 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, RustboroCity_DevonCorp_2F_EventScript_DeclineGiveFossil
# 225 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	checkitem ITEM_ROOT_FOSSIL
# 226 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, RustboroCity_DevonCorp_2F_EventScript_ChooseFossil
# 227 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_GiveClawFossil
# 228 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 229 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 230 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_GiveClawFossil::
# 231 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_CLAW_FOSSIL
# 232 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_HandedFossilToResearcher, MSGBOX_DEFAULT
# 233 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	removeitem ITEM_CLAW_FOSSIL
# 234 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_FOSSIL_RESURRECTION_STATE, 1
# 235 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, 2
# 236 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 237 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 238 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 239 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_DeclineGiveFossil::
# 240 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_OhIsThatSo, MSGBOX_DEFAULT
# 241 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 242 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 243 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 244 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_StillRegenerating::
# 245 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_FossilRegeneratorTakesTime, MSGBOX_DEFAULT
# 246 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 247 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 248 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 249 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_FossilMonReady::
# 250 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_WHICH_FOSSIL_REVIVED, 1, RustboroCity_DevonCorp_2F_EventScript_LileepReady
# 251 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_WHICH_FOSSIL_REVIVED, 2, RustboroCity_DevonCorp_2F_EventScript_AnorithReady
# 252 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 253 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 254 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_LileepReady::
# 255 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_LILEEP
# 256 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_FossilizedMonBroughtBackToLife, MSGBOX_DEFAULT
# 257 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_ReceiveLileep
# 258 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 259 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 260 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_AnorithReady::
# 261 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_ANORITH
# 262 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_FossilizedMonBroughtBackToLife, MSGBOX_DEFAULT
# 263 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_ReceiveAnorith
# 264 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 265 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 266 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_ReceiveLileep::
# 267 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_LILEEP
# 268 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	givemon SPECIES_LILEEP, 20
# 269 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, RustboroCity_DevonCorp_2F_EventScript_ReceiveLileepParty
# 270 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, RustboroCity_DevonCorp_2F_EventScript_ReceiveLileepPC
# 271 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 272 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 273 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 274 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_ReceiveLileepParty::
# 275 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call RustboroCity_DevonCorp_2F_EventScript_ReceivedLileepFanfare
# 276 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 277 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, RustboroCity_DevonCorp_2F_EventScript_FinishReceivingLileep
# 278 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 279 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 280 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_FinishReceivingLileep
# 281 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 282 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 283 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_ReceiveLileepPC::
# 284 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call RustboroCity_DevonCorp_2F_EventScript_ReceivedLileepFanfare
# 285 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 286 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, RustboroCity_DevonCorp_2F_EventScript_TransferLileepToPC
# 287 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 288 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_TransferLileepToPC
# 289 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 290 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 291 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_TransferLileepToPC::
# 292 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_TransferredToPC
# 293 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_FinishReceivingLileep
# 294 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 295 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 296 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_ReceivedLileepFanfare::
# 297 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_LILEEP
# 298 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 299 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	message RustboroCity_DevonCorp_2F_Text_ReceivedMonFromResearcher
# 300 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmessage
# 301 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitfanfare
# 302 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_LILEEP
# 303 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	return
# 304 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 305 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_FinishReceivingLileep::
# 306 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_FOSSIL_RESURRECTION_STATE, 0
# 307 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setflag FLAG_RECEIVED_REVIVED_FOSSIL_MON
# 308 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 309 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 310 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 311 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_ReceiveAnorith::
# 312 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_ANORITH
# 313 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	givemon SPECIES_ANORITH, 20
# 314 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, RustboroCity_DevonCorp_2F_EventScript_ReceiveAnorithParty
# 315 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, RustboroCity_DevonCorp_2F_EventScript_ReceiveAnorithPC
# 316 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 317 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 318 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 319 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_ReceiveAnorithParty::
# 320 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call RustboroCity_DevonCorp_2F_EventScript_ReceivedAnorithFanfare
# 321 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 322 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, RustboroCity_DevonCorp_2F_EventScript_FinishReceivingAnorith
# 323 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 324 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 325 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_FinishReceivingAnorith
# 326 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 327 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 328 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_ReceiveAnorithPC::
# 329 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call RustboroCity_DevonCorp_2F_EventScript_ReceivedAnorithFanfare
# 330 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 331 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, RustboroCity_DevonCorp_2F_EventScript_TransferAnorithToPC
# 332 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 333 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_TransferAnorithToPC
# 334 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 335 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 336 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_TransferAnorithToPC::
# 337 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_TransferredToPC
# 338 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_FinishReceivingAnorith
# 339 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 340 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 341 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_ReceivedAnorithFanfare::
# 342 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_ANORITH
# 343 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 344 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	message RustboroCity_DevonCorp_2F_Text_ReceivedMonFromResearcher
# 345 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmessage
# 346 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitfanfare
# 347 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_ANORITH
# 348 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	return
# 349 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 350 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_FinishReceivingAnorith::
# 351 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_FOSSIL_RESURRECTION_STATE, 0
# 352 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setflag FLAG_RECEIVED_REVIVED_FOSSIL_MON
# 353 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 354 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 355 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 356 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_ChooseFossil::
# 357 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	message RustboroCity_DevonCorp_2F_Text_TwoFossilsPickOne
# 358 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmessage
# 359 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	multichoice 17, 6, MULTI_FOSSIL, FALSE
# 360 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	switch VAR_RESULT
# 361 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 0, RustboroCity_DevonCorp_2F_EventScript_ChooseClawFossil
# 362 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 1, RustboroCity_DevonCorp_2F_EventScript_ChooseRootFossil
# 363 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 2, RustboroCity_DevonCorp_2F_EventScript_CancelFossilSelect
# 364 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case MULTI_B_PRESSED, RustboroCity_DevonCorp_2F_EventScript_CancelFossilSelect
# 365 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 366 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 367 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_ChooseClawFossil::
# 368 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_GiveClawFossil
# 369 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 370 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 371 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_ChooseRootFossil::
# 372 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_GiveRootFossil
# 373 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 374 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 375 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_CancelFossilSelect::
# 376 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 377 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 378 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 379 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_MatchCallScientist::
# 380 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	lock
# 381 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	faceplayer
# 382 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call_if_eq VAR_FOSSIL_RESURRECTION_STATE, 1, RustboroCity_DevonCorp_2F_EventScript_SetFossilReady
# 383 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_ge VAR_RUSTBORO_CITY_STATE, 6, RustboroCity_DevonCorp_2F_EventScript_WorkOnNext
# 384 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_DevelopNewPokenavFeature, MSGBOX_DEFAULT
# 385 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 386 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 387 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 388 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_WorkOnNext::
# 389 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_WhatToWorkOnNext, MSGBOX_DEFAULT
# 390 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 391 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 392 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 393 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_DeviceForTalkingToPokemon:
# 394 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "We're developing a device for talking\n"
# 395 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "with POKéMON.\p"
# 396 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "But we haven't had much success…$"
# 397 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 398 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_DevelopingNewBalls:
# 399 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "I'm developing new kinds of\n"
# 400 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "POKé BALLS…\p"
# 401 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "But I haven't made much headway…$"
# 402 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 403 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_WeFinallyMadeNewBalls:
# 404 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "We finally made new kinds of\n"
# 405 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "POKé BALLS!\p"
# 406 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "The REPEAT BALL makes it easier to\n"
# 407 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "catch POKéMON you've caught before.\p"
# 408 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "The TIMER BALL gets better at catching\n"
# 409 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "POKéMON the longer a battle runs.\p"
# 410 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Both are proudly developed by\n"
# 411 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "the DEVON CORPORATION.\p"
# 412 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Please give them a try!$"
# 413 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 414 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_IMadePokenav:
# 415 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "I made the POKéNAV!\p"
# 416 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "As an engineer, I feel blessed to have\n"
# 417 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "made something so great!$"
# 418 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 419 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_WowThatsAPokenav:
# 420 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Oh, wow!\n"
# 421 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "That's a POKéNAV!\p"
# 422 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "It came about as a result of our\n"
# 423 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "PRESIDENT's desire to learn about\l"
# 424 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "the feelings of POKéMON.\p"
# 425 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Would you like me to describe its\n"
# 426 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "features in detail?\p"
# 427 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "No, no. I think you'll find out just by\n"
# 428 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "trying the POKéNAV out.$"
# 429 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 430 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_DeviceToVisualizePokemonDreams:
# 431 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "I'm trying to develop a device that\n"
# 432 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "visually reproduces the dreams of\l"
# 433 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "POKéMON…\p"
# 434 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "But it's not going well.$"
# 435 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 436 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_DevelopDeviceToResurrectFossils:
# 437 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "I've been trying to develop a device\n"
# 438 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "that resurrects POKéMON from fossils…\p"
# 439 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "And, it's working!$"
# 440 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 441 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_WantToBringFossilBackToLife:
# 442 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Wait! That thing you have there…\n"
# 443 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Is that a POKéMON fossil?\p"
# 444 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Would you like to bring that POKéMON\n"
# 445 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "back to life?\p"
# 446 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "I can with my newly developed\n"
# 447 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "FOSSIL REGENERATOR.$"
# 448 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 449 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_OhIsThatSo:
# 450 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Oh, is that so?\p"
# 451 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "DEVON's technological expertise\n"
# 452 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "is outstanding, I tell you.$"
# 453 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 454 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_TwoFossilsPickOne:
# 455 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Oh, now that's a surprise!\n"
# 456 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "You have not one, but two, fossils?\p"
# 457 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Unfortunately, my machine can only\n"
# 458 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "regenerate one POKéMON at a time.\p"
# 459 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Would you like to pick one of your\n"
# 460 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "fossils for regeneration?$"
# 461 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 462 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_HandedFossilToResearcher:
# 463 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Excellent!\n"
# 464 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Let's do this right away.\p"
# 465 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "{PLAYER} handed the {STR_VAR_1} to\n"
# 466 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "the DEVON RESEARCHER.$"
# 467 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 468 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_FossilRegeneratorTakesTime:
# 469 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "The FOSSIL REGENERATOR, which I made,\n"
# 470 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "is incredible.\p"
# 471 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "But it has one drawback--it takes\n"
# 472 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "a long time to work.\p"
# 473 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "So, uh… How about you go for a stroll\n"
# 474 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "and look around for a while?$"
# 475 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 476 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_FossilizedMonBroughtBackToLife:
# 477 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Thanks for waiting!\p"
# 478 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Your fossilized POKéMON has been\n"
# 479 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "brought back to life!\p"
# 480 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "The fossil was an ancient POKéMON.\n"
# 481 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "{STR_VAR_2}, it was!$"
# 482 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 483 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_ReceivedMonFromResearcher:
# 484 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "{PLAYER} received {STR_VAR_2} from\n"
# 485 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "the DEVON RESEARCHER.$"
# 486 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 487 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
@ Unused
# 488 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_TooManyPokemon:
# 489 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Uh-oh, you've got too many POKéMON.\n"
# 490 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "You have no room for this one.$"
# 491 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 492 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_DevelopNewPokenavFeature:
# 493 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "I'm trying to develop a new feature\n"
# 494 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "for the POKéNAV…\p"
# 495 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "But it's not going well.$"
# 496 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 497 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_WhatToWorkOnNext:
# 498 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Well, now what shall I work on\n"
# 499 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "developing next?\p"
# 500 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Our company allows us to make our\n"
# 501 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "inspirations into reality.\p"
# 502 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "One couldn't ask for a better\n"
# 503 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "environment as an engineer.$"

RustboroCity_DevonCorp_2F_EventScript_FossilScientist_Text_0:
# 7 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "I've been trying to develop a device\n"
	.string "that resurrects Pokémon from fossils…\p"
	.string "And, it's working!$"

PoryScript_FossilScientist_ReviveFossil_Text_0:
# 44 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Do you happen to have any? I can bring\n"
	.string "them back to life with my regenerator!$"

PoryScript_FossilScientist_ReviveFossil_Text_1:
# 46 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Do you have another fossil for me?$"

PoryScript_FossilScientist_ReviveFossil_Text_2:
# 64 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Praise Helix! Let's do it right now.\p"
	.string "{PLAYER} handed the {STR_VAR_1}\n"
	.string "to the Devon researcher.$"

PoryScript_FossilScientist_ReviveFossil_Text_3:
# 69 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Excellent! Let's do it right now.\p"
	.string "{PLAYER} handed the {STR_VAR_1}\n"
	.string "to the Devon researcher.$"

PoryScript_FossilScientist_ReviveFossil_Text_4:
# 74 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Excellent, let's do it!\p"
	.string "{PLAYER} handed the {STR_VAR_1}\n"
	.string "to the Devon researcher.$"

PoryScript_FossilScientist_ReviveFossil_Text_5:
# 79 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Excellent! Let's do it right away.\p"
	.string "{PLAYER} handed the {STR_VAR_1}\n"
	.string "to the Devon researcher.$"

PoryScript_FossilScientist_ReviveFossil_Text_6:
# 87 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Oh, is that so?\p"
	.string "Our technological expertise here at\n"
	.string "Devon is outstanding, I tell you.$"

PoryScript_FossilScientist_ReviveFossil_Text_7:
# 91 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "… … … … … … … …\n"
	.string "… … … … … … … …\p"
	.string "… … … … … … … …\n"
	.string "… … … … … … … …\p"
	.string "Thanks for waiting! Your fossil came\n"
	.string "back to life!$"

PoryScript_FossilScientist_ReviveFossil_Text_8:
# 117 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Come back with more fossils!$"
