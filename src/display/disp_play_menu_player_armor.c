/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** displays a menu
*/

#include "my_rpg.h"

static void disp_1_2_3(t_game *game, int i, int x, int y)
{
    sprt_character *chara = game->sprt->sprt_character;

    game->sprt->scale = ini_sc(2, 2);
    if (i == 1) {
        sfSprite_setScale(chara->s_leather_shoulders, game->sprt->scale);
        game->sprt->rec = ini_r(game->sprt->vec.y, game->sprt->vec.x, 64, 64);
        sfSprite_setTextureRect(chara->s_leather_shoulders, game->sprt->rec);
        disp_s(game->win, chara->s_leather_shoulders, x, y);
    } else if (i == 2) {
        sfSprite_setScale(chara->s_leather_gloves, game->sprt->scale);
        game->sprt->rec = ini_r(game->sprt->vec.y, game->sprt->vec.x, 64, 64);
        sfSprite_setTextureRect(chara->s_leather_gloves, game->sprt->rec);
        disp_s(game->win, chara->s_leather_gloves, x, y);
    } else {
        sfSprite_setScale(chara->s_leather, game->sprt->scale);
        game->sprt->rec = ini_r(game->sprt->vec.y, game->sprt->vec.x, 64, 64);
        sfSprite_setTextureRect(chara->s_leather, game->sprt->rec);
        disp_s(game->win, chara->s_leather, x, y);
    }
}

static void disp_4_5_6(t_game *game, int i, int x, int y)
{
    sprt_character *character = game->sprt->sprt_character;

    game->sprt->scale = ini_sc(2, 2);
    if (i == 4) {
        sfSprite_setScale(character->s_iron_shoulders, game->sprt->scale);
        game->sprt->rec = ini_r(game->sprt->vec.y, game->sprt->vec.x, 64, 64);
        sfSprite_setTextureRect(character->s_iron_shoulders, game->sprt->rec);
        disp_s(game->win, character->s_iron_shoulders, x, y);
    } else if (i == 5) {
        sfSprite_setScale(character->s_iron_gloves, game->sprt->scale);
        game->sprt->rec = ini_r(game->sprt->vec.y, game->sprt->vec.x, 64, 64);
        sfSprite_setTextureRect(character->s_iron_gloves, game->sprt->rec);
        disp_s(game->win, character->s_iron_gloves, x, y);
    } else {
        sfSprite_setScale(character->s_iron, game->sprt->scale);
        game->sprt->rec = ini_r(game->sprt->vec.y, game->sprt->vec.x, 64, 64);
        sfSprite_setTextureRect(character->s_iron, game->sprt->rec);
        disp_s(game->win, character->s_iron, x, y);
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
}

void disp_play_menu_player_armor(t_game *game, int dir, int pos)
{
    int armor = game->player->armor % 6;

    if (armor > 3 || armor == 0)
        game->sprt->vec.y = 572;
    else
        game->sprt->vec.y = 0;
    game->sprt->vec.x = 0;
    if (armor == 2 || armor == 5)
        game->sprt->vec.x = 640;
    if (armor == 3 || armor == 0)
        game->sprt->vec.x = 1280;
    game->sprt->vec.y += 64 * (dir - 1);
    game->sprt->vec.x += 64 * (pos - 1);
    which_disp(game, game->player->armor, game->player->x - 40
        , game->player->y - 110);
}