SlateportCity_PokemonFanClub_EventScript_Pikachu::
# 2 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	lock
# 3 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	faceplayer
# 4 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	waitse
# 5 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	playmoncry SPECIES_PIKACHU, CRY_MODE_NORMAL
# 6 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_EventScript_Pikachu_Text_0
# 7 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	waitmoncry
# 8 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
	end


# 12 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 13 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_MapScripts::
# 14 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.byte 0
# 15 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 16 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_Chairman::
# 17 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	lock
# 18 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	faceplayer
# 19 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto_if_unset FLAG_ENTERED_CONTEST, SlateportCity_PokemonFanClub_EventScript_ChairmanNotEnteredContest
# 20 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call_if_unset FLAG_MET_SLATEPORT_FANCLUB_CHAIRMAN, SlateportCity_PokemonFanClub_EventScript_MeetChairman
# 21 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	switch VAR_SLATEPORT_FAN_CLUB_STATE
# 22 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	case 0, SlateportCity_PokemonFanClub_EventScript_ChairmanFirstAssessment
# 23 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	case 1, SlateportCity_PokemonFanClub_EventScript_ChairmanTryAssessPokemon
# 24 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	case 2, SlateportCity_PokemonFanClub_EventScript_NoMoreScarves
# 25 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 26 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 27 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 28 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_ChairmanFirstAssessment::
# 29 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setvar VAR_SLATEPORT_FAN_CLUB_STATE, 1
# 30 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_AllowMeToExamineYourPokemon, MSGBOX_DEFAULT
# 31 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon
# 32 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 33 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 34 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_ChairmanTryAssessPokemon::
# 35 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setvar VAR_TEMP_2, 0
# 36 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call_if_set FLAG_RECEIVED_YELLOW_SCARF, SlateportCity_PokemonFanClub_EventScript_CountReceivedScarf
# 37 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call_if_set FLAG_RECEIVED_GREEN_SCARF, SlateportCity_PokemonFanClub_EventScript_CountReceivedScarf
# 38 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call_if_set FLAG_RECEIVED_PINK_SCARF, SlateportCity_PokemonFanClub_EventScript_CountReceivedScarf
# 39 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call_if_set FLAG_RECEIVED_BLUE_SCARF, SlateportCity_PokemonFanClub_EventScript_CountReceivedScarf
# 40 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call_if_set FLAG_RECEIVED_RED_SCARF, SlateportCity_PokemonFanClub_EventScript_CountReceivedScarf
# 41 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call_if_eq VAR_TEMP_2, CONTEST_CATEGORIES_COUNT, SlateportCity_PokemonFanClub_EventScript_ReceivedAllScarves
# 42 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto_if_eq VAR_SLATEPORT_FAN_CLUB_STATE, 2, SlateportCity_PokemonFanClub_EventScript_NoMoreScarves
# 43 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_HowIsYourPokemonGrowing, MSGBOX_DEFAULT
# 44 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon
# 45 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 46 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 47 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_NoMoreScarves::
# 48 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_NothingElseToGiveYou, MSGBOX_DEFAULT
# 49 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 50 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 51 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 52 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon::
# 53 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_HmHmISee, MSGBOX_DEFAULT
# 54 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setvar VAR_TEMP_1, 0
# 55 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call_if_unset FLAG_RECEIVED_YELLOW_SCARF, SlateportCity_PokemonFanClub_EventScript_CheckMonTough
# 56 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call_if_unset FLAG_RECEIVED_GREEN_SCARF, SlateportCity_PokemonFanClub_EventScript_CheckMonSmart
# 57 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call_if_unset FLAG_RECEIVED_PINK_SCARF, SlateportCity_PokemonFanClub_EventScript_CheckMonCute
# 58 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call_if_unset FLAG_RECEIVED_BLUE_SCARF, SlateportCity_PokemonFanClub_EventScript_CheckMonBeauty
# 59 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call_if_unset FLAG_RECEIVED_RED_SCARF, SlateportCity_PokemonFanClub_EventScript_CheckMonCool
# 60 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 61 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	switch VAR_TEMP_1
# 62 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	case 0, SlateportCity_PokemonFanClub_EventScript_NoHighConditions
# 63 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	case 1, SlateportCity_PokemonFanClub_EventScript_GiveRedScarf
# 64 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	case 2, SlateportCity_PokemonFanClub_EventScript_GiveBlueScarf
# 65 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	case 3, SlateportCity_PokemonFanClub_EventScript_GivePinkScarf
# 66 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	case 4, SlateportCity_PokemonFanClub_EventScript_GiveGreenScarf
# 67 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	case 5, SlateportCity_PokemonFanClub_EventScript_GiveYellowScarf
# 68 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 69 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 70 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 71 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_ReceivedAllScarves::
# 72 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setvar VAR_SLATEPORT_FAN_CLUB_STATE, 2
# 73 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	return
# 74 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 75 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_CountReceivedScarf::
# 76 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	addvar VAR_TEMP_2, 1
# 77 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	return
# 78 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 79 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_NoHighConditions::
# 80 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_GiveMonMorePokeblocks, MSGBOX_DEFAULT
# 81 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 82 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 83 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 84 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_GiveRedScarf::
# 85 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	checkitemspace ITEM_RED_SCARF
# 86 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_PokemonFanClub_EventScript_NoRoomForScarf
# 87 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_MonMostImpressiveGiveItThis, MSGBOX_DEFAULT
# 88 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setflag FLAG_RECEIVED_RED_SCARF
# 89 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	giveitem ITEM_RED_SCARF
# 90 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_ExplainRedScarf, MSGBOX_DEFAULT
# 91 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 92 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 93 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 94 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_GiveBlueScarf::
# 95 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	checkitemspace ITEM_BLUE_SCARF
# 96 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_PokemonFanClub_EventScript_NoRoomForScarf
# 97 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_MonMostImpressiveGiveItThis, MSGBOX_DEFAULT
# 98 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setflag FLAG_RECEIVED_BLUE_SCARF
# 99 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	giveitem ITEM_BLUE_SCARF
# 100 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_ExplainBlueScarf, MSGBOX_DEFAULT
# 101 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 102 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 103 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 104 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_GivePinkScarf::
# 105 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	checkitemspace ITEM_PINK_SCARF
# 106 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_PokemonFanClub_EventScript_NoRoomForScarf
# 107 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_MonMostImpressiveGiveItThis, MSGBOX_DEFAULT
# 108 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setflag FLAG_RECEIVED_PINK_SCARF
# 109 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	giveitem ITEM_PINK_SCARF
# 110 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_ExplainPinkScarf, MSGBOX_DEFAULT
# 111 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 112 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 113 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 114 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_GiveGreenScarf::
# 115 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	checkitemspace ITEM_GREEN_SCARF
# 116 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_PokemonFanClub_EventScript_NoRoomForScarf
# 117 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_MonMostImpressiveGiveItThis, MSGBOX_DEFAULT
# 118 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setflag FLAG_RECEIVED_GREEN_SCARF
# 119 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	giveitem ITEM_GREEN_SCARF
# 120 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_ExplainGreenScarf, MSGBOX_DEFAULT
# 121 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 122 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 123 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 124 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_GiveYellowScarf::
# 125 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	checkitemspace ITEM_YELLOW_SCARF
# 126 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_PokemonFanClub_EventScript_NoRoomForScarf
# 127 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_MonMostImpressiveGiveItThis, MSGBOX_DEFAULT
# 128 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setflag FLAG_RECEIVED_YELLOW_SCARF
# 129 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	giveitem ITEM_YELLOW_SCARF
# 130 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_ExplainYellowScarf, MSGBOX_DEFAULT
# 131 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 132 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 133 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 134 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_NoRoomForScarf::
# 135 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_NoSpaceForReward, MSGBOX_DEFAULT
# 136 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 137 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 138 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 139 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_CheckMonCool::
# 140 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	specialvar VAR_RESULT, CheckLeadMonCool
# 141 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, SlateportCity_PokemonFanClub_EventScript_SetMonCool
# 142 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	return
# 143 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 144 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_SetMonCool::
# 145 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setvar VAR_TEMP_1, 1
# 146 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	return
# 147 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 148 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_CheckMonBeauty::
# 149 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	specialvar VAR_RESULT, CheckLeadMonBeauty
# 150 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, SlateportCity_PokemonFanClub_EventScript_SetMonBeauty
# 151 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	return
# 152 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 153 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_SetMonBeauty::
# 154 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setvar VAR_TEMP_1, 2
# 155 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	return
# 156 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 157 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_CheckMonCute::
# 158 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	specialvar VAR_RESULT, CheckLeadMonCute
# 159 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, SlateportCity_PokemonFanClub_EventScript_SetMonCute
# 160 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	return
# 161 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 162 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_SetMonCute::
# 163 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setvar VAR_TEMP_1, 3
# 164 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	return
# 165 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 166 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_CheckMonSmart::
# 167 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	specialvar VAR_RESULT, CheckLeadMonSmart
# 168 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, SlateportCity_PokemonFanClub_EventScript_SetMonSmart
# 169 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	return
# 170 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 171 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_SetMonSmart::
# 172 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setvar VAR_TEMP_1, 4
# 173 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	return
# 174 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 175 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_CheckMonTough::
# 176 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	specialvar VAR_RESULT, CheckLeadMonTough
# 177 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, SlateportCity_PokemonFanClub_EventScript_SetMonTough
# 178 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	return
# 179 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 180 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_SetMonTough::
# 181 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setvar VAR_TEMP_1, 5
# 182 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	return
# 183 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 184 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_ChairmanNotEnteredContest::
# 185 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto_if_set FLAG_MET_SLATEPORT_FANCLUB_CHAIRMAN, SlateportCity_PokemonFanClub_EventScript_ChairmanEnterContest
# 186 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_MeetChairman, MSGBOX_DEFAULT
# 187 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setflag FLAG_MET_SLATEPORT_FANCLUB_CHAIRMAN
# 188 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 189 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 190 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 191 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_ChairmanEnterContest::
# 192 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_LikeToSeeEnteredContestPokemon, MSGBOX_DEFAULT
# 193 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 194 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 195 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 196 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_MeetChairman::
# 197 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_MeetChairman, MSGBOX_DEFAULT
# 198 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setflag FLAG_MET_SLATEPORT_FANCLUB_CHAIRMAN
# 199 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	return
# 200 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 201 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_SootheBellWoman::
# 202 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	lock
# 203 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	faceplayer
# 204 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto_if_set FLAG_RECEIVED_SOOTHE_BELL, SlateportCity_PokemonFanClub_EventScript_ReceivedSootheBell
# 205 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_ShowMePokemonThatLoveYou, MSGBOX_DEFAULT
# 206 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	specialvar VAR_RESULT, GetLeadMonFriendshipScore
# 207 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto_if_ge VAR_RESULT, FRIENDSHIP_150_TO_199, SlateportCity_PokemonFanClub_EventScript_GiveSootheBell
# 208 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 209 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 210 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 211 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_GiveSootheBell::
# 212 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	playse SE_PIN
# 213 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_ExclamationMark
# 214 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	waitmovement 0
# 215 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_Delay48
# 216 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	waitmovement 0
# 217 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_PokemonAdoresYou, MSGBOX_DEFAULT
# 218 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	giveitem ITEM_SOOTHE_BELL
# 219 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 220 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setflag FLAG_RECEIVED_SOOTHE_BELL
# 221 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 222 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 223 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 224 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_ReceivedSootheBell::
# 225 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_TreatPokemonWithLove, MSGBOX_DEFAULT
# 226 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 227 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 228 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 229 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_Man::
# 230 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_PokemonDontLikeFainting, MSGBOX_NPC
# 231 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 232 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 233 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_Twin::
# 234 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_MonEnjoyedProtein, MSGBOX_NPC
# 235 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 236 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 237 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_Skitty::
# 238 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	lock
# 239 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	faceplayer
# 240 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	waitse
# 241 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
# 242 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_Skitty, MSGBOX_DEFAULT
# 243 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	waitmoncry
# 244 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 245 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 246 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 247 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_Zigzagoon::
# 248 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	lock
# 249 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	faceplayer
# 250 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	waitse
# 251 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
# 252 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_Zigzagoon, MSGBOX_DEFAULT
# 253 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	waitmoncry
# 254 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 255 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 256 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 257 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_Azumarill::
# 258 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	lock
# 259 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	faceplayer
# 260 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	waitse
# 261 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	playmoncry SPECIES_AZUMARILL, CRY_MODE_NORMAL
# 262 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_Azumarill, MSGBOX_DEFAULT
# 263 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	waitmoncry
# 264 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 265 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 266 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 267 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_MeetChairman:
# 268 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Er-hem! I am the CHAIRMAN of the\n"
# 269 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "POKéMON FAN CLUB!\p"
# 270 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Being the CHAIRMAN, I am naturally\n"
# 271 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "the most important!\p"
# 272 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "No one can best me when it comes\n"
# 273 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "to raising POKéMON. No one!\p"
# 274 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Well, let me tell you about\n"
# 275 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "POKéMON CONTESTS.\p"
# 276 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "They're events where one can show off\n"
# 277 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "POKéMON for the world to see!\p"
# 278 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "However, they're held in far-off towns,\n"
# 279 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "so I cannot participate often enough.\p"
# 280 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "That is why we gather here to show\n"
# 281 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "off our POKéMON, and have others\l"
# 282 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "show us theirs.$"
# 283 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 284 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_LikeToSeeEnteredContestPokemon:
# 285 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "The POKéMON of a TRAINER who has\n"
# 286 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "entered a POKéMON CONTEST…\l"
# 287 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "That, I would like to see.$"
# 288 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 289 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_AllowMeToExamineYourPokemon:
# 290 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Er-hem! I see you've participated in\n"
# 291 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "a POKéMON CONTEST!\p"
# 292 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Please! Allow me to examine how you\n"
# 293 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "have raised your POKéMON.\p"
# 294 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "It delights me no end to see POKéMON\n"
# 295 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "raised by other TRAINERS.\p"
# 296 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "The happy expressions of POKéMON\n"
# 297 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "raised with proper care…\p"
# 298 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "The kindly eyes of the TRAINER that\n"
# 299 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "nurtured and raised the POKéMON…\p"
# 300 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "The very thought fills my heart to\n"
# 301 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "overwhelming with joy.\p"
# 302 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Oh! I do beg your pardon!\n"
# 303 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Forgive me for prattling on so!\p"
# 304 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Please! Allow me to examine how much\n"
# 305 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "your POKéMON has grown!$"
# 306 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 307 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_HowIsYourPokemonGrowing:
# 308 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "How is your POKéMON growing?\n"
# 309 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Allow me to examine it.$"
# 310 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 311 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_HmHmISee:
# 312 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Hm, hm…\n"
# 313 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "I see…$"
# 314 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 315 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_GiveMonMorePokeblocks:
# 316 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Hmmm… It's not bad, but it's not\n"
# 317 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "good, either…\p"
# 318 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "You, the TRAINER, must put more\n"
# 319 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "effort into raising this POKéMON!\p"
# 320 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "For instance, may I suggest that\n"
# 321 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "you give it more {POKEBLOCK}S?$"
# 322 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 323 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_NoSpaceForReward:
# 324 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Oh, my…\p"
# 325 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Your POKéMON is growing quite well,\n"
# 326 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "so you deserve a reward.\p"
# 327 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Unfortunately, you have no space for\n"
# 328 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "this in your BAG.$"
# 329 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 330 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_MonMostImpressiveGiveItThis:
# 331 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Your {STR_VAR_1}, it is growing in\n"
# 332 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "a most impressive manner!\l"
# 333 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "It is one fine specimen!\p"
# 334 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "But! If you were to give it this,\n"
# 335 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "it would grow even better! Indeed!$"
# 336 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 337 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_ExplainRedScarf:
# 338 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Let a POKéMON hold that RED SCARF.\p"
# 339 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Everyone will recognize the coolness\n"
# 340 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "of that POKéMON!$"
# 341 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 342 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_ExplainBlueScarf:
# 343 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Let a POKéMON hold that BLUE SCARF.\p"
# 344 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Its beauty will be accentuated much\n"
# 345 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "more than now!$"
# 346 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 347 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_ExplainPinkScarf:
# 348 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Let a POKéMON hold that PINK SCARF.\p"
# 349 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "It will draw out the cuteness of\n"
# 350 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "the POKéMON some more!$"
# 351 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 352 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_ExplainGreenScarf:
# 353 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Let a POKéMON hold that GREEN SCARF.\p"
# 354 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "That will enhance the\n"
# 355 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "smartness of POKéMON!$"
# 356 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 357 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_ExplainYellowScarf:
# 358 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Let a POKéMON hold that YELLOW SCARF.\p"
# 359 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "It will bolster your POKéMON's\n"
# 360 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "toughness so much more!$"
# 361 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 362 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_NothingElseToGiveYou:
# 363 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "I'm sorry, but I've nothing else to\n"
# 364 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "give you! None at all!\p"
# 365 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "After all, you're blessed with the gift\n"
# 366 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "of raising POKéMON without resorting\l"
# 367 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "to any items!$"
# 368 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 369 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_ShowMePokemonThatLoveYou:
# 370 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "I love seeing POKéMON that love\n"
# 371 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "their TRAINERS.\p"
# 372 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "POKéMON are very sensitive to\n"
# 373 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "the feelings of their TRAINERS.\p"
# 374 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "If you treat your POKéMON with love\n"
# 375 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "and care, they'll love you back.\p"
# 376 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "When your POKéMON grow to love you,\n"
# 377 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "please come show me.$"
# 378 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 379 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_PokemonAdoresYou:
# 380 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Your POKéMON really adores you.\p"
# 381 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "For you, a most compassionate\n"
# 382 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "TRAINER, a gift from the FAN CLUB!$"
# 383 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 384 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_TreatPokemonWithLove:
# 385 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "POKéMON are very sensitive to\n"
# 386 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "the feelings of their TRAINERS.\p"
# 387 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "If you treat your POKéMON with love\n"
# 388 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "and care, they'll love you back.$"
# 389 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 390 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_PokemonDontLikeFainting:
# 391 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "If you keep letting a POKéMON faint\n"
# 392 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "in battle, it'll come to resent it.\p"
# 393 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Soon, it will become less trusting\n"
# 394 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "of the TRAINER.\p"
# 395 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "In other words, it certainly won't\n"
# 396 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "like you very much.$"
# 397 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 398 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_MonEnjoyedProtein:
# 399 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Do POKéMON enjoy having items used\n"
# 400 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "on them?\p"
# 401 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Mine acted really happy when I gave\n"
# 402 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "it some PROTEIN.$"
# 403 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 404 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_Skitty:
# 405 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "SKITTY: Fffnyaaaah…$"
# 406 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 407 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_Zigzagoon:
# 408 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "ZIGZAGOON: Kyuuu…$"
# 409 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 410 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_Azumarill:
# 411 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "AZUMARILL: Marimari?$"

SlateportCity_PokemonFanClub_EventScript_Pikachu_Text_0:
# 6 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Pikachu: Pikaaaa!$"
