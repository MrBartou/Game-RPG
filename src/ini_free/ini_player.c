/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** initialize the player
*/

#include "my_rpg.h"
#include "my_item.h"

int ini_player(t_game *game)
{
    game->player = NULL;

    game->player = malloc(sizeof(player));
    if (game->player == NULL) {
        write(2, "malloc() error\n", 15);
        return (84);
    }
    return (0);
}