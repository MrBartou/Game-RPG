/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** initialize the sprites
*/

#include "my_rpg.h"

int ini_sprt_texture(t_game *game)
{
    game->sprt->sprt_texture = NULL;

    game->sprt->sprt_texture = malloc(sizeof(sprt_texture));
    if (game->sprt->sprt_texture == NULL) {
        write(2, "malloc() error\n", 15);
        return (84);
    }
    ini_sprt_texture_texture(game->sprt->sprt_texture);
    ini_sprt_texture_sprite(game->sprt->sprt_texture);
    return (0);
}