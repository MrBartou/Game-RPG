/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** manage the scenes
*/

#include "my_rpg.h"

static void set_view(t_game *game)
{

    if (game->menu->game_menu[0] == 2 && game->menu->game_menu[1] == 0) {
        game->sprt->rec_2.top = game->player->y - 600;
        game->sprt->rec_2.left = game->player->x - 938;
    } else {
        game->sprt->rec_2.top = 0;
        game->sprt->rec_2.left = 0;
    }
    game->view = sfView_createFromRect(game->sprt->rec_2);
    sfRenderWindow_setView(game->win, game->view);
}

void scene_manager(t_game *game)
{
    open_game(game);
    while (sfRenderWindow_isOpen(game->win)) {
        sfRenderWindow_clear(game->win, sfBlack);
        set_view(game);
        if (game->menu->game_menu[0] == 0)
            main_menu(game);
        if (game->menu->game_menu[0] == 1)
            shop_menu(game);
        if (game->menu->game_menu[0] == 2)
            play_menu(game);
        if (game->menu->game_menu[0] == 3)
            pause_menu(game);
        if (game->menu->game_menu[0] == 4)
            death_menu(game);
        if (game->menu->game_menu[0] == 5)
            inventory_menu(game);
        if (game->menu->game_menu[0] == 6)
            fight_menu(game);
        sfRenderWindow_display(game->win);
    }
    close_game(game);
}