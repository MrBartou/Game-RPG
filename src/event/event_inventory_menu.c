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
        game->menu->game_menu[2] = 0;
        play_button(game);
        if (game->menu->game_menu[1] == 0)
            play_music(game, 2);
        else
            play_music(game, 5);
    }
}

void event_inventory_menu(t_game *game, sfEvent event)
{
    int x = game->mouse.x;
    int y = game->mouse.y;

    if (event.type == sfEvtMouseButtonPressed)
        check_event(game, x, y);
    if (sfKeyboard_isKeyPressed(sfKeyEscape)) {
        game->menu->game_menu[0] = 3;
        game->menu->game_menu[2] = 0;
        play_button(game);
    }
}