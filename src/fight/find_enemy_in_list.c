/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** find_enemy_in_list
*/

#include "fight.h"

enemy *find_enemy_in_list(enemy **list, char *name)
{
    int i = 0;

    for (; list[i] != 0; i++)
        if (my_strcmp(list[i]->name, name) == 0)
            return list[i];
    my_putstr("nonexistent enemy, default choose 'bandit'");
    return list[0];
}