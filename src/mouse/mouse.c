/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** mouse.c
*/

#include "second_one.h"

void mouse_pos(defender_t *defender)
{
    if (defender->event->type == sfEvtMouseMoved) {
        defender->mouse_position.x = defender->event->mouseMove.x;
        defender->mouse_position.y = defender->event->mouseMove.y;
    }
}