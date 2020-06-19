/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** display a menu
*/

#include "my_rpg.h"

static void disp_box(t_game *game, sprt_menu *menu)
{
    game->sprt->rec = ini_r(80, 85, 726, 194);
    sfSprite_setTextureRect(menu->s_logo_menu, game->sprt->rec);
    disp_s(game->win, menu->s_logo_menu, 85, 80);
    game->sprt->rec = ini_r(310, 85, 726, 691);
    sfSprite_setTextureRect(menu->s_logo_menu, game->sprt->rec);
    disp_s(game->win, menu->s_logo_menu, 85, 310);
    game->sprt->rec = ini_r(0, 1864, 23, 1080);
    sfSprite_setTextureRect(menu->s_logo_menu, game->sprt->rec);
    disp_s(game->win, menu->s_logo_menu, 1864, 0);
}

static void disp_title(t_game *game, sprt_menu *menu)
{
    game->sprt->rec = ini_r(0, 0, 960, 300);
    sfSprite_setTextureRect(menu->s_txt_menu_base, game->sprt->rec);
    disp_s(game->win, menu->s_txt_menu_base, 0, 0);
}

static void disp_button(t_game *game, sprt_menu *menu)
{
    game->sprt->rec = ini_r(378, 0, 960, 140);
    sfSprite_setTextureRect(menu->s_txt_menu_base, game->sprt->rec);
    disp_s(game->win, menu->s_txt_menu_base, 0, 378);
    game->sprt->rec = ini_r(508, 0, 960, 140);
    sfSprite_setTextureRect(menu->s_txt_menu_base, game->sprt->rec);
    disp_s(game->win, menu->s_txt_menu_base, 0, 508);
    game->sprt->rec = ini_r(648, 0, 960, 140);
    sfSprite_setTextureRect(menu->s_txt_menu_base, game->sprt->rec);
    disp_s(game->win, menu->s_txt_menu_base, 0, 648);
    game->sprt->rec = ini_r(788, 0, 960, 140);
    sfSprite_setTextureRect(menu->s_txt_menu_base, game->sprt->rec);
    disp_s(game->win, menu->s_txt_menu_base, 0, 788);
}

void disp_main_menu_base(t_game *game)
{
    disp_box(game, game->sprt->sprt_menu);
    disp_title(game, game->sprt->sprt_menu);
    disp_button(game, game->sprt->sprt_menu);
}