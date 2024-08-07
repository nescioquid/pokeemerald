FallarborTown_Mart_EventScript_Woman::
# 2 "data/maps/FallarborTown_Mart/scripts.pory"
	lock
# 3 "data/maps/FallarborTown_Mart/scripts.pory"
	faceplayer
# 4 "data/maps/FallarborTown_Mart/scripts.pory"
	msgbox FallarborTown_Mart_EventScript_Woman_Text_0
# 5 "data/maps/FallarborTown_Mart/scripts.pory"
	release
	end


FallarborTown_Mart_EventScript_Pikachu::
# 10 "data/maps/FallarborTown_Mart/scripts.pory"
	lock
# 11 "data/maps/FallarborTown_Mart/scripts.pory"
	faceplayer
# 12 "data/maps/FallarborTown_Mart/scripts.pory"
	waitse
# 13 "data/maps/FallarborTown_Mart/scripts.pory"
	playmoncry SPECIES_PIKACHU, CRY_MODE_NORMAL
# 14 "data/maps/FallarborTown_Mart/scripts.pory"
	msgbox FallarborTown_Mart_EventScript_Pikachu_Text_0
# 15 "data/maps/FallarborTown_Mart/scripts.pory"
	waitmoncry
# 16 "data/maps/FallarborTown_Mart/scripts.pory"
	release
	end


# 20 "data/maps/FallarborTown_Mart/scripts.pory"

# 21 "data/maps/FallarborTown_Mart/scripts.pory"
FallarborTown_Mart_MapScripts::
# 22 "data/maps/FallarborTown_Mart/scripts.pory"
	.byte 0
# 23 "data/maps/FallarborTown_Mart/scripts.pory"

# 24 "data/maps/FallarborTown_Mart/scripts.pory"
FallarborTown_Mart_EventScript_Clerk::
# 25 "data/maps/FallarborTown_Mart/scripts.pory"
	lock
# 26 "data/maps/FallarborTown_Mart/scripts.pory"
	faceplayer
# 27 "data/maps/FallarborTown_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 28 "data/maps/FallarborTown_Mart/scripts.pory"
	waitmessage
# 29 "data/maps/FallarborTown_Mart/scripts.pory"
	pokemart FallarborTown_Mart_Pokemart
# 30 "data/maps/FallarborTown_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 31 "data/maps/FallarborTown_Mart/scripts.pory"
	release
# 32 "data/maps/FallarborTown_Mart/scripts.pory"
	end
# 33 "data/maps/FallarborTown_Mart/scripts.pory"

# 34 "data/maps/FallarborTown_Mart/scripts.pory"
	.align 2
# 35 "data/maps/FallarborTown_Mart/scripts.pory"
FallarborTown_Mart_Pokemart:
# 36 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 37 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 38 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 39 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 40 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 41 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 42 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_X_SP_ATK
# 43 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_X_SPEED
# 44 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_X_ATTACK
# 45 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_X_DEFENSE
# 46 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_DIRE_HIT
# 47 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_GUARD_SPEC
# 48 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_NONE
# 49 "data/maps/FallarborTown_Mart/scripts.pory"
	release
# 50 "data/maps/FallarborTown_Mart/scripts.pory"
	end
# 51 "data/maps/FallarborTown_Mart/scripts.pory"

# 52 "data/maps/FallarborTown_Mart/scripts.pory"
@ FallarborTown_Mart_EventScript_Woman::
# 53 "data/maps/FallarborTown_Mart/scripts.pory"
@ 	msgbox FallarborTown_Mart_Text_DecidingSkittyEvolve, MSGBOX_NPC
# 54 "data/maps/FallarborTown_Mart/scripts.pory"
@ 	end
# 55 "data/maps/FallarborTown_Mart/scripts.pory"

# 56 "data/maps/FallarborTown_Mart/scripts.pory"
FallarborTown_Mart_EventScript_PokefanM::
# 57 "data/maps/FallarborTown_Mart/scripts.pory"
	msgbox FallarborTown_Mart_Text_SellNuggetIFound, MSGBOX_NPC
# 58 "data/maps/FallarborTown_Mart/scripts.pory"
	end
# 59 "data/maps/FallarborTown_Mart/scripts.pory"

# 60 "data/maps/FallarborTown_Mart/scripts.pory"
FallarborTown_Mart_EventScript_Skitty::
# 61 "data/maps/FallarborTown_Mart/scripts.pory"
	lock
# 62 "data/maps/FallarborTown_Mart/scripts.pory"
	faceplayer
# 63 "data/maps/FallarborTown_Mart/scripts.pory"
	waitse
# 64 "data/maps/FallarborTown_Mart/scripts.pory"
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
# 65 "data/maps/FallarborTown_Mart/scripts.pory"
	msgbox FallarborTown_Mart_Text_Skitty, MSGBOX_DEFAULT
# 66 "data/maps/FallarborTown_Mart/scripts.pory"
	waitmoncry
# 67 "data/maps/FallarborTown_Mart/scripts.pory"
	release
# 68 "data/maps/FallarborTown_Mart/scripts.pory"
	end
# 69 "data/maps/FallarborTown_Mart/scripts.pory"

# 70 "data/maps/FallarborTown_Mart/scripts.pory"
FallarborTown_Mart_Text_DecidingSkittyEvolve:
# 71 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "I'm having a hard time deciding if I\n"
# 72 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "should make my SKITTY evolve or not.\p"
# 73 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "I only have to use this MOON STONE,\n"
# 74 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "but it's so hard to decide…\p"
# 75 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "If I make it evolve, it will become\n"
# 76 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "much stronger.\p"
# 77 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "But it will look so different, too.$"
# 78 "data/maps/FallarborTown_Mart/scripts.pory"

# 79 "data/maps/FallarborTown_Mart/scripts.pory"
FallarborTown_Mart_Text_Skitty:
# 80 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "SKITTY: Miyao?$"
# 81 "data/maps/FallarborTown_Mart/scripts.pory"

# 82 "data/maps/FallarborTown_Mart/scripts.pory"
FallarborTown_Mart_Text_SellNuggetIFound:
# 83 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "This NUGGET I found here…\n"
# 84 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "I suppose I'll have to sell it, seeing\l"
# 85 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "as how it has no other use.$"

FallarborTown_Mart_EventScript_Woman_Text_0:
# 4 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "I'm having a hard time deciding if I\n"
	.string "should make my Pikachu evolve or not.\p"
	.string "I only have to use this Thunder Stone,\n"
	.string "but it's so hard to decide…\p"
	.string "If I make it evolve, it will become much\n"
	.string "stronger.\p"
	.string "But it will look so different, too.$"

FallarborTown_Mart_EventScript_Pikachu_Text_0:
# 14 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "Pikachu: Pikaaaa!$"
