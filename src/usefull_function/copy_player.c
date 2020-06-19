/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** copy_player
*/

#include "usefull_function.h"

int copy_player(player *dest, player *src)
{
    dest->head = src->head;
    dest->body = src->body;
    dest->armor = src->armor;
    dest->shoes = src->shoes;
    dest->torso = src->torso;
    dest->pants = src->pants;
    dest->gun = src->gun;
    dest->knife = src->knife;
    dest->life = src->life;
    dest->money = src->money;
    dest->x = src->x;
    dest->y = src->y;
    copy_item(dest->gun_item, src->gun_item);
    copy_item(dest->knife_item, src->knife_item);
    copy_item(dest->fist, src->fist);
    return 0;
}