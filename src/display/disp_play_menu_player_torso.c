/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** displays a menu
*/

#include "my_rpg.h"

static void disp_1_2(t_game *game, int i, int x, int y)
{
    sprt_character *character = game->sprt->sprt_character;

    game->sprt->scale = ini_sc(2, 2);
    if (i == 1) {
        sfSprite_setScale(character->s_plate, game->sprt->scale);
        game->sprt->rec = ini_r(game->sprt->vec.y, game->sprt->vec.x, 64, 64);
        sfSprite_setTextureRect(character->s_plate, game->sprt->rec);
        disp_s(game->win, character->s_plate, x, y);
    } else {
        sfSprite_setScale(character->s_shirt_3, game->sprt->scale);
        game->sprt->rec = ini_r(game->sprt->vec.y, game->sprt->vec.x, 64, 64);
        sfSprite_setTextureRect(character->s_shirt_3, game->sprt->rec);
        disp_s(game->win, character->s_shirt_3, x, y);
    }
}

static void disp_3_4(t_game *game, int i, int x, int y)
{
    sprt_character *character = game->sprt->sprt_character;

    game->sprt->scale = ini_sc(2, 2);
    if (i == 3) {
        sfSprite_setScale(character->s_shirt_2, game->sprt->scale);
        game->sprt->rec = ini_r(game->sprt->vec.y, game->sprt->vec.x, 64, 64);
        sfSprite_setTextureRect(character->s_shirt_2, game->sprt->rec);
        disp_s(game->win, character->s_shirt_2, x, y);
    } else {
        sfSprite_setScale(character->s_shirt_1, game->sprt->scale);
        game->sprt->rec = ini_r(game->sprt->vec.y, game->sprt->vec.x, 64, 64);
        sfSprite_setTextureRect(character->s_shirt_1, game->sprt->rec);
        disp_s(game->win, character->s_shirt_1, x, y);
    }
}

static void which_disp(t_game *game, int i, int x, int y)
{
    if (i >= 1 && i <= 6)
        disp_1_2(game, 1, x, y);
    if (i >= 7 && i <= 12)
        disp_1_2(game, 2, x, y);
    if (i >= 13 && i <= 18)
        disp_3_4(game, 3, x, y);
    if (i >= 19 && i <= 24)
        disp_3_4(game, 4, x, y);
}

void disp_play_menu_player_torso(t_game *game, int dir, int pos)
{
    int torso = game->player->torso % 6;

    if (torso > 3 || torso == 0)
        game->sprt->vec.y = 572;
    else
        game->sprt->vec.y = 0;
    game->sprt->vec.x = 0;
    if (torso == 2 || torso == 5)
        game->sprt->vec.x = 640;
    if (torso == 3 || torso == 0)
        game->sprt->vec.x = 1280;
    game->sprt->vec.y += 64 * (dir - 1);
    game->sprt->vec.x += 64 * (pos - 1);
    which_disp(game, game->player->torso, game->player->x - 40
        , game->player->y - 110);
}