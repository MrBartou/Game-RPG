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
    game->sprt->rec = ini_r(80, 845, 255, 920);
    sfSprite_setTextureRect(menu->s_logo_menu, game->sprt->rec);
    disp_s(game->win, menu->s_logo_menu, 845, 80);
    game->sprt->rec = ini_r(80, 1139, 656, 920);
    sfSprite_setTextureRect(menu->s_logo_menu, game->sprt->rec);
    disp_s(game->win, menu->s_logo_menu, 1139, 80);
    game->sprt->rec = ini_r(0, 1864, 23, 1080);
    sfSprite_setTextureRect(menu->s_logo_menu, game->sprt->rec);
    disp_s(game->win, menu->s_logo_menu, 1864, 0);
    game->sprt->rec = ini_r(0, 0, 960, 300);
    sfSprite_setTextureRect(menu->s_txt_menu_game, game->sprt->rec);
    disp_s(game->win, menu->s_txt_menu_game, 0, 0);
}

static void disp_button_one(t_game *game, sprt_menu *menu)
{
    game->sprt->rec = ini_r(350, 129, 300, 115);
    sfSprite_setTextureRect(menu->s_txt_menu_game, game->sprt->rec);
    disp_s(game->win, menu->s_txt_menu_game, 129, 350);
    game->sprt->rec = ini_r(521, 129, 300, 115);
    sfSprite_setTextureRect(menu->s_txt_menu_game, game->sprt->rec);
    disp_s(game->win, menu->s_txt_menu_game, 129, 521);
    game->sprt->rec = ini_r(687, 129, 300, 155);
    sfSprite_setTextureRect(menu->s_txt_menu_game, game->sprt->rec);
    disp_s(game->win, menu->s_txt_menu_game, 129, 687);
    game->sprt->rec = ini_r(854, 129, 300, 115);
    sfSprite_setTextureRect(menu->s_txt_menu_game, game->sprt->rec);
    disp_s(game->win, menu->s_txt_menu_game, 129, 854);
    game->sprt->rec = ini_r(350, 429, 300, 115);
    sfSprite_setTextureRect(menu->s_txt_menu_game, game->sprt->rec);
    disp_s(game->win, menu->s_txt_menu_game, 429, 350);
    game->sprt->rec = ini_r(521, 429, 300, 115);
    sfSprite_setTextureRect(menu->s_txt_menu_game, game->sprt->rec);
    disp_s(game->win, menu->s_txt_menu_game, 429, 521);
}

static void disp_button_two(t_game *game, sprt_menu *menu)
{
    game->sprt->rec = ini_r(687, 429, 300, 115);
    sfSprite_setTextureRect(menu->s_txt_menu_game, game->sprt->rec);
    disp_s(game->win, menu->s_txt_menu_game, 429, 687);
    game->sprt->rec = ini_r(854, 429, 300, 115);
    sfSprite_setTextureRect(menu->s_txt_menu_game, game->sprt->rec);
    disp_s(game->win, menu->s_txt_menu_game, 429, 854);
    game->sprt->rec = ini_r(122, 1137, 110, 100);
    sfSprite_setTextureRect(menu->s_txt_menu_game, game->sprt->rec);
    disp_s(game->win, menu->s_txt_menu_game, 1137, 122);
    game->sprt->rec = ini_r(122, 1688, 110, 100);
    sfSprite_setTextureRect(menu->s_txt_menu_game, game->sprt->rec);
    disp_s(game->win, menu->s_txt_menu_game, 1688, 122);
    game->sprt->rec = ini_r(122, 1254, 434, 90);
    sfSprite_setTextureRect(menu->s_txt_menu_game, game->sprt->rec);
    disp_s(game->win, menu->s_txt_menu_game, 1254, 122);
    game->sprt->rec = ini_r(757, 1353, 240, 100);
    sfSprite_setTextureRect(menu->s_txt_menu_game, game->sprt->rec);
    disp_s(game->win, menu->s_txt_menu_game, 1353, 870);
}

static void check_items(t_game *game)
{
    if (game->player->body > 6 || game->player->body < 1)
        game->player->body = 1;
    if (game->player->head > 48 || game->player->head < 0)
        game->player->head = 0;
    if (game->player->torso > 24 || game->player->torso < 0)
        game->player->torso = 0;
    if (game->player->armor > 36 || game->player->armor < 0)
        game->player->armor = 0;
    if (game->player->pants > 18 || game->player->pants < 1)
        game->player->pants = 1;
    if (game->player->shoes > 6 || game->player->shoes < 0)
        game->player->shoes = 0;
    if (game->player->knife > 10 || game->player->knife < 1)
        game->player->knife = 1;
    if (game->player->gun > 12 || game->player->gun < 1)
        game->player->gun = 1;
}

void disp_main_menu_game(t_game *game)
{
    disp_box(game, game->sprt->sprt_menu);
    disp_button_one(game, game->sprt->sprt_menu);
    disp_button_two(game, game->sprt->sprt_menu);
    disp_button_one_clicked(game, game->sprt->sprt_menu);
    disp_button_two_clicked(game, game->sprt->sprt_menu);
    check_items(game);
    disp_main_menu_game_player(game);
    disp_main_menu_game_clothes(game);
}