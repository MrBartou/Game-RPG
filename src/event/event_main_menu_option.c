/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** manage the event
*/

#include "my_rpg.h"

static void check_event(t_game *game, int x, int y)
{
    if (x >= 708 && x <= 754 && y >= 501 && y <= 547) {
        play_button(game);
        game->language = 1;
    } else if (x >= 708 && x <= 754 && y >= 570 && y <= 616) {
        play_button(game);
        game->language = 0;
    }
    if (x >= 708 && x <= 754 && y >= 778 && y <= 814) {
        play_button(game);
        if (game->music_on)
            game->music_on = 0;
        else
            game->music_on = 1;
    } else if (x >= 708 && x <= 754 && y >= 847 && y <= 893) {
        play_button(game);
        if (game->sound_on)
            game->sound_on = 0;
        else
            game->sound_on = 1;
    }
}

void event_main_menu_option(t_game *game, sfEvent event)
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