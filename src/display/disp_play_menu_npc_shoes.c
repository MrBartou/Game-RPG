/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** displays a menu
*/

#include "my_rpg.h"

void disp_play_menu_npc_shoes(t_game *game, int nb, int dir, int pos)
{
    sprt_character *character = game->sprt->sprt_character;

    if (game->list_npc[nb]->shoes >= 4)
        game->sprt->vec.y = 572;
    else
        game->sprt->vec.y = 0;
    game->sprt->vec.x = 0;
    if (game->list_npc[nb]->shoes == 2 || game->list_npc[nb]->shoes == 5)
        game->sprt->vec.x = 640;
    if (game->list_npc[nb]->shoes == 3 || game->list_npc[nb]->shoes == 6)
        game->sprt->vec.x = 1280;
    game->sprt->vec.y += 64 * (dir - 1);
    game->sprt->vec.x += 64 * (pos - 1);
    game->sprt->rec = ini_r(game->sprt->vec.y, game->sprt->vec.x, 64, 64);
    game->sprt->scale = ini_sc(2, 2);
    sfSprite_setScale(character->s_shoes, game->sprt->scale);
    sfSprite_setTextureRect(character->s_shoes, game->sprt->rec);
    disp_s(game->win, character->s_shoes
        , game->list_npc[nb]->x, game->list_npc[nb]->y);
}