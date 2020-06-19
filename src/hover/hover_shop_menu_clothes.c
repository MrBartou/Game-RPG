/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** manage the hovers
*/

#include "my_rpg.h"

static void check_hover_one(t_game *game, sprt_menu *menu, int x, int y)
{
    if (x >= 129 && x <= 429 && y >= 521 && y <= 636) {
        game->sprt->rec = ini_r(521, 740, 300, 115);
        sfSprite_setTextureRect(menu->s_txt_menu_game, game->sprt->rec);
        disp_s(game->win, menu->s_txt_menu_game, 129, 521);
    }
    if (x >= 129 && x <= 429 && y >= 687 && y <= 802) {
        game->sprt->rec = ini_r(687, 740, 300, 155);
        sfSprite_setTextureRect(menu->s_txt_menu_game, game->sprt->rec);
        disp_s(game->win, menu->s_txt_menu_game, 129, 687);
    }
    if (x >= 429 && x <= 729 && y >= 521 && y <= 636) {
        game->sprt->rec = ini_r(521, 1040, 300, 115);
        sfSprite_setTextureRect(menu->s_txt_menu_game, game->sprt->rec);
        disp_s(game->win, menu->s_txt_menu_game, 429, 521);
    }
    if (x >= 429 && x <= 729 && y >= 687 && y <= 802) {
        game->sprt->rec = ini_r(687, 1040, 300, 115);
        sfSprite_setTextureRect(menu->s_txt_menu_game, game->sprt->rec);
        disp_s(game->win, menu->s_txt_menu_game, 429, 687);
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
            sfSprite_setTextureRect(menu->s_txt_menu_game, game->sprt->rec);
            disp_s(game->win, menu->s_txt_menu_game, 1254, 122);
        }
        if (x >= 1688 && x <= 1798 && y >= 122 && y <= 222) {
            game->sprt->rec = ini_r(211, 1688, 110, 100);
            sfSprite_setTextureRect(menu->s_txt_menu_game, game->sprt->rec);
            disp_s(game->win, menu->s_txt_menu_game, 1688, 122);
            game->sprt->rec = ini_r(211, 1254, 434, 90);
            sfSprite_setTextureRect(menu->s_txt_menu_game, game->sprt->rec);
            disp_s(game->win, menu->s_txt_menu_game, 1254, 122);
        }
    }
}

static void check_button_clicked(t_game *game, sprt_menu *menu, int x, int y)
{
    if (game->x >= 129 && game->x <= 429 && game->y >= 521 && game->y <= 636) {
        game->sprt->rec = ini_r(521, 740, 300, 115);
        sfSprite_setTextureRect(menu->s_txt_menu_game, game->sprt->rec);
        disp_s(game->win, menu->s_txt_menu_game, 129, 521);
    }
    if (game->x >= 129 && game->x <= 429 && game->y >= 687 && game->y <= 802) {
        game->sprt->rec = ini_r(687, 740, 300, 155);
        sfSprite_setTextureRect(menu->s_txt_menu_game, game->sprt->rec);
        disp_s(game->win, menu->s_txt_menu_game, 129, 687);
    }
    if (game->x >= 429 && game->x <= 729 && game->y >= 521 && game->y <= 636) {
        game->sprt->rec = ini_r(521, 1040, 300, 115);
        sfSprite_setTextureRect(menu->s_txt_menu_game, game->sprt->rec);
        disp_s(game->win, menu->s_txt_menu_game, 429, 521);
    }
    if (game->x >= 429 && game->x <= 729 && game->y >= 687 && game->y <= 802) {
        game->sprt->rec = ini_r(687, 1040, 300, 115);
        sfSprite_setTextureRect(menu->s_txt_menu_game, game->sprt->rec);
        disp_s(game->win, menu->s_txt_menu_game, 429, 687);
    }
}

void hover_shop_menu_clothes(t_game *game)
{
    int x = game->mouse.x;
    int y = game->mouse.y;

    check_hover_one(game, game->sprt->sprt_menu, x, y);
    check_hover_two(game, game->sprt->sprt_menu, x, y);
    check_button_clicked(game, game->sprt->sprt_menu, x, y);
}