/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** manage the event
*/

#include "my_rpg.h"

static void check_event(t_game *game, int x, int y)
{
    if (x >= 1353 && x <= 1593 && y >= 870 && y <= 970) {
        game->menu->game_menu[0] = 2;
        game->menu->game_menu[1] = 0;
        game->menu->game_menu[2] = 0;
    }
}

void event_main_menu_launch(t_game *game, sfEvent event)
{
    int x = game->mouse.x;
    int y = game->mouse.y;

    if (event.type == sfEvtMouseButtonPressed)
        check_event(game, x, y);
    if (sfKeyboard_isKeyPressed(sfKeyEscape)) {
        play_button(game);
        game->menu->game_menu[1] = 0;
    }
}