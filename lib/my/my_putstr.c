/*
** EPITECH PROJECT, 2019
** my_putstr.c
** File description:
** fct that displays the str
*/

#include "my.h"

void my_putstr(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        my_putchar(str[i]);
}
