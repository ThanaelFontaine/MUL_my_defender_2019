/*
** EPITECH PROJECT, 2019
** back_up
** File description:
** tower_area.c
*/

#include "second_one.h"

int creat_tower_area_1(defender_t *defender)
{
    defender->tower_area_1.size.x = 0.1f;
    defender->tower_area_1.size.y = 0.1f;
    defender->tower_area_1.rect.left = 0;
    defender->tower_area_1.rect.top = 0;
    defender->tower_area_1.rect.height = 300;
    defender->tower_area_1.rect.width = 300;
    defender->tower_area_1.pos.x = 210;
    defender->tower_area_1.pos.y = 220;
    defender->tower_area_1.texture = sfTexture_createFromFile
    ("src/game/img/tower_place/red.png", NULL);
    if (!defender->tower_area_1.texture) {
        write (2, "WARNING: Missing the tower area 1\n", 35);
        return (84);
    }
    help_tower_area_1(defender);
    return (0);
}

void help_tower_area_1(defender_t *defender)
{
    defender->tower_area_1.sprite = sfSprite_create();
    sfSprite_setTexture(defender->tower_area_1.sprite,
    defender->tower_area_1.texture, sfTrue);
    sfSprite_setPosition(defender->tower_area_1.sprite,
    defender->tower_area_1.pos);
    sfSprite_setTextureRect(defender->tower_area_1.sprite,
    defender->tower_area_1.rect);
    sfSprite_setScale(defender->tower_area_1.sprite,
    defender->tower_area_1.size);
}