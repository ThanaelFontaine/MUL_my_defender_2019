/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** mooving_mob.c
*/

#include "second_one.h"

void moove_god_mob(defender_t *defender)
{
    if (defender->mob_god.mob_god_moove.seconds > 0.01) {
        if (defender->mob_god.pos.x <= 293)
            defender->mob_god.pos.x += 2;
        if (defender->mob_god.pos.x >= 293 &&
        defender->mob_god.pos.x <= 400 &&
        defender->mob_god.pos.y >= 114)
            defender->mob_god.pos.y -= 2;
        if (defender->mob_god.pos.y <= 114 &&
        defender->mob_god.pos.x >= 293 &&
        defender->mob_god.pos.x <= 800)
            defender->mob_god.pos.x += 2;
        moove_god_mob_2(defender);
        }
        sfClock_restart(defender->mob_god.mob_god_moove.clock);
}

void moove_god_mob_2(defender_t *defender)
{
    if (defender->mob_god.pos.x >= 800 &&
    defender->mob_god.pos.x <= 1200 &&
    defender->mob_god.pos.y <= 459)
        defender->mob_god.pos.y += 2;
    if (defender->mob_god.pos.y >= 459 &&
    defender->mob_god.pos.x >= 800 &&
    defender->mob_god.pos.x <= 1413)
        defender->mob_god.pos.x += 2;
    if (defender->mob_god.pos.x >= 1413 &&
    defender->mob_god.pos.y >= 130) {
        defender->mob_god.pos.y -= 2;
        end_of_moovement_mon_god(defender);
    }
}

void end_of_moovement_mon_god(defender_t *defender)
{
    if (defender->mob_god.pos.x >= 1200 &&
    defender->mob_god.pos.y <= 140) {
        defender->mob_god.pos.x = -50;
        defender->mob_god.pos.y = 394;
        castle_hud_anim(defender);
        defender->bool_exploding = 1;
        defender->defeat_count += 1;
    }
}