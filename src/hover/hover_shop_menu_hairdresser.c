/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** manage the hovers
*/

#include "my_rpg.h"

static void check_hover_one(t_game *game, sprt_menu *menu, int x, int y)
{
    if (x >= 280 && x <= 580 && y >= 584 && y <= 669) {
        game->sprt->rec = ini_r(350, 1040, 300, 115);
        sfSprite_setTextureRect(menu->s_txt_menu_game, game->sprt->rec);
        disp_s(game->win, menu->s_txt_menu_game, 280, 584);
    }
    if (game->x >= 280 && game->x <= 580 && game->y >= 584 && game->y <= 669) {
        game->sprt->rec = ini_r(350, 1040, 300, 115);
        sfSprite_setTextureRect(menu->s_txt_menu_game, game->sprt->rec);
        disp_s(game->win, menu->s_txt_menu_game, 280, 584);
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

void hover_shop_menu_hairdresser(t_game *game)
{
    int x = game->mouse.x;
    int y = game->mouse.y;

    check_hover_one(game, game->sprt->sprt_menu, x, y);
    check_hover_two(game, game->sprt->sprt_menu, x, y);
}