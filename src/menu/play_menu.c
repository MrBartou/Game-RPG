/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** play a menu
*/

#include "my_rpg.h"

void play_menu(t_game *game)
{
    disp_play_menu(game);
    event_manager(game);
}