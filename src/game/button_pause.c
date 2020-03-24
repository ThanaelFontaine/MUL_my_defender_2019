/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** button_pause.c
*/

#include "second_one.h"

static void move_rect(defender_t *defender, int offset, int max)
{
    defender->button_pause.rect.left =
    (defender->button_pause.rect.left + offset) % max;
}

int creat_the_bouton_pause(defender_t *defender)
{
    defender->button_pause.rect.left = 0;
    defender->button_pause.rect.top = 0;
    defender->button_pause.rect.height = 86;
    defender->button_pause.rect.width = 99;
    defender->button_pause.pos.x = 1400;
    defender->button_pause.pos.y = 500;
    defender->button_pause.texture = sfTexture_createFromFile
    ("src/menu/img/button/new_one/pause/clear/pause.png", NULL);
    if (!defender->button_pause.texture) {
        write (2, "WARNING: Missing the bouton pause\n", 35);
        return (84);
    }
    help_button_pause(defender);
    return (0);
}

void help_button_pause(defender_t *defender)
{
    defender->button_pause.sprite = sfSprite_create();
    sfSprite_setTexture(defender->button_pause.sprite,
    defender->button_pause.texture, sfTrue);
    sfSprite_setPosition(defender->button_pause.sprite,
    defender->button_pause.pos);
    sfSprite_setTextureRect(defender->button_pause.sprite,
    defender->button_pause.rect);
}

void button_pause_anim(defender_t *defender)
{
    move_rect(defender, 99, 198);
    sfSprite_setTextureRect(defender->button_pause.sprite,
    defender->button_pause.rect);
}