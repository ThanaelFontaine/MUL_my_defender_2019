/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** defeat.c
*/

#include "second_one.h"

int creat_the_defeat_background(defender_t *defender)
{
    defender->defeat_menu.size.x = 1.1f;
    defender->defeat_menu.size.y = 1.1f;
    defender->defeat_menu.texture = sfTexture_createFromFile
    ("src/lost/img/defeat.jpg", NULL);
    if (!defender->defeat_menu.texture) {
        write (2, "WARNING: Missing the defeat menu background\n", 45);
        return (84);
    }
    defender->defeat_menu.sprite = sfSprite_create();
    sfSprite_setTexture(defender->defeat_menu.sprite,
    defender->defeat_menu.texture, sfTrue);
    sfSprite_setScale(defender->defeat_menu.sprite,
    defender->defeat_menu.size);
    return (0);
}

int the_defeat(defender_t *defender)
{
    creat_the_defeat_background(defender);
    creat_the_bouton_retry(defender);
    boutton_collider_retry(defender);
    creat_the_bouton_leave_lost(defender);
    boutton_collider_leave_lost(defender);
    return (0);
}