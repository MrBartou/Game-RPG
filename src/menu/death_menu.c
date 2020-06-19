/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** play a menu
*/

#include "my_rpg.h"

void death_menu(t_game *game)
{
    if (game->menu->game_menu[2] == 0)
        disp_death_menu(game);
    else
        disp_death_menu_option(game);
    event_manager(game);
    hover_manager(game);
}