Route123_BerryMastersHouse_EventScript_BerryMaster::
# 2 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	lock
# 3 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	faceplayer
# 4 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	dotimebasedevents
# 5 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto_if_unset FLAG_DAILY_BERRY_MASTER_RECEIVED_BERRY, Route123_BerryMastersHouse_EventScript_BerryMaster_2
# 13 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	msgbox Route123_BerryMastersHouse_EventScript_BerryMaster_Text_3
Route123_BerryMastersHouse_EventScript_BerryMaster_1:
# 15 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	release
	end

Route123_BerryMastersHouse_EventScript_BerryMaster_2:
# 6 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	msgbox Route123_BerryMastersHouse_EventScript_BerryMaster_Text_0
# 7 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	call Common_PoryScript_GiveBerry_Resistance
# 8 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	setflag FLAG_DAILY_BERRY_MASTER_RECEIVED_BERRY
# 9 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	msgbox Route123_BerryMastersHouse_EventScript_BerryMaster_Text_1
# 10 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	call Common_PoryScript_GiveBerry_Resistance
# 11 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	msgbox Route123_BerryMastersHouse_EventScript_BerryMaster_Text_2
	goto Route123_BerryMastersHouse_EventScript_BerryMaster_1


Route123_BerryMastersHouse_EventScript_BerryMastersWife::
# 20 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	lock
# 21 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	faceplayer
# 22 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	dotimebasedevents
# 23 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto_if_unset FLAG_DAILY_BERRY_MASTERS_WIFE, Route123_BerryMastersHouse_EventScript_BerryMastersWife_2
Route123_BerryMastersHouse_EventScript_BerryMastersWife_1:
# 28 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	msgbox Route123_BerryMastersHouse_EventScript_BerryMastersWife_Text_1
# 29 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	release
	end

Route123_BerryMastersHouse_EventScript_BerryMastersWife_2:
# 24 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	msgbox Route123_BerryMastersHouse_EventScript_BerryMastersWife_Text_0
# 25 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	call Common_PoryScript_GiveBerry_RaiseStats
# 26 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	setflag FLAG_DAILY_BERRY_MASTERS_WIFE
	goto Route123_BerryMastersHouse_EventScript_BerryMastersWife_1


# 33 "data/maps/Route123_BerryMastersHouse/scripts.pory"

# 34 "data/maps/Route123_BerryMastersHouse/scripts.pory"
Route123_BerryMastersHouse_MapScripts::
# 35 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route123_BerryMastersHouse_OnTransition
# 36 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	.byte 0
# 37 "data/maps/Route123_BerryMastersHouse/scripts.pory"

# 38 "data/maps/Route123_BerryMastersHouse/scripts.pory"
Route123_BerryMastersHouse_OnTransition:
# 39 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	setflag FLAG_LANDMARK_BERRY_MASTERS_HOUSE
# 40 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	end
# 41 "data/maps/Route123_BerryMastersHouse/scripts.pory"

# 42 "data/maps/Route123_BerryMastersHouse/scripts.pory"
@ Route123_BerryMastersHouse_EventScript_BerryMaster::
# 43 "data/maps/Route123_BerryMastersHouse/scripts.pory"
@ 	lock
# 44 "data/maps/Route123_BerryMastersHouse/scripts.pory"
@ 	faceplayer
# 45 "data/maps/Route123_BerryMastersHouse/scripts.pory"
@ 	dotimebasedevents
# 46 "data/maps/Route123_BerryMastersHouse/scripts.pory"
@ 	goto_if_set FLAG_DAILY_BERRY_MASTER_RECEIVED_BERRY, Route123_BerryMastersHouse_EventScript_ReceivedBerryToday
# 47 "data/maps/Route123_BerryMastersHouse/scripts.pory"
@ 	msgbox Route123_BerryMastersHouse_Text_YoureDeservingOfBerry, MSGBOX_DEFAULT
# 48 "data/maps/Route123_BerryMastersHouse/scripts.pory"
@ 	random NUM_BERRY_MASTER_BERRIES
# 49 "data/maps/Route123_BerryMastersHouse/scripts.pory"
@ 	addvar VAR_RESULT, NUM_BERRY_MASTER_BERRIES_SKIPPED
# 50 "data/maps/Route123_BerryMastersHouse/scripts.pory"
@ 	addvar VAR_RESULT, FIRST_BERRY_INDEX
# 51 "data/maps/Route123_BerryMastersHouse/scripts.pory"
@ 	giveitem VAR_RESULT
# 52 "data/maps/Route123_BerryMastersHouse/scripts.pory"
@ 	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 53 "data/maps/Route123_BerryMastersHouse/scripts.pory"
@ 	setflag FLAG_DAILY_BERRY_MASTER_RECEIVED_BERRY
# 54 "data/maps/Route123_BerryMastersHouse/scripts.pory"
@ 	msgbox Route123_BerryMastersHouse_Text_WhyBeStingyTakeAnother, MSGBOX_DEFAULT
# 55 "data/maps/Route123_BerryMastersHouse/scripts.pory"
@ 	random NUM_BERRY_MASTER_BERRIES
# 56 "data/maps/Route123_BerryMastersHouse/scripts.pory"
@ 	addvar VAR_RESULT, NUM_BERRY_MASTER_BERRIES_SKIPPED
# 57 "data/maps/Route123_BerryMastersHouse/scripts.pory"
@ 	addvar VAR_RESULT, FIRST_BERRY_INDEX
# 58 "data/maps/Route123_BerryMastersHouse/scripts.pory"
@ 	giveitem VAR_RESULT
# 59 "data/maps/Route123_BerryMastersHouse/scripts.pory"
@ 	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 60 "data/maps/Route123_BerryMastersHouse/scripts.pory"
@ 	msgbox Route123_BerryMastersHouse_Text_VisitPrettyPetalFlowerShop, MSGBOX_DEFAULT
# 61 "data/maps/Route123_BerryMastersHouse/scripts.pory"
@ 	release
# 62 "data/maps/Route123_BerryMastersHouse/scripts.pory"
@ 	end
# 63 "data/maps/Route123_BerryMastersHouse/scripts.pory"

# 64 "data/maps/Route123_BerryMastersHouse/scripts.pory"
Route123_BerryMastersHouse_EventScript_ReceivedBerryToday::
# 65 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	msgbox Route123_BerryMastersHouse_Text_DoneForToday, MSGBOX_DEFAULT
# 66 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	release
# 67 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	end
# 68 "data/maps/Route123_BerryMastersHouse/scripts.pory"

# 69 "data/maps/Route123_BerryMastersHouse/scripts.pory"
@ Route123_BerryMastersHouse_EventScript_BerryMastersWife::
# 70 "data/maps/Route123_BerryMastersHouse/scripts.pory"
@ 	lock
# 71 "data/maps/Route123_BerryMastersHouse/scripts.pory"
@ 	faceplayer
# 72 "data/maps/Route123_BerryMastersHouse/scripts.pory"
@ 	dotimebasedevents
# 73 "data/maps/Route123_BerryMastersHouse/scripts.pory"
@ 	goto_if_set FLAG_DAILY_BERRY_MASTERS_WIFE, Route123_BerryMastersHouse_EventScript_ReceivedWifeBerryToday
# 74 "data/maps/Route123_BerryMastersHouse/scripts.pory"
@ 	msgbox Route123_BerryMastersHouse_Text_HeardAGoodSayingLately, MSGBOX_DEFAULT
# 75 "data/maps/Route123_BerryMastersHouse/scripts.pory"
@ 	setvar VAR_0x8004, EASY_CHAT_TYPE_GOOD_SAYING
# 76 "data/maps/Route123_BerryMastersHouse/scripts.pory"
@ 	call Common_ShowEasyChatScreen
# 77 "data/maps/Route123_BerryMastersHouse/scripts.pory"
@ 	lock
# 78 "data/maps/Route123_BerryMastersHouse/scripts.pory"
@ 	faceplayer
# 79 "data/maps/Route123_BerryMastersHouse/scripts.pory"
@ 	goto_if_eq VAR_RESULT, TRUE, Route123_BerryMastersHouse_EventScript_GavePhrase
# 80 "data/maps/Route123_BerryMastersHouse/scripts.pory"
@ 	goto_if_eq VAR_RESULT, FALSE, Route123_BerryMastersHouse_EventScript_CancelPhrase
# 81 "data/maps/Route123_BerryMastersHouse/scripts.pory"
@ 	end
# 82 "data/maps/Route123_BerryMastersHouse/scripts.pory"

# 83 "data/maps/Route123_BerryMastersHouse/scripts.pory"
Route123_BerryMastersHouse_EventScript_CancelPhrase::
# 84 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	msgbox Route123_BerryMastersHouse_Text_Ah, MSGBOX_DEFAULT
# 85 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	msgbox Route123_BerryMastersHouse_Text_JoyNeverGoesOutOfMyLife, MSGBOX_DEFAULT
# 86 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	release
# 87 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	end
# 88 "data/maps/Route123_BerryMastersHouse/scripts.pory"

# 89 "data/maps/Route123_BerryMastersHouse/scripts.pory"
Route123_BerryMastersHouse_EventScript_GavePhrase::
# 90 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto_if_eq VAR_0x8004, NOT_SPECIAL_PHRASE, Route123_BerryMastersHouse_EventScript_GiveNormalBerry
# 91 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto_if_eq VAR_0x8004, PHRASE_GREAT_BATTLE, Route123_BerryMastersHouse_EventScript_GiveSpelonBerry
# 92 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto_if_eq VAR_0x8004, PHRASE_CHALLENGE_CONTEST, Route123_BerryMastersHouse_EventScript_GivePamtreBerry
# 93 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto_if_eq VAR_0x8004, PHRASE_OVERWHELMING_LATIAS, Route123_BerryMastersHouse_EventScript_GiveWatmelBerry
# 94 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto_if_eq VAR_0x8004, PHRASE_COOL_LATIOS, Route123_BerryMastersHouse_EventScript_GiveDurinBerry
# 95 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto_if_eq VAR_0x8004, PHRASE_SUPER_HUSTLE, Route123_BerryMastersHouse_EventScript_GiveBelueBerry
# 96 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	end
# 97 "data/maps/Route123_BerryMastersHouse/scripts.pory"

# 98 "data/maps/Route123_BerryMastersHouse/scripts.pory"
Route123_BerryMastersHouse_EventScript_GiveNormalBerry::
# 99 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	msgbox Route123_BerryMastersHouse_Text_GoodSayingTakeThis, MSGBOX_DEFAULT
# 100 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	random NUM_BERRY_MASTER_WIFE_BERRIES
# 101 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	addvar VAR_RESULT, FIRST_BERRY_INDEX
# 102 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	giveitem VAR_RESULT
# 103 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 104 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto Route123_BerryMastersHouse_EventScript_GaveBerry
# 105 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	release
# 106 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	end
# 107 "data/maps/Route123_BerryMastersHouse/scripts.pory"

# 108 "data/maps/Route123_BerryMastersHouse/scripts.pory"
Route123_BerryMastersHouse_EventScript_GiveSpelonBerry::
# 109 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_SPELON_BERRY, Route123_BerryMastersHouse_EventScript_GiveNormalBerry
# 110 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	msgbox Route123_BerryMastersHouse_Text_InspirationalTakeThis, MSGBOX_DEFAULT
# 111 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	giveitem ITEM_SPELON_BERRY
# 112 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 113 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	setflag FLAG_RECEIVED_SPELON_BERRY
# 114 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto Route123_BerryMastersHouse_EventScript_GaveBerry
# 115 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	end
# 116 "data/maps/Route123_BerryMastersHouse/scripts.pory"

# 117 "data/maps/Route123_BerryMastersHouse/scripts.pory"
Route123_BerryMastersHouse_EventScript_GivePamtreBerry::
# 118 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_PAMTRE_BERRY, Route123_BerryMastersHouse_EventScript_GiveNormalBerry
# 119 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	msgbox Route123_BerryMastersHouse_Text_InspirationalTakeThis, MSGBOX_DEFAULT
# 120 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	giveitem ITEM_PAMTRE_BERRY
# 121 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 122 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	setflag FLAG_RECEIVED_PAMTRE_BERRY
# 123 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto Route123_BerryMastersHouse_EventScript_GaveBerry
# 124 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	end
# 125 "data/maps/Route123_BerryMastersHouse/scripts.pory"

# 126 "data/maps/Route123_BerryMastersHouse/scripts.pory"
Route123_BerryMastersHouse_EventScript_GiveWatmelBerry::
# 127 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_WATMEL_BERRY, Route123_BerryMastersHouse_EventScript_GiveNormalBerry
# 128 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	msgbox Route123_BerryMastersHouse_Text_InspirationalTakeThis, MSGBOX_DEFAULT
# 129 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	giveitem ITEM_WATMEL_BERRY
# 130 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 131 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	setflag FLAG_RECEIVED_WATMEL_BERRY
# 132 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto Route123_BerryMastersHouse_EventScript_GaveBerry
# 133 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	end
# 134 "data/maps/Route123_BerryMastersHouse/scripts.pory"

# 135 "data/maps/Route123_BerryMastersHouse/scripts.pory"
Route123_BerryMastersHouse_EventScript_GiveDurinBerry::
# 136 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_DURIN_BERRY, Route123_BerryMastersHouse_EventScript_GiveNormalBerry
# 137 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	msgbox Route123_BerryMastersHouse_Text_InspirationalTakeThis, MSGBOX_DEFAULT
# 138 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	giveitem ITEM_DURIN_BERRY
# 139 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 140 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	setflag FLAG_RECEIVED_DURIN_BERRY
# 141 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto Route123_BerryMastersHouse_EventScript_GaveBerry
# 142 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	end
# 143 "data/maps/Route123_BerryMastersHouse/scripts.pory"

# 144 "data/maps/Route123_BerryMastersHouse/scripts.pory"
Route123_BerryMastersHouse_EventScript_GiveBelueBerry::
# 145 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_BELUE_BERRY, Route123_BerryMastersHouse_EventScript_GiveNormalBerry
# 146 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	msgbox Route123_BerryMastersHouse_Text_InspirationalTakeThis, MSGBOX_DEFAULT
# 147 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	giveitem ITEM_BELUE_BERRY
# 148 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 149 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	setflag FLAG_RECEIVED_BELUE_BERRY
# 150 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto Route123_BerryMastersHouse_EventScript_GaveBerry
# 151 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	end
# 152 "data/maps/Route123_BerryMastersHouse/scripts.pory"

# 153 "data/maps/Route123_BerryMastersHouse/scripts.pory"
Route123_BerryMastersHouse_EventScript_ReceivedWifeBerryToday::
# 154 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	msgbox Route123_BerryMastersHouse_Text_JoyNeverGoesOutOfMyLife, MSGBOX_DEFAULT
# 155 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	release
# 156 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	end
# 157 "data/maps/Route123_BerryMastersHouse/scripts.pory"

# 158 "data/maps/Route123_BerryMastersHouse/scripts.pory"
Route123_BerryMastersHouse_EventScript_GaveBerry::
# 159 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	setflag FLAG_DAILY_BERRY_MASTERS_WIFE
# 160 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	msgbox Route123_BerryMastersHouse_Text_JoyNeverGoesOutOfMyLife, MSGBOX_DEFAULT
# 161 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	release
# 162 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	end

Route123_BerryMastersHouse_EventScript_BerryMaster_Text_0:
# 6 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	.string "You may call me the Berry Master.\p"
	.string "I dream of filling the world with\n"
	.string "beautiful flowers, so I raise Berries\l"
	.string "and hand them out to everyone.\p"
	.string "Take these!$"

Route123_BerryMastersHouse_EventScript_BerryMaster_Text_1:
# 9 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	.string "Why be stingy?\n"
	.string "Take some more!$"

Route123_BerryMastersHouse_EventScript_BerryMaster_Text_2:
# 11 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	.string "Be sure to visit the Pretty Petal flower\n"
	.string "shop near Rustboro.\p"
	.string "Let flowers fill the world!$"

Route123_BerryMastersHouse_EventScript_BerryMaster_Text_3:
# 13 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	.string "I'm done for today. Come again another\n"
	.string "day.\p"
	.string "Let flowers fill the world!$"

Route123_BerryMastersHouse_EventScript_BerryMastersWife_Text_0:
# 24 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	.string "The way my husband grows Berries, oh,\n"
	.string "he's the best in the world.\p"
	.string "He makes me proud, that he does.\p"
	.string "Ah…\n"
	.string "I want you to have these.$"

Route123_BerryMastersHouse_EventScript_BerryMastersWife_Text_1:
# 28 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	.string "Our four grandchildren are becoming\n"
	.string "more accomplished than my husband.\p"
	.string "Joy never goes out of my life!$"
