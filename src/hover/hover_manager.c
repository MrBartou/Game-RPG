/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** manage the hovers
*/

#include "my_rpg.h"

void hover_manager(t_game *game)
{
    if (game->menu->game_menu[0] == 0)
        hover_main_menu(game);
    if (game->menu->game_menu[0] == 1)
        hover_shop_menu(game);
    if (game->menu->game_menu[0] == 2)
        hover_play_menu(game);
    if (game->menu->game_menu[0] == 3)
        hover_pause_menu(game);
    if (game->menu->game_menu[0] == 4)
        hover_death_menu(game);
    if (game->menu->game_menu[0] == 5)
        hover_inventory_menu(game);
    if (game->menu->game_menu[0] == 6)
        hover_fight_menu(game);
}