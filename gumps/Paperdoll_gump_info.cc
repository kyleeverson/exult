/*
Copyright (C) 2000 The Exult Team

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
*/

#include "game.h"
#include "gamewin.h"
#include "Paperdoll_gump.h"
#include "actors.h"

/*
 *
 *	SERPENT ISLE GUMPS
 *
 */

/*
 *
 *	NPC and Item Info Statics
 *
 */

Paperdoll_gump::Paperdoll_npc Paperdoll_gump::Characters[] = {

	// Shp, fmale, bsh, bf, hds, hf, hh, ash, af, a2, as
	
	// Avatar Female White
	{ 1029,  true,  13,  0,   4,  0,  1,   7,  0,  2,  4 },
	{ 1035,  true,  13,  0,   4,  0,  1,   7,  0,  2,  4 },
	{  989,  true,  13,  0,   4,  0,  1,   7,  0,  2,  4 },

	// Avatar Female Brown
	{ 1027,  true,  13,  1,   4,  2,  3, 130,  0,  2,  4 },
	{ 1033,  true,  13,  1,   4,  2,  3, 130,  0,  2,  4 },

	// Avatar Female Black
	{ 1025,  true,  13,  2,   4,  4,  5, 131,  0,  2,  4 },
	{ 1031,  true,  13,  2,   4,  4,  5, 131,  0,  2,  4 },
	
	// Avatar Male White
	{ 1028, false,  14,  0, 128,  0,  1,   7,  1,  3,  5 },
	{ 1034, false,  14,  0, 128,  0,  1,   7,  1,  3,  5 },
	{  721, false,  14,  0, 128,  0,  1,   7,  1,  3,  5 },

	// Avatar Male Brown
	{ 1026, false,  14,  1, 128,  2,  3, 130,  1,  3,  5 },
	{ 1032, false,  14,  1, 128,  2,  3, 130,  1,  3,  5 },

	// Avatar Male Black
	{ 1024, false,  14,  2, 128,  4,  5, 131,  1,  3,  5 },
	{ 1030, false,  14,  2, 128,  4,  5, 131,  1,  3,  5 },

	// Iolo
	{  465, false,  14,  0, 125,  0,  1,   7,  1,  3,  5 },

	// Shamino
	{  487, false,  14,  0, 126,  0,  1,   7,  1,  3,  5 },

	// Dupre
	{  488, false,  14,  0, 124,  0,  1,   7,  1,  3,  5 },

	// Automaton
	{  747, false,  14,  3, 145,  0,  1, 146,  1,  3,  5 },

	// Boyden
	{  815, false,  14,  0, 158,  0,  1,   7,  1,  3,  5 },

	// Petra
	{  658,  true,  13,  3, 137,  0,  1, 136,  0,  2,  4 },

	// Gwenno
	{  669,  true,  13,  0, 127,  0,  1,   7,  0,  2,  4 },

	// Sethys
	{  817, false,  14,  0, 159,  0,  1,   7,  1,  3,  5 },

	// Wilfred
	{  816, false,  14,  0, 154,  0,  1,   7,  1,  3,  5 },

	// Selina
	{  652,  true,  13,  0, 155,  0,  1,   7,  0,  2,  4 },

	// Mortegro
	{  809, false,  14,  0, 156,  0,  1,   7,  1,  3,  5 },

	// Stefano
	{  451, false,  14,  0, 157,  0,  1,   7,  1,  3,  5 },
	
	// Terminator
	{ 0 }
};

Paperdoll_gump::Paperdoll_item Paperdoll_gump::Items[] =
{
	// wshape, wf,        Equip spot, Object Type, Gender, shape, frame, frame2,  f3,  f4

	// MISC ITEMS
	
	// Usecode container (not drawn normally)
	{     486, -1, Actor::ucont_spot,   OT_Normal,   false,    6,     0 },
	// Bed roll
	{     583, -1,       Actor::back,   OT_Normal,   true,     9,     0 },
	{     583, -1,Actor::back2h_spot,   OT_Normal,   true,     9,     1 },
	// Kidney Belt
	{     584, -1,       Actor::belt,   OT_Normal,   true,    54,     0 },
	// Serpent Earings
	{     635, -1,  Actor::ears_spot,   OT_Normal,   true,    39,     0 },
	// Backpack
	{     801, -1,       Actor::back,   OT_Normal,  false,     6,     0 },
	// Bag
	{     802, -1,       Actor::belt,   OT_Normal,  false,    89,     0 },
	// Belt of Strength
	{     996, -1,       Actor::belt,   OT_Normal,   true,   166,     0 },
	// Spell book
	{     761, -1,      Actor::lhand,   OT_Single,  false,    15,     0 },
	// Lit Torch
	{     701, -1,      Actor::lhand,   OT_Single,  false,    63,     0 },
	{     701, -1,      Actor::rhand,   OT_Single,  false,    63,     1 },
	// Torch
	{     595, -1,      Actor::lhand,   OT_Single,  false,   113,     0 },
	{     595, -1,      Actor::rhand,   OT_Single,  false,   113,     1 },
	{     595, -1,       Actor::belt,   OT_Single,  false,   113,     2 },
	// Serpent Sceptre
	{     926, -1,      Actor::lhand,   OT_Single,  false,   144,     0 },
	{     926, -1,       Actor::belt,   OT_Single,  false,   144,     1 },
	// Body
	{     400, -1,      Actor::lhand,   OT_Single,  false,   135,     0 },
	{     400, -1,      Actor::rhand,   OT_Single,  false,   135,     1 },
	{     402, -1,      Actor::lhand,   OT_Single,  false,   135,     0 },
	{     402, -1,      Actor::rhand,   OT_Single,  false,   135,     1 },
	{     414, -1,      Actor::lhand,   OT_Single,  false,   135,     0 },
	{     414, -1,      Actor::rhand,   OT_Single,  false,   135,     1 },


	// AMULETS

	// Ankh
	{     955,  0,       Actor::neck,   OT_Normal,  false,     0,     0 },
	// Fellowship
	{     955,  1,       Actor::neck,   OT_Normal,  false,     0,     1 },
	// Serpent Neclace
	{     955,  2,       Actor::neck,   OT_Normal,  false,     0,     2 },
	// Amulet of Protection
	{     955,  3,       Actor::neck,   OT_Normal,  false,     0,     3 },
	// Batlin's
	{     955,  4,       Actor::neck,   OT_Normal,  false,     0,     4 },
	// Diamond Necklace
	{     955,  5,       Actor::neck,   OT_Normal,  false,     0,     5 },
	// Necklace
	{     955,  6,       Actor::neck,   OT_Normal,  false,     0,     6 },
	// Necklace of Bones
	{     955,  7,       Actor::neck,   OT_Normal,  false,     0,     7 },
	// White Diamond Necklace
	{     955,  8,       Actor::neck,   OT_Normal,  false,     0,     8 },
	// Amulet of Balance
	{     955,  9,       Actor::neck,   OT_Normal,  false,     0,     9 },


	// CLOAKS
	
	// Red
	{     227,  0, Actor::cloak_spot,   OT_Normal,  false,     28,    0,     -1 },
	{     227,  0, Actor::special_spot, OT_Normal,   true,     28,    1,     -1 },
	// Bear
	{     227,  1, Actor::cloak_spot,   OT_Normal,  false,      8,    0,     -1 },
	{     227,  1, Actor::special_spot, OT_Normal,   true,      8,    1,     -1 },
	// Snow Leopard
	{     227,  2, Actor::cloak_spot,   OT_Normal,  false,     61,    0,     -1 },
	{     227,  2, Actor::special_spot, OT_Normal,   true,     61,    1,     -1 },
	// Wolf
	{     227,  3, Actor::cloak_spot,   OT_Normal,  false,    116,    0,     -1 },
	{     227,  3, Actor::special_spot, OT_Normal,   true,    116,    1,     -1 },
	// Gwanni
	{     227,  3, Actor::cloak_spot,   OT_Normal,  false,    164,    0,     -1 },
	{     227,  3, Actor::special_spot, OT_Normal,   true,    164,    1,     -1 },
	// 'Cloak'
	{     403,  0, Actor::cloak_spot,   OT_Normal,  false,     28,    0,     -1 },
	{     403,  0, Actor::special_spot, OT_Normal,   true,     28,    1,     -1 },


	// ARMOUR
	
	// Breast Plate
	{     419, -1,      Actor::torso,   OT_Shield,   true,   140,     0,      2,   4,  6 },
	// Leather
	{     569, -1,      Actor::torso,   OT_Shield,   true,    57,     0,      2,   4,  6 },
	// Scale
	{     570, -1,      Actor::torso,   OT_Shield,   true,    92,     0,      2,   4,  6 },
	// Chain
	{     571, -1,      Actor::torso,   OT_Shield,   true,    22,     0,      2,   4,  6 },
	// Plate
	{     573, -1,      Actor::torso,   OT_Shield,   true,    85,     0,      2,   4,  6 },
	// Serpent
	{     638, -1,      Actor::torso,   OT_Shield,   true,    94,     0,      2,   4,  6 },
	// Magic
	{     666, -1,      Actor::torso,   OT_Shield,   true,     2,     0,      2,   4,  6 },
	// Antique
	{     836, -1,      Actor::torso,   OT_Shield,   true,     1,     0,      2,   4,  6 },


	// HELMS

	// Magic
	{     383, 0,        Actor::head,     OT_Helm,   true,    74,     0 },
	// Helm Of Courage
	{     383, 1,        Actor::head,     OT_Helm,   true,   162,     0 },
	// Chain Coif
	{     539, 0,        Actor::head,     OT_Helm,   true,    24,     0 },
	// Great Helm
	{     541, 0,        Actor::head,     OT_Helm,   true,    30,     0 },
	// Crested Helm
	{     542, 0,        Actor::head,     OT_Helm,   true,    31,     0 },
	// Plummed Helm
	{     542, 1,        Actor::head,     OT_Helm,   true,    88,     0 },
	// Viking Helm
	{     542, 2,        Actor::head,     OT_Helm,   true,   114,     0 },
	// Leather Helm
	{    1004, 0,        Actor::head,     OT_Helm,   true,    59,     0 },
	// Fur Cap
	{    1004, 1,        Actor::head,     OT_Helm,   true,   129,     0 },
	// Serpent Crown
	{    1004, 2,        Actor::head,   OT_Normal,   true,    33,     0 },
	// Living Toupe
	{    1004, 3,        Actor::head,     OT_Helm,   true,   165,     0 },
	// Womans Fur Cap
	{    1004, 4,        Actor::head,     OT_Helm,   true,   129,     0 },
	// Helm of Light
	{    1013, 0,        Actor::head,     OT_Helm,   true,   169,     0 },

	
	// LEGGINGS

	// Leather
	{     574, -1,        Actor::legs,     OT_Normal,   true,    60,     0 },
	// Chain
	{     575, -1,        Actor::legs,     OT_Normal,   true,    26,     0 },
	// Plate
	{     576, -1,        Actor::legs,     OT_Normal,   true,    87,     0 },
	// Fine Stockings
	{     677, 0,         Actor::legs,     OT_Normal,   true,   152,     0 },
	// Fishnet Stockings
	{     677, 1,         Actor::legs,     OT_Normal,   true,   153,     0 },
	// Magic Leggings
	{     686, -1,        Actor::legs,     OT_Normal,   true,    72,     0 },

	
	// GLOVES

	// Leather
	{     579, -1, Actor::hands2_spot,  OT_Normal,  false,    47,     0,      1,   2 },
	// Gauntlets
	{     580, -1, Actor::hands2_spot,  OT_Normal,  false,    25,     0,      1,   2 },
	// Magic Gauntlets
	{     835, -1, Actor::hands2_spot,  OT_Normal,  false,    70,     0,      1,   2 },
	// Gauntlets of Quickness
	{    1001, -1, Actor::hands2_spot,  OT_Normal,  false,   167,     0,      1,   2 },


	// RINGS

	// Invisibilty Ring
	{     296, 0,      Actor::lfinger,   OT_Normal,   true,   120,     0,      2,   4 },
	{     296, 0,      Actor::rfinger,   OT_Normal,   true,   120,     1,      3,   5 },
	// Ring of Regeneration
	{     296, 1,      Actor::lfinger,   OT_Normal,   true,   122,     0,      2,   4 },
	{     296, 1,      Actor::rfinger,   OT_Normal,   true,   122,     1,      3,   5 },
	// Blink Ring
	{     296, 2,      Actor::lfinger,   OT_Normal,   true,   148,     0,      2,   4  },
	{     296, 2,      Actor::rfinger,   OT_Normal,   true,   148,     1,      3,   5 },
	// Ring of Reagents
	{     296, 3,      Actor::lfinger,   OT_Normal,   true,   148,     0,      2,   4 },
	{     296, 3,      Actor::rfinger,   OT_Normal,   true,   148,     1,      3,   5 },
	// Ring
	{     887, 0,      Actor::lfinger,   OT_Normal,   true,   147,     0,      2,   4 },
	{     887, 0,      Actor::rfinger,   OT_Normal,   true,   147,     1,      3,   5 },
	// Serpent Ring
	{     887, 1,      Actor::lfinger,   OT_Normal,   true,   149,     0,      2,   4 },
	{     887, 1,      Actor::rfinger,   OT_Normal,   true,   149,     1,      3,   5 },


	// BOOTS
	
	// Leather
	{     587, 0,         Actor::feet,   OT_Normal,   true,    58,     0 },
	// Magic
	{     587, 1,         Actor::feet,   OT_Normal,   true,    73,     0 },
	// Armoured
	{     587, 2,         Actor::feet,   OT_Normal,   true,    86,     0 },
	// Fur
	{     587, 3,         Actor::feet,   OT_Normal,   true,    46,     0 },
	// Black
	{     587, 4,         Actor::feet,   OT_Normal,   true,   150,     0 },
	// Slippers
	{     587, 5,         Actor::feet,   OT_Normal,   true,   151,     0 },
	// Swamp
	{     587, 6,         Actor::feet,   OT_Normal,   true,   106,     0 },
	

	// SHIELDS (behind back = 99)

	// Dupre's
	{     490, -1,       Actor::rhand,   OT_Shield,  false,   141,     0 },
	{     490, -1, Actor::shield_spot,   OT_Shield,  false,    99,     0 },
	// Buckler
	{     543, -1,       Actor::rhand,   OT_Shield,  false,    20,     0 },
	{     543, -1, Actor::shield_spot,   OT_Shield,  false,    99,     2 },
	// Curved Heater
	{     545, -1,       Actor::rhand,   OT_Shield,  false,    34,     0 },
	{     545, -1, Actor::shield_spot,   OT_Shield,  false,    99,     0 },
	// Wooden
	{     572, -1,       Actor::rhand,   OT_Shield,  false,   117,     0 },
	{     572, -1, Actor::shield_spot,   OT_Shield,  false,    99,     2 },
	// Spiked
	{     578, -1,       Actor::rhand,   OT_Shield,  false,   104,     0 },
	{     578, -1, Actor::shield_spot,   OT_Shield,  false,    99,     2 },
	// Door
	{     585, -1,       Actor::rhand,   OT_Shield,  false,    38,     0 },
	{     585, -1, Actor::shield_spot,   OT_Shield,  false,    99,     0 },
	// Brass
	{     586, -1,       Actor::rhand,   OT_Shield,  false,    19,     0 },
	{     586, -1, Actor::shield_spot,   OT_Shield,  false,    99,     0 },
	// Kite
	{     609, -1,       Actor::rhand,   OT_Shield,  false,    37,     0 },
	{     609, -1, Actor::shield_spot,   OT_Shield,  false,    99,     0 },
	// Magic
	{     663, -1,       Actor::rhand,   OT_Shield,  false,    75,     0 },
	{     663, -1, Actor::shield_spot,   OT_Shield,  false,    99,     0 },
	// Shield of Monitor
	{     729, -1,       Actor::rhand,   OT_Shield,  false,   142,     0 },
	{     729, -1, Actor::shield_spot,   OT_Shield,  false,    99,     0 },

	// WEAPONS 1 H
	
	// Magebane
	{     231, -1,      Actor::lhand,   OT_Single,  false,    67,     0},
	{     231, -1,       Actor::belt,   OT_Single,  false,    67,     1},
	// Spear
	{     592, -1,      Actor::lhand,    OT_Staff,  false,   103,     0 },
	{     592, -1,       Actor::back,    OT_Staff,  false,   103,     1 },
	// Blowgun
	{     563, -1,      Actor::lhand,   OT_Single,  false,    12,     0 },
	{     563, -1,       Actor::belt,   OT_Single,  false,    12,     1 },
	// Boomerang
	{     605, -1,      Actor::lhand,   OT_Single,  false,    16,     0 },
	{     605, -1,       Actor::belt,   OT_Single,  false,    16,     1 },
	// Club
	{     590, -1,      Actor::lhand,   OT_Single,  false,    29,     0 },
	{     590, -1,       Actor::belt,   OT_Single,  false,    29,     1 },
	// Dagger
	{     594, -1,      Actor::lhand,   OT_Single,  false,    35,     0 },
	{     594, -1,       Actor::belt,   OT_Single,  false,    35,     1 },
	// Poisoned Dagger
	{     564, -1,      Actor::lhand,   OT_Single,  false,    36,     0 },
	{     564, -1,       Actor::belt,   OT_Single,  false,    36,     1 },
	// Fire Sword
	{     551, -1,      Actor::lhand,   OT_Single,  false,    41,     0 },
	{     551, -1,       Actor::belt,   OT_Single,  false,    41,     1 },
	// Fire Wand
	{     630, -1,      Actor::lhand,   OT_Single,  false,    42,     0 },
	{     630, -1,       Actor::belt,   OT_Single,  false,    42,     1 },
	// Glass Sword
	{     604, -1,      Actor::lhand,   OT_Single,  false,    48,     0 },
	{     604, -1,       Actor::belt,   OT_Single,  false,    48,     1 },
	// Hammer
	{     623, -1,      Actor::lhand,   OT_Single,  false,    50,     0 },
	{     623, -1,       Actor::belt,   OT_Single,  false,    50,     1 },
	// Lightning Whip
	{     549, -1,      Actor::lhand,   OT_Single,  false,    62,     0 },
	{     549, -1,       Actor::belt,   OT_Single,  false,    62,     1 },
	// Mace
	{     659, -1,      Actor::lhand,   OT_Single,  false,    66,     0 },
	{     659, -1,       Actor::belt,   OT_Single,  false,    66,     1 },
	// Magic Sword
	{     547, -1,      Actor::lhand,   OT_Single,  false,    76,     0 },
	{     547, -1,       Actor::belt,   OT_Single,  false,    76,     1 },
	// Magic Axe
	{     552, -1,      Actor::lhand,   OT_Single,  false,    77,     0 },
	{     552, -1,       Actor::belt,   OT_Single,  false,    77,     1 },
	// Magician's Wand
	{     792, -1,      Actor::lhand,   OT_Single,  false,    78,     0 },
	{     792, -1,       Actor::belt,   OT_Single,  false,    78,     1 },
	// Morning Star
	{     596, -1,      Actor::lhand,   OT_Single,  false,    81,     0 },
	{     596, -1,       Actor::belt,   OT_Single,  false,    81,     1 },
	// Serpentine Dagger
	{     636, -1,      Actor::lhand,   OT_Single,  false,    95,     0 },
	{     636, -1,       Actor::belt,   OT_Single,  false,    95,     1 },
	// Serpent Sword
	{     637, -1,      Actor::lhand,   OT_Single,  false,    97,     0 },
	{     637, -1,       Actor::belt,   OT_Single,  false,    97,     1 },
	// Ophidian Sword
	{     710, -1,      Actor::lhand,   OT_Single,  false,    97,     0 },
	{     710, -1,       Actor::belt,   OT_Single,  false,    97,     1 },
	// Shears 
	{     698, -1,      Actor::lhand,   OT_Single,  false,    98,     0 },
	{     698, -1,       Actor::belt,   OT_Single,  false,    98,     1 },
	// Magic Sling
	{     474, -1,      Actor::lhand,   OT_Single,  false,   102,     0 },
	{     474, -1,       Actor::belt,   OT_Single,  false,   102,     1 },
	// Sword
	{     599, -1,      Actor::lhand,   OT_Single,  false,   107,     0 },
	{     599, -1,       Actor::belt,   OT_Single,  false,   107,     1 },
	// Decorative Sword
	{     608, -1,      Actor::lhand,   OT_Single,  false,   109,     0 },
	{     608, -1,       Actor::belt,   OT_Single,  false,   109,     1 },
	// Sword of Defense
	{     567, -1,      Actor::lhand,   OT_Single,  false,   110,     0 },
	{     567, -1,       Actor::belt,   OT_Single,  false,   110,     1 },
	// Throwing Axe
	{     593, -1,      Actor::lhand,   OT_Single,  false,   111,     0 },
	{     593, -1,       Actor::belt,   OT_Single,  false,   111,     1 },
	// Tongs
	{     994, -1,      Actor::lhand,   OT_Single,  false,   112,     0 },
	{     994, -1,       Actor::belt,   OT_Single,  false,   112,     1 },
	// Whip
	{     622, -1,      Actor::lhand,   OT_Single,  false,   115,     0 },
	{     622, -1,       Actor::belt,   OT_Single,  false,   115,     1 },
	// Lightning Wand
	{     629, -1,      Actor::lhand,   OT_Single,  false,   118,     0 },
	{     629, -1,       Actor::belt,   OT_Single,  false,   118,     1 },
	// Rudyom's Wand
	{     771, -1,      Actor::lhand,   OT_Single,  false,   134,     0 },
	{     771, -1,       Actor::belt,   OT_Single,  false,   134,     1 },
	// Dragon Slayer Sword
	{     535, -1,      Actor::lhand,   OT_Single,  false,   143,     0 },
	{     535, -1,       Actor::belt,   OT_Single,  false,   143,     1 },
	// Wooden Sword
	{     520, -1,      Actor::lhand,   OT_Single,  false,   161,     0 },
	{     520, -1,       Actor::belt,   OT_Single,  false,   161,     1 },
	// Hammer
	{     508, -1,      Actor::lhand,   OT_Single,  false,   163,     0 },
	{     508, -1,       Actor::belt,   OT_Single,  false,   163,     1 },
	// Erinons Axe
	{     990, -1,      Actor::lhand,   OT_Single,  false,   168,     0 },
	{     990, -1,       Actor::belt,   OT_Single,  false,   168,     1 },

	
	// WEAPONS 2H

	// The Hammer of Dedication
	{     942, -1,      Actor::lhand,   OT_Double,  false,   138,     0 },
	{     942, -1,Actor::back2h_spot,   OT_Double,  false,   138,     1 },
	// Two Handed Sword
	{     602, -1,      Actor::lhand,   OT_Double,  false,   108,     0 },
	{     602, -1,Actor::back2h_spot,   OT_Double,  false,   108,     1 },
	// Staff
	{     241, -1,      Actor::lhand,    OT_Staff,  false,   105,     0 },
	{     241, -1,Actor::back2h_spot,    OT_Staff,  false,   105,     1 },
	// Shovel
	{     625, -1,      Actor::lhand,    OT_Staff,  false,   100,     0 },
	{     625, -1,Actor::back2h_spot,    OT_Staff,  false,   100,     1 },
	// Scythe
	{     618, -1,      Actor::lhand,    OT_Staff,  false,    93,     0 },
	{     618, -1,Actor::back2h_spot,    OT_Staff,  false,    93,     1 },
	// Rake
	{     620, -1,      Actor::lhand,    OT_Staff,  false,    91,     0 },
	{     620, -1,Actor::back2h_spot,    OT_Staff,  false,    91,     1 },
	// Pitchfork
	{     589, -1,      Actor::lhand,    OT_Staff,  false,    84,     0 },
	{     589, -1,Actor::back2h_spot,    OT_Staff,  false,    84,     1 },
	// Pick
	{     624, -1,      Actor::lhand,   OT_Double,  false,    83,     0 },
	{     624, -1,Actor::back2h_spot,   OT_Double,  false,    83,     1 },
	// Jugganaught Hammer
	{     557, -1,      Actor::lhand,   OT_Double,  false,    53,     0 },
	{     557, -1,Actor::back2h_spot,   OT_Double,  false,    53,     1 },
	// Hoe
	{     626, -1,      Actor::lhand,    OT_Staff,  false,    52,     0 },
	{     626, -1,Actor::back2h_spot,    OT_Staff,  false,    52,     1 },
	// Hailbred
	{     603, -1,      Actor::lhand,    OT_Staff,  false,    49,     0 },
	{     603, -1,Actor::back2h_spot,    OT_Staff,  false,    49,     1 },
	// Fishing Rod
	{     662, -1,      Actor::lhand,    OT_Staff,  false,    44,     0 },
	{     662, -1,Actor::back2h_spot,    OT_Staff,  false,    44,     1 },
	// Firedoom Staff
	{     553, -1,      Actor::lhand,    OT_Staff,  false,    43,     0 },
	{     553, -1,Actor::back2h_spot,    OT_Staff,  false,    43,     1 },
	// Two Handed Axe
	{     601, -1,      Actor::lhand,   OT_Double,  false,     5,     0 },
	{     601, -1,      Actor::lhand,   OT_Double,  false,     5,     1 },
	// Serpent Staff
	{     640, -1,      Actor::lhand,    OT_Staff,  false,     96,     0 },
	{     640, -1,Actor::back2h_spot,    OT_Staff,  false,     96,     1 },
	// Two Handed Hammer
	{     600, -1,      Actor::lhand,   OT_Double,  false,     51,     0 },
	{     600, -1,Actor::back2h_spot,   OT_Double,  false,     51,     1 },
	// The Black Sword
	{     806, -1,      Actor::lhand,   OT_Double,  false,    139,     0 },
	{     806, -1,Actor::back2h_spot,   OT_Double,  false,    139,     1 },

	// CROSSBOWS & BOLTS

	// Magic Bolts
	{     417, 25,       Actor::ammo, OT_Crossbow,  false,    133,    2,      2, 0 }, // 2
	{     417, 26,       Actor::ammo, OT_Crossbow,  false,    133,    3,      2, 0 }, // 3
	{     417, 27,       Actor::ammo, OT_Crossbow,  false,    133,    3,      3, 0 }, 
	{     417, 28,       Actor::ammo, OT_Crossbow,  false,    133,    4,      3, 0 },
	{     417, 29,       Actor::ammo, OT_Crossbow,  false,    133,    4,      4, 0 },
	{     417, 30,       Actor::ammo, OT_Crossbow,  false,    133,    4,      4, 0 },
	{     417, 31,       Actor::ammo, OT_Crossbow,  false,    133,    4,      4, 0 },
	{     417, -1,       Actor::ammo, OT_Crossbow,  false,    133,    2,      1, 0 }, // 1
	// Bolts
	{     723, 25,       Actor::ammo, OT_Crossbow,  false,    132,    2,      2, 0 },
	{     723, 26,       Actor::ammo, OT_Crossbow,  false,    132,    3,      2, 0 },
	{     723, 27,       Actor::ammo, OT_Crossbow,  false,    132,    3,      3, 0 },
	{     723, 28,       Actor::ammo, OT_Crossbow,  false,    132,    4,      3, 0 },
	{     723, 29,       Actor::ammo, OT_Crossbow,  false,    132,    4,      4, 0 },
	{     723, 30,       Actor::ammo, OT_Crossbow,  false,    132,    4,      4, 0 },
	{     723, 31,       Actor::ammo, OT_Crossbow,  false,    132,    4,      4, 0 },
	{     723, -1,       Actor::ammo, OT_Crossbow,  false,    132,    2,      1, 0 },
	// Crossbow
	{     598, -1,      Actor::lhand, OT_Crossbow,  false,     32,    0 },
	{     598, -1,       Actor::belt, OT_Crossbow,  false,     32,    1 },

	
	// BOWS & ARROWS

	// Burst Arrows
	{     554, 25,       Actor::ammo,      OT_Bow,  false,    21,    2,      2, 0 },
	{     554, 26,       Actor::ammo,      OT_Bow,  false,    21,    3,      2, 0 },
	{     554, 27,       Actor::ammo,      OT_Bow,  false,    21,    3,      3, 0 },
	{     554, 28,       Actor::ammo,      OT_Bow,  false,    21,    4,      3, 0 },
	{     554, 29,       Actor::ammo,      OT_Bow,  false,    21,    4,      4, 0 },
	{     554, 30,       Actor::ammo,      OT_Bow,  false,    21,    4,      4, 0 },
	{     554, 31,       Actor::ammo,      OT_Bow,  false,    21,    4,      4, 0 },
	{     554, -1,       Actor::ammo,      OT_Bow,  false,    21,    2,      1, 0 },
	// Magic Arrows
	{     556, 25,       Actor::ammo,      OT_Bow,  false,    68,    2,      2, 0 },
	{     556, 26,       Actor::ammo,      OT_Bow,  false,    68,    3,      2, 0 },
	{     556, 27,       Actor::ammo,      OT_Bow,  false,    68,    3,      3, 0 },
	{     556, 28,       Actor::ammo,      OT_Bow,  false,    68,    4,      3, 0 },
	{     556, 29,       Actor::ammo,      OT_Bow,  false,    68,    4,      4, 0 },
	{     556, 30,       Actor::ammo,      OT_Bow,  false,    68,    4,      4, 0 },
	{     556, 31,       Actor::ammo,      OT_Bow,  false,    68,    4,      4, 0 },
	{     556, -1,       Actor::ammo,      OT_Bow,  false,    68,    2,      1, 0 },
	// Lucky Arrows
	{     558, 25,       Actor::ammo,      OT_Bow,  false,    65,    2,      2, 0 },
	{     558, 26,       Actor::ammo,      OT_Bow,  false,    65,    3,      2, 0 },
	{     558, 27,       Actor::ammo,      OT_Bow,  false,    65,    3,      3, 0 },
	{     558, 28,       Actor::ammo,      OT_Bow,  false,    65,    4,      3, 0 },
	{     558, 29,       Actor::ammo,      OT_Bow,  false,    65,    4,      4, 0 },
	{     558, 30,       Actor::ammo,      OT_Bow,  false,    65,    4,      4, 0 },
	{     558, 31,       Actor::ammo,      OT_Bow,  false,    65,    4,      4, 0 },
	{     558, -1,       Actor::ammo,      OT_Bow,  false,    65,    2,      1, 0 },
	// Sleep Arrows
	{     568, 25,       Actor::ammo,      OT_Bow,  false,   101,    2,      2, 0 },
	{     568, 26,       Actor::ammo,      OT_Bow,  false,   101,    3,      2, 0 },
	{     568, 27,       Actor::ammo,      OT_Bow,  false,   101,    3,      3, 0 },
	{     568, 28,       Actor::ammo,      OT_Bow,  false,   101,    4,      3, 0 },
	{     568, 29,       Actor::ammo,      OT_Bow,  false,   101,    4,      4, 0 },
	{     568, 30,       Actor::ammo,      OT_Bow,  false,   101,    4,      4, 0 },
	{     568, 31,       Actor::ammo,      OT_Bow,  false,   101,    4,      4, 0 },
	{     568, -1,       Actor::ammo,      OT_Bow,  false,   101,    2,      1, 0 },
	// Serpent Arrows
	{     591, 25,       Actor::ammo,      OT_Bow,  false,    64,    2,      2, 0 },
	{     591, 26,       Actor::ammo,      OT_Bow,  false,    64,    3,      2, 0 },
	{     591, 27,       Actor::ammo,      OT_Bow,  false,    64,    3,      3, 0 },
	{     591, 28,       Actor::ammo,      OT_Bow,  false,    64,    4,      3, 0 },
	{     591, 29,       Actor::ammo,      OT_Bow,  false,    64,    4,      4, 0 },
	{     591, 30,       Actor::ammo,      OT_Bow,  false,    64,    4,      4, 0 },
	{     591, 31,       Actor::ammo,      OT_Bow,  false,    64,    4,      4, 0 },
	{     591, -1,       Actor::ammo,      OT_Bow,  false,    64,    2,      1, 0 },
	// Arrows
	{     722, 25,       Actor::ammo,      OT_Bow,  false,     3,    2,      2, 0 },
	{     722, 26,       Actor::ammo,      OT_Bow,  false,     3,    3,      2, 0 },
	{     722, 27,       Actor::ammo,      OT_Bow,  false,     3,    3,      3, 0 },
	{     722, 28,       Actor::ammo,      OT_Bow,  false,     3,    4,      3, 0 },
	{     722, 29,       Actor::ammo,      OT_Bow,  false,     3,    4,      4, 0 },
	{     722, 30,       Actor::ammo,      OT_Bow,  false,     3,    4,      4, 0 },
	{     722, 31,       Actor::ammo,      OT_Bow,  false,     3,    4,      4, 0 },
	{     722, -1,       Actor::ammo,      OT_Bow,  false,     3,    2,      1, 0 },
	// Bow
	{     597, -1,      Actor::lhand,      OT_Bow,  false,    17,     0 },
	{     597, -1,Actor::back2h_spot,      OT_Bow,  false,    17,     1 },
	// Magic Bow
	{     606, -1,      Actor::lhand,      OT_Bow,  false,    69,     0 },
	{     606, -1,Actor::back2h_spot,      OT_Bow,  false,    69,     1 },
	// Infinity Bow
	{     711, -1,      Actor::lhand,   OT_Single,  false,   160,     0 },
	{     711, -1,Actor::back2h_spot,   OT_Single,  false,   160,     1 },

	// Terminator
	{ 0 }
};

Paperdoll_gump::Paperdoll_npc *Paperdoll_gump::GetCharacterInfo(int shape)
{
	int i=0;
	
	while (Characters[i].npc_shape)
	{
		if (Characters[i].npc_shape == shape)
			return Characters+i;
		i++;
	}
	
	return Characters;
}

Paperdoll_gump::Paperdoll_item *Paperdoll_gump::GetItemInfo(int shape, int frame, int spot)
{
	int i=0;
	
	while (Items[i].world_shape)
	{
		if (Items[i].world_shape == shape
			&& (frame == -1 || Items[i].world_frame == -1 || Items[i].world_frame == frame)
			&& (spot == -1 || Items[i].spot == spot)
			)
			return Items+i;
		i++;
	}
	
	return NULL;
}

