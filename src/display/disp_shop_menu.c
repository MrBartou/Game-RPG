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

static void disp_box(t_game *game, sprt_menu *menu)
{
    game->sprt->rec = ini_r(80, 85, 726, 194);
    sfSprite_setTextureRect(menu->s_logo_menu, game->sprt->rec);
    disp_s(game->win, menu->s_logo_menu, 85, 80);
    game->sprt->rec = ini_r(310, 85, 726, 691);
    sfSprite_setTextureRect(menu->s_logo_menu, game->sprt->rec);
    disp_s(game->win, menu->s_logo_menu, 85, 310);
    if (game->menu->game_menu[1] != 3) {
        game->sprt->rec = ini_r(80, 845, 255, 920);
        sfSprite_setTextureRect(menu->s_logo_menu, game->sprt->rec);
        disp_s(game->win, menu->s_logo_menu, 845, 80);
    }
    game->sprt->rec = ini_r(80, 1139, 656, 920);
    sfSprite_setTextureRect(menu->s_logo_menu, game->sprt->rec);
    disp_s(game->win, menu->s_logo_menu, 1139, 80);
    game->sprt->rec = ini_r(0, 1864, 23, 1080);
    sfSprite_setTextureRect(menu->s_logo_menu, game->sprt->rec);
    disp_s(game->win, menu->s_logo_menu, 1864, 0);
}

static void disp_button(t_game *game, sprt_menu *menu)
{
    game->sprt->rec = ini_r(122, 1137, 110, 100);
    sfSprite_setTextureRect(menu->s_txt_menu_game, game->sprt->rec);
    disp_s(game->win, menu->s_txt_menu_game, 1137, 122);
    game->sprt->rec = ini_r(122, 1688, 110, 100);
    sfSprite_setTextureRect(menu->s_txt_menu_game, game->sprt->rec);
    disp_s(game->win, menu->s_txt_menu_game, 1688, 122);
    if (game->menu->game_menu[1] != 3) {
        game->sprt->rec = ini_r(757, 1353, 240, 100);
        sfSprite_setTextureRect(menu->s_txt_menu_game, game->sprt->rec);
        disp_s(game->win, menu->s_txt_menu_game, 1353, 870);
        game->sprt->rec = ini_r(122, 1254, 434, 90);
        sfSprite_setTextureRect(menu->s_txt_menu_game, game->sprt->rec);
        disp_s(game->win, menu->s_txt_menu_game, 1254, 122);
    } else {
        game->sprt->rec = ini_r(870, 1353, 240, 100);
        sfSprite_setTextureRect(menu->s_logo_market, game->sprt->rec);
        disp_s(game->win, menu->s_logo_market, 1353, 870);
        game->sprt->rec = ini_r(122, 1254, 434, 90);
        sfSprite_setTextureRect(menu->s_logo_market, game->sprt->rec);
        disp_s(game->win, menu->s_logo_market, 1254, 122);
    }
}

void disp_shop_menu(t_game *game)
{
    disp_back(game, game->sprt->sprt_menu);
    disp_box(game, game->sprt->sprt_menu);
    disp_button(game, game->sprt->sprt_menu);
    if (game->menu->game_menu[1] == 0)
        disp_shop_menu_gunsmith(game);
    if (game->menu->game_menu[1] == 1)
        disp_shop_menu_clothes(game);
    if (game->menu->game_menu[1] == 2)
        disp_shop_menu_hairdresser(game);
    if (game->menu->game_menu[1] == 3)
        disp_shop_menu_market(game);
}