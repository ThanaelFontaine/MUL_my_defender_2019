/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** dead_mod.c
*/

#include "second_one.h"

void dead_mob(defender_t *defender)
{
    if (sfKeyboard_isKeyPressed(sfKeyO) &&
    defender->check_bool == 1) {
        defender->check_bool = 0;
        defender->dead += 1;
        defender->drop += 10;
    }
    if (sfKeyboard_isKeyPressed(sfKeyO) &&
    defender->check_bool == 0)
        defender->check_bool = 0;
    else
        defender->check_bool = 1;
}