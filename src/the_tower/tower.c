/*
** EPITECH PROJECT, 2019
** back_up
** File description:
** tower.c
*/

#include "second_one.h"

static void move_rect(defender_t *defender, int offset, int max)
{
    defender->the_tower.rect.left =
    (defender->the_tower.rect.left + offset) % max;
}

int creat_the_tower(defender_t *defender)
{
    defender->the_tower.size.x = 0.5f;
    defender->the_tower.size.y = 0.5f;
    defender->the_tower.pos.x = 210;
    defender->the_tower.pos.y = 210;
    defender->the_tower.rect.top = 0;
    defender->the_tower.rect.left = 0;
    defender->the_tower.rect.width = 77;
    defender->the_tower.rect.height = 202;
    defender->the_tower.texture = sfTexture_createFromFile
    ("src/the_tower/img/tower.png", NULL);
    if (!defender->the_tower.texture) {
        write (2, "WARNING: Missing the the tower\n", 32);
        return (84);
    }
    help_tower(defender);
    return (0);
}

void help_tower(defender_t *defender)
{
    defender->the_tower.sprite = sfSprite_create();
    sfSprite_setTexture(defender->the_tower.sprite,
    defender->the_tower.texture, sfTrue);
    sfSprite_setPosition(defender->the_tower.sprite,
    defender->the_tower.pos);
    sfSprite_setScale(defender->the_tower.sprite,
    defender->the_tower.size);
    sfSprite_setTextureRect(defender->the_tower.sprite,
    defender->the_tower.rect);
}

void tower_anim(defender_t *defender)
{
    move_rect(defender, 77, 154);
    sfSprite_setTextureRect(defender->the_tower.sprite,
    defender->the_tower.rect);
}