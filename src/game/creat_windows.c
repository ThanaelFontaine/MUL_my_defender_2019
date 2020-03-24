/*
** EPITECH PROJECT, 2019
** MUL_my_world_2019
** File description:
** creat_windows.c
*/

#include "second_one.h"

int create_the_window(defender_t *defender)
{
    defender->win.mode.width = 1539;
    defender->win.mode.height = 600;
    defender->win.mode.bitsPerPixel = 32;

    defender->win.window = sfRenderWindow_create(defender->win.mode,
    "Leux dais phandeur tas kaptaih", sfResize | sfClose, NULL);
    sfRenderWindow_setFramerateLimit(defender->win.window, 60);
    if (!defender->win.window) {
        write (2, "WARNING Screen not display\n", 28);
        return (84);
    }
    return (0);
}