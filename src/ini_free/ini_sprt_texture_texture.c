/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** initialize the sprites
*/

#include "my_rpg.h"

static void ini_sprt_texture_texture_one(sprt_texture *texture)
{
    char str_1[] = "./resrc/sprites/texture/MAP_PLUS.png";
    char str_2[] = "./resrc/sprites/texture/MAP_GROUND.png";
    char str_3[] = "./resrc/sprites/texture/MAP_BACK.png";
    char str_4[] = "./resrc/sprites/texture/ARENA_PLUS.png";
    char str_5[] = "./resrc/sprites/texture/ARENA_GROUND.png";
    char str_6[] = "./resrc/sprites/texture/BAR_PLUS.png";
    char str_7[] = "./resrc/sprites/texture/BAR_GROUND.png";
    char str_8[] = "./resrc/sprites/texture/BOSS_PLUS.png";
    char str_9[] = "./resrc/sprites/texture/BOSS_GROUND.png";

    texture->t_map_plus = sfTexture_createFromFile(str_1, NULL);
    texture->t_map_ground = sfTexture_createFromFile(str_2, NULL);
    texture->t_map_back = sfTexture_createFromFile(str_3, NULL);
    texture->t_arena_plus = sfTexture_createFromFile(str_4, NULL);
    texture->t_arena_ground = sfTexture_createFromFile(str_5, NULL);
    texture->t_bar_plus = sfTexture_createFromFile(str_6, NULL);
    texture->t_bar_ground = sfTexture_createFromFile(str_7, NULL);
    texture->t_boss_plus = sfTexture_createFromFile(str_8, NULL);
    texture->t_boss_ground = sfTexture_createFromFile(str_9, NULL);
}

static void ini_sprt_texture_texture_two(sprt_texture *texture)
{
    char str_1[] = "./resrc/sprites/texture/HOUSE_1_PLUS.png";
    char str_2[] = "./resrc/sprites/texture/HOUSE_1_GROUND.png";
    char str_3[] = "./resrc/sprites/texture/HOUSE_2_PLUS.png";
    char str_4[] = "./resrc/sprites/texture/HOUSE_2_GROUND.png";
    char str_5[] = "./resrc/sprites/texture/MAP_HIT.png";
    char str_6[] = "./resrc/sprites/texture/ARENA_HIT.png";
    char str_7[] = "./resrc/sprites/texture/BAR_HIT.png";
    char str_8[] = "./resrc/sprites/texture/BOSS_HIT.png";
    char str_9[] = "./resrc/sprites/texture/HOUSE_1_HIT.png";

    texture->t_house_1_plus = sfTexture_createFromFile(str_1, NULL);
    texture->t_house_1_ground = sfTexture_createFromFile(str_2, NULL);
    texture->t_house_2_plus = sfTexture_createFromFile(str_3, NULL);
    texture->t_house_2_ground = sfTexture_createFromFile(str_4, NULL);
    texture->t_map_hit = sfTexture_createFromFile(str_5, NULL);
    texture->t_arena_hit = sfTexture_createFromFile(str_6, NULL);
    texture->t_bar_hit = sfTexture_createFromFile(str_7, NULL);
    texture->t_boss_hit = sfTexture_createFromFile(str_8, NULL);
    texture->t_house_1_hit = sfTexture_createFromFile(str_9, NULL);
}

static void ini_sprt_texture_texture_three(sprt_texture *texture)
{
    char str_1[] = "./resrc/sprites/texture/HOUSE_2_HIT.png";

    texture->t_house_2_hit = sfTexture_createFromFile(str_1, NULL);
}

void ini_sprt_texture_texture(sprt_texture *texture)
{
    ini_sprt_texture_texture_one(texture);
    ini_sprt_texture_texture_two(texture);
    ini_sprt_texture_texture_three(texture);
}