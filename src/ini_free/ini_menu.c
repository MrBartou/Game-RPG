/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** initialize the menu
*/

#include "my_rpg.h"

int ini_menu(t_game *game)
{
    game->menu = NULL;

    game->menu = malloc(sizeof(menu));
    if (game->menu == NULL) {
        write(2, "malloc() error\n", 15);
        return (84);
    }
    game->menu->game_menu = malloc(sizeof(int) * 3);
    if (game->menu->game_menu == NULL) {
        write(2, "malloc() error\n", 15);
        return (84);
    }
    return (0);
}