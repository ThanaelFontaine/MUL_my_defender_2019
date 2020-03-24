/*
** EPITECH PROJECT, 2019
** back_up
** File description:
** collider_htp_home.c
*/

#include "second_one.h"

void boutton_collider_htp_home(defender_t *defender)
{
    if (defender->mouse_position.x <= defender->button_htp_home.pos.x + 210 &&
    defender->mouse_position.x >= defender->button_htp_home.pos.x &&
    defender->mouse_position.y <= defender->button_htp_home.pos.y + 83 &&
    defender->mouse_position.y >= defender->button_htp_home.pos.y) {
        button_htp_home_anim(defender);
        if (sfMouse_isButtonPressed(sfMouseLeft)) {
            defender->boulean_how_to_play = 0;
        }
    }
}