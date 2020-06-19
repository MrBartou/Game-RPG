/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** manage the hovers
*/

#include "my_rpg.h"

static void check_hover(t_game *game, sprt_menu *menu, int x, int y)
{
    if (x >= 150 && x <= 700 && y >= 400 && y <= 500) {
        game->sprt->rec = ini_r(378, 960, 960, 140);
        sfSprite_setTextureRect(menu->s_txt_menu_base, game->sprt->rec);
        disp_s(game->win, menu->s_txt_menu_base, 0, 378);
    }
    if (x >= 150 && x <= 700 && y >= 540 && y <= 640) {
        game->sprt->rec = ini_r(508, 960, 960, 140);
        sfSprite_setTextureRect(menu->s_txt_menu_base, game->sprt->rec);
        disp_s(game->win, menu->s_txt_menu_base, 0, 508);
    }
    if (x >= 150 && x <= 700 && y >= 680 && y <= 780) {
        game->sprt->rec = ini_r(648, 960, 960, 140);
        sfSprite_setTextureRect(menu->s_txt_menu_base, game->sprt->rec);
        disp_s(game->win, menu->s_txt_menu_base, 0, 648);
    }
    if (x >= 150 && x <= 700 && y >= 820 && y <= 920) {
        game->sprt->rec = ini_r(788, 960, 960, 140);
        sfSprite_setTextureRect(menu->s_txt_menu_base, game->sprt->rec);
        disp_s(game->win, menu->s_txt_menu_base, 0, 788);
    }
}

void hover_main_menu_base(t_game *game)
{
    int x = game->mouse.x;
    int y = game->mouse.y;

    check_hover(game, game->sprt->sprt_menu, x, y);
}