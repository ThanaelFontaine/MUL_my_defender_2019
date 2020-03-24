/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** button_leave.c
*/

#include "second_one.h"

static void move_rect(defender_t *defender, int offset, int max)
{
    defender->button_leave.rect.top =
    (defender->button_leave.rect.top + offset) % max;
}

int creat_the_bouton_leave(defender_t *defender)
{
    defender->button_leave.rect.left = 0;
    defender->button_leave.rect.top = 0;
    defender->button_leave.rect.height = 81;
    defender->button_leave.rect.width = 170;
    defender->button_leave.pos.x = 659;
    defender->button_leave.pos.y = 250;
    defender->button_leave.texture = sfTexture_createFromFile
    ("src/menu/img/button/new_one/leave/clear/leave.png", NULL);
    if (!defender->button_leave.texture) {
        write (2, "WARNING: Missing the bouton leave\n", 35);
        return (84);
    }
    help_button_leave(defender);
    return (0);
}

void help_button_leave(defender_t *defender)
{
    defender->button_leave.sprite = sfSprite_create();
    sfSprite_setTexture(defender->button_leave.sprite,
    defender->button_leave.texture, sfTrue);
    sfSprite_setPosition(defender->button_leave.sprite,
    defender->button_leave.pos);
    sfSprite_setTextureRect(defender->button_leave.sprite,
    defender->button_leave.rect);
}

void button_leave_anim(defender_t *defender)
{
    move_rect(defender, 81, 163);
    sfSprite_setTextureRect(defender->button_leave.sprite,
    defender->button_leave.rect);
}