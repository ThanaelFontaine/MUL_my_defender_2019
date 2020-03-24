/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** destroy.c
*/

#include "second_one.h"

void destroy_1(defender_t *defender)
{
    sfMusic_destroy(defender->music_game);
    sfSprite_destroy(defender->mob_god.sprite);
    sfTexture_destroy(defender->mob_god.texture);
    sfSprite_destroy(defender->hud_gold.sprite);
    sfTexture_destroy(defender->hud_gold.texture);
    sfSprite_destroy(defender->hud_ennemie.sprite);
    sfTexture_destroy(defender->hud_ennemie.texture);
    sfSprite_destroy(defender->pause_menu.sprite);
    sfTexture_destroy(defender->pause_menu.texture);
    sfSprite_destroy(defender->button_home.sprite);
    sfTexture_destroy(defender->button_home.texture);
    sfSprite_destroy(defender->button_pause.sprite);
    sfTexture_destroy(defender->button_pause.texture);
    sfSprite_destroy(defender->button_play.sprite);
    sfTexture_destroy(defender->button_play.texture);
    sfSprite_destroy(defender->button_leave.sprite);
    sfTexture_destroy(defender->button_leave.texture);
    sfSprite_destroy(defender->button_htp.sprite);
    destroy_2(defender);
}

void destroy_2(defender_t *defender)
{
    sfTexture_destroy(defender->button_htp.texture);
    sfSprite_destroy(defender->htp_menu.sprite);
    sfTexture_destroy(defender->htp_menu.texture);
    sfSprite_destroy(defender->button_leave_.sprite);
    sfTexture_destroy(defender->button_leave_.texture);
    sfSprite_destroy(defender->the_map.sprite);
    sfTexture_destroy(defender->the_map.texture);
    sfSprite_destroy(defender->menu.sprite);
    sfTexture_destroy(defender->menu.texture);
    sfSprite_destroy(defender->inventory.sprite);
    sfTexture_destroy(defender->inventory.texture);
    sfSprite_destroy(defender->hud_castle.sprite);
    sfTexture_destroy(defender->hud_castle.texture);
    sfSprite_destroy(defender->mob_explosion.sprite);
    sfTexture_destroy(defender->mob_explosion.texture);
    sfText_destroy(defender->hud_text_dead.text);
    sfFont_destroy(defender->hud_text_dead.font);
    sfText_destroy(defender->hud_text_money.text);
    sfFont_destroy(defender->hud_text_money.font);
    sfRenderWindow_destroy(defender->win.window);
}