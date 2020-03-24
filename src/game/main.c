/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** main.c
*/

#include "second_one.h"

int main(int ac, char **av)
{
    defender_t *defender = malloc(sizeof(defender_t));
    defender->event = malloc(sizeof(defender->event));

    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h' && av[1][2] == '\0') {
        documentation();
        return (0);
    }
    if (ac != 1) {
        write(2, "WARNING: Please juste lunch with ./[name_binary]", 49);
        write(2, "or please write -h\n", 20);
        return (84);
    }
    the_defender(defender);
    free(defender);
    free(defender->event);
    return (0);
}