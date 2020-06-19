/*
** EPITECH PROJECT, 2019
** my_printf.c
** File description:
** print a number in hexa
*/

#include "my.h"

int my_hexa(int nb, int is_maj)
{
    int nb2 = 0;

    if (nb >= 16) {
        nb2 = nb % 16;
        nb /= 16;
        my_hexa(nb, is_maj);
    } else if (nb > 0) {
        nb2 = nb % 16;
        nb /= 16;
    }
    if (is_maj == 0) {
        if (nb2 > 9)
            my_putchar(nb2 + 87);
        else
            my_putchar(nb2 + 48);
    } else
        if (nb2 > 9)
            my_putchar(nb2 + 55);
        else
            my_putchar(nb2 + 48);
}