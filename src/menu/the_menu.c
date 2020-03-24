/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** the_menu.c
*/

#include "second_one.h"

int creat_the_menu_background(defender_t *defender)
{
    defender->menu.size.x = 0.8f;
    defender->menu.size.y = 0.8f;
    defender->menu.texture = sfTexture_createFromFile
    ("src/menu/img/background.jpg", NULL);
    if (!defender->menu.texture) {
        write (2, "WARNING: Missing the map background\n", 37);
        return (84);
    }
    defender->menu.sprite = sfSprite_create();
    sfSprite_setTexture(defender->menu.sprite,
    defender->menu.texture, sfTrue);
    sfSprite_setScale(defender->menu.sprite, defender->menu.size);
    return (0);
}

int the_menu(defender_t *defender)
{
    creat_the_menu_background(defender);
    creat_the_bouton_htp(defender);
    boutton_collider_htp(defender);
    creat_the_bouton_play(defender);
    boutton_collider_play(defender);
    creat_the_bouton_leave(defender);
    boutton_collider_leave(defender);
    return (0);
}