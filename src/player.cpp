// Copyright (c) 1989-2008 James E. Wilson, Robert A. Koeneke, David J. Grabiner
//
// Umoria is free software released under a GPL v2 license and comes with
// ABSOLUTELY NO WARRANTY. See https://www.gnu.org/licenses/gpl-2.0.html
// for further details.

// Player specific variable definitions

#include "headers.h"

// Player record for most player related info
Player_t py = Player_t{};

// calculated base hp values for player at each level, store them
// so that drain life + restore life does not affect hit points.
uint16_t player_base_hp_levels[PLAYER_MAX_LEVEL];

uint32_t spells_learnt = 0;       // bit mask of spells learned
uint32_t spells_worked = 0;       // bit mask of spells tried and worked
uint32_t spells_forgotten = 0;    // bit mask of spells learned but forgotten
uint8_t spells_learned_order[32]; // order spells learned/remembered/forgotten

bool playerIsMale() {
    return py.misc.gender;
}

void playerSetGender(bool is_male) {
    py.misc.gender = is_male;
}

const char *playerGetGenderLabel() {
    if (playerIsMale()) {
        return "Male";
    }
    return "Female";
}
