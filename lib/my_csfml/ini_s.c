/*
** EPITECH PROJECT, 2019
** my_defender
** File description:
** do the initialization of a rectangle
*/

#include "my_csfml.h"

sfSprite *ini_s(sfTexture* texture)
{
    sfSprite* sprite;

    sprite = sfSprite_create();
    sfSprite_setTexture(sprite, texture, sfTrue);
    return (sprite);
}
