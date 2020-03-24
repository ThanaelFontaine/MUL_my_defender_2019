/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** hud_mob.c
*/

#include "second_one.h"

int creat_the_ennemie_hud(defender_t *defender)
{
    defender->hud_ennemie.size.x = 0.5f;
    defender->hud_ennemie.size.y = 0.5f;
    defender->hud_ennemie.pos.x = 290;
    defender->hud_ennemie.pos.y = 0;
    defender->hud_ennemie.texture = sfTexture_createFromFile
    ("src/game/img/mob_hud/hud_ennemie/hud_ennemie.png", NULL);
    if (!defender->hud_ennemie.texture) {
        write (2, "WARNING: Missing the ennemie hud\n", 34);
        return (84);
    }
    defender->hud_ennemie.sprite = sfSprite_create();
    sfSprite_setTexture(defender->hud_ennemie.sprite,
    defender->hud_ennemie.texture, sfTrue);
    sfSprite_setPosition(defender->hud_ennemie.sprite,
    defender->hud_ennemie.pos);
    sfSprite_setScale(defender->hud_ennemie.sprite,
    defender->hud_ennemie.size);
    return (0);
}