/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** manage the hovers
*/

#include "my_rpg.h"

static void check_hover_title(t_game *game, sprt_menu *menu, int x, int y)
{
    if (x >= 150 && x <= 760 && y >= 501 && y <= 547) {
        game->sprt->rec = ini_r(486, 960, 600, 74);
        sfSprite_setTextureRect(menu->s_txt_menu_option, game->sprt->rec);
        disp_s(game->win, menu->s_txt_menu_option, 0, 486);
    }
    if (x >= 150 && x <= 760 && y >= 570 && y <= 616) {
        game->sprt->rec = ini_r(560, 960, 600, 74);
        sfSprite_setTextureRect(menu->s_txt_menu_option, game->sprt->rec);
        disp_s(game->win, menu->s_txt_menu_option, 0, 560);
    }
    if (x >= 150 && x <= 760 && y >= 778 && y <= 814) {
        game->sprt->rec = ini_r(765, 960, 600, 74);
        sfSprite_setTextureRect(menu->s_txt_menu_option, game->sprt->rec);
        disp_s(game->win, menu->s_txt_menu_option, 0, 765);
    }
    if (x >= 150 && x <= 760 && y >= 847 && y <= 893) {
        game->sprt->rec = ini_r(836, 960, 600, 74);
        sfSprite_setTextureRect(menu->s_txt_menu_option, game->sprt->rec);
        disp_s(game->win, menu->s_txt_menu_option, 0, 836);
    }
}

static void check_hover_one(t_game *game, sprt_menu *menu, int x, int y)
{
    if (x >= 150 && x <= 760 && y >= 501 && y <= 547) {
        if (game->language) {
            game->sprt->rec = ini_r(501, 1668, 50, 50);
            sfSprite_setTextureRect(menu->s_txt_menu_option, game->sprt->rec);
            disp_s(game->win, menu->s_txt_menu_option, 708, 501);
        } else {
            game->sprt->rec = ini_r(501, 1748, 50, 50);
            sfSprite_setTextureRect(menu->s_txt_menu_option, game->sprt->rec);
            disp_s(game->win, menu->s_txt_menu_option, 708, 501);
        }
    }
    if (x >= 150 && x <= 760 && y >= 570 && y <= 616) {
        if (game->language) {
            game->sprt->rec = ini_r(570, 1748, 50, 50);
            sfSprite_setTextureRect(menu->s_txt_menu_option, game->sprt->rec);
            disp_s(game->win, menu->s_txt_menu_option, 708, 570);
        } else {
            game->sprt->rec = ini_r(570, 1668, 50, 50);
            sfSprite_setTextureRect(menu->s_txt_menu_option, game->sprt->rec);
            disp_s(game->win, menu->s_txt_menu_option, 708, 570);
        }
    }
}

static void check_hover_two(t_game *game, sprt_menu *menu, int x, int y)
{
    if (x >= 150 && x <= 760 && y >= 778 && y <= 814) {
        if (game->music_on) {
            game->sprt->rec = ini_r(777, 1668, 50, 50);
            sfSprite_setTextureRect(menu->s_txt_menu_option, game->sprt->rec);
            disp_s(game->win, menu->s_txt_menu_option, 708, 777);
        } else {
            game->sprt->rec = ini_r(777, 1748, 50, 50);
            sfSprite_setTextureRect(menu->s_txt_menu_option, game->sprt->rec);
            disp_s(game->win, menu->s_txt_menu_option, 708, 777);
        }
    }
    if (x >= 150 && x <= 760 && y >= 847 && y <= 893) {
        if (game->sound_on) {
            game->sprt->rec = ini_r(846, 1668, 50, 50);
            sfSprite_setTextureRect(menu->s_txt_menu_option, game->sprt->rec);
            disp_s(game->win, menu->s_txt_menu_option, 708, 846);
        } else {
            game->sprt->rec = ini_r(846, 1748, 50, 50);
            sfSprite_setTextureRect(menu->s_txt_menu_option, game->sprt->rec);
            disp_s(game->win, menu->s_txt_menu_option, 708, 846);
        }
    }
}

void hover_main_menu_option(t_game *game)
{
    int x = game->mouse.x;
    int y = game->mouse.y;

    check_hover_title(game, game->sprt->sprt_menu, x, y);
    check_hover_one(game, game->sprt->sprt_menu, x, y);
    check_hover_two(game, game->sprt->sprt_menu, x, y);
}