/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** play a menu
*/

#include "my_rpg.h"

void main_menu(t_game *game)
{
    disp_main_menu(game);
    event_manager(game);
    hover_manager(game);
}