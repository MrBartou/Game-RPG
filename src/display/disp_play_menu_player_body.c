/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** displays a menu
*/

#include "my_rpg.h"

void disp_play_menu_player_body(t_game *game, int dir, int pos)
{
    sprt_character *character = game->sprt->sprt_character;

    if (game->player->body % 2 == 0)
        game->sprt->vec.y = 572;
    else
        game->sprt->vec.y = 0;
    game->sprt->vec.x = 0;
    if (game->player->body == 3 || game->player->body == 4)
        game->sprt->vec.x = 640;
    if (game->player->body == 5 || game->player->body == 6)
        game->sprt->vec.x = 1280;
    game->sprt->vec.y += 64 * (dir - 1);
    game->sprt->vec.x += 64 * (pos - 1);
    game->sprt->rec = ini_r(game->sprt->vec.y, game->sprt->vec.x, 64, 64);
    game->sprt->scale = ini_sc(2, 2);
    sfSprite_setScale(character->s_body, game->sprt->scale);
    sfSprite_setTextureRect(character->s_body, game->sprt->rec);
    disp_s(game->win, character->s_body, game->player->x - 40
        , game->player->y - 110);
}