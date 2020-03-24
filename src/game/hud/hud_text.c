/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** hud_text.c
*/

#include "second_one.h"

int creat_text_dead_ennemi(defender_t *defender)
{
    defender->hud_text_dead.pos.x = 400;
    defender->hud_text_dead.pos.y = 6;
    defender->hud_text_dead.color = sfBlack;
    defender->hud_text_dead.font = sfFont_createFromFile
    ("src/game/font/DIABLO_H.TTF");
    if (!defender->hud_text_dead.font) {
        write(2, "WARNING: Missing the font text\n", 32);
        return (84);
    }
    defender->hud_text_dead.text = sfText_create();
    sfText_setString(defender->hud_text_dead.text, defender->nb_dead);
    sfText_setFont(defender->hud_text_dead.text,
    defender->hud_text_dead.font);
    sfText_setPosition(defender->hud_text_dead.text,
    defender->hud_text_dead.pos);
    sfText_setColor(defender->hud_text_dead.text,
    defender->hud_text_dead.color);
    return (0);
}

int creat_text_drop_money(defender_t *defender)
{
    defender->hud_text_money.pos.x = 90;
    defender->hud_text_money.pos.y = 6;
    defender->hud_text_money.color = sfBlack;
    defender->hud_text_money.font = sfFont_createFromFile
    ("src/game/font/DIABLO_H.TTF");
    if (!defender->hud_text_money.font) {
        write(2, "WARNING: Missing the font text\n", 32);
        return (84);
    }
    defender->hud_text_money.text = sfText_create();
    sfText_setString(defender->hud_text_money.text, defender->sum_drop);
    sfText_setFont(defender->hud_text_money.text,
    defender->hud_text_money.font);
    sfText_setPosition(defender->hud_text_money.text,
    defender->hud_text_money.pos);
    sfText_setColor(defender->hud_text_money.text,
    defender->hud_text_money.color);
    return (0);
}

