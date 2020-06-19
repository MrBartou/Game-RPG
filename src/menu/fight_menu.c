/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** play a menu
*/

#include "fight.h"

void fight_menu(t_game *game)
{
    disp_fight_menu(game);
    launch_fight(game, game->list_npc[0]);
}