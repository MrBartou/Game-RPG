/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** displays a menu
*/

#include "my_rpg.h"

static void disp_1_2_3(t_game *game, int i, int x, int y)
{
    sprt_character *character = game->sprt->sprt_character;

    game->sprt->scale = ini_sc(2, 2);
    if (i == 1) {
        sfSprite_setScale(character->s_haircut_1, game->sprt->scale);
        game->sprt->rec = ini_r(game->sprt->vec.y, game->sprt->vec.x, 64, 64);
        sfSprite_setTextureRect(character->s_haircut_1, game->sprt->rec);
        disp_s(game->win, character->s_haircut_1, x, y);
    } else if (i == 2) {
        sfSprite_setScale(character->s_haircut_2, game->sprt->scale);
        game->sprt->rec = ini_r(game->sprt->vec.y, game->sprt->vec.x, 64, 64);
        sfSprite_setTextureRect(character->s_haircut_2, game->sprt->rec);
        disp_s(game->win, character->s_haircut_2, x, y);
    } else {
        sfSprite_setScale(character->s_haircut_3, game->sprt->scale);
        game->sprt->rec = ini_r(game->sprt->vec.y, game->sprt->vec.x, 64, 64);
        sfSprite_setTextureRect(character->s_haircut_3, game->sprt->rec);
        disp_s(game->win, character->s_haircut_3, x, y);
    }
}

static void disp_4_5_6(t_game *game, int i, int x, int y)
{
    sprt_character *character = game->sprt->sprt_character;

    game->sprt->scale = ini_sc(2, 2);
    if (i == 4) {
        sfSprite_setScale(character->s_haircut_4, game->sprt->scale);
        game->sprt->rec = ini_r(game->sprt->vec.y, game->sprt->vec.x, 64, 64);
        sfSprite_setTextureRect(character->s_haircut_4, game->sprt->rec);
        disp_s(game->win, character->s_haircut_4, x, y);
    } else if (i == 5) {
        sfSprite_setScale(character->s_moto_helmet, game->sprt->scale);
        game->sprt->rec = ini_r(game->sprt->vec.y, game->sprt->vec.x, 64, 64);
        sfSprite_setTextureRect(character->s_moto_helmet, game->sprt->rec);
        disp_s(game->win, character->s_moto_helmet, x, y);
    } else {
        sfSprite_setScale(character->s_mili_helmet, game->sprt->scale);
        game->sprt->rec = ini_r(game->sprt->vec.y, game->sprt->vec.x, 64, 64);
        sfSprite_setTextureRect(character->s_mili_helmet, game->sprt->rec);
        disp_s(game->win, character->s_mili_helmet, x, y);
    }
}

static void disp_7_8(t_game *game, int i, int x, int y)
{
    sprt_character *character = game->sprt->sprt_character;

    game->sprt->scale = ini_sc(2, 2);
    if (i == 7) {
        sfSprite_setScale(character->s_iron_helmet, game->sprt->scale);
        game->sprt->rec = ini_r(game->sprt->vec.y, game->sprt->vec.x, 64, 64);
        sfSprite_setTextureRect(character->s_iron_helmet, game->sprt->rec);
        disp_s(game->win, character->s_iron_helmet, x, y);
    } else {
        sfSprite_setScale(character->s_hood, game->sprt->scale);
        game->sprt->rec = ini_r(game->sprt->vec.y, game->sprt->vec.x, 64, 64);
        sfSprite_setTextureRect(character->s_hood, game->sprt->rec);
        disp_s(game->win, character->s_hood, x, y);
    }
}

static void which_disp(t_game *game, int i, int x, int y)
{
    if (i >= 1 && i <= 6)
        disp_1_2_3(game, 1, x, y);
    if (i >= 7 && i <= 12)
        disp_1_2_3(game, 2, x, y);
    if (i >= 13 && i <= 18)
        disp_1_2_3(game, 3, x, y);
    if (i >= 19 && i <= 24)
        disp_4_5_6(game, 4, x, y);
    if (i >= 25 && i <= 30)
        disp_4_5_6(game, 5, x, y);
    if (i >= 31 && i <= 36)
        disp_4_5_6(game, 6, x, y);
    if (i >= 37 && i <= 42)
        disp_7_8(game, 7, x, y);
    if (i >= 43 && i <= 48)
        disp_7_8(game, 8, x, y);
}

void disp_play_menu_npc_head(t_game *game, int nb, int dir, int pos)
{
    int head = game->list_npc[nb]->head % 6;

    if (head > 3 || head == 0)
        game->sprt->vec.y = 572;
    else
        game->sprt->vec.y = 0;
    game->sprt->vec.x = 0;
    if (head == 2 || head == 5)
        game->sprt->vec.x = 640;
    if (head == 3 || head == 0)
        game->sprt->vec.x = 1280;
    game->sprt->vec.y += 64 * (dir - 1);
    game->sprt->vec.x += 64 * (pos - 1);
    which_disp(game, game->list_npc[nb]->head, game->list_npc[nb]->x
        , game->list_npc[nb]->y);
}