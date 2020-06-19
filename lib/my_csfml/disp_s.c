/*
** EPITECH PROJECT, 2019
** my_defender
** File description:
** displays a sprite on the screen
*/

#include "my_csfml.h"

void disp_s(sfRenderWindow* win, sfSprite* sprite, int x, int y)
{
    sfVector2f vector;

    vector.x = x;
    vector.y = y;
    sfSprite_setPosition(sprite, vector);
    sfRenderWindow_drawSprite(win, sprite, NULL);
}