/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** event_defender.c
*/

#include "second_one.h"

void boulean_game(defender_t *defender)
{
    if (defender->boulean == 0) {
        if (defender->boulean_how_to_play == 1) {
            htp_menu(defender);
            draw_htp(defender);
        } else {
            the_menu(defender);
            draw_main_menu(defender);
        }
    } else {
        if (defender->boulean_pause == 1) {
            the_pause_menu(defender);
            draw_pause(defender);
        } else
            boulean_defeat(defender);
    }
}

void boulean_defeat(defender_t *defender)
{
    if (defender->boulean_defeat == 1) {
        the_defeat(defender);
        draw_defeat_menu(defender);
    } else {
        inventory_collider(defender);
        tower_area_1_collider(defender);
        creat_the_bouton_pause(defender);
        boutton_collider_pause(defender);
        draw_game_1(defender);
    }
}

void event_of_the_while(defender_t *defender)
{
    if (defender->event->type == sfEvtClosed ||
    sfKeyboard_isKeyPressed (sfKeyQ))
        sfRenderWindow_close(defender->win.window);
    if (sfKeyboard_isKeyPressed (sfKeyEscape))
        defender->boulean_pause = 1;
    if (defender->boulean_how_to_play == 1 &&
    sfKeyboard_isKeyPressed (sfKeyEscape))
        defender->boulean_how_to_play = 0;
    mouse_pos(defender);
    dead_mob(defender);
    defender->nb_dead = my_int_to_str(defender->dead);
    defender->sum_drop = my_int_to_str(defender->drop);
    sfText_setString(defender->hud_text_dead.text,
    defender->nb_dead);
    sfText_setString(defender->hud_text_money.text,
    defender->sum_drop);
}