/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** displays a menu
*/

#include "my_rpg.h"

static void disp_plu_one(t_game *game, sprt_texture *texture, int top, int left)
{
    if (game->menu->game_menu[1] == 0) {
        game->sprt->rec = ini_r(top, left, 1920, 3240);
        sfSprite_setScale(texture->s_map_plus, game->sprt->scale);
        sfSprite_setTextureRect(texture->s_map_plus, game->sprt->rec);
        disp_s(game->win, texture->s_map_plus, 0, 0);
    } else if (game->menu->game_menu[1] == 1) {
        game->sprt->rec = ini_r(0, 0, 1920, 1080);
        sfSprite_setScale(texture->s_bar_plus, game->sprt->scale);
        sfSprite_setTextureRect(texture->s_bar_plus, game->sprt->rec);
        disp_s(game->win, texture->s_bar_plus, 435, 120);
    } else {
        game->sprt->rec = ini_r(0, 0, 1920, 1080);
        sfSprite_setScale(texture->s_arena_plus, game->sprt->scale);
        sfSprite_setTextureRect(texture->s_arena_plus, game->sprt->rec);
        disp_s(game->win, texture->s_arena_plus, 340, 70);
    }
}

static void disp_plus_two(t_game *game, sprt_texture *texture)
{
    if (game->menu->game_menu[1] == 3) {
        game->sprt->rec = ini_r(0, 0, 1920, 1080);
        sfSprite_setScale(texture->s_boss_plus, game->sprt->scale);
        sfSprite_setTextureRect(texture->s_boss_plus, game->sprt->rec);
        disp_s(game->win, texture->s_boss_plus, 700, 350);
    } else if (game->menu->game_menu[1] == 4) {
        game->sprt->rec = ini_r(0, 0, 1920, 1080);
        sfSprite_setScale(texture->s_house_1_plus, game->sprt->scale);
        sfSprite_setTextureRect(texture->s_house_1_plus, game->sprt->rec);
        disp_s(game->win, texture->s_house_1_plus, 490, 270);
    } else {
        game->sprt->rec = ini_r(0, 0, 1920, 1080);
        sfSprite_setScale(texture->s_house_2_plus, game->sprt->scale);
        sfSprite_setTextureRect(texture->s_house_2_plus, game->sprt->rec);
        disp_s(game->win, texture->s_house_2_plus, 650, 240);
    }
}

void disp_play_menu_plus(t_game *game)
{
    int top = 0;
    int left = 0;

    game->sprt->scale = ini_sc(2, 2);
    if (game->menu->game_menu[1] <= 2)
        disp_plu_one(game, game->sprt->sprt_texture, top, left);
    if (game->menu->game_menu[1] > 2)
        disp_plus_two(game, game->sprt->sprt_texture);
}