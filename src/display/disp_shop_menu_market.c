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
    sfSprite_setTextureRect(menu->s_logo_market, game->sprt->rec);
    disp_s(game->win, menu->s_logo_market, 0, 0);
    game->sprt->rec = ini_r(458, 300, 300, 130);
    sfSprite_setTextureRect(menu->s_logo_market, game->sprt->rec);
    disp_s(game->win, menu->s_logo_market, 300, 458);
    game->sprt->rec = ini_r(626, 300, 300, 130);
    sfSprite_setTextureRect(menu->s_logo_market, game->sprt->rec);
    disp_s(game->win, menu->s_logo_market, 300, 626);
    game->sprt->rec = ini_r(777, 300, 300, 130);
    sfSprite_setTextureRect(menu->s_logo_market, game->sprt->rec);
    disp_s(game->win, menu->s_logo_market, 300, 777);
    game->sprt->rec = ini_r(347, 1205, 200, 100);
    sfSprite_setTextureRect(menu->s_logo_market, game->sprt->rec);
    disp_s(game->win, menu->s_logo_market, 1305, 347);
    game->sprt->rec = ini_r(505, 1205, 300, 80);
    sfSprite_setTextureRect(menu->s_logo_market, game->sprt->rec);
    disp_s(game->win, menu->s_logo_market, 1255, 505);
}

static void disp_all_nb(t_game *game, sprt_menu *menu)
{
    game->sprt->rec = ini_r(600, 1205, 300, 80);
    sfSprite_setTextureRect(menu->s_logo_market, game->sprt->rec);
    disp_s(game->win, menu->s_logo_market, 1255, 600);
    game->sprt->vec.x = 1450;
    game->sprt->vec.y = 347;
    disp_number(game, game->sprt->sprt_menu, 100, game->sprt->vec);
    game->sprt->vec.x = 1500;
    game->sprt->vec.y = 495;
    disp_number(game, game->sprt->sprt_menu, 100, game->sprt->vec);
    game->sprt->vec.x = 1500;
    game->sprt->vec.y = 590;
    disp_number(game, game->sprt->sprt_menu, 100, game->sprt->vec);
}

void disp_shop_menu_market(t_game *game)
{
    disp_logo(game, game->sprt->sprt_menu);
    disp_all_nb(game, game->sprt->sprt_menu);
}