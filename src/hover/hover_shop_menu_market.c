/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** manage the hovers
*/

#include "my_rpg.h"

static void check_hover_one(t_game *game, sprt_menu *menu, int x, int y)
{
    if (x >= 300 && x <= 600 && y >= 458 && y <= 588) {
        game->sprt->rec = ini_r(458, 912, 300, 130);
        sfSprite_setTextureRect(menu->s_logo_market, game->sprt->rec);
        disp_s(game->win, menu->s_logo_market, 300, 458);
    }
    if (x >= 300 && x <= 600 && y >= 626 && y <= 756) {
        game->sprt->rec = ini_r(626, 912, 300, 130);
        sfSprite_setTextureRect(menu->s_logo_market, game->sprt->rec);
        disp_s(game->win, menu->s_logo_market, 300, 626);
    }
    if (x >= 300 && x <= 600 && y >= 777 && y <= 907) {
        game->sprt->rec = ini_r(777, 912, 300, 130);
        sfSprite_setTextureRect(menu->s_logo_market, game->sprt->rec);
        disp_s(game->win, menu->s_logo_market, 300, 777);
    }
}

static void check_hover_two(t_game *game, sprt_menu *menu, int x, int y)
{
    if (game->x != 0 && game->y != 0) {
        if (x >= 1137 && x <= 1247 && y >= 122 && y <= 222) {
            game->sprt->rec = ini_r(211, 1137, 110, 100);
            sfSprite_setTextureRect(menu->s_txt_menu_game, game->sprt->rec);
            disp_s(game->win, menu->s_txt_menu_game, 1137, 122);
            game->sprt->rec = ini_r(211, 1254, 434, 90);
            sfSprite_setTextureRect(menu->s_logo_market, game->sprt->rec);
            disp_s(game->win, menu->s_logo_market, 1254, 122);
        }
        if (x >= 1688 && x <= 1798 && y >= 122 && y <= 222) {
            game->sprt->rec = ini_r(211, 1688, 110, 100);
            sfSprite_setTextureRect(menu->s_txt_menu_game, game->sprt->rec);
            disp_s(game->win, menu->s_txt_menu_game, 1688, 122);
            game->sprt->rec = ini_r(211, 1254, 434, 90);
            sfSprite_setTextureRect(menu->s_logo_market, game->sprt->rec);
            disp_s(game->win, menu->s_logo_market, 1254, 122);
        }
    }
}


static void check_hover_three(t_game *game, sprt_menu *menu, int x, int y)
{
    if (game->x >= 300 && game->x <= 600 && game->y >= 458 && game->y <= 588) {
        game->sprt->rec = ini_r(458, 912, 300, 130);
        sfSprite_setTextureRect(menu->s_logo_market, game->sprt->rec);
        disp_s(game->win, menu->s_logo_market, 300, 458);
    }
    if (game->x >= 300 && game->x <= 600 && game->y >= 626 && game->y <= 756) {
        game->sprt->rec = ini_r(626, 912, 300, 130);
        sfSprite_setTextureRect(menu->s_logo_market, game->sprt->rec);
        disp_s(game->win, menu->s_logo_market, 300, 626);
    }
    if (game->x >= 300 && game->x <= 600 && game->y >= 777 && game->y <= 907) {
        game->sprt->rec = ini_r(777, 912, 300, 130);
        sfSprite_setTextureRect(menu->s_logo_market, game->sprt->rec);
        disp_s(game->win, menu->s_logo_market, 300, 777);
    }
}

static void disp_buy(t_game *game, sprt_menu *menu, int x, int y)
{
    int price = 0;

    if (x >= 1353 && x <= 1593 && y >= 870 && y <= 970) {
        if (game->player->money >= price) {
            game->sprt->rec = ini_r(757, 1353, 240, 100);
            sfSprite_setTextureRect(menu->s_logo_market, game->sprt->rec);
            disp_s(game->win, menu->s_logo_market, 1353, 870);
        }
    }
}

void hover_shop_menu_market(t_game *game)
{
    int x = game->mouse.x;
    int y = game->mouse.y;

    check_hover_one(game, game->sprt->sprt_menu, x, y);
    check_hover_two(game, game->sprt->sprt_menu, x, y);
    check_hover_three(game, game->sprt->sprt_menu, x, y);
    disp_buy(game, game->sprt->sprt_menu, x, y);
}