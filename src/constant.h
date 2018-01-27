// Copyright (c) 1981-86 Robert A. Koeneke
// Copyright (c) 1987-94 James E. Wilson
//
// This work is free software released under the GNU General Public License
// version 2.0, and comes with ABSOLUTELY NO WARRANTY.
//
// See LICENSE and AUTHORS for more information.

// Global constants used by Moria

// Note to the Wizard:
//
// Tweaking these constants can *GREATLY* change the game.
// Two years of constant tuning have generated these
// values. Minor adjustments are encouraged, but you must
// be very careful not to unbalance the game. Moria was
// meant to be challenging, not a give away. Many
// adjustments can cause the game to act strangely, or even
// cause errors. -RAK-

// Addendum:
// I have greatly expanded the number of defined constants. However, if
// you change anything below, without understanding EXACTLY how the game
// uses the number, the program may stop working correctly. Modify the
// constants at your own risk. -JEW-

// How many messages to save in the buffer -CJS-
constexpr uint8_t MESSAGE_HISTORY_SIZE = 22;

// Store constants
constexpr uint8_t MAX_OWNERS = 18;                // Number of owners to choose from
constexpr uint8_t MAX_STORES = 6;                 // Number of different stores
constexpr uint8_t STORE_MAX_DISCRETE_ITEMS = 24;  // Max number of discrete objects in inventory
constexpr uint8_t STORE_MAX_ITEM_TYPES = 26;      // Number of items to choose stock from
constexpr uint8_t COST_ADJUSTMENT = 100;          // Adjust prices for buying and selling

// Treasure constants
constexpr uint8_t TREASURE_MAX_LEVELS = 50;           // Maximum level of magic in dungeon

// Note that the following constants are all related, if you change one, you
// must also change all succeeding ones.
// Also, player_base_provisions[] and store_choices[] may also have to be changed.
constexpr uint16_t MAX_OBJECTS_IN_GAME = 420; // Number of objects for universe
constexpr uint16_t MAX_DUNGEON_OBJECTS = 344; // Number of dungeon objects
constexpr uint16_t OBJECT_IDENT_SIZE = 448; // 7*64, see object_offset() in desc.cpp, could be MAX_OBJECTS o_o() rewritten

// With LEVEL_MAX_OBJECTS set to 150, it's possible to get compacting
// objects during level generation, although it is extremely rare.
constexpr uint8_t LEVEL_MAX_OBJECTS = 175;        // Max objects per level

// Creature constants
constexpr uint16_t MON_MAX_CREATURES = 279; // Number of creatures defined for univ
constexpr uint8_t MON_ATTACK_TYPES = 215;   // Number of monster attack types.

// With MON_TOTAL_ALLOCATIONS set to 101, it is possible to get compacting
// monsters messages while breeding/cloning monsters.
constexpr uint8_t MON_TOTAL_ALLOCATIONS = 125;        // Max that can be allocated
constexpr uint8_t MON_MAX_LEVELS = 40;                // Maximum level of creatures
constexpr uint8_t MON_MAX_ATTACKS = 4;                // Max num attacks (used in mons memory) -CJS-

// definitions for the pseudo-normal distribution generation
constexpr uint16_t NORMAL_TABLE_SIZE = 256;
constexpr uint8_t NORMAL_TABLE_SD = 64; // the standard deviation for the table

// defines for treasure type values (tval)
constexpr int8_t TV_NEVER = -1; // used by find_range() for non-search
constexpr uint8_t TV_NOTHING = 0;
constexpr uint8_t TV_MISC = 1;
constexpr uint8_t TV_CHEST = 2;

// min tval for wearable items, all items between TV_MIN_WEAR and
// TV_MAX_WEAR use the same flag bits, see the TR_* defines.
constexpr uint8_t TV_MIN_WEAR = 10;

// items tested for enchantments, i.e. the MAGIK inscription,
// see the enchanted() procedure.
constexpr uint8_t TV_MIN_ENCHANT = 10;
constexpr uint8_t TV_SLING_AMMO = 10;
constexpr uint8_t TV_BOLT = 11;
constexpr uint8_t TV_ARROW = 12;
constexpr uint8_t TV_SPIKE = 13;
constexpr uint8_t TV_LIGHT = 15;
constexpr uint8_t TV_BOW = 20;
constexpr uint8_t TV_HAFTED = 21;
constexpr uint8_t TV_POLEARM = 22;
constexpr uint8_t TV_SWORD = 23;
constexpr uint8_t TV_DIGGING = 25;
constexpr uint8_t TV_BOOTS = 30;
constexpr uint8_t TV_GLOVES = 31;
constexpr uint8_t TV_CLOAK = 32;
constexpr uint8_t TV_HELM = 33;
constexpr uint8_t TV_SHIELD = 34;
constexpr uint8_t TV_HARD_ARMOR = 35;
constexpr uint8_t TV_SOFT_ARMOR = 36;
// max tval that uses the TR_* flags
constexpr uint8_t TV_MAX_ENCHANT = 39;
constexpr uint8_t TV_AMULET = 40;
constexpr uint8_t TV_RING = 45;
// max tval for wearable items
constexpr uint8_t TV_MAX_WEAR = 50;
constexpr uint8_t TV_STAFF = 55;
constexpr uint8_t TV_WAND = 65;
constexpr uint8_t TV_SCROLL1 = 70;
constexpr uint8_t TV_SCROLL2 = 71;
constexpr uint8_t TV_POTION1 = 75;
constexpr uint8_t TV_POTION2 = 76;
constexpr uint8_t TV_FLASK = 77;
constexpr uint8_t TV_FOOD = 80;
constexpr uint8_t TV_MAGIC_BOOK = 90;
constexpr uint8_t TV_PRAYER_BOOK = 91;
// objects with tval above this are never picked up by monsters
constexpr uint8_t TV_MAX_OBJECT = 99;
constexpr uint8_t TV_GOLD = 100;
// objects with higher tvals can not be picked up
constexpr uint8_t TV_MAX_PICK_UP = 100;
constexpr uint8_t TV_INVIS_TRAP = 101;
// objects between TV_MIN_VISIBLE and TV_MAX_VISIBLE are always visible,
// i.e. the cave fm flag is set when they are present
constexpr uint8_t TV_MIN_VISIBLE = 102;
constexpr uint8_t TV_VIS_TRAP = 102;
constexpr uint8_t TV_RUBBLE = 103;
// following objects are never deleted when trying to create another one
// during level generation
constexpr uint8_t TV_MIN_DOORS = 104;
constexpr uint8_t TV_OPEN_DOOR = 104;
constexpr uint8_t TV_CLOSED_DOOR = 105;
constexpr uint8_t TV_UP_STAIR = 107;
constexpr uint8_t TV_DOWN_STAIR = 108;
constexpr uint8_t TV_SECRET_DOOR = 109;
constexpr uint8_t TV_STORE_DOOR = 110;
constexpr uint8_t TV_MAX_VISIBLE = 110;
