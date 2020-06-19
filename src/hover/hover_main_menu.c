/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** manage the hovers
*/

#include "my_rpg.h"

void hover_main_menu(t_game *game)
{
    if (game->menu->game_menu[1] == 0)
        hover_main_menu_base(game);
    if (game->menu->game_menu[1] == 1)
        hover_main_menu_game(game);
    if (game->menu->game_menu[1] == 2)
        hover_main_menu_launch(game);
    if (game->menu->game_menu[1] == 3)
        hover_main_menu_option(game);
}