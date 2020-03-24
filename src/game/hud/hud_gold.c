/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** hud.c
*/

#include "second_one.h"

int creat_the_gold_hud(defender_t *defender)
{
    defender->hud_gold.size.x = 0.5f;
    defender->hud_gold.size.y = 0.5f;
    defender->hud_gold.pos.x = 0;
    defender->hud_gold.pos.y = 0;
    defender->hud_gold.texture = sfTexture_createFromFile
    ("src/game/img/gold_hud/hud_gold/hud_gold.png", NULL);
    if (!defender->hud_gold.texture) {
        write (2, "WARNING: Missing the god hud\n", 30);
        return (84);
    }
    defender->hud_gold.sprite = sfSprite_create();
    sfSprite_setTexture(defender->hud_gold.sprite,
    defender->hud_gold.texture, sfTrue);
    sfSprite_setPosition(defender->hud_gold.sprite,
    defender->hud_gold.pos);
    sfSprite_setScale(defender->hud_gold.sprite,
    defender->hud_gold.size);
    return (0);
}