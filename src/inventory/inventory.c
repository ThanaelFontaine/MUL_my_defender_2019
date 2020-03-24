/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** inventory.c
*/

#include "second_one.h"

static void move_rect(defender_t *defender, int offset, int max)
{
    defender->inventory.rect.left =
    (defender->inventory.rect.left + offset) % max;
}

int creat_inventory(defender_t *defender)
{
    defender->inventory.size.x = 0.5f;
    defender->inventory.size.y = 0.5f;
    defender->inventory.pos.x = 0;
    defender->inventory.pos.y = 495;
    defender->inventory.rect.top = 0;
    defender->inventory.rect.left = 0;
    defender->inventory.rect.width = 301;
    defender->inventory.rect.height = 191;
    defender->inventory.texture = sfTexture_createFromFile
    ("src/inventory/img/inventory_slot.png", NULL);
    if (!defender->inventory.texture) {
        write (2, "WARNING: Missing the inventory\n", 32);
        return (84);
    }
    help_inventory(defender);
    return (0);
}

void help_inventory(defender_t *defender)
{
    defender->inventory.sprite = sfSprite_create();
    sfSprite_setTexture(defender->inventory.sprite,
    defender->inventory.texture, sfTrue);
    sfSprite_setPosition(defender->inventory.sprite,
    defender->inventory.pos);
    sfSprite_setScale(defender->inventory.sprite,
    defender->inventory.size);
    sfSprite_setTextureRect(defender->inventory.sprite,
    defender->inventory.rect);
}

void inventory_anim(defender_t *defender)
{
    move_rect(defender, 301, 602);
    sfSprite_setTextureRect(defender->inventory.sprite,
    defender->inventory.rect);
}