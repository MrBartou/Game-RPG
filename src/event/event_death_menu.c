/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** manage the events
*/

#include "my_rpg.h"

static void check_option(t_game *game, int x, int y)
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

static int check_event(t_game *game, int x, int y)
{
    if (game->menu->game_menu[2] == 1) {
        play_button(game);
        check_option(game, x, y);
        return (0);
    }
    if (x >= 843 && x <= 1073 && y >= 395 && y <= 495) {
        game->menu->game_menu[0] = 2;
        game->menu->game_menu[2] = 0;
        play_button(game);
        play_music(game, 2);
    }
    if (x >= 785 && x <= 1143 && y >= 585 && y <= 685) {
        play_button(game);
        game->menu->game_menu[2] = 1;
    }
    if (x >= 843 && x <= 1073 && y >= 786 && y <= 886)
        sfRenderWindow_close(game->win);
    return (0);
}

void event_death_menu(t_game *game, sfEvent event)
{
    int x = game->mouse.x;
    int y = game->mouse.y;

    if (event.type == sfEvtMouseButtonPressed)
        check_event(game, x, y);
    if (sfKeyboard_isKeyPressed(sfKeyEscape)) {
        play_button(game);
        game->menu->game_menu[2] = 0;
    }
}