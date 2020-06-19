/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** displays a menu
*/

#include "my_rpg.h"

void disp_play_menu_player(t_game *game, int dir, int pos)
{
    disp_play_menu_player_body(game, dir, pos);
    disp_play_menu_player_head(game, dir, pos);
    if (game->player->shoes != 0)
        disp_play_menu_player_shoes(game, dir, pos);
    disp_play_menu_player_pants(game, dir, pos);
    disp_play_menu_player_torso(game, dir, pos);
    disp_play_menu_player_armor(game, dir, pos);
}