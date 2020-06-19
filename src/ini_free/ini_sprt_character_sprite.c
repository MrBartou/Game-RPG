/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** initialize the sprites
*/

#include "my_rpg.h"

static void ini_sprt_character_sprite_one(sprt_character *character)
{
    character->s_haircut_1 = ini_s(character->t_haircut_1);
    character->s_haircut_2 = ini_s(character->t_haircut_2);
    character->s_haircut_3 = ini_s(character->t_haircut_3);
    character->s_haircut_4 = ini_s(character->t_haircut_4);
    character->s_moto_helmet = ini_s(character->t_moto_helmet);
    character->s_mili_helmet = ini_s(character->t_mili_helmet);
    character->s_iron_helmet = ini_s(character->t_iron_helmet);
    character->s_hood = ini_s(character->t_hood);
    character->s_plate = ini_s(character->t_plate);
    character->s_shirt_1 = ini_s(character->t_shirt_1);
    character->s_shirt_2 = ini_s(character->t_shirt_2);
    character->s_shirt_3 = ini_s(character->t_shirt_3);
    character->s_iron_shoulders = ini_s(character->t_iron_shoulders);
    character->s_iron_gloves = ini_s(character->t_iron_gloves);
    character->s_iron = ini_s(character->t_iron);
    character->s_leather_shoulders = ini_s(character->t_leather_shoulders);
    character->s_leather_gloves = ini_s(character->t_leather_gloves);
    character->s_leather = ini_s(character->t_leather);
}

static void ini_sprt_character_sprite_two(sprt_character *character)
{
    character->s_pant_1 = ini_s(character->t_pant_1);
    character->s_pant_2 = ini_s(character->t_pant_2);
    character->s_pant_3 = ini_s(character->t_pant_3);
    character->s_shoes = ini_s(character->t_shoes);
    character->s_knife_1 = ini_s(character->t_knife_1);
    character->s_knife_2 = ini_s(character->t_knife_2);
    character->s_knife_3 = ini_s(character->t_knife_3);
    character->s_gun_1 = ini_s(character->t_gun_1);
    character->s_gun_2 = ini_s(character->t_gun_2);
    character->s_body = ini_s(character->t_body);
}

void ini_sprt_character_sprite(sprt_character *character)
{
    ini_sprt_character_sprite_one(character);
    ini_sprt_character_sprite_two(character);
}