/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** copy_enemy
*/

#include "fight.h"

int copy_enemy(enemy *dest, enemy *src)
{
    my_strcpy(dest->name, src->name);
    dest->head = src->head;
    dest->body = src->body;
    dest->armor = src->armor;
    dest->shoes = src->shoes;
    dest->torso = src->torso;
    dest->pants = src->pants;
    dest->max_damage = src->max_damage;
    dest->min_damage = src->min_damage;
    dest->ammo = src->ammo;
    dest->gun_damage = src->gun_damage;
    dest->pv = src->pv;
    dest->pv_max = src->pv_max;
    return 0;
}