/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** destroy all the sprites of the game
*/

#include "my_rpg.h"

static void destroy_sprt_texture_sprite(sprt_texture *texture)
{
    sfSprite_destroy(texture->s_map_back);
    sfSprite_destroy(texture->s_map_plus);
    sfSprite_destroy(texture->s_map_ground);
    sfSprite_destroy(texture->s_map_hit);
    sfSprite_destroy(texture->s_arena_plus);
    sfSprite_destroy(texture->s_arena_ground);
    sfSprite_destroy(texture->s_arena_hit);
    sfSprite_destroy(texture->s_bar_plus);
    sfSprite_destroy(texture->s_bar_ground);
    sfSprite_destroy(texture->s_bar_hit);
    sfSprite_destroy(texture->s_boss_plus);
    sfSprite_destroy(texture->s_boss_ground);
    sfSprite_destroy(texture->s_boss_hit);
    sfSprite_destroy(texture->s_house_1_plus);
    sfSprite_destroy(texture->s_house_1_ground);
    sfSprite_destroy(texture->s_house_1_hit);
    sfSprite_destroy(texture->s_house_2_plus);
    sfSprite_destroy(texture->s_house_2_ground);
    sfSprite_destroy(texture->s_house_2_hit);
}

static void destroy_sprt_texture_texture(sprt_texture *texture)
{
    sfTexture_destroy(texture->t_map_back);
    sfTexture_destroy(texture->t_map_plus);
    sfTexture_destroy(texture->t_map_ground);
    sfTexture_destroy(texture->t_map_hit);
    sfTexture_destroy(texture->t_arena_plus);
    sfTexture_destroy(texture->t_arena_ground);
    sfTexture_destroy(texture->t_arena_hit);
    sfTexture_destroy(texture->t_bar_plus);
    sfTexture_destroy(texture->t_bar_ground);
    sfTexture_destroy(texture->t_bar_hit);
    sfTexture_destroy(texture->t_boss_plus);
    sfTexture_destroy(texture->t_boss_ground);
    sfTexture_destroy(texture->t_boss_hit);
    sfTexture_destroy(texture->t_house_1_plus);
    sfTexture_destroy(texture->t_house_1_ground);
    sfTexture_destroy(texture->t_house_1_hit);
    sfTexture_destroy(texture->t_house_2_plus);
    sfTexture_destroy(texture->t_house_2_ground);
    sfTexture_destroy(texture->t_house_2_hit);
}

void destroy_sprt_texture(sprt_texture *texture)
{
    destroy_sprt_texture_sprite(texture);
    destroy_sprt_texture_texture(texture);
}