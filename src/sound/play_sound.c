/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** play a sound
*/

#include "my_rpg.h"

void play_button(t_game *game)
{
    if (game->sound_on == 1) {
        sfSound_setVolume(game->sound->s_button, 20);
        sfSound_play(game->sound->s_button);
    }
}

void play_sound(t_game *game, int nb)
{
    if (nb == 1 && game->sound_on == 1) {
        sfSound_setVolume(game->sound->s_gun, 20);
        sfSound_play(game->sound->s_gun);
    }
    if (nb == 2 && game->sound_on == 1) {
        sfSound_setVolume(game->sound->s_sword, 20);
        sfSound_play(game->sound->s_sword);
    }
    if (nb == 3 && game->sound_on == 1) {
        sfSound_setVolume(game->sound->s_footstep, 5);
        sfSound_play(game->sound->s_footstep);
    }
    if (nb == 4 && game->sound_on == 1) {
        sfSound_setVolume(game->sound->s_door, 20);
        sfSound_play(game->sound->s_door);
    }
}