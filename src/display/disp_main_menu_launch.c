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
    if (game->save) {
        game->sprt->rec = ini_r(80, 845, 255, 920);
        sfSprite_setTextureRect(menu->s_logo_menu, game->sprt->rec);
        disp_s(game->win, menu->s_logo_menu, 845, 80);
        game->sprt->rec = ini_r(80, 1139, 656, 920);
        sfSprite_setTextureRect(menu->s_logo_menu, game->sprt->rec);
        disp_s(game->win, menu->s_logo_menu, 1139, 80);
    }
    game->sprt->rec = ini_r(0, 1864, 23, 1080);
    sfSprite_setTextureRect(menu->s_logo_menu, game->sprt->rec);
    disp_s(game->win, menu->s_logo_menu, 1864, 0);
}

static void disp_title(t_game *game, sprt_menu *menu)
{
    game->sprt->rec = ini_r(0, 0, 960, 300);
    sfSprite_setTextureRect(menu->s_txt_menu_launch, game->sprt->rec);
    disp_s(game->win, menu->s_txt_menu_launch, 0, 0);
    if (game->save) {
        game->sprt->rec = ini_r(386, 279, 278, 73);
        sfSprite_setTextureRect(menu->s_txt_menu_launch, game->sprt->rec);
        disp_s(game->win, menu->s_txt_menu_launch, 279, 386);
        game->sprt->rec = ini_r(870, 1353, 240, 100);
        sfSprite_setTextureRect(menu->s_txt_menu_launch, game->sprt->rec);
        disp_s(game->win, menu->s_txt_menu_launch, 1353, 870);
    }
}

static void disp_chapter(t_game *game, sprt_menu *menu)
{
    if (game->chapter == 1) {
        game->sprt->rec = ini_r(386, 568, 30, 73);
        sfSprite_setTextureRect(menu->s_txt_menu_launch, game->sprt->rec);
        disp_s(game->win, menu->s_txt_menu_launch, 568, 386);
    }
    if (game->chapter == 2) {
        game->sprt->rec = ini_r(386, 598, 47, 73);
        sfSprite_setTextureRect(menu->s_txt_menu_launch, game->sprt->rec);
        disp_s(game->win, menu->s_txt_menu_launch, 568, 386);
    }
    if (game->chapter == 3) {
        game->sprt->rec = ini_r(386, 645, 61, 73);
        sfSprite_setTextureRect(menu->s_txt_menu_launch, game->sprt->rec);
        disp_s(game->win, menu->s_txt_menu_launch, 568, 386);
    }
    if (game->chapter == 4) {
        game->sprt->rec = ini_r(386, 706, 55, 73);
        sfSprite_setTextureRect(menu->s_txt_menu_launch, game->sprt->rec);
        disp_s(game->win, menu->s_txt_menu_launch, 568, 386);
    }
}

static void disp_text(t_game *game, sprt_menu *menu)
{
    if (game->chapter == 1) {
        game->sprt->rec = ini_r(508, 0, 960, 64);
        sfSprite_setTextureRect(menu->s_txt_menu_launch, game->sprt->rec);
        disp_s(game->win, menu->s_txt_menu_launch, 0, 508);
    }
    if (game->chapter == 2) {
        game->sprt->rec = ini_r(571, 0, 960, 124);
        sfSprite_setTextureRect(menu->s_txt_menu_launch, game->sprt->rec);
        disp_s(game->win, menu->s_txt_menu_launch, 0, 508);
    }
    if (game->chapter == 3) {
        game->sprt->rec = ini_r(694, 0, 960, 68);
        sfSprite_setTextureRect(menu->s_txt_menu_launch, game->sprt->rec);
        disp_s(game->win, menu->s_txt_menu_launch, 0, 508);
    }
    if (game->chapter == 4) {
        game->sprt->rec = ini_r(761, 0, 960, 120);
        sfSprite_setTextureRect(menu->s_txt_menu_launch, game->sprt->rec);
        disp_s(game->win, menu->s_txt_menu_launch, 0, 508);
    }
}

void disp_main_menu_launch(t_game *game)
{
    save_recup(game);
    disp_box(game, game->sprt->sprt_menu);
    disp_title(game, game->sprt->sprt_menu);
    if (game->save) {
        disp_chapter(game, game->sprt->sprt_menu);
        disp_text(game, game->sprt->sprt_menu);
    }
    disp_main_menu_game_player(game);
    disp_main_menu_game_clothes(game);
}