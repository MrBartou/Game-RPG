/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** play a music
*/

#include "my_rpg.h"

static void stop_music(t_game *game, int music)
{
    if (music == 1)
        sfSound_stop(game->sound->s_music_menu);
    if (music == 2) {
        sfSound_stop(game->sound->s_music_map);
        sfSound_stop(game->sound->s_map);
    }
    if (music == 3) {
        sfSound_stop(game->sound->s_music_bar);
        sfSound_stop(game->sound->s_bar);
    }
    if (music == 4)
        sfSound_stop(game->sound->s_music_combat);
}

static void play_1_2(t_game *game, int nb)
{
    if (nb == 1) {
        if (game->music_on == 1) {
            sfSound_setVolume(game->sound->s_music_menu, 2);
            sfSound_setLoop(game->sound->s_music_menu, sfTrue);
            sfSound_play(game->sound->s_music_menu);
        }
    } else {
        if (game->music_on == 1) {
            sfSound_setVolume(game->sound->s_music_map, 12);
            sfSound_setLoop(game->sound->s_music_map, sfTrue);
            sfSound_play(game->sound->s_music_map);
        }
        if (game->sound_on == 1 && nb != 0) {
            sfSound_setVolume(game->sound->s_map, 10);
            sfSound_setLoop(game->sound->s_map, sfTrue);
            sfSound_play(game->sound->s_map);
        }
    }
}


static void play_3_4(t_game *game, int nb)
{
    if (nb == 4) {
        if (game->music_on == 1) {
            sfSound_setVolume(game->sound->s_music_combat, 5);
            sfSound_setLoop(game->sound->s_music_combat, sfTrue);
            sfSound_play(game->sound->s_music_combat);
        }
    } else {
        if (game->music_on == 1 && nb != 0) {
            sfSound_setVolume(game->sound->s_music_bar, 15);
            sfSound_setLoop(game->sound->s_music_bar, sfTrue);
            sfSound_play(game->sound->s_music_bar);
        }
        if (game->sound_on == 1) {
            sfSound_setVolume(game->sound->s_bar, 5);
            sfSound_setLoop(game->sound->s_bar, sfTrue);
            sfSound_play(game->sound->s_bar);
        }
    }
}

void play_music(t_game *game, int nb)
{
    int static music = 0;

    stop_music(game, music);
    if (nb <= 2)
        play_1_2(game, nb);
    if (nb == 3 || nb == 4)
        play_3_4(game, nb);
    if (nb == 5)
        play_1_2(game, 0);
    if (nb == 6)
        play_3_4(game, 0);
    music = nb;
    if (nb == 5 || nb == 6)
        music = nb - 3;
}