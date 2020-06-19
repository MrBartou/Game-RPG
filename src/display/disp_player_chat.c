/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** displays a menu
*/

#include "my_rpg.h"

static void disp_player_two(t_game *game, sprt_menu *menu)
{
    int i = 0;

    i = 64 * (game->player->torso - 1);
    game->sprt->rec = ini_r(320, i, 64, 64);
    sfSprite_setTextureRect(menu->s_chat_item, game->sprt->rec);
    disp_s(game->win, menu->s_chat_item, -128, 616);
    if (game->player->armor <= 18) {
        i = 64 * (game->player->armor - 1);
        game->sprt->rec = ini_r(448, i, 64, 64);
    } else {
        i = 64 * (game->player->armor - 19);
        game->sprt->rec = ini_r(576, i, 64, 64);
    }
    sfSprite_setTextureRect(menu->s_chat_item, game->sprt->rec);
    disp_s(game->win, menu->s_chat_item, -128, 628);
}

static void disp_player(t_game *game, sprt_menu *menu)
{
    int i = 0;

    game->sprt->scale = ini_sc(12, 12);
    sfSprite_setScale(menu->s_chat_item, game->sprt->scale);
    i = 64 * (game->player->body - 1);
    game->sprt->rec = ini_r(0, i, 64, 64);
    sfSprite_setTextureRect(menu->s_chat_item, game->sprt->rec);
    disp_s(game->win, menu->s_chat_item, -128, 580);
    if (game->player->head <= 24) {
        i = 64 * (game->player->head - 1);
        game->sprt->rec = ini_r(64, i, 64, 64);
    } else {
        i = 64 * (game->player->head - 25);
        game->sprt->rec = ini_r(192, i, 64, 64);
    }
    sfSprite_setTextureRect(menu->s_chat_item, game->sprt->rec);
    disp_s(game->win, menu->s_chat_item, -128, 604);
    disp_player_two(game, menu);
}

static void disp_npc_two(t_game *game, sprt_menu *menu, int npc)
{
    int i = 0;

    i = 64 * (game->list_npc[npc]->torso - 1);
    game->sprt->rec = ini_r(384, i, 64, 64);
    sfSprite_setTextureRect(menu->s_chat_item, game->sprt->rec);
    disp_s(game->win, menu->s_chat_item, 1288, 616);
    if (game->list_npc[npc]->armor <= 18) {
        i = 64 * (game->list_npc[npc]->armor - 1);
        game->sprt->rec = ini_r(512, i, 64, 64);
    } else {
        i = 64 * (game->list_npc[npc]->armor - 19);
        game->sprt->rec = ini_r(640, i, 64, 64);
    }
    sfSprite_setTextureRect(menu->s_chat_item, game->sprt->rec);
    disp_s(game->win, menu->s_chat_item, 1288, 628);
}

static void disp_npc(t_game *game, sprt_menu *menu, int npc)
{
    int i = 0;

    game->sprt->scale = ini_sc(12, 12);
    sfSprite_setScale(menu->s_chat_item, game->sprt->scale);
    i = 64 * (game->list_npc[npc]->body + 5);
    game->sprt->rec = ini_r(0, i, 64, 64);
    sfSprite_setTextureRect(menu->s_chat_item, game->sprt->rec);
    disp_s(game->win, menu->s_chat_item, 1300, 580);
    if (game->list_npc[npc]->head <= 24) {
        i = 64 * (game->list_npc[npc]->head - 1);
        game->sprt->rec = ini_r(128, i, 64, 64);
    } else {
        i = 64 * (game->list_npc[npc]->head - 25);
        game->sprt->rec = ini_r(256, i, 64, 64);
    }
    sfSprite_setTextureRect(menu->s_chat_item, game->sprt->rec);
    disp_s(game->win, menu->s_chat_item, 1288, 604);
    disp_npc_two(game, menu, npc);
}

void disp_player_chat(t_game *game, sprt_menu *menu, int npc)
{
    if (npc == -1)
        disp_player(game, menu);
    else
        disp_npc(game, menu, npc);
}