/*
** EPITECH PROJECT, 2019
** my_printf.c
** File description:
** print a number in octal
*/

#include "my.h"

int my_octal(int nb)
{
    int nb2 = 0;

    if (nb >= 8) {
        nb2 = nb % 8;
        nb /= 8;
        my_octal(nb);
    } else if (nb > 0) {
        nb2 = nb % 8;
        nb /= 8;
    }
    my_putchar(nb2 + 48);
}