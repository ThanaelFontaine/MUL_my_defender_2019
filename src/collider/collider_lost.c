/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** collider_retry.c
*/

#include "second_one.h"

void boutton_collider_retry(defender_t *defender)
{
    if (defender->mouse_position.x <= defender->button_retry.pos.x + 80 &&
    defender->mouse_position.x >= defender->button_retry.pos.x &&
    defender->mouse_position.y <= defender->button_retry.pos.y + 90 &&
    defender->mouse_position.y >= defender->button_retry.pos.y) {
        button_retry_anim(defender);
        if (defender->event->type == sfEvtMouseButtonPressed) {
            defender->boulean_defeat = 0;
            defender->defeat_count = 0;
            defender->boulean = 0;
        }
    }
}

void boutton_collider_leave_lost(defender_t *defender)
{
    if (defender->mouse_position.x <= defender->button_leave_lost.pos.x + 80 &&
    defender->mouse_position.x >= defender->button_leave_lost.pos.x &&
    defender->mouse_position.y <= defender->button_leave_lost.pos.y + 90 &&
    defender->mouse_position.y >= defender->button_leave_lost.pos.y) {
        button_leave_lost_anim(defender);
        if (defender->event->type == sfEvtMouseButtonPressed)
            sfRenderWindow_close(defender->win.window);
    }
}