/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** draw_game.c
*/

#include "second_one.h"

void draw_game_1(defender_t *defender)
{
    sfRenderWindow_clear(defender->win.window, sfBlack);
    sfRenderWindow_drawSprite(defender->win.window,
    defender->the_map.sprite, NULL);
    sfRenderWindow_drawSprite(defender->win.window,
    defender->mob_god.sprite, NULL);
    sfRenderWindow_drawSprite(defender->win.window,
    defender->mob_explosion.sprite, NULL);
    sfRenderWindow_drawSprite(defender->win.window,
    defender->button_pause.sprite, NULL);
    sfRenderWindow_drawSprite(defender->win.window,
    defender->inventory.sprite, NULL);
    sfRenderWindow_drawSprite(defender->win.window,
    defender->tower_area_1.sprite, NULL);
    sfRenderWindow_drawSprite(defender->win.window,
    defender->the_tower.sprite, NULL);
    draw_game_2(defender);
}

void draw_game_2(defender_t *defender)
{
    sfRenderWindow_drawSprite(defender->win.window,
    defender->hud_gold.sprite, NULL);
    sfRenderWindow_drawSprite(defender->win.window,
    defender->hud_ennemie.sprite, NULL);
    sfRenderWindow_drawText(defender->win.window,
    defender->hud_text_dead.text, NULL);
    sfRenderWindow_drawText(defender->win.window,
    defender->hud_text_money.text, NULL);
    sfRenderWindow_drawSprite(defender->win.window,
    defender->hud_castle.sprite, NULL);
    sfRenderWindow_display(defender->win.window);
}