/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** clock_anim_mob.c
*/

#include "second_one.h"

void clock_anim_mob(defender_t *defender)
{
    defender->mob_god.time =
    sfClock_getElapsedTime(defender->mob_god.clock);
    defender->mob_god.seconds =
    defender->mob_god.time.microseconds / 1000000.0;
    mob_god_anim(defender);
}

void clock_moove_god(defender_t *defender)
{
    defender->mob_god.mob_god_moove.time =
    sfClock_getElapsedTime(defender->mob_god.mob_god_moove.clock);
    defender->mob_god.mob_god_moove.seconds =
    defender->mob_god.mob_god_moove.time.microseconds / 1000000.0;
    sfSprite_setPosition(defender->mob_god.sprite,
    defender->mob_god.pos);
    moove_god_mob(defender);
    sfSprite_setPosition(defender->mob_god.sprite,
    defender->mob_god.pos);
}

void clock_anim_explosion(defender_t *defender)
{
    defender->mob_explosion.time =
    sfClock_getElapsedTime(defender->mob_explosion.clock);
    defender->mob_explosion.seconds =
    defender->mob_explosion.time.microseconds / 1000000.0;
    explosion_mob_anim(defender);
}