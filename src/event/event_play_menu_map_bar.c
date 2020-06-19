/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** manage the events
*/

#include "my_rpg.h"

void event_play_menu_map_bar(t_game *game, int x, int y)
{
    if (x >= 435 + 208 * 2 && x <= 435 + 316 * 2
        && y >= 120 + 395 * 2 && y <= 120 + 431 * 2) {
        game->menu->game_menu[1] = 0;
        game->player->x = game->player->save_x;
        game->player->y = game->player->save_y;
        play_sound(game, 4);
        play_music(game, 2);
    }
}