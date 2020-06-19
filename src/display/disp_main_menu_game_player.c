/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** display a menu
*/

#include "my_rpg.h"

static void disp_body_head(t_game *game, int i, int j)
{
    game->sprt->rec = ini_r(0, ((i - 1) * 64), 64, 64);
    sfSprite_setTextureRect(game->sprt->sprt_menu->s_items, game->sprt->rec);
    game->sprt->scale = ini_sc(10, 10);
    sfSprite_setScale(game->sprt->sprt_menu->s_items, game->sprt->scale);
    disp_s(game->win, game->sprt->sprt_menu->s_items, 1150, 200);
    game->sprt->rec = ini_r(64, ((j - 1) * 32), 32, 32);
    sfSprite_setTextureRect(game->sprt->sprt_menu->s_items, game->sprt->rec);
    disp_s(game->win, game->sprt->sprt_menu->s_items, 1310, 250);
}

static void disp_pants_shoes(t_game *game, int i, int j)
{
    game->sprt->rec = ini_r(224, ((j - 1) * 32), 32, 32);
    sfSprite_setTextureRect(game->sprt->sprt_menu->s_items, game->sprt->rec);
    disp_s(game->win, game->sprt->sprt_menu->s_items, 1310, 570);
    game->sprt->rec = ini_r(192, ((i - 1) * 32), 32, 32);
    sfSprite_setTextureRect(game->sprt->sprt_menu->s_items, game->sprt->rec);
    disp_s(game->win, game->sprt->sprt_menu->s_items, 1310, 490);
}

static void disp_torso_armor(t_game *game, int i, int j)
{
    game->sprt->rec = ini_r(128, ((i - 1) * 32), 32, 32);
    sfSprite_setTextureRect(game->sprt->sprt_menu->s_items, game->sprt->rec);
    disp_s(game->win, game->sprt->sprt_menu->s_items, 1310, 390);
    game->sprt->rec = ini_r(160, ((j - 1) * 32), 32, 32);
    sfSprite_setTextureRect(game->sprt->sprt_menu->s_items, game->sprt->rec);
    if (j >= 1 && j <= 6)
        disp_s(game->win, game->sprt->sprt_menu->s_items, 1310, 330);
    if (j >= 19 && j <= 24)
        disp_s(game->win, game->sprt->sprt_menu->s_items, 1310, 370);
    if (j >= 7 && j <= 12)
        disp_s(game->win, game->sprt->sprt_menu->s_items, 1310, 410);
    if (j >= 25 && j <= 30)
        disp_s(game->win, game->sprt->sprt_menu->s_items, 1310, 440);
    if (j >= 13 && j <= 18)
        disp_s(game->win, game->sprt->sprt_menu->s_items, 1310, 380);
    if (j >= 31 && j <= 36)
        disp_s(game->win, game->sprt->sprt_menu->s_items, 1310, 400);
}

static void disp_knife_gun(t_game *game, int i, int j)
{
    game->sprt->scale = ini_sc(5, 5);
    sfSprite_setScale(game->sprt->sprt_menu->s_items, game->sprt->scale);
    game->sprt->rec = ini_r(256, ((i - 1) * 32), 32, 32);
    sfSprite_setTextureRect(game->sprt->sprt_menu->s_items, game->sprt->rec);
    disp_s(game->win, game->sprt->sprt_menu->s_items, 1190, 230);
    game->sprt->rec = ini_r(288, ((j - 1) * 32), 32, 32);
    sfSprite_setTextureRect(game->sprt->sprt_menu->s_items, game->sprt->rec);
    disp_s(game->win, game->sprt->sprt_menu->s_items, 1590, 230);
    game->sprt->scale = ini_sc(1, 1);
    sfSprite_setScale(game->sprt->sprt_menu->s_items, game->sprt->scale);
}

void disp_main_menu_game_player(t_game *game)
{
    int i = 0;
    int j = 0;

    for (; i != game->player->body; i++);
    for (; j != game->player->head; j++);
    disp_body_head(game, i, j);
    for (i = 0; i != game->player->pants; i++);
    for (j = 0; j != game->player->shoes; j++);
    disp_pants_shoes(game, i, j);
    for (i = 0; i != game->player->torso; i++);
    for (j = 0; j != game->player->armor; j++);
    disp_torso_armor(game, i, j);
    for (i = 0; i != game->player->knife; i++);
    for (j = 0; j != game->player->gun; j++);
    disp_knife_gun(game, i, j);
}