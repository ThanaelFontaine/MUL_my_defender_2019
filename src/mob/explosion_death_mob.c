/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** explosion_death_mob.c
*/

#include "second_one.h"

static void move_rect(defender_t *defender, int offset, int max)
{
    defender->mob_explosion.rect.left =
    (defender->mob_explosion.rect.left + offset) % max;
}

int creat_explosion_mob(defender_t *defender)
{
    defender->mob_explosion.clock = sfClock_create();
    defender->mob_explosion.seconds = 0;
    defender->mob_explosion.size.x = 0.5f;
    defender->mob_explosion.size.y = 0.5f;
    defender->mob_explosion.pos.x = 1380;
    defender->mob_explosion.pos.y = 110;
    defender->mob_explosion.rect.top = 0;
    defender->mob_explosion.rect.left = 10;
    defender->mob_explosion.rect.width = 100;
    defender->mob_explosion.rect.height = 288;
    defender->mob_explosion.texture = sfTexture_createFromFile
    ("src/mob/img/death/all.png", NULL);
    help_explosion_mob(defender);
    return (0);
}

int help_explosion_mob(defender_t *defender)
{
    if (!defender->mob_explosion.texture) {
        write (2, "Missing the texture of the castle hud\n", 39);
        return (84);
    }
    defender->mob_explosion.sprite = sfSprite_create();
    sfSprite_setPosition(defender->mob_explosion.sprite,
    defender->mob_explosion.pos);
    sfSprite_setScale(defender->mob_explosion.sprite,
    defender->mob_explosion.size);
    sfSprite_setTexture(defender->mob_explosion.sprite,
    defender->mob_explosion.texture, sfTrue);
    sfSprite_setTextureRect(defender->mob_explosion.sprite,
    defender->mob_explosion.rect);
    return (0);
}

void explosion_mob_anim(defender_t *defender)
{
    if (defender->mob_explosion.seconds > 0.0001 &&
    defender->bool_exploding == 1) {
    move_rect(defender, 100, 7000);
    if (defender->mob_explosion.rect.left == 6900)
        defender->bool_exploding = 0;
    sfSprite_setTextureRect(defender->mob_explosion.sprite,
    defender->mob_explosion.rect);
    sfClock_restart(defender->mob_explosion.clock);
    }
}