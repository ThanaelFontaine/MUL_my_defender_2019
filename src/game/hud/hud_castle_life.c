/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** hud_castle_life.c
*/

#include "second_one.h"

static void move_rect(defender_t *defender, int offset, int max)
{
    defender->hud_castle.rect.left =
    (defender->hud_castle.rect.left + offset) % max;
}

int creat_the_castle_hud(defender_t *defender)
{
    defender->hud_castle.size.x = 0.5f;
    defender->hud_castle.size.y = 0.5f;
    defender->hud_castle.pos.x = 560;
    defender->hud_castle.pos.y = 0;
    defender->hud_castle.rect.top = 0;
    defender->hud_castle.rect.left = 0;
    defender->hud_castle.rect.width = 760;
    defender->hud_castle.rect.height = 113;
    defender->hud_castle.texture = sfTexture_createFromFile
    ("src/game/img/life_castle_hud/sheets_life.png", NULL);
    help_castle_hud(defender);
    return (0);
}

int help_castle_hud(defender_t *defender)
{
    if (!defender->hud_castle.texture) {
        write (2, "Missing the texture of the castle hud\n", 39);
        return (84);
    }
    defender->hud_castle.sprite = sfSprite_create();
    sfSprite_setPosition(defender->hud_castle.sprite,
    defender->hud_castle.pos);
    sfSprite_setScale(defender->hud_castle.sprite,
    defender->hud_castle.size);
    sfSprite_setTexture(defender->hud_castle.sprite,
    defender->hud_castle.texture, sfTrue);
    sfSprite_setTextureRect(defender->hud_castle.sprite,
    defender->hud_castle.rect);
    return (0);
}

void castle_hud_anim(defender_t *defender)
{
    move_rect(defender, 760, 3040);
    sfSprite_setTextureRect(defender->hud_castle.sprite,
    defender->hud_castle.rect);
}