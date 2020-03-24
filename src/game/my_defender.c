/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** my_defender.c
*/

#include "second_one.h"

void initialization_and_call(defender_t *defender)
{
    defender->boulean = 0;
    defender->boulean_pause = 0;
    defender->boulean_defeat = 0;
    defender->boulean_how_to_play = 0;
    defender->dead = 0;
    defender->check_bool = 1;
    defender->bool_exploding = 0;
    defender->mob_god.life = 0;
    defender->boulean_tower_is_real = 0;
    defender->boulean_click = 0;
    initialization_and_call_2(defender);
}

void initialization_and_call_2(defender_t *defender)
{
    create_the_window(defender);
    creat_the_map(defender);
    creat_the_game_music(defender);
    creat_the_gold_hud(defender);
    creat_the_ennemie_hud(defender);
    creat_the_castle_hud(defender);
    creat_text_dead_ennemi(defender);
    creat_text_drop_money(defender);
    creat_mob_god(defender);
    creat_explosion_mob(defender);
    creat_tower_area_1(defender);
    creat_inventory(defender);
    creat_the_tower(defender);
}

static void help(defender_t *defender)
{
    if ((defender->mob_god.life == 0)) {
        defender->mob_god.pos.x = -50;
        defender->mob_god.pos.y = 394;
        defender->mob_god.life = 1;
    }
}

void event_window_is_open(defender_t *defender)
{
    while (sfRenderWindow_isOpen(defender->win.window)) {
        clock_anim_explosion(defender);
        clock_anim_explosion(defender);
        clock_moove_god(defender);
        clock_anim_mob(defender);
        if (defender->defeat_count == 4)
            defender->boulean_defeat = 1;
        if (defender->boulean_tower_is_real == 1) {
            attack_tower(defender);
            help(defender);
        }
        boulean_game(defender);
        while (sfRenderWindow_pollEvent(defender->win.window,
        defender->event))
            event_of_the_while(defender);
    }
}

int the_defender(defender_t *defender)
{
    initialization_and_call(defender);
    event_window_is_open(defender);
    destroy_1(defender);
    return (0);
}