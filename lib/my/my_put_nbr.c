/*
** EPITECH PROJECT, 2019
** my_put_nbr.c
** File description:
** display the number given as a parameter
*/

#include "my.h"

int my_put_nbr(int nb)
{
    int i = 0;
    char nbr[11];

    if (nb < 0) {
        nb = - nb;
        my_putchar('-');
    } else if (nb == 0) {
        my_putchar('0');
        return 0;
    }
    for (; nb > 0; i++) {
        nbr[i] = nb % 10;
        nb = nb / 10;
    }
    i--;
    for (; i >= 0; i--)
        my_putchar(nbr[i] + 48);
    return (0);
}
