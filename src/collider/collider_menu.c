/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** collider_menu.c
*/

#include "second_one.h"

void boutton_collider_play(defender_t *defender)
{
    if (defender->mouse_position.x <= defender->button_play.pos.x + 200 &&
    defender->mouse_position.x >= defender->button_play.pos.x &&
    defender->mouse_position.y <= defender->button_play.pos.y + 100 &&
    defender->mouse_position.y >= defender->button_play.pos.y) {
        button_play_anim(defender);
        if (defender->event->type == sfEvtMouseButtonPressed) {
            defender->boulean = 1;
            defender->boulean_click = 1;
        }
        if (defender->event->type == sfEvtMouseButtonReleased &&
        defender->boulean_click == 1)
            defender->boulean_click = 0;
    }
}

void boutton_collider_leave(defender_t *defender)
{
    if (defender->mouse_position.x <= defender->button_leave.pos.x + 180 &&
    defender->mouse_position.x >= defender->button_leave.pos.x &&
    defender->mouse_position.y <= defender->button_leave.pos.y + 110 &&
    defender->mouse_position.y >= defender->button_leave.pos.y) {
        button_leave_anim(defender);
        if (defender->event->type == sfEvtMouseButtonPressed) {
            sfRenderWindow_close(defender->win.window);
            defender->boulean_click = 1;
        }
        if (defender->event->type == sfEvtMouseButtonReleased &&
        defender->boulean_click == 1)
            defender->boulean_click = 0;
    }
}

void boutton_collider_htp(defender_t *defender)
{
    if (defender->mouse_position.x <= defender->button_htp.pos.x + 212 &&
    defender->mouse_position.x >= defender->button_htp.pos.x &&
    defender->mouse_position.y <= defender->button_htp.pos.y + 110 &&
    defender->mouse_position.y >= defender->button_htp.pos.y) {
        button_htp_anim(defender);
        if (defender->event->type == sfEvtMouseButtonPressed) {
            defender->boulean_how_to_play = 1;
            defender->boulean_click = 1;
        }
        if (defender->event->type == sfEvtMouseButtonReleased &&
        defender->boulean_click == 1)
            defender->boulean_click = 0;
    }
}