/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** initialize the sprites
*/

#include "my_rpg.h"

void ini_sprt_texture_sprite(sprt_texture *texture)
{
    texture->s_map_back = ini_s(texture->t_map_back);
    texture->s_map_plus = ini_s(texture->t_map_plus);
    texture->s_map_ground = ini_s(texture->t_map_ground);
    texture->s_map_hit = ini_s(texture->t_map_hit);
    texture->s_arena_plus = ini_s(texture->t_arena_plus);
    texture->s_arena_ground = ini_s(texture->t_arena_ground);
    texture->s_arena_hit = ini_s(texture->t_arena_hit);
    texture->s_bar_plus = ini_s(texture->t_bar_plus);
    texture->s_bar_ground = ini_s(texture->t_bar_ground);
    texture->s_bar_hit = ini_s(texture->t_bar_hit);
    texture->s_boss_plus = ini_s(texture->t_boss_plus);
    texture->s_boss_ground = ini_s(texture->t_boss_ground);
    texture->s_boss_hit = ini_s(texture->t_boss_hit);
    texture->s_house_1_plus = ini_s(texture->t_house_1_plus);
    texture->s_house_1_ground = ini_s(texture->t_house_1_ground);
    texture->s_house_1_hit = ini_s(texture->t_house_1_hit);
    texture->s_house_2_plus = ini_s(texture->t_house_2_plus);
    texture->s_house_2_ground = ini_s(texture->t_house_2_ground);
    texture->s_house_2_hit = ini_s(texture->t_house_2_hit);
}