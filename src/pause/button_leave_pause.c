/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** button_leave_.c
*/

#include "second_one.h"

static void move_rect(defender_t *defender, int offset, int max)
{
    defender->button_leave_.rect.top =
    (defender->button_leave_.rect.top + offset) % max;
}

int creat_the_bouton_leave_(defender_t *defender)
{
    defender->button_leave_.rect.left = 0;
    defender->button_leave_.rect.top = 0;
    defender->button_leave_.rect.height = 81;
    defender->button_leave_.rect.width = 170;
    defender->button_leave_.pos.x = 95;
    defender->button_leave_.pos.y = 200;
    defender->button_leave_.texture = sfTexture_createFromFile
    ("src/pause/img/button/leave/clear/leave.png", NULL);
    if (!defender->button_leave_.texture) {
        write (2, "WARNING: Missing the bouton leave\n", 35);
        return (84);
    }
    help_button_leave_(defender);
    return (0);
}

void help_button_leave_(defender_t *defender)
{
    defender->button_leave_.sprite = sfSprite_create();
    sfSprite_setTexture(defender->button_leave_.sprite,
    defender->button_leave_.texture, sfTrue);
    sfSprite_setPosition(defender->button_leave_.sprite,
    defender->button_leave_.pos);
    sfSprite_setTextureRect(defender->button_leave_.sprite,
    defender->button_leave_.rect);
}

void button_leave_anim_(defender_t *defender)
{
    move_rect(defender, 81, 163);
    sfSprite_setTextureRect(defender->button_leave_.sprite,
    defender->button_leave_.rect);
}