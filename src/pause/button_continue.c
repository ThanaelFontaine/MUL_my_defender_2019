/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** button_continue.c
*/

#include "second_one.h"

static void move_rect(defender_t *defender, int offset, int max)
{
    defender->button_continue.rect.top =
    (defender->button_continue.rect.top + offset) % max;
}

int creat_the_bouton_continue(defender_t *defender)
{
    defender->button_continue.rect.left = 0;
    defender->button_continue.rect.top = 0;
    defender->button_continue.rect.height = 80;
    defender->button_continue.rect.width = 181;
    defender->button_continue.pos.x = 90;
    defender->button_continue.pos.y = 350;
    defender->button_continue.texture = sfTexture_createFromFile
    ("src/pause/img/button/continue/clear/continue.png", NULL);
    if (!defender->button_continue.texture) {
        write (2, "WARNING: Missing the bouton continue\n", 38);
        return (84);
    }
    help_button_continue(defender);
    return (0);
}

void help_button_continue(defender_t *defender)
{
    defender->button_continue.sprite = sfSprite_create();
    sfSprite_setTexture(defender->button_continue.sprite,
    defender->button_continue.texture, sfTrue);
    sfSprite_setPosition(defender->button_continue.sprite,
    defender->button_continue.pos);
    sfSprite_setTextureRect(defender->button_continue.sprite,
    defender->button_continue.rect);
}

void button_continue_anim(defender_t *defender)
{
    move_rect(defender, 80, 181);
    sfSprite_setTextureRect(defender->button_continue.sprite,
    defender->button_continue.rect);
}