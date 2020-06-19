/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** display a menu
*/

#include "my_rpg.h"

static void disp_logo(t_game *game, sprt_menu *menu)
{
    game->sprt->rec = ini_r(0, 0, 960, 300);
    sfSprite_setTextureRect(menu->s_logo_clothes, game->sprt->rec);
    disp_s(game->win, menu->s_logo_clothes, 0, 0);
    game->sprt->rec = ini_r(521, 129, 300, 115);
    sfSprite_setTextureRect(menu->s_txt_menu_game, game->sprt->rec);
    disp_s(game->win, menu->s_txt_menu_game, 129, 521);
    game->sprt->rec = ini_r(687, 129, 300, 155);
    sfSprite_setTextureRect(menu->s_txt_menu_game, game->sprt->rec);
    disp_s(game->win, menu->s_txt_menu_game, 129, 687);
    game->sprt->rec = ini_r(521, 429, 300, 115);
    sfSprite_setTextureRect(menu->s_txt_menu_game, game->sprt->rec);
    disp_s(game->win, menu->s_txt_menu_game, 429, 521);
    game->sprt->rec = ini_r(687, 429, 300, 115);
    sfSprite_setTextureRect(menu->s_txt_menu_game, game->sprt->rec);
    disp_s(game->win, menu->s_txt_menu_game, 429, 687);
}

void disp_shop_menu_clothes(t_game *game)
{
    disp_logo(game, game->sprt->sprt_menu);
    disp_main_menu_game_player(game);
    disp_main_menu_game_clothes(game);
}