/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** close the game
*/

#include "my_rpg.h"

void close_game(t_game *game)
{
    destroy_sprt(game);
    destroy_sound(game);
    sfClock_destroy(game->sprt->clock);
}