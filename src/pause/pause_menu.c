/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** pause_menu.c
*/

#include "second_one.h"

int creat_the_pause_background(defender_t *defender)
{
    defender->pause_menu.pos.x = 0;
    defender->pause_menu.pos.y = 0;
    defender->pause_menu.size.x = 0.5f;
    defender->pause_menu.size.y = 0.5f;
    defender->pause_menu.texture = sfTexture_createFromFile
    ("src/pause/img/back2.png", NULL);
    if (!defender->pause_menu.texture) {
        write (2, "WARNING: Missing the pause menu background\n", 44);
        return (84);
    }
    defender->pause_menu.sprite = sfSprite_create();
    sfSprite_setTexture(defender->pause_menu.sprite,
    defender->pause_menu.texture, sfTrue);
    sfSprite_setScale(defender->menu.sprite, defender->pause_menu.size);
    sfSprite_setPosition(defender->pause_menu.sprite,
    defender->pause_menu.pos);
    return (0);
}

int the_pause_menu(defender_t *defender)
{
    creat_the_pause_background(defender);
    creat_the_bouton_home(defender);
    boutton_collider_home(defender);
    creat_the_bouton_leave_(defender);
    boutton_collider_leave_(defender);
    creat_the_bouton_continue(defender);
    boutton_collider_continue(defender);
    return (0);
}