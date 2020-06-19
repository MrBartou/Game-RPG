/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** initialize the sprites
*/

#include "my_rpg.h"

static int ini_sprt_type(t_game *game)
{
    if (ini_text(game) == 84)
        return (84);
    if (ini_sprt_character(game) == 84) {
        free(game->sprt);
        return (84);
    }
    if (ini_sprt_menu(game) == 84) {
        free(game->sprt->sprt_character);
        free(game->sprt);
        return (84);
    }
    if (ini_sprt_texture(game) == 84) {
        free(game->sprt->sprt_character);
        free(game->sprt->sprt_menu);
        free(game->sprt);
        return (84);
    }
    return (0);
}

int ini_sprt(t_game *game)
{
    game->sprt = NULL;

    game->sprt = malloc(sizeof(sprt));
    if (game->sprt == NULL) {
        write(2, "malloc() error\n", 15);
        return (84);
    }
    return (ini_sprt_type(game));
}