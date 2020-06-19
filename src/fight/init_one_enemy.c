/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** init_one_enemy
*/

#include "fight.h"

static int add_texture_enemy(enemy *e, char *buf, int *i)
{
    e->body = get_int_file(&buf[*i], i);
    e->head = get_int_file(&buf[*i], i);
    e->torso = get_int_file(&buf[*i], i);
    e->armor = get_int_file(&buf[*i], i);
    e->pants = get_int_file(&buf[*i], i);
    e->shoes = get_int_file(&buf[*i], i);
    e++;
    e--;
    return 0;
}

enemy *init_one_enemy(char *buf)
{
    enemy *e = NULL;
    int i = 0;
    char *temp = NULL;

    e = malloc(sizeof(enemy));
    if (e == NULL)
        return NULL;
    temp = get_char32_file(&buf[i], &i);
    my_strcpy(e->name, temp);
    free(temp);
    e->pv_max = get_int_file(&buf[i], &i);
    e->pv = e->pv_max;
    e->min_damage = get_int_file(&buf[i], &i);
    e->max_damage = get_int_file(&buf[i], &i);
    e->ammo = get_int_file(&buf[i], &i);
    e->gun_damage = get_int_file(&buf[i], &i);
    add_texture_enemy(e, buf, &i);
    return e;
}