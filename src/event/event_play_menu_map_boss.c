/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** manage the events
*/

#include "my_rpg.h"

void event_play_menu_map_boss(t_game *game, int x, int y)
{
    if (x >= 700 + 90 * 2 && x <= 700 + 161 * 2
        && y >= 350 + 183 * 2 && y <= 350 + 215 * 2) {
        game->menu->game_menu[1] = 0;
        game->player->x = game->player->save_x;
        game->player->y = game->player->save_y;
        play_sound(game, 4);
        play_music(game, 2);
    }
}