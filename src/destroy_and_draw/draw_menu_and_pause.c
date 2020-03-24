/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** draw.c
*/

#include "second_one.h"

void draw_main_menu(defender_t *defender)
{
    sfRenderWindow_clear(defender->win.window, sfBlack);
    sfRenderWindow_drawSprite(defender->win.window,
    defender->menu.sprite, NULL);
    sfRenderWindow_drawSprite(defender->win.window,
    defender->button_play.sprite, NULL);
    sfRenderWindow_drawSprite(defender->win.window,
    defender->button_leave.sprite, NULL);
    sfRenderWindow_drawSprite(defender->win.window,
    defender->button_htp.sprite, NULL);
    sfRenderWindow_display(defender->win.window);
}

void draw_defeat_menu(defender_t *defender)
{
    sfRenderWindow_clear(defender->win.window, sfBlack);
    sfRenderWindow_drawSprite(defender->win.window,
    defender->defeat_menu.sprite, NULL);
    sfRenderWindow_drawSprite(defender->win.window,
    defender->button_retry.sprite, NULL);
    sfRenderWindow_drawSprite(defender->win.window,
    defender->button_leave_lost.sprite, NULL);
    sfRenderWindow_display(defender->win.window);
}

void draw_pause(defender_t *defender)
{
    sfRenderWindow_clear(defender->win.window, sfBlack);
    sfRenderWindow_drawSprite(defender->win.window,
    defender->the_map.sprite, NULL);
    sfRenderWindow_drawSprite(defender->win.window,
    defender->pause_menu.sprite, NULL);
    sfRenderWindow_drawSprite(defender->win.window,
    defender->button_home.sprite, NULL);
    sfRenderWindow_drawSprite(defender->win.window,
    defender->button_leave_.sprite, NULL);
    sfRenderWindow_drawSprite(defender->win.window,
    defender->button_continue.sprite, NULL);
    sfRenderWindow_display(defender->win.window);
}

void draw_htp(defender_t *defender)
{
    sfRenderWindow_clear(defender->win.window, sfBlack);
    sfRenderWindow_drawSprite(defender->win.window,
    defender->htp_menu.sprite, NULL);
    sfRenderWindow_drawSprite(defender->win.window,
    defender->button_htp_home.sprite, NULL);
    sfRenderWindow_display(defender->win.window);
}