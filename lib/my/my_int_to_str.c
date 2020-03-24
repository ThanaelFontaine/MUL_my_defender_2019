/*
** EPITECH PROJECT, 2019
** my_put_nbr.c
** File description:
** my_int_to_str
*/

#include "../../include/second_one.h"

char *my_int_to_str(int nb)
{
    long i = nb;
    char *nb_dead;
    int count = 1;

    while (nb > 9) {
        nb = nb / 10;
        count += 1;
    }
    nb_dead = malloc(sizeof(char) * (count + 1));
    nb_dead[count] = '\0';
    if (i == 0)
        nb_dead[0] = 0 + 48;
    while (i != 0) {
        nb_dead[count - 1] = i % 10 + 48;
        i = i / 10;
        count--;
    }
    return (nb_dead);
}