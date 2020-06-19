/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** manage the event
*/

#include "my_rpg.h"

static void check_event_preview(t_game *game)
{
    if (game->x >= 129 && game->x <= 429 && game->y >= 350 && game->y <= 465)
        game->player->body--;
    if (game->x >= 129 && game->x <= 429 && game->y >= 521 && game->y <= 636)
        game->player->armor--;
    if (game->x >= 129 && game->x <= 429 && game->y >= 687 && game->y <= 802)
        game->player->torso--;
    if (game->x >= 129 && game->x <= 429 && game->y >= 854 && game->y <= 969)
        game->player->knife--;
    if (game->x >= 429 && game->x <= 729 && game->y >= 350 && game->y <= 465)
        game->player->head--;
    if (game->x >= 429 && game->x <= 729 && game->y >= 521 && game->y <= 636)
        game->player->pants--;
    if (game->x >= 429 && game->x <= 729 && game->y >= 687 && game->y <= 802)
        game->player->shoes--;
    if (game->x >= 429 && game->x <= 729 && game->y >= 854 && game->y <= 969)
        game->player->gun--;
}

static void check_event_next(t_game *game)
{
    if (game->x >= 129 && game->x <= 429 && game->y >= 350 && game->y <= 465)
        game->player->body++;
    if (game->x >= 129 && game->x <= 429 && game->y >= 521 && game->y <= 636)
        game->player->armor++;
    if (game->x >= 129 && game->x <= 429 && game->y >= 687 && game->y <= 802)
        game->player->torso++;
    if (game->x >= 129 && game->x <= 429 && game->y >= 854 && game->y <= 969)
        game->player->knife++;
    if (game->x >= 429 && game->x <= 729 && game->y >= 350 && game->y <= 465)
        game->player->head++;
    if (game->x >= 429 && game->x <= 729 && game->y >= 521 && game->y <= 636)
        game->player->pants++;
    if (game->x >= 429 && game->x <= 729 && game->y >= 687 && game->y <= 802)
        game->player->shoes++;
    if (game->x >= 429 && game->x <= 729 && game->y >= 854 && game->y <= 969)
        game->player->gun++;
}

static void check_event(t_game *game, int x, int y)
{
    if (x >= 1137 && x <= 1247 && y >= 122 && y <= 222) {
        play_button(game);
        check_event_preview(game);
    }
    if (x >= 1688 && x <= 1798 && y >= 122 && y <= 222) {
        play_button(game);
        check_event_next(game);
    }
    if (x >= 1353 && x <= 1593 && y >= 870 && y <= 970) {
        game->menu->game_menu[0] = 2;
        game->menu->game_menu[1] = 0;
        game->menu->game_menu[2] = 0;
        play_button(game);
        play_music(game, 2);
    }
}

void event_main_menu_game(t_game *game, sfEvent event)
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
        play_button(game);
        game->x = 0;
        game->x = 0;
        game->menu->game_menu[1] = 0;
    }
}