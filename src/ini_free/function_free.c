/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** free all the mallocs
*/

#include "my_rpg.h"

void function_free(t_game *game)
{
    free(game->sprt->sprt_character);
    free(game->sprt->sprt_menu);
    free(game->sprt->sprt_texture);
    free(game->sprt);
    free(game->sound);
    free(game->menu->game_menu);
    free(game->menu);
    free(game->player);
    free(game);
}