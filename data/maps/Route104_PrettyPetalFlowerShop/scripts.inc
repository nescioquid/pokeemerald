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

# 76 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"

# 77 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
.set LOCALID_OWNER, 1
# 78 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"

# 79 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
Route104_PrettyPetalFlowerShop_MapScripts::
# 80 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route104_PrettyPetalFlowerShop_OnTransition
# 81 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.byte 0
# 82 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"

# 83 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
@ Route104_PrettyPetalFlowerShop_OnTransition:
# 84 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
@ 	setflag FLAG_LANDMARK_FLOWER_SHOP
# 85 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
@ 	goto_if_unset FLAG_MET_PRETTY_PETAL_SHOP_OWNER, Route104_PrettyPetalFlowerShop_EventScript_MoveShopOwner
# 86 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
@ 	goto_if_unset FLAG_BADGE03_GET, Route104_PrettyPetalFlowerShop_EventScript_MoveShopOwner
# 87 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
@ 	setflag FLAG_TEMP_1
# 88 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
@ 	end
# 89 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"

# 90 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
Route104_PrettyPetalFlowerShop_EventScript_MoveShopOwner::
# 91 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	setobjectxyperm LOCALID_OWNER, 4, 6
# 92 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	end
# 93 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"

# 94 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
@ Route104_PrettyPetalFlowerShop_EventScript_ShopOwner::
# 95 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
@ 	lock
# 96 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
@ 	faceplayer
# 97 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
@ 	goto_if_set FLAG_TEMP_1, Route104_PrettyPetalFlowerShop_EventScript_SellDecorations
# 98 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
@ 	msgbox Route104_PrettyPetalFlowerShop_Text_ThisIsPrettyPetalFlowerShop, MSGBOX_DEFAULT
# 99 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
@ 	goto_if_set FLAG_MET_PRETTY_PETAL_SHOP_OWNER, Route104_PrettyPetalFlowerShop_EventScript_AlreadyMet
# 100 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
@ 	setflag FLAG_MET_PRETTY_PETAL_SHOP_OWNER
# 101 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
@ 	msgbox Route104_PrettyPetalFlowerShop_Text_IntroLearnAboutBerries, MSGBOX_YESNO
# 102 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
@ 	call_if_eq VAR_RESULT, YES, Route104_PrettyPetalFlowerShop_EventScript_ExplainBerries
# 103 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
@ 	call_if_eq VAR_RESULT, NO, Route104_PrettyPetalFlowerShop_EventScript_DontExplainBerries
# 104 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
@ 	release
# 105 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
@ 	end
# 106 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"

# 107 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
Route104_PrettyPetalFlowerShop_EventScript_AlreadyMet::
# 108 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	msgbox Route104_PrettyPetalFlowerShop_Text_LearnAboutBerries, MSGBOX_YESNO
# 109 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	call_if_eq VAR_RESULT, YES, Route104_PrettyPetalFlowerShop_EventScript_ExplainBerries
# 110 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	call_if_eq VAR_RESULT, NO, Route104_PrettyPetalFlowerShop_EventScript_DontExplainBerries
# 111 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	release
# 112 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	end
# 113 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"

# 114 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
Route104_PrettyPetalFlowerShop_EventScript_ExplainBerries::
# 115 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	msgbox Route104_PrettyPetalFlowerShop_Text_BerriesExplanation, MSGBOX_DEFAULT
# 116 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	return
# 117 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"

# 118 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
Route104_PrettyPetalFlowerShop_EventScript_DontExplainBerries::
# 119 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	msgbox Route104_PrettyPetalFlowerShop_Text_FlowersBringHappiness, MSGBOX_DEFAULT
# 120 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	return
# 121 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"

# 122 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
Route104_PrettyPetalFlowerShop_EventScript_SellDecorations::
# 123 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	message gText_PlayerWhatCanIDoForYou
# 124 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	waitmessage
# 125 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	pokemartdecoration2 Route104_PrettyPetalFlowerShop_Pokemart_Plants
# 126 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 127 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	release
# 128 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	end
# 129 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"

# 130 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.align 2
# 131 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
Route104_PrettyPetalFlowerShop_Pokemart_Plants:
# 132 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.2byte DECOR_RED_PLANT
# 133 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.2byte DECOR_TROPICAL_PLANT
# 134 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.2byte DECOR_PRETTY_FLOWERS
# 135 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.2byte DECOR_COLORFUL_PLANT
# 136 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.2byte DECOR_BIG_PLANT
# 137 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.2byte DECOR_GORGEOUS_PLANT
# 138 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.2byte DECOR_NONE
# 139 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	release
# 140 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	end
# 141 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"

# 142 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
@ Route104_PrettyPetalFlowerShop_EventScript_WailmerPailGirl::
# 143 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
@ 	lock
# 144 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
@ 	faceplayer
# 145 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
@ 	goto_if_unset FLAG_RECEIVED_WAILMER_PAIL, Route104_PrettyPetalFlowerShop_EventScript_GiveWailmerPail
# 146 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
@ 	msgbox Route104_PrettyPetalFlowerShop_Text_WailmerPailExplanation, MSGBOX_DEFAULT
# 147 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
@ 	release
# 148 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
@ 	end
# 149 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"

# 150 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
Route104_PrettyPetalFlowerShop_EventScript_GiveWailmerPail::
# 151 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	msgbox Route104_PrettyPetalFlowerShop_Text_YouCanHaveThis, MSGBOX_DEFAULT
# 152 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	giveitem ITEM_WAILMER_PAIL
# 153 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 154 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	msgbox Route104_PrettyPetalFlowerShop_Text_WailmerPailExplanation, MSGBOX_DEFAULT
# 155 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	setflag FLAG_RECEIVED_WAILMER_PAIL
# 156 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	release
# 157 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	end
# 158 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"

# 159 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
Route104_PrettyPetalFlowerShop_EventScript_RandomBerryGirl::
# 160 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	lock
# 161 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	faceplayer
# 162 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	dotimebasedevents
# 163 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	goto_if_set FLAG_DAILY_FLOWER_SHOP_RECEIVED_BERRY, Route104_PrettyPetalFlowerShop_EventScript_AlreadyReceivedBerry
# 164 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	msgbox Route104_PrettyPetalFlowerShop_Text_ImGrowingFlowers, MSGBOX_DEFAULT
# 165 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	random 8
# 166 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	addvar VAR_RESULT, FIRST_BERRY_INDEX
# 167 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	giveitem VAR_RESULT
# 168 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	goto_if_eq VAR_RESULT, 0, Common_EventScript_ShowBagIsFull
# 169 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	setflag FLAG_DAILY_FLOWER_SHOP_RECEIVED_BERRY
# 170 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	msgbox Route104_PrettyPetalFlowerShop_Text_MachineMixesBerries, MSGBOX_DEFAULT
# 171 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	release
# 172 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	end
# 173 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"

# 174 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
Route104_PrettyPetalFlowerShop_EventScript_AlreadyReceivedBerry::
# 175 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	msgbox Route104_PrettyPetalFlowerShop_Text_MachineMixesBerries, MSGBOX_DEFAULT
# 176 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	release
# 177 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	end

Route104_PrettyPetalFlowerShop_EventScript_WailmerPailGirl_Text_0:
# 60 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.string "Been watering your Berries like I\n"
	.string "taught you? How can I help you?$"

Route104_PrettyPetalFlowerShop_EventScript_WailmerPailGirl_Text_1:
# 63 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.string "Until next time!$"
