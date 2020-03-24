/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** button_how_to_play.c
*/

#include "second_one.h"

static void move_rect(defender_t *defender, int offset, int max)
{
    defender->button_htp.rect.left =
    (defender->button_htp.rect.left + offset) % max;
}

int creat_the_bouton_htp(defender_t *defender)
{
    defender->button_htp.rect.left = 0;
    defender->button_htp.rect.top = 0;
    defender->button_htp.rect.height = 82;
    defender->button_htp.rect.width = 212;
    defender->button_htp.pos.x = 640;
    defender->button_htp.pos.y = 400;
    defender->button_htp.texture = sfTexture_createFromFile
    ("src/menu/img/button/new_one/how_to_play/htp.png", NULL);
    if (!defender->button_htp.texture) {
        write (2, "WARNING: Missing the bouton htp\n", 33);
        return (84);
    }
    help_button_htp(defender);
    return (0);
}

void help_button_htp(defender_t *defender)
{
    defender->button_htp.sprite = sfSprite_create();
    sfSprite_setTexture(defender->button_htp.sprite,
    defender->button_htp.texture, sfTrue);
    sfSprite_setPosition(defender->button_htp.sprite,
    defender->button_htp.pos);
    sfSprite_setTextureRect(defender->button_htp.sprite,
    defender->button_htp.rect);
}

void button_htp_anim(defender_t *defender)
{
    move_rect(defender, 212, 424);
    sfSprite_setTextureRect(defender->button_htp.sprite,
    defender->button_htp.rect);
}