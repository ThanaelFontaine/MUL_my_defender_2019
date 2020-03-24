/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** button_retry.c
*/

#include "second_one.h"

static void move_rect(defender_t *defender, int offset, int max)
{
    defender->button_retry.rect.left =
    (defender->button_retry.rect.left + offset) % max;
}

int creat_the_bouton_retry(defender_t *defender)
{
    defender->button_retry.rect.left = 0;
    defender->button_retry.rect.top = 0;
    defender->button_retry.rect.height = 120;
    defender->button_retry.rect.width = 119;
    defender->button_retry.pos.x = 300;
    defender->button_retry.pos.y = 250;
    defender->button_retry.texture = sfTexture_createFromFile
    ("src/lost/img/clear/retry.png", NULL);
    if (!defender->button_retry.texture) {
        write (2, "WARNING: Missing the bouton retry\n", 35);
        return (84);
    }
    help_button_retry(defender);
    return (0);
}

void help_button_retry(defender_t *defender)
{
    defender->button_retry.sprite = sfSprite_create();
    sfSprite_setTexture(defender->button_retry.sprite,
    defender->button_retry.texture, sfTrue);
    sfSprite_setPosition(defender->button_retry.sprite,
    defender->button_retry.pos);
    sfSprite_setTextureRect(defender->button_retry.sprite,
    defender->button_retry.rect);
}

void button_retry_anim(defender_t *defender)
{
    move_rect(defender, 119, 238);
    sfSprite_setTextureRect(defender->button_retry.sprite,
    defender->button_retry.rect);
}