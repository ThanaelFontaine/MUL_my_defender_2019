/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** the_map.c
*/

#include "second_one.h"

int creat_the_map(defender_t *defender)
{
    defender->the_map.size.x = 0.98f;
    defender->the_map.size.y = 0.98f;
    defender->the_map.texture = sfTexture_createFromFile
    ("texture/map/world.png", NULL);
    if (!defender->the_map.texture) {
        write (2, "WARNING: Missing the map background\n", 37);
        return (84);
    }
    defender->the_map.sprite = sfSprite_create();
    sfSprite_setTexture(defender->the_map.sprite,
    defender->the_map.texture, sfTrue);
    sfSprite_setScale(defender->the_map.sprite,
    defender->the_map.size);
    return (0);
}