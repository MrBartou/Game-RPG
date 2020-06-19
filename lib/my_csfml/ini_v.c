/*
** EPITECH PROJECT, 2019
** my_defender
** File description:
** do the initialization of a vector
*/

#include "my_csfml.h"

sfVector2f ini_v(int x, int y)
{
    sfVector2f vector;

    vector.x = x;
    vector.y = y;
    return (vector);
}