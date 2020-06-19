/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** initialize the sprites
*/

#include "my_rpg.h"

int ini_sprt_character(t_game *game)
{
    game->sprt->sprt_character = NULL;

    game->sprt->sprt_character = malloc(sizeof(sprt_character));
    if (game->sprt->sprt_character == NULL) {
        write(2, "malloc() error\n", 15);
        return (84);
    }
    ini_sprt_character_texture(game->sprt->sprt_character);
    ini_sprt_character_sprite(game->sprt->sprt_character);
    return (0);
}