/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** displays a menu
*/

#include "my_rpg.h"

static void disp_box(t_game *game, sprt_menu *menu)
{
    game->sprt->rec = ini_r(0, 0, 1920, 1080);
    sfSprite_setTextureRect(menu->s_back, game->sprt->rec);
    disp_s(game->win, menu->s_back, 0, 0);
    game->sprt->rec = ini_r(80, 85, 726, 194);
    sfSprite_setTextureRect(menu->s_logo_menu, game->sprt->rec);
    disp_s(game->win, menu->s_logo_menu, 597, 50);
    game->sprt->rec = ini_r(310, 85, 726, 691);
    sfSprite_setTextureRect(menu->s_logo_menu, game->sprt->rec);
    disp_s(game->win, menu->s_logo_menu, 597, 300);
    game->sprt->rec = ini_r(0, 1864, 23, 1080);
    sfSprite_setTextureRect(menu->s_logo_menu, game->sprt->rec);
    disp_s(game->win, menu->s_logo_menu, 1864, 0);
    disp_s(game->win, menu->s_logo_menu, 33, 0);
    game->sprt->rec = ini_r(1015, 0, 1920, 65);
    sfSprite_setTextureRect(menu->s_txt_menu_launch, game->sprt->rec);
    disp_s(game->win, menu->s_txt_menu_launch, 0, 1015);
}

static void disp_txt(t_game *game, sprt_menu *menu)
{
    game->sprt->rec = ini_r(0, 700, 480, 1080);
    sfSprite_setTextureRect(menu->s_txt_death, game->sprt->rec);
    disp_s(game->win, menu->s_txt_death, 700, -30);
}

void disp_death_menu(t_game *game)
{
    disp_box(game, game->sprt->sprt_menu);
    disp_txt(game, game->sprt->sprt_menu);
}