/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** initialize the sounds
*/

#include "my_rpg.h"

static void des_buffer(t_game *game)
{
    sfSoundBuffer_destroy(game->sound->b_music_bar);
    sfSoundBuffer_destroy(game->sound->b_music_menu);
    sfSoundBuffer_destroy(game->sound->b_music_combat);
    sfSoundBuffer_destroy(game->sound->b_music_map);
    sfSoundBuffer_destroy(game->sound->b_map);
    sfSoundBuffer_destroy(game->sound->b_bar);
    sfSoundBuffer_destroy(game->sound->b_footstep);
    sfSoundBuffer_destroy(game->sound->b_door);
    sfSoundBuffer_destroy(game->sound->b_gun);
    sfSoundBuffer_destroy(game->sound->b_sword);
    sfSoundBuffer_destroy(game->sound->b_button);
}

static void des_sounds(t_game *game)
{
    sfSound_destroy(game->sound->s_music_bar);
    sfSound_destroy(game->sound->s_music_menu);
    sfSound_destroy(game->sound->s_music_combat);
    sfSound_destroy(game->sound->s_music_map);
    sfSound_destroy(game->sound->s_map);
    sfSound_destroy(game->sound->s_bar);
    sfSound_destroy(game->sound->s_footstep);
    sfSound_destroy(game->sound->s_door);
    sfSound_destroy(game->sound->s_gun);
    sfSound_destroy(game->sound->s_sword);
    sfSound_destroy(game->sound->s_button);
}

void destroy_sound(t_game *game)
{
    des_buffer(game);
    des_sounds(game);
}