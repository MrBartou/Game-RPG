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
    disp_s(game->win, menu->s_logo_menu, 85, 80);
    game->sprt->rec = ini_r(310, 85, 726, 691);
    sfSprite_setTextureRect(menu->s_logo_menu, game->sprt->rec);
    disp_s(game->win, menu->s_logo_menu, 85, 310);
    game->sprt->rec = ini_r(0, 1864, 23, 1080);
    sfSprite_setTextureRect(menu->s_logo_menu, game->sprt->rec);
    disp_s(game->win, menu->s_logo_menu, 1864, 0);
    game->sprt->rec = ini_r(0, 0, 960, 300);
    sfSprite_setTextureRect(menu->s_txt_menu_option, game->sprt->rec);
    disp_s(game->win, menu->s_txt_menu_option, 0, 0);
}

static void disp_title(t_game *game, sprt_menu *menu)
{
    game->sprt->rec = ini_r(395, 0, 960, 92);
    sfSprite_setTextureRect(menu->s_txt_menu_option, game->sprt->rec);
    disp_s(game->win, menu->s_txt_menu_option, 0, 395);
    game->sprt->rec = ini_r(669, 0, 960, 92);
    sfSprite_setTextureRect(menu->s_txt_menu_option, game->sprt->rec);
    disp_s(game->win, menu->s_txt_menu_option, 0, 669);
    game->sprt->rec = ini_r(486, 0, 600, 74);
    sfSprite_setTextureRect(menu->s_txt_menu_option, game->sprt->rec);
    disp_s(game->win, menu->s_txt_menu_option, 0, 486);
    game->sprt->rec = ini_r(560, 0, 600, 74);
    sfSprite_setTextureRect(menu->s_txt_menu_option, game->sprt->rec);
    disp_s(game->win, menu->s_txt_menu_option, 0, 560);
    game->sprt->rec = ini_r(765, 0, 600, 74);
    sfSprite_setTextureRect(menu->s_txt_menu_option, game->sprt->rec);
    disp_s(game->win, menu->s_txt_menu_option, 0, 765);
    game->sprt->rec = ini_r(836, 0, 600, 74);
    sfSprite_setTextureRect(menu->s_txt_menu_option, game->sprt->rec);
    disp_s(game->win, menu->s_txt_menu_option, 0, 836);
}

static void disp_button_language(t_game *game, sprt_menu *menu)
{
    if (!game->language) {
        game->sprt->rec = ini_r(501, 788, 50, 50);
        sfSprite_setTextureRect(menu->s_txt_menu_option, game->sprt->rec);
        disp_s(game->win, menu->s_txt_menu_option, 708, 501);
        game->sprt->rec = ini_r(570, 708, 50, 50);
        sfSprite_setTextureRect(menu->s_txt_menu_option, game->sprt->rec);
        disp_s(game->win, menu->s_txt_menu_option, 708, 570);
    } else {
        game->sprt->rec = ini_r(501, 708, 50, 50);
        sfSprite_setTextureRect(menu->s_txt_menu_option, game->sprt->rec);
        disp_s(game->win, menu->s_txt_menu_option, 708, 501);
        game->sprt->rec = ini_r(570, 788, 50, 50);
        sfSprite_setTextureRect(menu->s_txt_menu_option, game->sprt->rec);
        disp_s(game->win, menu->s_txt_menu_option, 708, 570);
    }
}

static void disp_button_sound(t_game *game, sprt_menu *menu)
{
    if (game->music_on) {
        game->sprt->rec = ini_r(777, 708, 50, 50);
        sfSprite_setTextureRect(menu->s_txt_menu_option, game->sprt->rec);
        disp_s(game->win, menu->s_txt_menu_option, 708, 777);
    } else {
        game->sprt->rec = ini_r(777, 788, 50, 50);
        sfSprite_setTextureRect(menu->s_txt_menu_option, game->sprt->rec);
        disp_s(game->win, menu->s_txt_menu_option, 708, 777);
    }
    if (game->sound_on) {
        game->sprt->rec = ini_r(846, 708, 50, 50);
        sfSprite_setTextureRect(menu->s_txt_menu_option, game->sprt->rec);
        disp_s(game->win, menu->s_txt_menu_option, 708, 846);
    } else {
        game->sprt->rec = ini_r(846, 788, 50, 50);
        sfSprite_setTextureRect(menu->s_txt_menu_option, game->sprt->rec);
        disp_s(game->win, menu->s_txt_menu_option, 708, 846);
    }
}

void disp_pause_menu_option(t_game *game)
{
    disp_box(game, game->sprt->sprt_menu);
    disp_title(game, game->sprt->sprt_menu);
    disp_button_language(game, game->sprt->sprt_menu);
    disp_button_sound(game, game->sprt->sprt_menu);
}