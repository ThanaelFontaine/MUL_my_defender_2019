/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** mob.c
*/

#include "second_one.h"

static void move_rect(defender_t *defender, int offset, int max)
{
    defender->mob_god.rect.left =
    (defender->mob_god.rect.left + offset) % max;
}

int creat_mob_god(defender_t *defender)
{
    defender->mob_god.mob_god_moove.clock = sfClock_create();
    defender->mob_god.mob_god_moove.seconds = 0;
    defender->mob_god.clock = sfClock_create();
    defender->mob_god.seconds = 0;
    defender->mob_god.size.x = 0.6f;
    defender->mob_god.size.y = 0.6f;
    defender->mob_god.pos.x = -150;
    defender->mob_god.pos.y = 394;
    defender->mob_god.rect.top = 0;
    defender->mob_god.rect.left = 0;
    defender->mob_god.rect.width = 96;
    defender->mob_god.rect.height = 97;
    defender->mob_god.texture = sfTexture_createFromFile
    ("src/mob/img/god.png", NULL);
    help_mob_god(defender);
    return (0);
}

int help_mob_god(defender_t *defender)
{
    if (!defender->mob_god.texture) {
        write (2, "Missing the texture of mob god\n", 32);
        return (84);
    }
    defender->mob_god.sprite = sfSprite_create();
    sfSprite_setPosition(defender->mob_god.sprite,
    defender->mob_god.pos);
    sfSprite_setScale(defender->mob_god.sprite,
    defender->mob_god.size);
    sfSprite_setTexture(defender->mob_god.sprite,
    defender->mob_god.texture, sfTrue);
    sfSprite_setTextureRect(defender->mob_god.sprite,
    defender->mob_god.rect);
    return (0);
}

void mob_god_anim(defender_t *defender)
{
    if (defender->mob_god.seconds > 0.2) {
        sfSprite_setTextureRect(defender->mob_god.sprite,
        defender->mob_god.rect);
        move_rect(defender, 96, 288);
        sfClock_restart(defender->mob_god.clock);
    }
}