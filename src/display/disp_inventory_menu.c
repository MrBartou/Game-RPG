/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** display a menu
*/

#include "my_rpg.h"

static void disp_box(t_game *game, sprt_menu *menu)
{
    game->sprt->rec = ini_r(0, 0, 1920, 1080);
    sfSprite_setTextureRect(menu->s_back, game->sprt->rec);
    disp_s(game->win, menu->s_back, 0, 0);
    game->sprt->rec = ini_r(1015, 0, 1920, 65);
    sfSprite_setTextureRect(menu->s_txt_menu_launch, game->sprt->rec);
    disp_s(game->win, menu->s_txt_menu_launch, 0, 1015);
    game->sprt->rec = ini_r(80, 85, 726, 194);
    sfSprite_setTextureRect(menu->s_logo_menu, game->sprt->rec);
    disp_s(game->win, menu->s_logo_menu, 85, 80);
    game->sprt->rec = ini_r(310, 85, 726, 691);
    sfSprite_setTextureRect(menu->s_logo_menu, game->sprt->rec);
    disp_s(game->win, menu->s_logo_menu, 85, 310);
    game->sprt->rec = ini_r(80, 1139, 656, 920);
    sfSprite_setTextureRect(menu->s_logo_menu, game->sprt->rec);
    disp_s(game->win, menu->s_logo_menu, 1139, 80);
    game->sprt->rec = ini_r(0, 1864, 23, 1080);
    sfSprite_setTextureRect(menu->s_logo_menu, game->sprt->rec);
    disp_s(game->win, menu->s_logo_menu, 1864, 0);
}

static void disp_all_nb(t_game *game, sprt_menu *menu)
{
    int nb_number = 0;
    int nb_attack = 0;
    int nb_defense = 0;
    game->sprt->vec.x = 450;
    game->sprt->vec.y = 760;
    disp_number(game, game->sprt->sprt_menu, nb_number, game->sprt->vec);
    game->sprt->vec.y = 820;
    disp_number(game, game->sprt->sprt_menu, nb_attack, game->sprt->vec);
    game->sprt->vec.y = 888;
    disp_number(game, game->sprt->sprt_menu, nb_defense, game->sprt->vec);
}

static void disp_logo_one(t_game *game, sprt_menu *menu)
{
    game->sprt->rec = ini_r(0, 0, 960, 300);
    sfSprite_setTextureRect(menu->s_txt_inventory, game->sprt->rec);
    disp_s(game->win, menu->s_txt_inventory, 0, 0);
    game->sprt->rec = ini_r(330, 67, 800, 413);
    sfSprite_setTextureRect(menu->s_txt_inventory, game->sprt->rec);
    disp_s(game->win, menu->s_txt_inventory, 67, 330);
    game->sprt->rec = ini_r(779, 206, 281, 68);
    sfSprite_setTextureRect(menu->s_txt_inventory, game->sprt->rec);
    disp_s(game->win, menu->s_txt_inventory, 206, 764);
    game->sprt->rec = ini_r(850, 206, 281, 68);
    sfSprite_setTextureRect(menu->s_txt_inventory, game->sprt->rec);
    disp_s(game->win, menu->s_txt_inventory, 206, 835);
    game->sprt->rec = ini_r(918, 206, 281, 68);
    sfSprite_setTextureRect(menu->s_txt_inventory, game->sprt->rec);
    disp_s(game->win, menu->s_txt_inventory, 206, 903);
    game->sprt->rec = ini_r(870, 1353, 240, 100);
    sfSprite_setTextureRect(menu->s_txt_menu_game, game->sprt->rec);
    disp_s(game->win, menu->s_txt_menu_game, 1353, 870);
}

void disp_inventory_menu(t_game *game)
{
    disp_box(game, game->sprt->sprt_menu);
    disp_logo_one(game, game->sprt->sprt_menu);
    disp_all_nb(game, game->sprt->sprt_menu);
    disp_main_menu_game_player(game);
}