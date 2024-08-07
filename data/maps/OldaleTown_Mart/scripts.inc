OldaleTown_Mart_EventScript_Clerk::
# 2 "data/maps/OldaleTown_Mart/scripts.pory"
	lock
# 3 "data/maps/OldaleTown_Mart/scripts.pory"
	faceplayer
# 4 "data/maps/OldaleTown_Mart/scripts.pory"
	goto_if_unset FLAG_ADVENTURE_STARTED, OldaleTown_Mart_EventScript_Clerk_2
# 11 "data/maps/OldaleTown_Mart/scripts.pory"
	goto_if_unset FLAG_BADGE01_GET, OldaleTown_Mart_EventScript_Clerk_6
# 14 "data/maps/OldaleTown_Mart/scripts.pory"
	call Common_PoryScript_Clerk_Hellos
OldaleTown_Mart_EventScript_Clerk_5:
# 16 "data/maps/OldaleTown_Mart/scripts.pory"
	waitmessage
# 17 "data/maps/OldaleTown_Mart/scripts.pory"
	call Common_PoryScript_Clerk_PokemartByBadges
# 18 "data/maps/OldaleTown_Mart/scripts.pory"
	call Common_PoryScript_Clerk_Goodbyes
OldaleTown_Mart_EventScript_Clerk_1:
# 20 "data/maps/OldaleTown_Mart/scripts.pory"
	release
	end

OldaleTown_Mart_EventScript_Clerk_2:
# 5 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox OldaleTown_Mart_EventScript_Clerk_Text_0
# 6 "data/maps/OldaleTown_Mart/scripts.pory"
	message OldaleTown_Mart_EventScript_Clerk_Text_1
# 7 "data/maps/OldaleTown_Mart/scripts.pory"
	waitmessage
# 8 "data/maps/OldaleTown_Mart/scripts.pory"
	pokemart Pokemart_ZeroBadges_Some
# 9 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox OldaleTown_Mart_EventScript_Clerk_Text_2
	goto OldaleTown_Mart_EventScript_Clerk_1

OldaleTown_Mart_EventScript_Clerk_6:
# 12 "data/maps/OldaleTown_Mart/scripts.pory"
	message OldaleTown_Mart_EventScript_Clerk_Text_3
	goto OldaleTown_Mart_EventScript_Clerk_5


	.align 2
# 24 "data/maps/OldaleTown_Mart/scripts.pory"
Pokemart_ZeroBadges_Some:
# 25 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_POTION
# 26 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_POKE_DOLL
# 27 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_X_ACCURACY
# 28 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_GUARD_SPEC
# 29 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_DIRE_HIT
	.2byte ITEM_NONE

# 32 "data/maps/OldaleTown_Mart/scripts.pory"

# 33 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_MapScripts::
# 34 "data/maps/OldaleTown_Mart/scripts.pory"
	.byte 0
# 35 "data/maps/OldaleTown_Mart/scripts.pory"

# 36 "data/maps/OldaleTown_Mart/scripts.pory"
@ OldaleTown_Mart_EventScript_Clerk::
# 37 "data/maps/OldaleTown_Mart/scripts.pory"
@ 	lock
# 38 "data/maps/OldaleTown_Mart/scripts.pory"
@ 	faceplayer
# 39 "data/maps/OldaleTown_Mart/scripts.pory"
@ 	message gText_HowMayIServeYou
# 40 "data/maps/OldaleTown_Mart/scripts.pory"
@ 	waitmessage
# 41 "data/maps/OldaleTown_Mart/scripts.pory"
@ 	goto_if_set FLAG_ADVENTURE_STARTED, OldaleTown_Mart_ExpandedItems
# 42 "data/maps/OldaleTown_Mart/scripts.pory"
@ 	pokemart OldaleTown_Mart_Pokemart_Basic
# 43 "data/maps/OldaleTown_Mart/scripts.pory"
@ 	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 44 "data/maps/OldaleTown_Mart/scripts.pory"
@ 	release
# 45 "data/maps/OldaleTown_Mart/scripts.pory"
@ 	end
# 46 "data/maps/OldaleTown_Mart/scripts.pory"

# 47 "data/maps/OldaleTown_Mart/scripts.pory"
	.align 2
# 48 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_Pokemart_Basic:
# 49 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_POTION
# 50 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 51 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 52 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 53 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_NONE
# 54 "data/maps/OldaleTown_Mart/scripts.pory"
	release
# 55 "data/maps/OldaleTown_Mart/scripts.pory"
	end
# 56 "data/maps/OldaleTown_Mart/scripts.pory"

# 57 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_ExpandedItems::
# 58 "data/maps/OldaleTown_Mart/scripts.pory"
	pokemart OldaleTown_Mart_Pokemart_Expanded
# 59 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 60 "data/maps/OldaleTown_Mart/scripts.pory"
	release
# 61 "data/maps/OldaleTown_Mart/scripts.pory"
	end
# 62 "data/maps/OldaleTown_Mart/scripts.pory"

# 63 "data/maps/OldaleTown_Mart/scripts.pory"
	.align 2
# 64 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_Pokemart_Expanded:
# 65 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 66 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_POTION
# 67 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 68 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 69 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 70 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_NONE
# 71 "data/maps/OldaleTown_Mart/scripts.pory"
	release
# 72 "data/maps/OldaleTown_Mart/scripts.pory"
	end
# 73 "data/maps/OldaleTown_Mart/scripts.pory"

# 74 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_EventScript_Woman::
# 75 "data/maps/OldaleTown_Mart/scripts.pory"
	lock
# 76 "data/maps/OldaleTown_Mart/scripts.pory"
	faceplayer
# 77 "data/maps/OldaleTown_Mart/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, OldaleTown_Mart_EventScript_PokeBallsInStock
# 78 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox OldaleTown_Mart_Text_PokeBallsAreSoldOut, MSGBOX_DEFAULT
# 79 "data/maps/OldaleTown_Mart/scripts.pory"
	release
# 80 "data/maps/OldaleTown_Mart/scripts.pory"
	end
# 81 "data/maps/OldaleTown_Mart/scripts.pory"

# 82 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_EventScript_PokeBallsInStock::
# 83 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox OldaleTown_Mart_Text_ImGoingToBuyPokeBalls, MSGBOX_DEFAULT
# 84 "data/maps/OldaleTown_Mart/scripts.pory"
	release
# 85 "data/maps/OldaleTown_Mart/scripts.pory"
	end
# 86 "data/maps/OldaleTown_Mart/scripts.pory"

# 87 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_EventScript_Boy::
# 88 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox OldaleTown_Mart_Text_RestoreHPWithPotion, MSGBOX_NPC
# 89 "data/maps/OldaleTown_Mart/scripts.pory"
	end
# 90 "data/maps/OldaleTown_Mart/scripts.pory"

# 91 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_Text_PokeBallsAreSoldOut:
# 92 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "The clerk says they're all sold out.\n"
# 93 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "I can't buy any POKé BALLS.$"
# 94 "data/maps/OldaleTown_Mart/scripts.pory"

# 95 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_Text_ImGoingToBuyPokeBalls:
# 96 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "I'm going to buy a bunch of POKé BALLS\n"
# 97 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "and catch a bunch of POKéMON!$"
# 98 "data/maps/OldaleTown_Mart/scripts.pory"

# 99 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_Text_RestoreHPWithPotion:
# 100 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "If a POKéMON gets hurt and loses its HP\n"
# 101 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "and faints, it won't be able to battle.\p"
# 102 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "To prevent your POKéMON from fainting,\n"
# 103 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "restore its HP with a POTION.$"

OldaleTown_Mart_EventScript_Clerk_Text_0:
# 5 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "Sorry, but we're all out of Poké Balls at\n"
	.string "the moment.$"

OldaleTown_Mart_EventScript_Clerk_Text_1:
# 6 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "…anything else I can do for you?$"

OldaleTown_Mart_EventScript_Clerk_Text_2:
# 9 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "We'll be getting more in soon. See you\n"
	.string "then!$"

OldaleTown_Mart_EventScript_Clerk_Text_3:
# 12 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "We just got some balls back in stock!\n"
	.string "Would you like to get some now?$"
