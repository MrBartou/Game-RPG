/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** launch the game
*/

#include "my_rpg.h"

int launch(void)
{
    t_game *game = NULL;

    game = malloc(sizeof(t_game) * 1);
    if (game == NULL) {
        write(2, "malloc() error\n", 15);
        return (84);
    }
    if (initialization(game) == 84) {
        free(game);
        return (84);
    }
    scene_manager(game);
    function_free(game);
    return (0);
}