/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** manage the hovers
*/

#include "my_rpg.h"

static void check_hover_option_titl(t_game *game, sprt_menu *menu, int x, int y)
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

static void check_hover_option_one(t_game *game, sprt_menu *menu, int x, int y)
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

static void check_hover_option_two(t_game *game, sprt_menu *menu, int x, int y)
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

static void check_hover(t_game *game, sprt_menu *menu, int x, int y)
{
    if (x >= 843 && x <= 1073 && y >= 395 && y <= 495) {
        game->sprt->rec = ini_r(395, 1323, 230, 150);
        sfSprite_setTextureRect(menu->s_txt_pause, game->sprt->rec);
        disp_s(game->win, menu->s_txt_pause, 843, 365);
    }
    if (x >= 785 && x <= 1143 && y >= 585 && y <= 685) {
        game->sprt->rec = ini_r(585, 1265, 400, 150);
        sfSprite_setTextureRect(menu->s_txt_pause, game->sprt->rec);
        disp_s(game->win, menu->s_txt_pause, 785, 555);
    }
    if (x >= 843 && x <= 1073 && y >= 786 && y <= 886) {
        game->sprt->rec = ini_r(786, 1323, 230, 150);
        sfSprite_setTextureRect(menu->s_txt_pause, game->sprt->rec);
        disp_s(game->win, menu->s_txt_pause, 843, 756);
    }
}

void hover_death_menu(t_game *game)
{
    int x = game->mouse.x;
    int y = game->mouse.y;

    if (game->menu->game_menu[2] == 1) {
        check_hover_option_titl(game, game->sprt->sprt_menu, x, y);
        check_hover_option_one(game, game->sprt->sprt_menu, x, y);
        check_hover_option_two(game, game->sprt->sprt_menu, x, y);
    } else
        check_hover(game, game->sprt->sprt_menu, x, y);
}