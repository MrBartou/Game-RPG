/*
** EPITECH PROJECT, 2019
** my_printf.c
** File description:
** print a number in hexa for adress
*/

#include "my.h"

int my_hexa_address(long long nb)
{
    int nb2 = 0;

    if (nb >= 16) {
        nb2 = nb % 16;
        nb /= 16;
        my_hexa_address(nb);
    } else if (nb > 0) {
        nb2 = nb % 16;
        nb /= 16;
    }
    if (nb2 > 9)
        my_putchar(nb2 + 87);
    else
        my_putchar(nb2 + 48);
}

int my_adress(void * nb)
{
    long long number = (long long int)nb;
    my_putstr("0x");
    my_hexa_address(number);
}