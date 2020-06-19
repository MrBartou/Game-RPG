/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** destroy all the sprites of the game
*/

#include "my_rpg.h"

void destroy_sprt(t_game *game)
{
    destroy_sprt_character(game->sprt->sprt_character);
    destroy_sprt_menu(game->sprt->sprt_menu);
    destroy_sprt_texture(game->sprt->sprt_texture);
}