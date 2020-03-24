/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** button.c
*/

#include "second_one.h"

static void move_rect(defender_t *defender, int offset, int max)
{
    defender->button_play.rect.left =
    (defender->button_play.rect.left + offset) % max;
}

int creat_the_bouton_play(defender_t *defender)
{
    defender->button_play.rect.left = 0;
    defender->button_play.rect.top = 0;
    defender->button_play.rect.height = 86;
    defender->button_play.rect.width = 184;
    defender->button_play.pos.x = 650;
    defender->button_play.pos.y = 80;
    defender->button_play.texture = sfTexture_createFromFile
    ("src/menu/img/button/new_one/play/clear/play.png", NULL);
    if (!defender->button_play.texture) {
        write (2, "WARNING: Missing the bouton play\n", 34);
        return (84);
    }
    help_button_play(defender);
    return (0);
}

void help_button_play(defender_t *defender)
{
    defender->button_play.sprite = sfSprite_create();
    sfSprite_setTexture(defender->button_play.sprite,
    defender->button_play.texture, sfTrue);
    sfSprite_setPosition(defender->button_play.sprite,
    defender->button_play.pos);
    sfSprite_setTextureRect(defender->button_play.sprite,
    defender->button_play.rect);
}

void button_play_anim(defender_t *defender)
{
    move_rect(defender, 184, 368);
    sfSprite_setTextureRect(defender->button_play.sprite,
    defender->button_play.rect);
}