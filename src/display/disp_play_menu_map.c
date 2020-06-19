/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** displays a menu
*/

#include "my_rpg.h"

static void disp_map_one(t_game *game, sprt_texture *texture, int top, int left)
{
    game->sprt->rec = ini_r(0, 0, 1920, 1080);
    sfSprite_setTextureRect(texture->s_map_back, game->sprt->rec);
    disp_s(game->win, texture->s_map_back, 0, 0);
    if (game->menu->game_menu[1] == 0) {
        game->sprt->rec = ini_r(top, left, 1920, 3240);
        sfSprite_setScale(texture->s_map_ground, game->sprt->scale);
        sfSprite_setTextureRect(texture->s_map_ground, game->sprt->rec);
        disp_s(game->win, texture->s_map_ground, 0, 0);
    } else if (game->menu->game_menu[1] == 1) {
        game->sprt->rec = ini_r(0, 0, 1920, 1080);
        sfSprite_setScale(texture->s_bar_ground, game->sprt->scale);
        sfSprite_setTextureRect(texture->s_bar_ground, game->sprt->rec);
        disp_s(game->win, texture->s_bar_ground, 435, 120);
    } else {
        game->sprt->rec = ini_r(0, 0, 1920, 1080);
        sfSprite_setScale(texture->s_arena_ground, game->sprt->scale);
        sfSprite_setTextureRect(texture->s_arena_ground, game->sprt->rec);
        disp_s(game->win, texture->s_arena_ground, 340, 70);
    }
}

static void disp_map_two(t_game *game, sprt_texture *texture)
{
    game->sprt->rec = ini_r(0, 0, 1920, 1080);
    sfSprite_setTextureRect(texture->s_map_back, game->sprt->rec);
    disp_s(game->win, texture->s_map_back, 0, 0);
    if (game->menu->game_menu[1] == 3) {
        game->sprt->rec = ini_r(0, 0, 1920, 1080);
        sfSprite_setScale(texture->s_boss_ground, game->sprt->scale);
        sfSprite_setTextureRect(texture->s_boss_ground, game->sprt->rec);
        disp_s(game->win, texture->s_boss_ground, 700, 350);
    } else if (game->menu->game_menu[1] == 4) {
        game->sprt->rec = ini_r(0, 0, 1920, 1080);
        sfSprite_setScale(texture->s_house_1_ground, game->sprt->scale);
        sfSprite_setTextureRect(texture->s_house_1_ground, game->sprt->rec);
        disp_s(game->win, texture->s_house_1_ground, 490, 270);
    } else {
        game->sprt->rec = ini_r(0, 0, 1920, 1080);
        sfSprite_setScale(texture->s_house_2_ground, game->sprt->scale);
        sfSprite_setTextureRect(texture->s_house_2_ground, game->sprt->rec);
        disp_s(game->win, texture->s_house_2_ground, 650, 240);
    }
}

void disp_play_menu_map(t_game *game)
{
    int top = 0;
    int left = 0;

    game->sprt->scale = ini_sc(2, 2);
    if (game->menu->game_menu[1] <= 2)
        disp_map_one(game, game->sprt->sprt_texture, top, left);
    if (game->menu->game_menu[1] > 2)
        disp_map_two(game, game->sprt->sprt_texture);
}