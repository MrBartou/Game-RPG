/*
** EPITECH PROJECT, 2019
** my_csfml.h
** File description:
** contains all the fct exposed in libmycsfml.a
*/

#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Window.h>
#include <SFML/Audio.h>

#ifndef MY_CSFML_H_
#define MY_CSFML_H_

sfSprite *ini_s(sfTexture* texture);

sfIntRect ini_r(int a, int b, int c, int d);

sfVector2f ini_sc(int x, int y);

sfVector2f ini_v(int x, int y);

void disp_s(sfRenderWindow* win, sfSprite* sprite, int x, int y);

#endif /* MY_CSFML_H_ */
