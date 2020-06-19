/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** find_png_in_list
*/

#include "my_png.h"

int find_png_in_list(t_game *game, char *name)
{
    for (int i = 0; game->list_npc[i] != 0; i++) {
        if (my_strcmp(name, game->list_npc[i]->name) == 0)
            return i;
    }
    return 0;
}