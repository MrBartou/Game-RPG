/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** find_item
*/

#include "my_item.h"

item *find_item(t_game *game, char *name)
{
    for (int i = 0; game->list_item[i] != 0; i++) {
        if (my_strcmp(name, game->list_item[i]->name) == 0)
            return game->list_item[i];
    }
    return NULL;
}