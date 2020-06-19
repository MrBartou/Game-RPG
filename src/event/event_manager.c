/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** manage the events
*/

#include "my_rpg.h"

static void event_quit(t_game *game, sfEvent event)
{
    if (event.type == sfEvtClosed)
        sfRenderWindow_close(game->win);
}

void event_manager(t_game *game)
{
    sfEvent event;
    game->mouse = sfMouse_getPositionRenderWindow(game->win);

    while (sfRenderWindow_pollEvent(game->win, &event)) {
        event_quit(game, event);
        if (game->menu->game_menu[0] == 0)
            event_main_menu(game, event);
        if (game->menu->game_menu[0] == 1)
            event_shop_menu(game, event);
        if (game->menu->game_menu[0] == 2)
            event_play_menu(game, event);
        if (game->menu->game_menu[0] == 3)
            event_pause_menu(game, event);
        if (game->menu->game_menu[0] == 4)
            event_death_menu(game, event);
        if (game->menu->game_menu[0] == 5)
            event_inventory_menu(game, event);
        if (game->menu->game_menu[0] == 6)
            event_fight_menu(game, event);
    }
}