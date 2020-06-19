/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** manage the event
*/

#include "my_rpg.h"

static void check_event(t_game *game, int x, int y)
{
    if (x >= 150 && x <= 700 && y >= 400 && y <= 500) {
        play_button(game);
        game->menu->game_menu[1] = 1;
    }
    if (x >= 150 && x <= 700 && y >= 540 && y <= 640) {
        play_button(game);
        game->menu->game_menu[1] = 2;
    }
    if (x >= 150 && x <= 700 && y >= 680 && y <= 780) {
        play_button(game);
        game->menu->game_menu[1] = 3;
    }
    if (x >= 150 && x <= 700 && y >= 820 && y <= 920)
        sfRenderWindow_close(game->win);
}

void event_main_menu_base(t_game *game, sfEvent event)
{
    int x = game->mouse.x;
    int y = game->mouse.y;

    if (event.type == sfEvtMouseButtonPressed)
        check_event(game, x, y);
}