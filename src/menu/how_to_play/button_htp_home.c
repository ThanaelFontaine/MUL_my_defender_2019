/*
** EPITECH PROJECT, 2019
** back_up
** File description:
** button_htp_home.c
*/

#include "second_one.h"

static void move_rect(defender_t *defender, int offset, int max)
{
    defender->button_htp_home.rect.left =
    (defender->button_htp_home.rect.left + offset) % max;
}

int creat_the_bouton_htp_home(defender_t *defender)
{
    defender->button_htp_home.rect.left = 0;
    defender->button_htp_home.rect.top = 0;
    defender->button_htp_home.rect.height = 83;
    defender->button_htp_home.rect.width = 210;
    defender->button_htp_home.pos.x = 800;
    defender->button_htp_home.pos.y = 500;
    defender->button_htp_home.texture = sfTexture_createFromFile
    ("src/menu/img/button/home.png", NULL);
    if (!defender->button_htp_home.texture) {
        write (2, "WARNING: Missing the bouton home for htp\n", 42);
        return (84);
    }
    help_button_htp_home(defender);
    return (0);
}

void help_button_htp_home(defender_t *defender)
{
    defender->button_htp_home.sprite = sfSprite_create();
    sfSprite_setTexture(defender->button_htp_home.sprite,
    defender->button_htp_home.texture, sfTrue);
    sfSprite_setPosition(defender->button_htp_home.sprite,
    defender->button_htp_home.pos);
    sfSprite_setTextureRect(defender->button_htp_home.sprite,
    defender->button_htp_home.rect);
}

void button_htp_home_anim(defender_t *defender)
{
    move_rect(defender, 210, 420);
    sfSprite_setTextureRect(defender->button_htp_home.sprite,
    defender->button_htp_home.rect);
}