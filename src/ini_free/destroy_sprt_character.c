/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** destroy all the sprites of the game
*/

#include "my_rpg.h"

static void destroy_sprt_character_sprite_one(sprt_character *character)
{
    sfSprite_destroy(character->s_haircut_1);
    sfSprite_destroy(character->s_haircut_2);
    sfSprite_destroy(character->s_haircut_3);
    sfSprite_destroy(character->s_haircut_4);
    sfSprite_destroy(character->s_moto_helmet);
    sfSprite_destroy(character->s_mili_helmet);
    sfSprite_destroy(character->s_iron_helmet);
    sfSprite_destroy(character->s_hood);
    sfSprite_destroy(character->s_plate);
    sfSprite_destroy(character->s_shirt_1);
    sfSprite_destroy(character->s_shirt_2);
    sfSprite_destroy(character->s_shirt_3);
    sfSprite_destroy(character->s_iron_shoulders);
    sfSprite_destroy(character->s_iron_gloves);
    sfSprite_destroy(character->s_iron);
    sfSprite_destroy(character->s_leather_shoulders);
    sfSprite_destroy(character->s_leather_gloves);
    sfSprite_destroy(character->s_leather);
}

static void destroy_sprt_character_sprite_two(sprt_character *character)
{
    sfSprite_destroy(character->s_pant_1);
    sfSprite_destroy(character->s_pant_2);
    sfSprite_destroy(character->s_pant_3);
    sfSprite_destroy(character->s_shoes);
    sfSprite_destroy(character->s_knife_1);
    sfSprite_destroy(character->s_knife_2);
    sfSprite_destroy(character->s_knife_3);
    sfSprite_destroy(character->s_gun_1);
    sfSprite_destroy(character->s_gun_2);
    sfSprite_destroy(character->s_body);
}

static void destroy_sprt_character_texture_one(sprt_character *character)
{
    sfTexture_destroy(character->t_haircut_1);
    sfTexture_destroy(character->t_haircut_2);
    sfTexture_destroy(character->t_haircut_3);
    sfTexture_destroy(character->t_haircut_4);
    sfTexture_destroy(character->t_moto_helmet);
    sfTexture_destroy(character->t_mili_helmet);
    sfTexture_destroy(character->t_iron_helmet);
    sfTexture_destroy(character->t_hood);
    sfTexture_destroy(character->t_plate);
    sfTexture_destroy(character->t_shirt_1);
    sfTexture_destroy(character->t_shirt_2);
    sfTexture_destroy(character->t_shirt_3);
    sfTexture_destroy(character->t_iron_shoulders);
    sfTexture_destroy(character->t_iron_gloves);
    sfTexture_destroy(character->t_iron);
    sfTexture_destroy(character->t_leather_shoulders);
    sfTexture_destroy(character->t_leather_gloves);
    sfTexture_destroy(character->t_leather);
}

static void destroy_sprt_character_texture_two(sprt_character *character)
{
    sfTexture_destroy(character->t_pant_1);
    sfTexture_destroy(character->t_pant_2);
    sfTexture_destroy(character->t_pant_3);
    sfTexture_destroy(character->t_shoes);
    sfTexture_destroy(character->t_knife_1);
    sfTexture_destroy(character->t_knife_2);
    sfTexture_destroy(character->t_knife_3);
    sfTexture_destroy(character->t_gun_1);
    sfTexture_destroy(character->t_gun_2);
    sfTexture_destroy(character->t_body);
}

void destroy_sprt_character(sprt_character *character)
{
    destroy_sprt_character_sprite_one(character);
    destroy_sprt_character_sprite_two(character);
    destroy_sprt_character_texture_one(character);
    destroy_sprt_character_texture_two(character);
}