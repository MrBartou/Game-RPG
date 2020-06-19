/*
** EPITECH PROJECT, 2019
** my_printf.c
** File description:
** print a number in binary
*/

#include "my.h"

int my_binary(int nb)
{
    int nb2 = 0;

    if (nb >= 2) {
        nb2 = nb % 2;
        nb /= 2;
        my_binary(nb);
    } else if (nb > 0) {
        nb2 = nb % 2;
        nb /= 2;
    }
    my_putchar(nb2 + 48);
}