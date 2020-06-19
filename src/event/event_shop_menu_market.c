/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** manage the event
*/

#include "my_rpg.h"

static void check_event_preview(t_game *game)
{
    if (game->x >= 129 && game->x <= 429 && game->y >= 584 && game->y <= 699)
        game->player->knife--;
    if (game->x >= 429 && game->x <= 729 && game->y >= 584 && game->y <= 699)
        game->player->gun--;
}

static void check_event_next(t_game *game)
{
    if (game->x >= 129 && game->x <= 429 && game->y >= 584 && game->y <= 699)
        game->player->knife++;
    if (game->x >= 429 && game->x <= 729 && game->y >= 584 && game->y <= 699)
        game->player->gun++;
}

static void check_event(t_game *game, int x, int y)
{
    int price = 0;

    if (x >= 1137 && x <= 1247 && y >= 122 && y <= 222) {
        play_button(game);
        check_event_preview(game);
    }
    if (x >= 1688 && x <= 1798 && y >= 122 && y <= 222) {
        play_button(game);
        check_event_next(game);
    }
    if (x >= 1353 && x <= 1593 && y >= 870 && y <= 970) {
        play_button(game);
        if (game->player->money >= price) {
            game->player->money -= price;
        }
    }
}

void event_shop_menu_market(t_game *game, sfEvent event)
{
    int x = game->mouse.x;
    int y = game->mouse.y;

    if (event.type == sfEvtMouseButtonPressed) {
        if (x >= 129 && x <= 729 && y >= 305 && y <= 969) {
            play_button(game);
            game->x = x;
            game->y = y;
        }
        check_event(game, x, y);
    }
    if (sfKeyboard_isKeyPressed(sfKeyEscape)) {
        game->menu->game_menu[0] = 2;
        game->menu->game_menu[1] = 2;
        play_button(game);
        play_music(game, 6);
    }
}