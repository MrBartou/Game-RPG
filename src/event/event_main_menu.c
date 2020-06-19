/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** manage the event
*/

#include "my_rpg.h"

void event_main_menu(t_game *game, sfEvent event)
{
    if (game->menu->game_menu[1] == 0)
        event_main_menu_base(game, event);
    if (game->menu->game_menu[1] == 1)
        event_main_menu_game(game, event);
    if (game->menu->game_menu[1] == 2)
        event_main_menu_launch(game, event);
    if (game->menu->game_menu[1] == 3)
        event_main_menu_option(game, event);
}