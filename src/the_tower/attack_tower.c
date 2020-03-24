/*
** EPITECH PROJECT, 2019
** back_up
** File description:
** attack_tower.c
*/

#include "second_one.h"

int attack_tower(defender_t *defender)
{
    float dist = get_distance(defender->mob_god.pos, defender->the_tower.pos);
    if (dist < 150)
        defender->mob_god.life = 0;
    return (0);
}

float get_distance(sfVector2f p1, sfVector2f p2)
{
    const float distance_x = p1.x - p2.x;
    const float distance_y = p1.y - p2.y;

    return (sqrtf(distance_x * distance_x + distance_y * distance_y));
}