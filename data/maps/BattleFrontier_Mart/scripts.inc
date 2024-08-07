BattleFrontier_Mart_EventScript_Clerk::
# 2 "data/maps/BattleFrontier_Mart/scripts.pory"
	lock
# 3 "data/maps/BattleFrontier_Mart/scripts.pory"
	faceplayer
# 4 "data/maps/BattleFrontier_Mart/scripts.pory"
	msgbox BattleFrontier_Mart_EventScript_Clerk_Text_0
# 5 "data/maps/BattleFrontier_Mart/scripts.pory"
	call Common_PoryScript_Clerk_Hellos
# 6 "data/maps/BattleFrontier_Mart/scripts.pory"
	waitmessage
# 7 "data/maps/BattleFrontier_Mart/scripts.pory"
	call Common_PoryScript_Clerk_PokemartByBadges
# 8 "data/maps/BattleFrontier_Mart/scripts.pory"
	call Common_PoryScript_Clerk_Goodbyes
# 9 "data/maps/BattleFrontier_Mart/scripts.pory"
	release
	end


# 13 "data/maps/BattleFrontier_Mart/scripts.pory"

# 14 "data/maps/BattleFrontier_Mart/scripts.pory"
.set LOCALID_OLD_WOMAN, 2
# 15 "data/maps/BattleFrontier_Mart/scripts.pory"

# 16 "data/maps/BattleFrontier_Mart/scripts.pory"
BattleFrontier_Mart_MapScripts::
# 17 "data/maps/BattleFrontier_Mart/scripts.pory"
	.byte 0
# 18 "data/maps/BattleFrontier_Mart/scripts.pory"

# 19 "data/maps/BattleFrontier_Mart/scripts.pory"
@ BattleFrontier_Mart_EventScript_Clerk::
# 20 "data/maps/BattleFrontier_Mart/scripts.pory"
@ 	lock
# 21 "data/maps/BattleFrontier_Mart/scripts.pory"
@ 	faceplayer
# 22 "data/maps/BattleFrontier_Mart/scripts.pory"
@ 	message gText_HowMayIServeYou
# 23 "data/maps/BattleFrontier_Mart/scripts.pory"
@ 	waitmessage
# 24 "data/maps/BattleFrontier_Mart/scripts.pory"
@ 	pokemart BattleFrontier_Mart_Pokemart
# 25 "data/maps/BattleFrontier_Mart/scripts.pory"
@ 	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 26 "data/maps/BattleFrontier_Mart/scripts.pory"
@ 	release
# 27 "data/maps/BattleFrontier_Mart/scripts.pory"
@ 	end
# 28 "data/maps/BattleFrontier_Mart/scripts.pory"

# 29 "data/maps/BattleFrontier_Mart/scripts.pory"
	.align 2
# 30 "data/maps/BattleFrontier_Mart/scripts.pory"
BattleFrontier_Mart_Pokemart:
# 31 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 32 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 33 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_MAX_POTION
# 34 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 35 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 36 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_REVIVE
# 37 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 38 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_PROTEIN
# 39 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_CALCIUM
# 40 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_IRON
# 41 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_ZINC
# 42 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_CARBOS
# 43 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_HP_UP
# 44 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_NONE
# 45 "data/maps/BattleFrontier_Mart/scripts.pory"
	release
# 46 "data/maps/BattleFrontier_Mart/scripts.pory"
	end
# 47 "data/maps/BattleFrontier_Mart/scripts.pory"

# 48 "data/maps/BattleFrontier_Mart/scripts.pory"
BattleFrontier_Mart_EventScript_OldMan::
# 49 "data/maps/BattleFrontier_Mart/scripts.pory"
	msgbox BattleFrontier_Mart_Text_ChaperonGrandson, MSGBOX_NPC
# 50 "data/maps/BattleFrontier_Mart/scripts.pory"
	end
# 51 "data/maps/BattleFrontier_Mart/scripts.pory"

# 52 "data/maps/BattleFrontier_Mart/scripts.pory"
BattleFrontier_Mart_EventScript_OldWoman::
# 53 "data/maps/BattleFrontier_Mart/scripts.pory"
	lock
# 54 "data/maps/BattleFrontier_Mart/scripts.pory"
	applymovement LOCALID_OLD_WOMAN, Common_Movement_FaceDown
# 55 "data/maps/BattleFrontier_Mart/scripts.pory"
	waitmovement 0
# 56 "data/maps/BattleFrontier_Mart/scripts.pory"
	msgbox BattleFrontier_Mart_Text_ProteinMakeNiceGift, MSGBOX_DEFAULT
# 57 "data/maps/BattleFrontier_Mart/scripts.pory"
	release
# 58 "data/maps/BattleFrontier_Mart/scripts.pory"
	end
# 59 "data/maps/BattleFrontier_Mart/scripts.pory"

# 60 "data/maps/BattleFrontier_Mart/scripts.pory"
BattleFrontier_Mart_EventScript_Boy::
# 61 "data/maps/BattleFrontier_Mart/scripts.pory"
	msgbox BattleFrontier_Mart_Text_FacilitiesDontAllowItems, MSGBOX_NPC
# 62 "data/maps/BattleFrontier_Mart/scripts.pory"
	end
# 63 "data/maps/BattleFrontier_Mart/scripts.pory"

# 64 "data/maps/BattleFrontier_Mart/scripts.pory"
BattleFrontier_Mart_Text_ChaperonGrandson:
# 65 "data/maps/BattleFrontier_Mart/scripts.pory"
	.string "We came here to chaperon our\n"
# 66 "data/maps/BattleFrontier_Mart/scripts.pory"
	.string "grandson.\p"
# 67 "data/maps/BattleFrontier_Mart/scripts.pory"
	.string "But since we're here, we thought\n"
# 68 "data/maps/BattleFrontier_Mart/scripts.pory"
	.string "we should get some souvenirs.$"
# 69 "data/maps/BattleFrontier_Mart/scripts.pory"

# 70 "data/maps/BattleFrontier_Mart/scripts.pory"
BattleFrontier_Mart_Text_ProteinMakeNiceGift:
# 71 "data/maps/BattleFrontier_Mart/scripts.pory"
	.string "Dear, what do you think of this?\n"
# 72 "data/maps/BattleFrontier_Mart/scripts.pory"
	.string "Wouldn't this make a nice gift?\p"
# 73 "data/maps/BattleFrontier_Mart/scripts.pory"
	.string "It's…PRO…TE…IN?\n"
# 74 "data/maps/BattleFrontier_Mart/scripts.pory"
	.string "It sounds delicious, doesn't it?$"
# 75 "data/maps/BattleFrontier_Mart/scripts.pory"

# 76 "data/maps/BattleFrontier_Mart/scripts.pory"
BattleFrontier_Mart_Text_FacilitiesDontAllowItems:
# 77 "data/maps/BattleFrontier_Mart/scripts.pory"
	.string "A lot of the BATTLE FRONTIER's\n"
# 78 "data/maps/BattleFrontier_Mart/scripts.pory"
	.string "facilities don't allow the use of items\l"
# 79 "data/maps/BattleFrontier_Mart/scripts.pory"
	.string "during battles.\p"
# 80 "data/maps/BattleFrontier_Mart/scripts.pory"
	.string "That rule makes things tougher than\n"
# 81 "data/maps/BattleFrontier_Mart/scripts.pory"
	.string "they already are!$"

BattleFrontier_Mart_EventScript_Clerk_Text_0:
# 4 "data/maps/BattleFrontier_Mart/scripts.pory"
	.string "You're here! At the Battle Frontier!\n"
	.string "Haha!$"
