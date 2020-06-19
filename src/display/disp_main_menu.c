/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** display a menu
*/

#include "my_rpg.h"

static void disp_back(t_game *game, sprt_menu *menu)
{
    game->sprt->rec = ini_r(0, 0, 1920, 1080);
    sfSprite_setTextureRect(menu->s_back, game->sprt->rec);
    disp_s(game->win, menu->s_back, 0, 0);
    game->sprt->rec = ini_r(1015, 0, 1920, 65);
    sfSprite_setTextureRect(menu->s_txt_menu_launch, game->sprt->rec);
    disp_s(game->win, menu->s_txt_menu_launch, 0, 1015);
}

void disp_main_menu(t_game *game)
{
    disp_back(game, game->sprt->sprt_menu);
    if (game->menu->game_menu[1] == 0)
        disp_main_menu_base(game);
    if (game->menu->game_menu[1] == 1)
        disp_main_menu_game(game);
    if (game->menu->game_menu[1] == 2)
        disp_main_menu_launch(game);
    if (game->menu->game_menu[1] == 3)
        disp_main_menu_option(game);
}