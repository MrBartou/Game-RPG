/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** manage the events
*/

#include "my_rpg.h"

static void check_event_one(t_game *game, int x, int y)
{
    if (x >= 2634 - game->player->x && x <= 2966 - game->player->x
        && y >= 5640 - game->player->y && y <= 5876 - game->player->y) {
        game->menu->game_menu[1] = 1;
        game->player->save_x = game->player->x;
        game->player->save_y = game->player->y;
        game->player->x = 250 * 2 + 435;
        game->player->y = 400 * 2 + 120;
        play_sound(game, 4);
        play_music(game, 3);
    }
    if (x >= 3960 - game->player->x && x <= 4218 - game->player->x
        && y >= 3310 - game->player->y && y <= 3606 - game->player->y) {
        game->menu->game_menu[1] = 2;
        game->player->save_x = game->player->x;
        game->player->save_y = game->player->y;
        game->player->x = 120 * 2 + 340;
        game->player->y = 450 * 2 + 70;
        play_sound(game, 4);
        play_music(game, 6);
    }
}

static void check_event_two(t_game *game, int x, int y)
{
    if (x >= 2228 - game->player->x && x <= 2612 - game->player->x
        && y >= 834 - game->player->y && y <= 1058 - game->player->y) {
        game->menu->game_menu[1] = 3;
        game->player->save_x = game->player->x;
        game->player->save_y = game->player->y;
        game->player->x = 110 * 2 + 700;
        game->player->y = 190 * 2 + 350;
        play_sound(game, 4);
        play_music(game, 5);
    }
    if (x >= 1104 - game->player->x && x <= 1358 - game->player->x
        && y >= 4942 - game->player->y && y <= 5166 - game->player->y) {
        game->menu->game_menu[1] = 4;
        game->player->save_x = game->player->x;
        game->player->save_y = game->player->y;
        game->player->x = 130 * 2 + 490;
        game->player->y = 245 * 2 + 270;
        play_sound(game, 4);
        play_music(game, 5);
    }
}

static void check_event_three(t_game *game, int x, int y)
{
    if (x >= 2186 - game->player->x && x <= 2452 - game->player->x
        && y >= 3390 - game->player->y && y <= 3598 - game->player->y) {
        game->menu->game_menu[1] = 5;
        game->player->save_x = game->player->x;
        game->player->save_y = game->player->y;
        game->player->x = 200 * 2 + 650;
        game->player->y = 275 * 2 + 240;
        play_sound(game, 4);
        play_music(game, 5);
    }
    if (x >= 3338 - game->player->x && x <= 3546 - game->player->x
        && y >= 3390 - game->player->y && y <= 3598 - game->player->y) {
        game->menu->game_menu[0] = 1;
        game->menu->game_menu[1] = 0;
        game->player->save_x = game->player->x;
        game->player->save_y = game->player->y;
        play_sound(game, 4);
        play_music(game, 1);
    }
}

static void check_event_four(t_game *game, int x, int y)
{
    if (x >= 3960 - game->player->x && x <= 4218 - game->player->x
        && y >= 4252 - game->player->y && y <= 4548 - game->player->y) {
        game->menu->game_menu[0] = 1;
        game->menu->game_menu[1] = 1;
        game->player->save_x = game->player->x;
        game->player->save_y = game->player->y;
        play_sound(game, 4);
        play_music(game, 1);
    }
    if (x >= 1370 - game->player->x && x <= 1624 - game->player->x
        && y >= 6300 - game->player->y && y <= 6590 - game->player->y) {
        game->menu->game_menu[0] = 1;
        game->menu->game_menu[1] = 2;
        game->player->save_x = game->player->x;
        game->player->save_y = game->player->y;
        play_sound(game, 4);
        play_music(game, 1);
    }
}

void event_play_menu_map_map(t_game *game, int x, int y)
{
    check_event_one(game, x, y);
    check_event_two(game, x, y);
    check_event_three(game, x, y);
    check_event_four(game, x, y);
}