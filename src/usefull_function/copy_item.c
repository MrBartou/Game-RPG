/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** copy_item
*/

#include "my_rpg.h"

int copy_item(item *dest, item *src)
{
    dest->ammo = src->ammo;
    dest->damage = src->damage;
    my_strcpy(dest->name, src->name);
    my_strcpy(dest->type, src->type);
    return 0;
}