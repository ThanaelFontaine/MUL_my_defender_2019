/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** music.c
*/

#include "second_one.h"

int creat_the_game_music(defender_t *defender)
{
    defender->music_game = sfMusic_createFromFile("music/game/game.ogg");
    if (!defender->music_game) {
        write (2, "missing the game music\n", 24);
        return (84);
    }
    sfMusic_play(defender->music_game);
    return (0);
}