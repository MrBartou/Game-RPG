/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** initialize the sprites
*/

#include "my_rpg.h"

static void ini_sprt_character_texture_one(sprt_character *character)
{
    char str_1[] = "./resrc/sprites/character/head/HAIRCUT_1.png";
    char str_2[] = "./resrc/sprites/character/head/HAIRCUT_2.png";
    char str_3[] = "./resrc/sprites/character/head/HAIRCUT_3.png";
    char str_4[] = "./resrc/sprites/character/head/HAIRCUT_4.png";
    char str_5[] = "./resrc/sprites/character/head/MOTO_HELMET.png";
    char str_6[] = "./resrc/sprites/character/head/MILI_HELMET.png";
    char str_7[] = "./resrc/sprites/character/head/IRON_HELMET.png";
    char str_8[] = "./resrc/sprites/character/head/HOOD.png";
    char str_9[] = "./resrc/sprites/character/torso/PLATE.png";

    character->t_haircut_1 = sfTexture_createFromFile(str_1, NULL);
    character->t_haircut_2 = sfTexture_createFromFile(str_2, NULL);
    character->t_haircut_3 = sfTexture_createFromFile(str_3, NULL);
    character->t_haircut_4 = sfTexture_createFromFile(str_4, NULL);
    character->t_moto_helmet = sfTexture_createFromFile(str_5, NULL);
    character->t_mili_helmet = sfTexture_createFromFile(str_6, NULL);
    character->t_iron_helmet = sfTexture_createFromFile(str_7, NULL);
    character->t_hood = sfTexture_createFromFile(str_8, NULL);
    character->t_plate = sfTexture_createFromFile(str_9, NULL);
}

static void ini_sprt_character_texture_two(sprt_character *character)
{
    char str_1[] = "./resrc/sprites/character/torso/SHIRT_1.png";
    char str_2[] = "./resrc/sprites/character/torso/SHIRT_2.png";
    char str_3[] = "./resrc/sprites/character/torso/SHIRT_3.png";
    char str_4[] = "./resrc/sprites/character/armor/IRON_SHOULDERS.png";
    char str_5[] = "./resrc/sprites/character/armor/IRON_GLOVES.png";
    char str_6[] = "./resrc/sprites/character/armor/IRON.png";
    char str_7[] = "./resrc/sprites/character/armor/LEATHER_SHOULDERS.png";
    char str_8[] = "./resrc/sprites/character/armor/LEATHER_GLOVES.png";
    char str_9[] = "./resrc/sprites/character/armor/LEATHER.png";

    character->t_shirt_1 = sfTexture_createFromFile(str_1, NULL);
    character->t_shirt_2 = sfTexture_createFromFile(str_2, NULL);
    character->t_shirt_3 = sfTexture_createFromFile(str_3, NULL);
    character->t_iron_shoulders = sfTexture_createFromFile(str_4, NULL);
    character->t_iron_gloves = sfTexture_createFromFile(str_5, NULL);
    character->t_iron = sfTexture_createFromFile(str_6, NULL);
    character->t_leather_shoulders = sfTexture_createFromFile(str_7, NULL);
    character->t_leather_gloves = sfTexture_createFromFile(str_8, NULL);
    character->t_leather = sfTexture_createFromFile(str_9, NULL);
}

static void ini_sprt_character_texture_three(sprt_character *character)
{
    char str_1[] = "./resrc/sprites/character/legs/PANT_1.png";
    char str_2[] = "./resrc/sprites/character/legs/PANT_2.png";
    char str_3[] = "./resrc/sprites/character/legs/PANT_3.png";
    char str_4[] = "./resrc/sprites/character/shoes/SHOES.png";
    char str_5[] = "./resrc/sprites/character/knife/KNIFE_1.png";
    char str_6[] = "./resrc/sprites/character/knife/KNIFE_2.png";
    char str_7[] = "./resrc/sprites/character/knife/KNIFE_3.png";
    char str_8[] = "./resrc/sprites/character/gun/GUN_1.png";
    char str_9[] = "./resrc/sprites/character/gun/GUN_1.png";

    character->t_pant_1 = sfTexture_createFromFile(str_1, NULL);
    character->t_pant_2 = sfTexture_createFromFile(str_2, NULL);
    character->t_pant_3 = sfTexture_createFromFile(str_3, NULL);
    character->t_shoes = sfTexture_createFromFile(str_4, NULL);
    character->t_knife_1 = sfTexture_createFromFile(str_5, NULL);
    character->t_knife_2 = sfTexture_createFromFile(str_6, NULL);
    character->t_knife_3 = sfTexture_createFromFile(str_7, NULL);
    character->t_gun_1 = sfTexture_createFromFile(str_8, NULL);
    character->t_gun_2 = sfTexture_createFromFile(str_9, NULL);
}

void ini_sprt_character_texture(sprt_character *character)
{
    char str[] = "./resrc/sprites/character/BODY.png";

    character->t_body = sfTexture_createFromFile(str, NULL);
    ini_sprt_character_texture_one(character);
    ini_sprt_character_texture_two(character);
    ini_sprt_character_texture_three(character);
}