/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** manage the events
*/

#include "my_rpg.h"

void event_play_menu_map_house_2(t_game *game, int x, int y)
{
    if (x >= 650 + 180 * 2 && x <= 650 + 243 * 2
        && y >= 240 + 270 * 2 && y <= 240 + 315 * 2) {
        game->menu->game_menu[1] = 0;
        game->player->x = game->player->save_x;
        game->player->y = game->player->save_y;
        play_sound(game, 4);
        play_music(game, 2);
    }
}