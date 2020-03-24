/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** how_to_play.c
*/

#include "second_one.h"

int creat_the_htp_background(defender_t *defender)
{
    defender->htp_menu.size.x = 1.8f;
    defender->htp_menu.size.y = 1.8f;
    defender->htp_menu.texture = sfTexture_createFromFile
    ("src/menu/img/back.png", NULL);
    if (!defender->htp_menu.texture) {
        write (2, "WARNING: Missing the htp background\n", 37);
        return (84);
    }
    defender->htp_menu.sprite = sfSprite_create();
    sfSprite_setTexture(defender->htp_menu.sprite,
    defender->htp_menu.texture, sfTrue);
    sfSprite_setScale(defender->htp_menu.sprite, defender->htp_menu.size);
    return (0);
}

int htp_menu(defender_t *defender)
{
    creat_the_htp_background(defender);
    creat_the_bouton_htp_home(defender);
    boutton_collider_htp_home(defender);
    return (0);
}