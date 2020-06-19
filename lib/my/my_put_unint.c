/*
** EPITECH PROJECT, 2019
** my_printf.c
** File description:
** print unsigned int
*/

#include "my.h"

void my_put_unint(unsigned int nb)
{
    unsigned int nb2;

    if (nb >= 10) {
        nb2 = nb % 10;
        nb /= 10;
        my_put_unint(nb);
        my_putchar(nb2 + 48);
    } else
        my_putchar(nb + 48);
}