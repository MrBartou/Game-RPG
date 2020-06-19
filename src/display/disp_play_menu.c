/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** displays a menu
*/

#include "my_rpg.h"

static void sort_disp_npc(t_game *game)
{
    for (int i = 0; game->list_npc[i] != NULL; i++)
        if (game->list_npc[i]->map == game->menu->game_menu[1])
            disp_play_menu_npc(game, i, game->list_npc[i]->dir_see, 1);
}

static void annim_player(t_game *game)
{
    if (sfTime_asSeconds(sfClock_getElapsedTime(game->sprt->clock)) > 0.1) {
        sfClock_restart(game->sprt->clock);
        game->player->pos++;
    }
    if (game->player->pos > 9)
        game->player->pos = 2;
    if (game->player->move == 0)
        game->player->pos = 1;
}

void disp_play_menu(t_game *game)
{
    int all = 0;

    disp_play_menu_hit(game);
    disp_play_menu_map(game);
    disp_play_menu_plus(game);
    annim_player(game);
    sort_disp_npc(game);
    disp_play_menu_player(game, game->player->dir, game->player->pos);
}