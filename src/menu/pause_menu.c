/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** play a menu
*/

#include "my_rpg.h"

void pause_menu(t_game *game)
{
    if (game->menu->game_menu[2] == 0)
        disp_pause_menu(game);
    else
        disp_pause_menu_option(game);
    event_manager(game);
    hover_manager(game);
}