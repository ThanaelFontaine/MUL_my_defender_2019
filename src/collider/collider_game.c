/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** collider_game.c
*/

#include "second_one.h"

void boutton_collider_pause(defender_t *defender)
{
    if (defender->mouse_position.x <= defender->button_pause.pos.x + 80 &&
    defender->mouse_position.x >= defender->button_pause.pos.x &&
    defender->mouse_position.y <= defender->button_pause.pos.y + 90 &&
    defender->mouse_position.y >= defender->button_pause.pos.y) {
        button_pause_anim(defender);
        if (defender->event->type == sfEvtMouseButtonPressed)
            defender->boulean_pause = 1;
    }
}

void tower_area_1_collider(defender_t *defender)
{
    if (defender->mouse_position.x <= defender->tower_area_1.pos.x + 100 &&
    defender->mouse_position.x >= defender->tower_area_1.pos.x &&
    defender->mouse_position.y <= defender->tower_area_1.pos.y + 100 &&
    defender->mouse_position.y >= defender->tower_area_1.pos.y) {
        if (defender->event->type == sfEvtMouseButtonPressed) {
            defender->boulean_click = 1;
            inventory_anim(defender);
        }
        if (defender->event->type == sfEvtMouseButtonReleased &&
        defender->boulean_click == 1)
            defender->boulean_click = 0;
    }
}

void inventory_collider(defender_t *defender)
{
    if (defender->mouse_position.x <= defender->inventory.pos.x + 100 &&
    defender->mouse_position.x >= defender->inventory.pos.x &&
    defender->mouse_position.y <= defender->inventory.pos.y + 200 &&
    defender->mouse_position.y >= defender->inventory.pos.y) {
        if (defender->event->type == sfEvtMouseButtonPressed &&
        defender->boulean_click == 0) {
            defender->boulean_tower_is_real = 1;
            defender->boulean_click = 1;
            tower_anim(defender);
        }
        if (defender->event->type == sfEvtMouseButtonReleased &&
        defender->boulean_click == 1)
            defender->boulean_click = 0;
    }
}