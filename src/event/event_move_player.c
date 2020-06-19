/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** manage the events
*/

#include "my_rpg.h"

static void check_hit_box_z(t_game *game)
{
    int ok = 0;

    if (game->menu->game_menu[1] == 0 && game->player->y > 94)
        ok = 1;
    if (game->menu->game_menu[1] == 1 && game->player->y > 353)
        ok = 1;
    if (game->menu->game_menu[1] == 2 && game->player->y > 304)
        ok = 1;
    if (game->menu->game_menu[1] == 3 && game->player->y > 523)
        ok = 1;
    if (game->menu->game_menu[1] == 4 && game->player->y > 436)
        ok = 1;
    if (game->menu->game_menu[1] == 5 && game->player->y > 406)
        ok = 1;
    if (ok == 1) {
        game->player->y = game->player->y - 3;
        game->player->dir = 1;
        game->player->move = 1;
    }
}

static void check_hit_box_s(t_game *game)
{
    int ok = 0;

    if (game->menu->game_menu[1] == 0 && game->player->y < 6480)
        ok = 1;
    if (game->menu->game_menu[1] == 1 && game->player->y < 932)
        ok = 1;
    if (game->menu->game_menu[1] == 2 && game->player->y < 988)
        ok = 1;
    if (game->menu->game_menu[1] == 3 && game->player->y < 727)
        ok = 1;
    if (game->menu->game_menu[1] == 4 && game->player->y < 760)
        ok = 1;
    if (game->menu->game_menu[1] == 5 && game->player->y < 802)
        ok = 1;
    if (ok == 1) {
        game->player->y = game->player->y + 3;
        game->player->dir = 3;
        game->player->move = 1;
    }
}

static void check_hit_box_q(t_game *game)
{
    int ok = 0;

    if (game->menu->game_menu[1] == 0 && game->player->x > 10)
        ok = 1;
    if (game->menu->game_menu[1] == 1 && game->player->x > 464)
        ok = 1;
    if (game->menu->game_menu[1] == 2 && game->player->x > 370)
        ok = 1;
    if (game->menu->game_menu[1] == 3 && game->player->x > 731)
        ok = 1;
    if (game->menu->game_menu[1] == 4 && game->player->x > 519)
        ok = 1;
    if (game->menu->game_menu[1] == 5 && game->player->x > 681)
        ok = 1;
    if (ok == 1) {
        game->player->x = game->player->x - 3;
        game->player->dir = 2;
        game->player->move = 1;
    }
}

static void check_hit_box_d(t_game *game)
{
    int ok = 0;

    if (game->menu->game_menu[1] == 0 && game->player->x < 3790)
        ok = 1;
    if (game->menu->game_menu[1] == 1 && game->player->x < 1391)
        ok = 1;
    if (game->menu->game_menu[1] == 2 && game->player->x < 1507)
        ok = 1;
    if (game->menu->game_menu[1] == 3 && game->player->x < 1130)
        ok = 1;
    if (game->menu->game_menu[1] == 4 && game->player->x < 1353)
        ok = 1;
    if (game->menu->game_menu[1] == 5 && game->player->x < 1215)
        ok = 1;
    if (ok == 1) {
        game->player->x = game->player->x + 3;
        game->player->dir = 4;
        game->player->move = 1;
    }
}

void event_move_player(t_game *game)
{
    game->player->move = 0;
    if (sfKeyboard_isKeyPressed(sfKeyZ))
        check_hit_box_z(game);
    if (sfKeyboard_isKeyPressed(sfKeyS))
        check_hit_box_s(game);
    if (sfKeyboard_isKeyPressed(sfKeyQ))
        check_hit_box_q(game);
    if (sfKeyboard_isKeyPressed(sfKeyD))
        check_hit_box_d(game);
}