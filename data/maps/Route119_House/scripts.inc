.set LOCALID_WOMAN, 1

Route119_House_MapScripts::
	.byte 0

Route119_House_EventScript_Woman::
	msgbox Route119_House_Text_RumorAboutCaveOfOrigin, MSGBOX_NPC
	turnobject LOCALID_WOMAN, DIR_NORTH
	end

Route119_House_EventScript_Wingull::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_WINGULL, CRY_MODE_NORMAL
	msgbox Route119_House_Text_Wingull, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Route119_House_Text_RumorAboutCaveOfOrigin:
	.string "I heard about a cave called the CAVE\n"
	.string "OF ORIGIN.\p"
	.string "People rumor that the spirits of\n"
	.string "POKéMON are revived there. Could\l"
	.string "something like that really happen?$"

Route119_House_Text_Wingull:
	.string "WINGULL: Pihyoh!$"

Route119_House_EventScript_RestWoman::
	lock
	faceplayer
	msgbox Route119_House_Text_RestUpHere, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Route119_House_EventScript_Rest
	goto_if_eq VAR_RESULT, NO, Route119_House_EventScript_DeclineRest
	end

Route119_House_EventScript_Rest::
	msgbox Route119_House_Text_TakeAllTheTimeYouNeed, MSGBOX_DEFAULT
	closemessage
	call Common_EventScript_OutOfCenterPartyHeal
	msgbox Route119_House_Text_FullyRecovered, MSGBOX_NPC
	release
	end

Route119_House_EventScript_DeclineRest::
	msgbox Route119_House_Text_DontBeShy, MSGBOX_DEFAULT
	release
	end

Route119_House_Text_RestUpHere:
	.string "Look at you!\n"
	.string "You must be tired.\p"
	.string "Why don't you and your POKéMON.\n"
	.string "take a rest here?.$"

Route119_House_Text_TakeAllTheTimeYouNeed:
	.string "Please take all the time you need.$"

Route119_House_Text_FullyRecovered:
	.string "Look at you!\n"
	.string "I can tell you've recovered fully!$"

Route119_House_Text_DontBeShy:
	.string "No need to be shy.\n"
	.string "You can rest here anytime!$"

