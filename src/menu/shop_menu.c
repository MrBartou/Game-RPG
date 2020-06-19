/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** play a menu
*/

#include "my_rpg.h"

void shop_menu(t_game *game)
{
    disp_shop_menu(game);
    event_manager(game);
    hover_manager(game);
}