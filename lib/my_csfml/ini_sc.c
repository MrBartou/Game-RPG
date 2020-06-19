/*
** EPITECH PROJECT, 2019
** my_defender
** File description:
** do the initialization of a scale
*/

#include "my_csfml.h"

sfVector2f ini_sc(int x, int y)
{
    sfVector2f scale;

    scale.x = x;
    scale.y = y;
    return (scale);
}