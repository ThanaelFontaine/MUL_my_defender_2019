/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** second_one.h
*/

#ifndef _TEST_
#define _TEST_

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>
#include <stdarg.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/Window/Export.h>
#include <SFML/Graphics/Types.h>
#include <SFML/System/Export.h>
#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Window/Types.h>
#include <SFML/System/Vector2.h>
#include "my.h"

typedef struct moob_moove_s
{
    sfClock *clock;
    sfTime time;
    float seconds;
} moob_moove_t;

typedef struct mob_s
{
    int life;
    sfTexture *texture;
    sfSprite *sprite;
    sfVector2f size;
    sfVector2f pos;
    sfIntRect rect;
    sfClock *clock;
    sfTime time;
    float seconds;
    moob_moove_t mob_god_moove;
}mob_t;

typedef struct hud_s
{
    sfTexture *texture;
    sfSprite *sprite;
    sfVector2f size;
    sfVector2f pos;
    sfIntRect rect;
    sfText *text;
    sfFont *font;
    sfColor color;
} hud_t;

typedef struct inventory_s
{
    sfTexture *texture;
    sfSprite *sprite;
    sfVector2f size;
    sfVector2f pos;
    sfIntRect rect;
} inventory_t;

typedef struct button_s
{
    sfTexture *texture;
    sfSprite *sprite;
    sfVector2f size;
    sfVector2f pos;
    sfIntRect rect;
} button_t;

typedef struct window_s
{
    sfVideoMode mode;
    sfRenderWindow *window;
} window_t;

typedef struct the_map_s
{
    sfTexture *texture;
    sfSprite *sprite;
    sfVector2f size;
} the_map_t;

typedef struct the_menu_s
{
    sfTexture *texture;
    sfSprite *sprite;
    sfVector2f size;
    sfVector2f pos;
} the_menu_t;

typedef struct the_pause_menu_s
{
    sfTexture *texture;
    sfSprite *sprite;
    sfVector2f size;
    sfVector2f pos;
} the_pause_menu_t;

typedef struct the_htp_s
{
    sfTexture *texture;
    sfSprite *sprite;
    sfVector2f size;
    sfVector2f pos;
} the_htp_t;

typedef struct the_defeat_menu_s
{
    sfTexture *texture;
    sfSprite *sprite;
    sfVector2f size;
    sfVector2f pos;
} the_defeat_menu_t;

typedef struct the_tower_area_s
{
    sfTexture *texture;
    sfSprite *sprite;
    sfVector2f size;
    sfVector2f pos;
    sfIntRect rect;
} the_tower_area_t;

typedef struct the_tower_s
{
    sfTexture *texture;
    sfSprite *sprite;
    sfVector2f size;
    sfVector2f pos;
    sfIntRect rect;
} the_tower_t;

typedef struct defender_s
{
    int boulean_click;
    char *nb_dead;
    char *sum_drop;
    int bool_exploding;
    int check_bool;
    int dead;
    int drop;
    int defeat_count;
    int boulean;
    int boulean_pause;
    int boulean_defeat;
    int boulean_how_to_play;
    int boulean_inventory_is_real;
    int boulean_tower_is_real;
    window_t win;
    the_map_t the_map;
    the_pause_menu_t pause_menu;
    the_menu_t menu;
    the_htp_t htp_menu;
    the_defeat_menu_t defeat_menu;
    button_t button_play;
    button_t button_leave;
    button_t button_pause;
    button_t button_home;
    button_t button_leave_;
    button_t button_retry;
    button_t button_leave_lost;
    button_t button_continue;
    button_t button_htp;
    button_t button_htp_home;
    hud_t hud_gold;
    hud_t hud_ennemie;
    hud_t hud_castle;
    hud_t hud_text_dead;
    hud_t hud_text_money;
    mob_t mob_god;
    mob_t mob_explosion;
    sfVector2i mouse_position;
    sfEvent *event;
    sfMusic *music_game;
    inventory_t inventory;
    the_tower_t the_tower;
    the_tower_area_t tower_area_1;
} defender_t;

void documentation(void);

int main(int ac, char **av);

int the_defender(defender_t *defender);
void initialization_and_call(defender_t *defender);
void initialization_and_call_2(defender_t *defender);
void event_window_is_open(defender_t *defender);

void boulean_game(defender_t *defender);
void boulean_defeat(defender_t *defender);
void event_of_the_while(defender_t *defender);

int create_the_window(defender_t *defender);

int creat_the_map(defender_t *defender);

int creat_the_menu_background(defender_t *defender);
int the_menu(defender_t *defender);

int creat_the_bouton_htp_home(defender_t *defender);
void help_button_htp_home(defender_t *defender);
void button_htp_home_anim(defender_t *defender);

int creat_the_bouton_play(defender_t *defender);
void help_button_play(defender_t *defender);
void button_play_anim(defender_t *defender);

int creat_the_bouton_leave(defender_t *defender);
void help_button_leave(defender_t *defender);
void button_leave_anim(defender_t *defender);

int creat_the_bouton_pause(defender_t *defender);
void help_button_pause(defender_t *defender);
void button_pause_anim(defender_t *defender);

int creat_the_bouton_home(defender_t *defender);
void help_button_home(defender_t *defender);
void button_home_anim(defender_t *defender);

int creat_the_bouton_continue(defender_t *defender);
void help_button_continue(defender_t *defender);
void button_continue_anim(defender_t *defender);

int creat_the_bouton_leave_(defender_t *defender);
void help_button_leave_(defender_t *defender);
void button_leave_anim_(defender_t *defender);

int creat_the_bouton_leave_lost(defender_t *defender);
void help_button_leave_lost(defender_t *defender);
void button_leave_lost_anim(defender_t *defender);

int creat_the_bouton_htp(defender_t *defender);
void help_button_htp(defender_t *defender);
void button_htp_anim(defender_t *defender);

void mouse_pos(defender_t *defender);

void boutton_collider_htp_home(defender_t *defender);

void boutton_collider_play(defender_t *defender);
void boutton_collider_leave(defender_t *defender);
void boutton_collider_htp(defender_t *defender);

void boutton_collider_pause(defender_t *defender);
void tower_area_1_collider(defender_t *defender);
void inventory_collider(defender_t *defender);

void boutton_collider_home(defender_t *defender);
void boutton_collider_continue(defender_t *defender);
void boutton_collider_leave_(defender_t *defender);

void boutton_collider_retry(defender_t *defender);
void boutton_collider_leave_lost(defender_t *defender);

int creat_the_game_music(defender_t *defender);

int creat_the_pause_background(defender_t *defender);
int the_pause_menu(defender_t *defender);

int creat_inventory(defender_t *defender);
void help_inventory(defender_t *defender);
void inventory_anim(defender_t *defender);

int creat_the_gold_hud(defender_t *defender);

int creat_the_ennemie_hud(defender_t *defender);

int creat_the_castle_hud(defender_t *defender);
int help_castle_hud(defender_t *defender);
void castle_hud_anim(defender_t *defender);
int creat_text_dead_ennemi(defender_t *defender);
int creat_text_drop_money(defender_t *defender);

int creat_mob_god(defender_t *defender);
int help_mob_god(defender_t *defender);
void mob_god_anim(defender_t *defender);

void dead_mob(defender_t *defender);

void moove_god_mob(defender_t *defender);
void moove_god_mob_2(defender_t *defender);
void end_of_moovement_mon_god(defender_t *defender);

int creat_explosion_mob(defender_t *defender);
int help_explosion_mob(defender_t *defender);
void explosion_mob_anim(defender_t *defender);

int creat_the_defeat_background(defender_t *defender);
int the_defeat(defender_t *defender);

int creat_the_bouton_retry(defender_t *defender);
void help_button_retry(defender_t *defender);
void button_retry_anim(defender_t *defender);

void draw_game_1(defender_t *defender);
void draw_game_2(defender_t *defender);

void draw_main_menu(defender_t *defender);
void draw_defeat_menu(defender_t *defender);
void draw_pause(defender_t *defender);
void draw_htp(defender_t *defender);

void destroy_1(defender_t *defender);
void destroy_2(defender_t *defender);

void clock_anim_explosion(defender_t *defender);

void clock_anim_mob(defender_t *defender);
void clock_moove_god(defender_t *defender);
void clock_explosion(defender_t *defender);

int creat_the_htp_background(defender_t *defender);
int htp_menu(defender_t *defender);

int creat_tower_area_1(defender_t *defender);
void help_tower_area_1(defender_t *defender);

int creat_the_tower(defender_t *defender);
void help_tower(defender_t *defender);
void tower_anim(defender_t *defender);

int attack_tower(defender_t *defender);
float get_distance(sfVector2f p1, sfVector2f p2);

#endif /*_TEST_*/