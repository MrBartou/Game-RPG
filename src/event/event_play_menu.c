/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** manage the events
*/

#include "my_rpg.h"
#include "fight.h"

static void check_hud(t_game *game)
{
    if (sfKeyboard_isKeyPressed(sfKeyC) && game->menu->game_menu[1] == 2) {
        game->menu->game_menu[0] = 6;
        init_fight(game->fight, game, game->list_npc[0]);
        sfRenderWindow_setMouseCursorVisible(game->win, sfFalse);
        play_button(game);
        play_music(game, 4);
    }
    if (sfKeyboard_isKeyPressed(sfKeyEscape)
        && game->menu->game_menu[1] != 1 && game->menu->game_menu[1] != 2) {
        game->menu->game_menu[0] = 3;
        play_button(game);
        play_music(game, 1);
    }
    if (sfKeyboard_isKeyPressed(sfKeyE)
        && game->menu->game_menu[1] != 1 && game->menu->game_menu[1] != 2) {
        game->menu->game_menu[0] = 5;
        play_button(game);
        play_music(game, 1);
    }
    event_move_player(game);
}

void event_play_menu(t_game *game, sfEvent event)
{
    int x = game->mouse.x;
    int y = game->mouse.y;

    check_hud(game);
    if (event.type == sfEvtMouseButtonPressed) {
        if (game->menu->game_menu[1] == 0)
            event_play_menu_map_map(game, x, y);
        if (game->menu->game_menu[1] == 1)
            event_play_menu_map_bar(game, x, y);
        if (game->menu->game_menu[1] == 2)
            event_play_menu_map_arena(game, x, y);
        if (game->menu->game_menu[1] == 3)
            event_play_menu_map_boss(game, x, y);
        if (game->menu->game_menu[1] == 4)
            event_play_menu_map_house_1(game, x, y);
        if (game->menu->game_menu[1] == 5)
            event_play_menu_map_house_2(game, x, y);
    }
}