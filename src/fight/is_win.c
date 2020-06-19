/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** is_win
*/

#include "fight.h"

int is_win(t_fight *fight)
{
    if (fight->player->life <= 0)
        return 1;
    if (fight->first->pv > 0)
        return 0;
    if (fight->nb_enemy > 1 && fight->second->pv > 0)
        return 0;
    if (fight->nb_enemy > 2 && fight->third->pv > 0)
        return 0;
    return 2;
}