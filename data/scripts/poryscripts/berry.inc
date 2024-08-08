Route104_PoryScript_ExpertF::
# 3 "data/scripts/poryscripts/berry.pory"
	lock
# 4 "data/scripts/poryscripts/berry.pory"
	faceplayer
# 5 "data/scripts/poryscripts/berry.pory"
	goto_if_unset FLAG_RECEIVED_BERRY_ROUTE_104, Route104_PoryScript_ExpertF_2
Route104_PoryScript_ExpertF_1:
# 10 "data/scripts/poryscripts/berry.pory"
	msgbox Route104_PoryScript_ExpertF_Text_1
# 11 "data/scripts/poryscripts/berry.pory"
	release
	end

Route104_PoryScript_ExpertF_2:
# 6 "data/scripts/poryscripts/berry.pory"
	msgbox Route104_PoryScript_ExpertF_Text_0
# 7 "data/scripts/poryscripts/berry.pory"
	call Common_PoryScript_GiveBerry_Retaliatory
# 8 "data/scripts/poryscripts/berry.pory"
	setflag FLAG_RECEIVED_BERRY_ROUTE_104
	goto Route104_PoryScript_ExpertF_1


Common_PoryScript_GiveBerry_Generic::
# 16 "data/scripts/poryscripts/berry.pory"
	random 10
# 17 "data/scripts/poryscripts/berry.pory"
	switch VAR_RESULT
# 18 "data/scripts/poryscripts/berry.pory"
	case 0, Common_PoryScript_GiveBerry_Generic_3
# 19 "data/scripts/poryscripts/berry.pory"
	case 1, Common_PoryScript_GiveBerry_Generic_4
# 20 "data/scripts/poryscripts/berry.pory"
	case 2, Common_PoryScript_GiveBerry_Generic_5
# 21 "data/scripts/poryscripts/berry.pory"
	case 3, Common_PoryScript_GiveBerry_Generic_6
# 22 "data/scripts/poryscripts/berry.pory"
	case 4, Common_PoryScript_GiveBerry_Generic_7
# 23 "data/scripts/poryscripts/berry.pory"
	case 5, Common_PoryScript_GiveBerry_Generic_8
# 24 "data/scripts/poryscripts/berry.pory"
	case 6, Common_PoryScript_GiveBerry_Generic_9
# 25 "data/scripts/poryscripts/berry.pory"
	case 7, Common_PoryScript_GiveBerry_Generic_10
# 26 "data/scripts/poryscripts/berry.pory"
	case 8, Common_PoryScript_GiveBerry_Generic_11
# 27 "data/scripts/poryscripts/berry.pory"
	case 9, Common_PoryScript_GiveBerry_Generic_12
Common_PoryScript_GiveBerry_Generic_1:
# 29 "data/scripts/poryscripts/berry.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	return

Common_PoryScript_GiveBerry_Generic_3:
# 18 "data/scripts/poryscripts/berry.pory"
	giveitem ITEM_LEPPA_BERRY, 3
	goto Common_PoryScript_GiveBerry_Generic_1

Common_PoryScript_GiveBerry_Generic_4:
# 19 "data/scripts/poryscripts/berry.pory"
	giveitem ITEM_LEPPA_BERRY, 3
	goto Common_PoryScript_GiveBerry_Generic_1

Common_PoryScript_GiveBerry_Generic_5:
# 20 "data/scripts/poryscripts/berry.pory"
	giveitem ITEM_LEPPA_BERRY, 3
	goto Common_PoryScript_GiveBerry_Generic_1

Common_PoryScript_GiveBerry_Generic_6:
# 21 "data/scripts/poryscripts/berry.pory"
	giveitem ITEM_LUM_BERRY, 3
	goto Common_PoryScript_GiveBerry_Generic_1

Common_PoryScript_GiveBerry_Generic_7:
# 22 "data/scripts/poryscripts/berry.pory"
	giveitem ITEM_CHILAN_BERRY, 3
	goto Common_PoryScript_GiveBerry_Generic_1

Common_PoryScript_GiveBerry_Generic_8:
# 23 "data/scripts/poryscripts/berry.pory"
	call Common_PoryScript_GiveBerry_Status
	goto Common_PoryScript_GiveBerry_Generic_1

Common_PoryScript_GiveBerry_Generic_9:
# 24 "data/scripts/poryscripts/berry.pory"
	call Common_PoryScript_GiveBerry_Status
	goto Common_PoryScript_GiveBerry_Generic_1

Common_PoryScript_GiveBerry_Generic_10:
# 25 "data/scripts/poryscripts/berry.pory"
	call Common_PoryScript_GiveBerry_HP
	goto Common_PoryScript_GiveBerry_Generic_1

Common_PoryScript_GiveBerry_Generic_11:
# 26 "data/scripts/poryscripts/berry.pory"
	call Common_PoryScript_GiveBerry_HP
	goto Common_PoryScript_GiveBerry_Generic_1

Common_PoryScript_GiveBerry_Generic_12:
# 27 "data/scripts/poryscripts/berry.pory"
	call Common_PoryScript_GiveBerry_Confuse
	goto Common_PoryScript_GiveBerry_Generic_1


Common_PoryScript_GiveBerry_Status::
# 33 "data/scripts/poryscripts/berry.pory"
	random 6
# 34 "data/scripts/poryscripts/berry.pory"
	switch VAR_RESULT
# 35 "data/scripts/poryscripts/berry.pory"
	case 0, Common_PoryScript_GiveBerry_Status_3
# 36 "data/scripts/poryscripts/berry.pory"
	case 1, Common_PoryScript_GiveBerry_Status_4
# 37 "data/scripts/poryscripts/berry.pory"
	case 2, Common_PoryScript_GiveBerry_Status_5
# 38 "data/scripts/poryscripts/berry.pory"
	case 3, Common_PoryScript_GiveBerry_Status_6
# 39 "data/scripts/poryscripts/berry.pory"
	case 4, Common_PoryScript_GiveBerry_Status_7
# 40 "data/scripts/poryscripts/berry.pory"
	case 5, Common_PoryScript_GiveBerry_Status_8
Common_PoryScript_GiveBerry_Status_1:
# 42 "data/scripts/poryscripts/berry.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	return

Common_PoryScript_GiveBerry_Status_3:
# 35 "data/scripts/poryscripts/berry.pory"
	giveitem ITEM_CHERI_BERRY, 3
	goto Common_PoryScript_GiveBerry_Status_1

Common_PoryScript_GiveBerry_Status_4:
# 36 "data/scripts/poryscripts/berry.pory"
	giveitem ITEM_CHESTO_BERRY, 3
	goto Common_PoryScript_GiveBerry_Status_1

Common_PoryScript_GiveBerry_Status_5:
# 37 "data/scripts/poryscripts/berry.pory"
	giveitem ITEM_PECHA_BERRY, 3
	goto Common_PoryScript_GiveBerry_Status_1

Common_PoryScript_GiveBerry_Status_6:
# 38 "data/scripts/poryscripts/berry.pory"
	giveitem ITEM_RAWST_BERRY, 3
	goto Common_PoryScript_GiveBerry_Status_1

Common_PoryScript_GiveBerry_Status_7:
# 39 "data/scripts/poryscripts/berry.pory"
	giveitem ITEM_ASPEAR_BERRY, 3
	goto Common_PoryScript_GiveBerry_Status_1

Common_PoryScript_GiveBerry_Status_8:
# 40 "data/scripts/poryscripts/berry.pory"
	giveitem ITEM_PERSIM_BERRY, 3
	goto Common_PoryScript_GiveBerry_Status_1


Common_PoryScript_GiveBerry_HP::
# 46 "data/scripts/poryscripts/berry.pory"
	random 4
# 47 "data/scripts/poryscripts/berry.pory"
	switch VAR_RESULT
# 48 "data/scripts/poryscripts/berry.pory"
	case 0, Common_PoryScript_GiveBerry_HP_3
# 49 "data/scripts/poryscripts/berry.pory"
	case 1, Common_PoryScript_GiveBerry_HP_4
# 50 "data/scripts/poryscripts/berry.pory"
	case 2, Common_PoryScript_GiveBerry_HP_5
# 51 "data/scripts/poryscripts/berry.pory"
	case 3, Common_PoryScript_GiveBerry_HP_6
Common_PoryScript_GiveBerry_HP_1:
# 53 "data/scripts/poryscripts/berry.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	return

Common_PoryScript_GiveBerry_HP_3:
# 48 "data/scripts/poryscripts/berry.pory"
	giveitem ITEM_ORAN_BERRY, 3
	goto Common_PoryScript_GiveBerry_HP_1

Common_PoryScript_GiveBerry_HP_4:
# 49 "data/scripts/poryscripts/berry.pory"
	giveitem ITEM_SITRUS_BERRY, 3
	goto Common_PoryScript_GiveBerry_HP_1

Common_PoryScript_GiveBerry_HP_5:
# 50 "data/scripts/poryscripts/berry.pory"
	giveitem ITEM_NANAB_BERRY, 3
	goto Common_PoryScript_GiveBerry_HP_1

Common_PoryScript_GiveBerry_HP_6:
# 51 "data/scripts/poryscripts/berry.pory"
	giveitem ITEM_PINAP_BERRY, 3
	goto Common_PoryScript_GiveBerry_HP_1


Common_PoryScript_GiveBerry_Confuse::
# 57 "data/scripts/poryscripts/berry.pory"
	random 5
# 58 "data/scripts/poryscripts/berry.pory"
	switch VAR_RESULT
# 59 "data/scripts/poryscripts/berry.pory"
	case 0, Common_PoryScript_GiveBerry_Confuse_3
# 60 "data/scripts/poryscripts/berry.pory"
	case 1, Common_PoryScript_GiveBerry_Confuse_4
# 61 "data/scripts/poryscripts/berry.pory"
	case 2, Common_PoryScript_GiveBerry_Confuse_5
# 62 "data/scripts/poryscripts/berry.pory"
	case 3, Common_PoryScript_GiveBerry_Confuse_6
# 63 "data/scripts/poryscripts/berry.pory"
	case 4, Common_PoryScript_GiveBerry_Confuse_7
Common_PoryScript_GiveBerry_Confuse_1:
# 65 "data/scripts/poryscripts/berry.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	return

Common_PoryScript_GiveBerry_Confuse_3:
# 59 "data/scripts/poryscripts/berry.pory"
	giveitem ITEM_FIGY_BERRY, 3
	goto Common_PoryScript_GiveBerry_Confuse_1

Common_PoryScript_GiveBerry_Confuse_4:
# 60 "data/scripts/poryscripts/berry.pory"
	giveitem ITEM_WIKI_BERRY, 3
	goto Common_PoryScript_GiveBerry_Confuse_1

Common_PoryScript_GiveBerry_Confuse_5:
# 61 "data/scripts/poryscripts/berry.pory"
	giveitem ITEM_MAGO_BERRY, 3
	goto Common_PoryScript_GiveBerry_Confuse_1

Common_PoryScript_GiveBerry_Confuse_6:
# 62 "data/scripts/poryscripts/berry.pory"
	giveitem ITEM_AGUAV_BERRY, 3
	goto Common_PoryScript_GiveBerry_Confuse_1

Common_PoryScript_GiveBerry_Confuse_7:
# 63 "data/scripts/poryscripts/berry.pory"
	giveitem ITEM_IAPAPA_BERRY, 3
	goto Common_PoryScript_GiveBerry_Confuse_1


Common_PoryScript_GiveBerry_Retaliatory::
# 69 "data/scripts/poryscripts/berry.pory"
	random 4
# 70 "data/scripts/poryscripts/berry.pory"
	switch VAR_RESULT
# 71 "data/scripts/poryscripts/berry.pory"
	case 0, Common_PoryScript_GiveBerry_Retaliatory_3
# 72 "data/scripts/poryscripts/berry.pory"
	case 1, Common_PoryScript_GiveBerry_Retaliatory_4
# 73 "data/scripts/poryscripts/berry.pory"
	case 2, Common_PoryScript_GiveBerry_Retaliatory_5
# 74 "data/scripts/poryscripts/berry.pory"
	case 3, Common_PoryScript_GiveBerry_Retaliatory_6
Common_PoryScript_GiveBerry_Retaliatory_1:
# 76 "data/scripts/poryscripts/berry.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	return

Common_PoryScript_GiveBerry_Retaliatory_3:
# 71 "data/scripts/poryscripts/berry.pory"
	giveitem ITEM_JABOCA_BERRY, 3
	goto Common_PoryScript_GiveBerry_Retaliatory_1

Common_PoryScript_GiveBerry_Retaliatory_4:
# 72 "data/scripts/poryscripts/berry.pory"
	giveitem ITEM_ROWAP_BERRY, 3
	goto Common_PoryScript_GiveBerry_Retaliatory_1

Common_PoryScript_GiveBerry_Retaliatory_5:
# 73 "data/scripts/poryscripts/berry.pory"
	giveitem ITEM_KEE_BERRY, 3
	goto Common_PoryScript_GiveBerry_Retaliatory_1

Common_PoryScript_GiveBerry_Retaliatory_6:
# 74 "data/scripts/poryscripts/berry.pory"
	giveitem ITEM_MARANGA_BERRY, 3
	goto Common_PoryScript_GiveBerry_Retaliatory_1


Common_PoryScript_GiveBerry_Resistance::
# 80 "data/scripts/poryscripts/berry.pory"
	random 17
# 81 "data/scripts/poryscripts/berry.pory"
	switch VAR_RESULT
# 82 "data/scripts/poryscripts/berry.pory"
	case 0, Common_PoryScript_GiveBerry_Resistance_3
# 83 "data/scripts/poryscripts/berry.pory"
	case 1, Common_PoryScript_GiveBerry_Resistance_4
# 84 "data/scripts/poryscripts/berry.pory"
	case 2, Common_PoryScript_GiveBerry_Resistance_5
# 85 "data/scripts/poryscripts/berry.pory"
	case 3, Common_PoryScript_GiveBerry_Resistance_6
# 86 "data/scripts/poryscripts/berry.pory"
	case 4, Common_PoryScript_GiveBerry_Resistance_7
# 87 "data/scripts/poryscripts/berry.pory"
	case 5, Common_PoryScript_GiveBerry_Resistance_8
# 88 "data/scripts/poryscripts/berry.pory"
	case 6, Common_PoryScript_GiveBerry_Resistance_9
# 89 "data/scripts/poryscripts/berry.pory"
	case 7, Common_PoryScript_GiveBerry_Resistance_10
# 90 "data/scripts/poryscripts/berry.pory"
	case 8, Common_PoryScript_GiveBerry_Resistance_11
# 91 "data/scripts/poryscripts/berry.pory"
	case 9, Common_PoryScript_GiveBerry_Resistance_12
# 92 "data/scripts/poryscripts/berry.pory"
	case 10, Common_PoryScript_GiveBerry_Resistance_13
# 93 "data/scripts/poryscripts/berry.pory"
	case 11, Common_PoryScript_GiveBerry_Resistance_14
# 94 "data/scripts/poryscripts/berry.pory"
	case 12, Common_PoryScript_GiveBerry_Resistance_15
# 95 "data/scripts/poryscripts/berry.pory"
	case 13, Common_PoryScript_GiveBerry_Resistance_16
# 96 "data/scripts/poryscripts/berry.pory"
	case 14, Common_PoryScript_GiveBerry_Resistance_17
# 97 "data/scripts/poryscripts/berry.pory"
	case 15, Common_PoryScript_GiveBerry_Resistance_18
# 98 "data/scripts/poryscripts/berry.pory"
	case 16, Common_PoryScript_GiveBerry_Resistance_19
Common_PoryScript_GiveBerry_Resistance_1:
# 100 "data/scripts/poryscripts/berry.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	return

Common_PoryScript_GiveBerry_Resistance_3:
# 82 "data/scripts/poryscripts/berry.pory"
	giveitem ITEM_OCCA_BERRY, 3
	goto Common_PoryScript_GiveBerry_Resistance_1

Common_PoryScript_GiveBerry_Resistance_4:
# 83 "data/scripts/poryscripts/berry.pory"
	giveitem ITEM_PASSHO_BERRY, 3
	goto Common_PoryScript_GiveBerry_Resistance_1

Common_PoryScript_GiveBerry_Resistance_5:
# 84 "data/scripts/poryscripts/berry.pory"
	giveitem ITEM_WACAN_BERRY, 3
	goto Common_PoryScript_GiveBerry_Resistance_1

Common_PoryScript_GiveBerry_Resistance_6:
# 85 "data/scripts/poryscripts/berry.pory"
	giveitem ITEM_RINDO_BERRY, 3
	goto Common_PoryScript_GiveBerry_Resistance_1

Common_PoryScript_GiveBerry_Resistance_7:
# 86 "data/scripts/poryscripts/berry.pory"
	giveitem ITEM_YACHE_BERRY, 3
	goto Common_PoryScript_GiveBerry_Resistance_1

Common_PoryScript_GiveBerry_Resistance_8:
# 87 "data/scripts/poryscripts/berry.pory"
	giveitem ITEM_CHOPLE_BERRY, 3
	goto Common_PoryScript_GiveBerry_Resistance_1

Common_PoryScript_GiveBerry_Resistance_9:
# 88 "data/scripts/poryscripts/berry.pory"
	giveitem ITEM_KEBIA_BERRY, 3
	goto Common_PoryScript_GiveBerry_Resistance_1

Common_PoryScript_GiveBerry_Resistance_10:
# 89 "data/scripts/poryscripts/berry.pory"
	giveitem ITEM_SHUCA_BERRY, 3
	goto Common_PoryScript_GiveBerry_Resistance_1

Common_PoryScript_GiveBerry_Resistance_11:
# 90 "data/scripts/poryscripts/berry.pory"
	giveitem ITEM_COBA_BERRY, 3
	goto Common_PoryScript_GiveBerry_Resistance_1

Common_PoryScript_GiveBerry_Resistance_12:
# 91 "data/scripts/poryscripts/berry.pory"
	giveitem ITEM_PAYAPA_BERRY, 3
	goto Common_PoryScript_GiveBerry_Resistance_1

Common_PoryScript_GiveBerry_Resistance_13:
# 92 "data/scripts/poryscripts/berry.pory"
	giveitem ITEM_TANGA_BERRY, 3
	goto Common_PoryScript_GiveBerry_Resistance_1

Common_PoryScript_GiveBerry_Resistance_14:
# 93 "data/scripts/poryscripts/berry.pory"
	giveitem ITEM_CHARTI_BERRY, 3
	goto Common_PoryScript_GiveBerry_Resistance_1

Common_PoryScript_GiveBerry_Resistance_15:
# 94 "data/scripts/poryscripts/berry.pory"
	giveitem ITEM_KASIB_BERRY, 3
	goto Common_PoryScript_GiveBerry_Resistance_1

Common_PoryScript_GiveBerry_Resistance_16:
# 95 "data/scripts/poryscripts/berry.pory"
	giveitem ITEM_HABAN_BERRY, 3
	goto Common_PoryScript_GiveBerry_Resistance_1

Common_PoryScript_GiveBerry_Resistance_17:
# 96 "data/scripts/poryscripts/berry.pory"
	giveitem ITEM_COLBUR_BERRY, 3
	goto Common_PoryScript_GiveBerry_Resistance_1

Common_PoryScript_GiveBerry_Resistance_18:
# 97 "data/scripts/poryscripts/berry.pory"
	giveitem ITEM_BABIRI_BERRY, 3
	goto Common_PoryScript_GiveBerry_Resistance_1

Common_PoryScript_GiveBerry_Resistance_19:
# 98 "data/scripts/poryscripts/berry.pory"
	giveitem ITEM_ROSELI_BERRY, 3
	goto Common_PoryScript_GiveBerry_Resistance_1


Common_PoryScript_GiveBerry_RaiseStats::
# 104 "data/scripts/poryscripts/berry.pory"
	specialvar VAR_RESULT, GetPlayerTrainerIdOnesDigit
# 105 "data/scripts/poryscripts/berry.pory"
	switch VAR_RESULT
# 106 "data/scripts/poryscripts/berry.pory"
	case 0, Common_PoryScript_GiveBerry_RaiseStats_3
# 112 "data/scripts/poryscripts/berry.pory"
	case 1, Common_PoryScript_GiveBerry_RaiseStats_4
# 118 "data/scripts/poryscripts/berry.pory"
	case 2, Common_PoryScript_GiveBerry_RaiseStats_5
# 124 "data/scripts/poryscripts/berry.pory"
	case 3, Common_PoryScript_GiveBerry_RaiseStats_6
# 130 "data/scripts/poryscripts/berry.pory"
	case 4, Common_PoryScript_GiveBerry_RaiseStats_7
# 136 "data/scripts/poryscripts/berry.pory"
	case 5, Common_PoryScript_GiveBerry_RaiseStats_8
# 142 "data/scripts/poryscripts/berry.pory"
	case 6, Common_PoryScript_GiveBerry_RaiseStats_9
# 148 "data/scripts/poryscripts/berry.pory"
	case 7, Common_PoryScript_GiveBerry_RaiseStats_10
# 154 "data/scripts/poryscripts/berry.pory"
	case 8, Common_PoryScript_GiveBerry_RaiseStats_11
# 160 "data/scripts/poryscripts/berry.pory"
	case 9, Common_PoryScript_GiveBerry_RaiseStats_12
Common_PoryScript_GiveBerry_RaiseStats_1:
# 167 "data/scripts/poryscripts/berry.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	return

Common_PoryScript_GiveBerry_RaiseStats_3:
# 107 "data/scripts/poryscripts/berry.pory"
	random 2
# 108 "data/scripts/poryscripts/berry.pory"
	switch VAR_RESULT
# 109 "data/scripts/poryscripts/berry.pory"
	case 0, Common_PoryScript_GiveBerry_RaiseStats_14
# 110 "data/scripts/poryscripts/berry.pory"
	case 1, Common_PoryScript_GiveBerry_RaiseStats_15
	goto Common_PoryScript_GiveBerry_RaiseStats_1

Common_PoryScript_GiveBerry_RaiseStats_4:
# 113 "data/scripts/poryscripts/berry.pory"
	random 2
# 114 "data/scripts/poryscripts/berry.pory"
	switch VAR_RESULT
# 115 "data/scripts/poryscripts/berry.pory"
	case 0, Common_PoryScript_GiveBerry_RaiseStats_17
# 116 "data/scripts/poryscripts/berry.pory"
	case 1, Common_PoryScript_GiveBerry_RaiseStats_18
	goto Common_PoryScript_GiveBerry_RaiseStats_1

Common_PoryScript_GiveBerry_RaiseStats_5:
# 119 "data/scripts/poryscripts/berry.pory"
	random 2
# 120 "data/scripts/poryscripts/berry.pory"
	switch VAR_RESULT
# 121 "data/scripts/poryscripts/berry.pory"
	case 0, Common_PoryScript_GiveBerry_RaiseStats_20
# 122 "data/scripts/poryscripts/berry.pory"
	case 1, Common_PoryScript_GiveBerry_RaiseStats_21
	goto Common_PoryScript_GiveBerry_RaiseStats_1

Common_PoryScript_GiveBerry_RaiseStats_6:
# 125 "data/scripts/poryscripts/berry.pory"
	random 2
# 126 "data/scripts/poryscripts/berry.pory"
	switch VAR_RESULT
# 127 "data/scripts/poryscripts/berry.pory"
	case 0, Common_PoryScript_GiveBerry_RaiseStats_23
# 128 "data/scripts/poryscripts/berry.pory"
	case 1, Common_PoryScript_GiveBerry_RaiseStats_24
	goto Common_PoryScript_GiveBerry_RaiseStats_1

Common_PoryScript_GiveBerry_RaiseStats_7:
# 131 "data/scripts/poryscripts/berry.pory"
	random 2
# 132 "data/scripts/poryscripts/berry.pory"
	switch VAR_RESULT
# 133 "data/scripts/poryscripts/berry.pory"
	case 0, Common_PoryScript_GiveBerry_RaiseStats_26
# 134 "data/scripts/poryscripts/berry.pory"
	case 1, Common_PoryScript_GiveBerry_RaiseStats_27
	goto Common_PoryScript_GiveBerry_RaiseStats_1

Common_PoryScript_GiveBerry_RaiseStats_8:
# 137 "data/scripts/poryscripts/berry.pory"
	random 2
# 138 "data/scripts/poryscripts/berry.pory"
	switch VAR_RESULT
# 139 "data/scripts/poryscripts/berry.pory"
	case 0, Common_PoryScript_GiveBerry_RaiseStats_29
# 140 "data/scripts/poryscripts/berry.pory"
	case 1, Common_PoryScript_GiveBerry_RaiseStats_30
	goto Common_PoryScript_GiveBerry_RaiseStats_1

Common_PoryScript_GiveBerry_RaiseStats_9:
# 143 "data/scripts/poryscripts/berry.pory"
	random 2
# 144 "data/scripts/poryscripts/berry.pory"
	switch VAR_RESULT
# 145 "data/scripts/poryscripts/berry.pory"
	case 0, Common_PoryScript_GiveBerry_RaiseStats_32
# 146 "data/scripts/poryscripts/berry.pory"
	case 1, Common_PoryScript_GiveBerry_RaiseStats_33
	goto Common_PoryScript_GiveBerry_RaiseStats_1

Common_PoryScript_GiveBerry_RaiseStats_10:
# 149 "data/scripts/poryscripts/berry.pory"
	random 2
# 150 "data/scripts/poryscripts/berry.pory"
	switch VAR_RESULT
# 151 "data/scripts/poryscripts/berry.pory"
	case 0, Common_PoryScript_GiveBerry_RaiseStats_35
# 152 "data/scripts/poryscripts/berry.pory"
	case 1, Common_PoryScript_GiveBerry_RaiseStats_36
	goto Common_PoryScript_GiveBerry_RaiseStats_1

Common_PoryScript_GiveBerry_RaiseStats_11:
# 155 "data/scripts/poryscripts/berry.pory"
	random 2
# 156 "data/scripts/poryscripts/berry.pory"
	switch VAR_RESULT
# 157 "data/scripts/poryscripts/berry.pory"
	case 0, Common_PoryScript_GiveBerry_RaiseStats_38
# 158 "data/scripts/poryscripts/berry.pory"
	case 1, Common_PoryScript_GiveBerry_RaiseStats_39
	goto Common_PoryScript_GiveBerry_RaiseStats_1

Common_PoryScript_GiveBerry_RaiseStats_12:
# 161 "data/scripts/poryscripts/berry.pory"
	random 2
# 162 "data/scripts/poryscripts/berry.pory"
	switch VAR_RESULT
# 163 "data/scripts/poryscripts/berry.pory"
	case 0, Common_PoryScript_GiveBerry_RaiseStats_41
# 164 "data/scripts/poryscripts/berry.pory"
	case 1, Common_PoryScript_GiveBerry_RaiseStats_42
	goto Common_PoryScript_GiveBerry_RaiseStats_1

Common_PoryScript_GiveBerry_RaiseStats_14:
# 109 "data/scripts/poryscripts/berry.pory"
	giveitem ITEM_LIECHI_BERRY, 3
	goto Common_PoryScript_GiveBerry_RaiseStats_1

Common_PoryScript_GiveBerry_RaiseStats_15:
# 110 "data/scripts/poryscripts/berry.pory"
	giveitem ITEM_GANLON_BERRY, 3
	goto Common_PoryScript_GiveBerry_RaiseStats_1

Common_PoryScript_GiveBerry_RaiseStats_17:
# 115 "data/scripts/poryscripts/berry.pory"
	giveitem ITEM_LIECHI_BERRY, 3
	goto Common_PoryScript_GiveBerry_RaiseStats_1

Common_PoryScript_GiveBerry_RaiseStats_18:
# 116 "data/scripts/poryscripts/berry.pory"
	giveitem ITEM_SALAC_BERRY, 3
	goto Common_PoryScript_GiveBerry_RaiseStats_1

Common_PoryScript_GiveBerry_RaiseStats_20:
# 121 "data/scripts/poryscripts/berry.pory"
	giveitem ITEM_LIECHI_BERRY, 3
	goto Common_PoryScript_GiveBerry_RaiseStats_1

Common_PoryScript_GiveBerry_RaiseStats_21:
# 122 "data/scripts/poryscripts/berry.pory"
	giveitem ITEM_PETAYA_BERRY, 3
	goto Common_PoryScript_GiveBerry_RaiseStats_1

Common_PoryScript_GiveBerry_RaiseStats_23:
# 127 "data/scripts/poryscripts/berry.pory"
	giveitem ITEM_LIECHI_BERRY, 3
	goto Common_PoryScript_GiveBerry_RaiseStats_1

Common_PoryScript_GiveBerry_RaiseStats_24:
# 128 "data/scripts/poryscripts/berry.pory"
	giveitem ITEM_APICOT_BERRY, 3
	goto Common_PoryScript_GiveBerry_RaiseStats_1

Common_PoryScript_GiveBerry_RaiseStats_26:
# 133 "data/scripts/poryscripts/berry.pory"
	giveitem ITEM_GANLON_BERRY, 3
	goto Common_PoryScript_GiveBerry_RaiseStats_1

Common_PoryScript_GiveBerry_RaiseStats_27:
# 134 "data/scripts/poryscripts/berry.pory"
	giveitem ITEM_SALAC_BERRY, 3
	goto Common_PoryScript_GiveBerry_RaiseStats_1

Common_PoryScript_GiveBerry_RaiseStats_29:
# 139 "data/scripts/poryscripts/berry.pory"
	giveitem ITEM_GANLON_BERRY, 3
	goto Common_PoryScript_GiveBerry_RaiseStats_1

Common_PoryScript_GiveBerry_RaiseStats_30:
# 140 "data/scripts/poryscripts/berry.pory"
	giveitem ITEM_PETAYA_BERRY, 3
	goto Common_PoryScript_GiveBerry_RaiseStats_1

Common_PoryScript_GiveBerry_RaiseStats_32:
# 145 "data/scripts/poryscripts/berry.pory"
	giveitem ITEM_GANLON_BERRY, 3
	goto Common_PoryScript_GiveBerry_RaiseStats_1

Common_PoryScript_GiveBerry_RaiseStats_33:
# 146 "data/scripts/poryscripts/berry.pory"
	giveitem ITEM_APICOT_BERRY, 3
	goto Common_PoryScript_GiveBerry_RaiseStats_1

Common_PoryScript_GiveBerry_RaiseStats_35:
# 151 "data/scripts/poryscripts/berry.pory"
	giveitem ITEM_SALAC_BERRY, 3
	goto Common_PoryScript_GiveBerry_RaiseStats_1

Common_PoryScript_GiveBerry_RaiseStats_36:
# 152 "data/scripts/poryscripts/berry.pory"
	giveitem ITEM_PETAYA_BERRY, 3
	goto Common_PoryScript_GiveBerry_RaiseStats_1

Common_PoryScript_GiveBerry_RaiseStats_38:
# 157 "data/scripts/poryscripts/berry.pory"
	giveitem ITEM_SALAC_BERRY, 3
	goto Common_PoryScript_GiveBerry_RaiseStats_1

Common_PoryScript_GiveBerry_RaiseStats_39:
# 158 "data/scripts/poryscripts/berry.pory"
	giveitem ITEM_APICOT_BERRY, 3
	goto Common_PoryScript_GiveBerry_RaiseStats_1

Common_PoryScript_GiveBerry_RaiseStats_41:
# 163 "data/scripts/poryscripts/berry.pory"
	giveitem ITEM_PETAYA_BERRY, 3
	goto Common_PoryScript_GiveBerry_RaiseStats_1

Common_PoryScript_GiveBerry_RaiseStats_42:
# 164 "data/scripts/poryscripts/berry.pory"
	giveitem ITEM_APICOT_BERRY, 3
	goto Common_PoryScript_GiveBerry_RaiseStats_1


Route104_PoryScript_ExpertF_Text_0:
# 6 "data/scripts/poryscripts/berry.pory"
	.string "If you see Berries growing in loamy soil,\n"
	.string "feel free to take them.\p"
	.string "But, make sure you plant a Berry in the\n"
	.string "same spot. That's common courtesy.\p"
	.string "Here, I'll share these with you.$"

Route104_PoryScript_ExpertF_Text_1:
# 10 "data/scripts/poryscripts/berry.pory"
	.string "The way you look, you must be a Trainer,\n"
	.string "no?\p"
	.string "Trainers often make Pokémon hold\n"
	.string "Berries.\p"
	.string "It's up to you whether to grow Berries\n"
	.string "or use them.$"
