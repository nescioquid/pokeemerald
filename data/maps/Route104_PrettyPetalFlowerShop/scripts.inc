Route104_PrettyPetalFlowerShop_OnTransition::
# 5 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	setflag FLAG_LANDMARK_FLOWER_SHOP
# 6 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	goto_if_unset FLAG_MET_PRETTY_PETAL_SHOP_OWNER, Route104_PrettyPetalFlowerShop_OnTransition_2
Route104_PrettyPetalFlowerShop_OnTransition_1:
# 10 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	goto_if_unset FLAG_RECEIVED_WAILMER_PAIL, Route104_PrettyPetalFlowerShop_OnTransition_5
Route104_PrettyPetalFlowerShop_OnTransition_4:
# 15 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, Route104_PrettyPetalFlowerShop_OnTransition_8
Route104_PrettyPetalFlowerShop_OnTransition_7:
	end

Route104_PrettyPetalFlowerShop_OnTransition_2:
# 7 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	setobjectxyperm 1, 4, 6
# 8 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	setflag FLAG_TEMP_1
	goto Route104_PrettyPetalFlowerShop_OnTransition_1

Route104_PrettyPetalFlowerShop_OnTransition_5:
# 11 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	setobjectxyperm 2, 7, 3
# 12 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT
# 13 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	setflag FLAG_TEMP_2
	goto Route104_PrettyPetalFlowerShop_OnTransition_4

Route104_PrettyPetalFlowerShop_OnTransition_8:
# 16 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	setobjectxyperm 1, 4, 6
# 17 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	setobjectxyperm 2, 7, 3
# 18 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT
# 19 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	setflag FLAG_TEMP_1
# 20 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	setflag FLAG_TEMP_2
	goto Route104_PrettyPetalFlowerShop_OnTransition_7


Route104_PrettyPetalFlowerShop_EventScript_ShopOwner::
# 26 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	lock
# 27 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	faceplayer
# 28 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	goto_if_unset FLAG_TEMP_1, Route104_PrettyPetalFlowerShop_EventScript_ShopOwner_2
Route104_PrettyPetalFlowerShop_EventScript_ShopOwner_1:
# 31 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	msgbox Route104_PrettyPetalFlowerShop_Text_ThisIsPrettyPetalFlowerShop
# 32 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	goto_if_set FLAG_MET_PRETTY_PETAL_SHOP_OWNER, Route104_PrettyPetalFlowerShop_EventScript_ShopOwner_5
Route104_PrettyPetalFlowerShop_EventScript_ShopOwner_4:
# 35 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	setflag FLAG_MET_PRETTY_PETAL_SHOP_OWNER
# 36 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	msgbox Route104_PrettyPetalFlowerShop_Text_IntroLearnAboutBerries, MSGBOX_YESNO
# 37 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Route104_PrettyPetalFlowerShop_EventScript_ShopOwner_8
# 40 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	call Route104_PrettyPetalFlowerShop_EventScript_DontExplainBerries
Route104_PrettyPetalFlowerShop_EventScript_ShopOwner_7:
# 42 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	release
	end

Route104_PrettyPetalFlowerShop_EventScript_ShopOwner_2:
# 29 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	goto Route104_PrettyPetalFlowerShop_EventScript_SellDecorations
	goto Route104_PrettyPetalFlowerShop_EventScript_ShopOwner_1

Route104_PrettyPetalFlowerShop_EventScript_ShopOwner_5:
# 33 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	goto Route104_PrettyPetalFlowerShop_EventScript_AlreadyMet
	goto Route104_PrettyPetalFlowerShop_EventScript_ShopOwner_4

Route104_PrettyPetalFlowerShop_EventScript_ShopOwner_8:
# 38 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	call Route104_PrettyPetalFlowerShop_EventScript_ExplainBerries
	goto Route104_PrettyPetalFlowerShop_EventScript_ShopOwner_7


Route104_PrettyPetalFlowerShop_EventScript_WailmerPailGirl::
# 47 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	lock
# 48 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	faceplayer
# 49 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	goto_if_unset FLAG_RECEIVED_WAILMER_PAIL, Route104_PrettyPetalFlowerShop_EventScript_WailmerPailGirl_2
Route104_PrettyPetalFlowerShop_EventScript_WailmerPailGirl_1:
# 57 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	goto_if_set FLAG_TEMP_2, Route104_PrettyPetalFlowerShop_EventScript_WailmerPailGirl_5
# 60 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	message Route104_PrettyPetalFlowerShop_EventScript_WailmerPailGirl_Text_0
# 61 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	waitmessage
# 62 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	pokemart Pokemart_Mulches
# 63 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	msgbox Route104_PrettyPetalFlowerShop_EventScript_WailmerPailGirl_Text_1
Route104_PrettyPetalFlowerShop_EventScript_WailmerPailGirl_4:
# 65 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	release
	end

Route104_PrettyPetalFlowerShop_EventScript_WailmerPailGirl_2:
# 50 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	goto Route104_PrettyPetalFlowerShop_EventScript_GiveWailmerPail
	goto Route104_PrettyPetalFlowerShop_EventScript_WailmerPailGirl_1

Route104_PrettyPetalFlowerShop_EventScript_WailmerPailGirl_5:
# 58 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	msgbox Route104_PrettyPetalFlowerShop_Text_WailmerPailExplanation
	goto Route104_PrettyPetalFlowerShop_EventScript_WailmerPailGirl_4


	.align 2
# 69 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
Pokemart_Mulches:
# 70 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.2byte ITEM_GROWTH_MULCH
# 71 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.2byte ITEM_STABLE_MULCH
# 72 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.2byte ITEM_GOOEY_MULCH
# 73 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.2byte ITEM_DAMP_MULCH
	.2byte ITEM_NONE

Route104_PrettyPetalFlowerShop_EventScript_RandomBerryGirl::
# 77 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	lock
# 78 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	faceplayer
# 79 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	dotimebasedevents
# 80 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	goto_if_unset FLAG_DAILY_FLOWER_SHOP_RECEIVED_BERRY, Route104_PrettyPetalFlowerShop_EventScript_RandomBerryGirl_2
Route104_PrettyPetalFlowerShop_EventScript_RandomBerryGirl_1:
# 89 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	msgbox Route104_PrettyPetalFlowerShop_EventScript_RandomBerryGirl_Text_1
# 90 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	release
	end

Route104_PrettyPetalFlowerShop_EventScript_RandomBerryGirl_2:
# 81 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	msgbox Route104_PrettyPetalFlowerShop_EventScript_RandomBerryGirl_Text_0
# 82 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	goto_if_unset FLAG_BADGE02_GET, Route104_PrettyPetalFlowerShop_EventScript_RandomBerryGirl_5
# 85 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	call Common_PoryScript_GiveBerry_Generic
Route104_PrettyPetalFlowerShop_EventScript_RandomBerryGirl_4:
# 87 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	setflag FLAG_DAILY_FLOWER_SHOP_RECEIVED_BERRY
	goto Route104_PrettyPetalFlowerShop_EventScript_RandomBerryGirl_1

Route104_PrettyPetalFlowerShop_EventScript_RandomBerryGirl_5:
# 83 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	call Common_PoryScript_GiveBerry_Status
	goto Route104_PrettyPetalFlowerShop_EventScript_RandomBerryGirl_4


# 94 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"

# 95 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
.set LOCALID_OWNER, 1
# 96 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"

# 97 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
Route104_PrettyPetalFlowerShop_MapScripts::
# 98 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route104_PrettyPetalFlowerShop_OnTransition
# 99 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.byte 0
# 100 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"

# 101 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
@ Route104_PrettyPetalFlowerShop_OnTransition:
# 102 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
@ 	setflag FLAG_LANDMARK_FLOWER_SHOP
# 103 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
@ 	goto_if_unset FLAG_MET_PRETTY_PETAL_SHOP_OWNER, Route104_PrettyPetalFlowerShop_EventScript_MoveShopOwner
# 104 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
@ 	goto_if_unset FLAG_BADGE03_GET, Route104_PrettyPetalFlowerShop_EventScript_MoveShopOwner
# 105 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
@ 	setflag FLAG_TEMP_1
# 106 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
@ 	end
# 107 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"

# 108 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
Route104_PrettyPetalFlowerShop_EventScript_MoveShopOwner::
# 109 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	setobjectxyperm LOCALID_OWNER, 4, 6
# 110 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	end
# 111 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"

# 112 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
@ Route104_PrettyPetalFlowerShop_EventScript_ShopOwner::
# 113 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
@ 	lock
# 114 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
@ 	faceplayer
# 115 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
@ 	goto_if_set FLAG_TEMP_1, Route104_PrettyPetalFlowerShop_EventScript_SellDecorations
# 116 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
@ 	msgbox Route104_PrettyPetalFlowerShop_Text_ThisIsPrettyPetalFlowerShop, MSGBOX_DEFAULT
# 117 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
@ 	goto_if_set FLAG_MET_PRETTY_PETAL_SHOP_OWNER, Route104_PrettyPetalFlowerShop_EventScript_AlreadyMet
# 118 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
@ 	setflag FLAG_MET_PRETTY_PETAL_SHOP_OWNER
# 119 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
@ 	msgbox Route104_PrettyPetalFlowerShop_Text_IntroLearnAboutBerries, MSGBOX_YESNO
# 120 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
@ 	call_if_eq VAR_RESULT, YES, Route104_PrettyPetalFlowerShop_EventScript_ExplainBerries
# 121 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
@ 	call_if_eq VAR_RESULT, NO, Route104_PrettyPetalFlowerShop_EventScript_DontExplainBerries
# 122 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
@ 	release
# 123 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
@ 	end
# 124 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"

# 125 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
Route104_PrettyPetalFlowerShop_EventScript_AlreadyMet::
# 126 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	msgbox Route104_PrettyPetalFlowerShop_Text_LearnAboutBerries, MSGBOX_YESNO
# 127 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	call_if_eq VAR_RESULT, YES, Route104_PrettyPetalFlowerShop_EventScript_ExplainBerries
# 128 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	call_if_eq VAR_RESULT, NO, Route104_PrettyPetalFlowerShop_EventScript_DontExplainBerries
# 129 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	release
# 130 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	end
# 131 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"

# 132 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
Route104_PrettyPetalFlowerShop_EventScript_ExplainBerries::
# 133 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	msgbox Route104_PrettyPetalFlowerShop_Text_BerriesExplanation, MSGBOX_DEFAULT
# 134 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	return
# 135 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"

# 136 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
Route104_PrettyPetalFlowerShop_EventScript_DontExplainBerries::
# 137 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	msgbox Route104_PrettyPetalFlowerShop_Text_FlowersBringHappiness, MSGBOX_DEFAULT
# 138 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	return
# 139 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"

# 140 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
Route104_PrettyPetalFlowerShop_EventScript_SellDecorations::
# 141 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	message gText_PlayerWhatCanIDoForYou
# 142 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	waitmessage
# 143 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	pokemartdecoration2 Route104_PrettyPetalFlowerShop_Pokemart_Plants
# 144 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 145 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	release
# 146 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	end
# 147 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"

# 148 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.align 2
# 149 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
Route104_PrettyPetalFlowerShop_Pokemart_Plants:
# 150 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.2byte DECOR_RED_PLANT
# 151 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.2byte DECOR_TROPICAL_PLANT
# 152 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.2byte DECOR_PRETTY_FLOWERS
# 153 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.2byte DECOR_COLORFUL_PLANT
# 154 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.2byte DECOR_BIG_PLANT
# 155 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.2byte DECOR_GORGEOUS_PLANT
# 156 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.2byte DECOR_NONE
# 157 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	release
# 158 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	end
# 159 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"

# 160 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
@ Route104_PrettyPetalFlowerShop_EventScript_WailmerPailGirl::
# 161 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
@ 	lock
# 162 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
@ 	faceplayer
# 163 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
@ 	goto_if_unset FLAG_RECEIVED_WAILMER_PAIL, Route104_PrettyPetalFlowerShop_EventScript_GiveWailmerPail
# 164 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
@ 	msgbox Route104_PrettyPetalFlowerShop_Text_WailmerPailExplanation, MSGBOX_DEFAULT
# 165 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
@ 	release
# 166 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
@ 	end
# 167 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"

# 168 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
Route104_PrettyPetalFlowerShop_EventScript_GiveWailmerPail::
# 169 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	msgbox Route104_PrettyPetalFlowerShop_Text_YouCanHaveThis, MSGBOX_DEFAULT
# 170 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	giveitem ITEM_WAILMER_PAIL
# 171 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 172 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	msgbox Route104_PrettyPetalFlowerShop_Text_WailmerPailExplanation, MSGBOX_DEFAULT
# 173 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	setflag FLAG_RECEIVED_WAILMER_PAIL
# 174 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	release
# 175 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	end
# 176 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"

# 177 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
@ Route104_PrettyPetalFlowerShop_EventScript_RandomBerryGirl::
# 178 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
@ 	lock
# 179 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
@ 	faceplayer
# 180 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
@ 	dotimebasedevents
# 181 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
@ 	goto_if_set FLAG_DAILY_FLOWER_SHOP_RECEIVED_BERRY, Route104_PrettyPetalFlowerShop_EventScript_AlreadyReceivedBerry
# 182 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
@ 	msgbox Route104_PrettyPetalFlowerShop_Text_ImGrowingFlowers, MSGBOX_DEFAULT
# 183 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
@ 	random 8
# 184 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
@ 	addvar VAR_RESULT, FIRST_BERRY_INDEX
# 185 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
@ 	giveitem VAR_RESULT
# 186 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
@ 	goto_if_eq VAR_RESULT, 0, Common_EventScript_ShowBagIsFull
# 187 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
@ 	setflag FLAG_DAILY_FLOWER_SHOP_RECEIVED_BERRY
# 188 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
@ 	msgbox Route104_PrettyPetalFlowerShop_Text_MachineMixesBerries, MSGBOX_DEFAULT
# 189 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
@ 	release
# 190 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
@ 	end
# 191 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"

# 192 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
Route104_PrettyPetalFlowerShop_EventScript_AlreadyReceivedBerry::
# 193 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	msgbox Route104_PrettyPetalFlowerShop_Text_MachineMixesBerries, MSGBOX_DEFAULT
# 194 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	release
# 195 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	end

Route104_PrettyPetalFlowerShop_EventScript_WailmerPailGirl_Text_0:
# 60 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.string "Been watering your Berries like I\n"
	.string "taught you? How can I help you?$"

Route104_PrettyPetalFlowerShop_EventScript_WailmerPailGirl_Text_1:
# 63 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.string "Until next time!$"

Route104_PrettyPetalFlowerShop_EventScript_RandomBerryGirl_Text_0:
# 81 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.string "I'm trying to be like my big sisters. I'm\n"
	.string "growing flowers, too!\p"
	.string "Here you go! They're for you!$"

Route104_PrettyPetalFlowerShop_EventScript_RandomBerryGirl_Text_1:
# 89 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.string "You can plant a Berry and grow it big, or\n"
	.string "you can make a Pokémon hold it.\p"
	.string "But now they have a machine that mixes\n"
	.string "up different Berries and makes candies\l"
	.string "for Pokémon.\p"
	.string "I want some candy, too.$"
