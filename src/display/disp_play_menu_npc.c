/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** displays a menu
*/

#include "my_rpg.h"

void disp_play_menu_npc(t_game *game, int nb, int dir, int pos)
{
    disp_play_menu_npc_body(game, nb, dir, pos);
    disp_play_menu_npc_head(game, nb, dir, pos);
    if (game->list_npc[nb]->shoes != 0)
        disp_play_menu_npc_shoes(game, nb, dir, pos);
    disp_play_menu_npc_pants(game, nb, dir, pos);
    disp_play_menu_npc_torso(game, nb, dir, pos);
    disp_play_menu_npc_armor(game, nb, dir, pos);
}