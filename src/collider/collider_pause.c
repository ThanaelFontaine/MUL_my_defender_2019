/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** collider_pause.c
*/

#include "second_one.h"

void boutton_collider_home(defender_t *defender)
{
    if (defender->mouse_position.x <= defender->button_home.pos.x + 180 &&
    defender->mouse_position.x >= defender->button_home.pos.x &&
    defender->mouse_position.y <= defender->button_home.pos.y + 90 &&
    defender->mouse_position.y >= defender->button_home.pos.y) {
        button_home_anim(defender);
        if (sfMouse_isButtonPressed(sfMouseLeft)) {
            defender->boulean_pause = 0;
            defender->boulean = 0;
        }
    }
}

void boutton_collider_continue(defender_t *defender)
{
    if (defender->mouse_position.x <= defender->button_continue.pos.x + 180 &&
    defender->mouse_position.x >= defender->button_continue.pos.x &&
    defender->mouse_position.y <= defender->button_continue.pos.y + 90 &&
    defender->mouse_position.y >= defender->button_continue.pos.y) {
        button_continue_anim(defender);
        if (defender->event->type == sfEvtMouseButtonPressed)
            defender->boulean_pause = 0;
    }
}

void boutton_collider_leave_(defender_t *defender)
{
    if (defender->mouse_position.x <= defender->button_leave_.pos.x + 180 &&
    defender->mouse_position.x >= defender->button_leave_.pos.x &&
    defender->mouse_position.y <= defender->button_leave_.pos.y + 90 &&
    defender->mouse_position.y >= defender->button_leave_.pos.y) {
        button_leave_anim_(defender);
        if (defender->event->type == sfEvtMouseButtonPressed)
            sfRenderWindow_close(defender->win.window);
    }
}