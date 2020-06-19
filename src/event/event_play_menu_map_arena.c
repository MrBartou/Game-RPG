/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** manage the events
*/

#include "my_rpg.h"

void event_play_menu_map_arena(t_game *game, int x, int y)
{
    if (x >= 340 + 93 * 2 && x <= 340 + 223 * 2
        && y >= 70 + 275 * 2 && y <= 70 + 372 * 2) {
        game->menu->game_menu[0] = 1;
        game->menu->game_menu[1] = 3;
        play_music(game, 1);
    }
    if (x >= 340 + 72 * 2 && x <= 340 + 180 * 2
        && y >= 70 + 439 * 2 && y <= 70 + 485 * 2) {
        game->menu->game_menu[1] = 0;
        game->player->x = game->player->save_x;
        game->player->y = game->player->save_y;
        play_sound(game, 4);
        play_music(game, 2);
    }
}