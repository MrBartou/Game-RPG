/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** manage the hovers
*/

#include "my_rpg.h"

void hover_shop_menu(t_game *game)
{
    if (game->menu->game_menu[1] == 0)
        hover_shop_menu_gunsmith(game);
    if (game->menu->game_menu[1] == 1)
        hover_shop_menu_clothes(game);
    if (game->menu->game_menu[1] == 2)
        hover_shop_menu_hairdresser(game);
    if (game->menu->game_menu[1] == 3)
        hover_shop_menu_market(game);
}