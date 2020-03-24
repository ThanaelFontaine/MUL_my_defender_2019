/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** button_leave_lost.c
*/

#include "second_one.h"

static void move_rect(defender_t *defender, int offset, int max)
{
    defender->button_leave_lost.rect.top =
    (defender->button_leave_lost.rect.top + offset) % max;
}

int creat_the_bouton_leave_lost(defender_t *defender)
{
    defender->button_leave_lost.rect.left = 0;
    defender->button_leave_lost.rect.top = 0;
    defender->button_leave_lost.rect.height = 81;
    defender->button_leave_lost.rect.width = 170;
    defender->button_leave_lost.pos.x = 80;
    defender->button_leave_lost.pos.y = 270;
    defender->button_leave_lost.texture = sfTexture_createFromFile
    ("src/lost/img/clear/leave.png", NULL);
    if (!defender->button_leave_lost.texture) {
        write (2, "WARNING: Missing the bouton leave\n", 35);
        return (84);
    }
    help_button_leave_lost(defender);
    return (0);
}

void help_button_leave_lost(defender_t *defender)
{
    defender->button_leave_lost.sprite = sfSprite_create();
    sfSprite_setTexture(defender->button_leave_lost.sprite,
    defender->button_leave_lost.texture, sfTrue);
    sfSprite_setPosition(defender->button_leave_lost.sprite,
    defender->button_leave_lost.pos);
    sfSprite_setTextureRect(defender->button_leave_lost.sprite,
    defender->button_leave_lost.rect);
}

void button_leave_lost_anim(defender_t *defender)
{
    move_rect(defender, 81, 163);
    sfSprite_setTextureRect(defender->button_leave_lost.sprite,
    defender->button_leave_lost.rect);
}