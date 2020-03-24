/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** clock_anim_explosion.c
*/

#include "second_one.h"

void clock_explosion(defender_t *defender)
{
    defender->mob_explosion.time =
    sfClock_getElapsedTime(defender->mob_explosion.clock);
    defender->mob_explosion.seconds =
    defender->mob_explosion.time.microseconds / 1000000.0;
    explosion_mob_anim(defender);
}