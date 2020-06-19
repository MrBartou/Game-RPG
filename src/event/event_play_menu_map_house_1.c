/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** manage the events
*/

#include "my_rpg.h"

void event_play_menu_map_house_1(t_game *game, int x, int y)
{
    if (x >= 490 + 68 * 2 && x <= 490 + 180 * 2
        && y >= 270 + 232 * 2 && y <= 270 + 284 * 2) {
        game->menu->game_menu[1] = 0;
        game->player->x = game->player->save_x;
        game->player->y = game->player->save_y;
        play_sound(game, 4);
        play_music(game, 2);
    }
}