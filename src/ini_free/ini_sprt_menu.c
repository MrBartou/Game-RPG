/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** initialize the sprites
*/

#include "my_rpg.h"

int ini_sprt_menu(t_game *game)
{
    game->sprt->sprt_menu = NULL;

    game->sprt->sprt_menu = malloc(sizeof(sprt_menu));
    if (game->sprt->sprt_menu == NULL) {
        write(2, "malloc() error\n", 15);
        return (84);
    }
    ini_sprt_menu_texture(game->sprt->sprt_menu);
    ini_sprt_menu_sprite(game->sprt->sprt_menu);
    return (0);
}