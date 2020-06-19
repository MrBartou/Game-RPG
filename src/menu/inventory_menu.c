/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** play a menu
*/

#include "my_rpg.h"

void inventory_menu(t_game *game)
{
    disp_inventory_menu(game);
    event_manager(game);
    hover_manager(game);
}