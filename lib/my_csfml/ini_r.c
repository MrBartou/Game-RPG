/*
** EPITECH PROJECT, 2019
** my_defender
** File description:
** do the initialization of a rectangle
*/

#include "my_csfml.h"

sfIntRect ini_r(int a, int b, int c, int d)
{
    sfIntRect rec;

    rec.top = a;
    rec.left = b;
    rec.width = c;
    rec.height = d;
    return (rec);
}
