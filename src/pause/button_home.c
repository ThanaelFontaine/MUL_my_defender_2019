/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** button_home.c
*/

#include "second_one.h"

static void move_rect(defender_t *defender, int offset, int max)
{
    defender->button_home.rect.left =
    (defender->button_home.rect.left + offset) % max;
}

int creat_the_bouton_home(defender_t *defender)
{
    defender->button_home.rect.left = 0;
    defender->button_home.rect.top = 0;
    defender->button_home.rect.height = 83;
    defender->button_home.rect.width = 210;
    defender->button_home.pos.x = 80;
    defender->button_home.pos.y = 40;
    defender->button_home.texture = sfTexture_createFromFile
    ("src/pause/img/button/home/clear/home.png", NULL);
    if (!defender->button_home.texture) {
        write (2, "WARNING: Missing the bouton home\n", 34);
        return (84);
    }
    help_button_home(defender);
    return (0);
}

void help_button_home(defender_t *defender)
{
    defender->button_home.sprite = sfSprite_create();
    sfSprite_setTexture(defender->button_home.sprite,
    defender->button_home.texture, sfTrue);
    sfSprite_setPosition(defender->button_home.sprite,
    defender->button_home.pos);
    sfSprite_setTextureRect(defender->button_home.sprite,
    defender->button_home.rect);
}

void button_home_anim(defender_t *defender)
{
    move_rect(defender, 210, 420);
    sfSprite_setTextureRect(defender->button_home.sprite,
    defender->button_home.rect);
}