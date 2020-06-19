/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** manage the event
*/

#include "my_rpg.h"

void event_shop_menu(t_game *game, sfEvent event)
{
    if (game->menu->game_menu[1] == 0)
        event_shop_menu_gunsmith(game, event);
    if (game->menu->game_menu[1] == 1)
        event_shop_menu_clothes(game, event);
    if (game->menu->game_menu[1] == 2)
        event_shop_menu_hairdresser(game, event);
    if (game->menu->game_menu[1] == 3)
        event_shop_menu_market(game, event);
}