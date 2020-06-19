/*
** EPITECH PROJECT, 2019
** my_printf.c
** File description:
** disp_arg
*/

#include "my.h"

void disp_arg01(int nb, va_list args, char f_i, char flag_j)
{
    if (nb == 1 && (flag_j == 'd' || flag_j == 'i'))
        my_put_nbr(va_arg(args, int));
    if (nb == 1 && flag_j == 'u')
        my_put_unint(va_arg(args, unsigned int));
    if (nb == 3) {
        for (int mult = va_arg(args, int); mult != 0; mult--)
            my_putchar(' ');
        if (flag_j == 'd' || flag_j == 'i')
            my_put_nbr(va_arg(args, int));
        if (flag_j == 'u')
            my_put_unint(va_arg(args, unsigned int));
    }
    if (nb == 4) {
        for (int mult = va_arg(args, int); mult != 0; mult--)
            my_putchar(f_i);
        if (flag_j == 'd' || flag_j == 'i')
            my_put_nbr(va_arg(args, int));
        if (flag_j == 'u')
            my_put_unint(va_arg(args, unsigned int));
    }
}

void disp_arg02(int nb, va_list args, char f_i, char flag_j)
{
    if (nb == 1 && flag_j == 's')
        my_putstr(va_arg(args, char *));
    if (nb == 1 && (flag_j == 'c' || flag_j == 'C'))
        my_putchar(va_arg(args, int));
    if (nb == 3) {
        for (int mult = va_arg(args, int); mult != 0; mult--)
            my_putchar(' ');
        if (flag_j == 's')
            my_putstr(va_arg(args, char *));
        if (flag_j == 'c' || flag_j == 'C')
            my_putchar(va_arg(args, int));
    }
    if (nb == 4) {
        for (int mult = va_arg(args, int); mult != 0; mult--)
            my_putchar(f_i);
        if (flag_j == 's')
            my_putstr(va_arg(args, char *));
        if (flag_j == 'c' || flag_j == 'C')
            my_putchar(va_arg(args, int));
    }
}

void disp_arg03(int nb, va_list args, char f_i, char flag_j)
{
    if (nb == 1 && flag_j == 'o')
        my_octal(va_arg(args, int));
    if (nb == 1 && flag_j == 'b')
        my_binary(va_arg(args, int));
    if (nb == 3) {
        for (int mult = va_arg(args, int); mult != 0; mult--)
            my_putchar(' ');
        if (flag_j == 'o')
            my_octal(va_arg(args, int));
        if (flag_j == 'b')
            my_binary(va_arg(args, int));
    }
    if (nb == 4) {
        for (int mult = va_arg(args, int); mult != 0; mult--)
            my_putchar(f_i);
        if (flag_j == 'o')
            my_octal(va_arg(args, int));
        if (flag_j == 'b')
            my_binary(va_arg(args, int));
    }
}

void disp_arg04(int nb, va_list args, char f_i, char flag_j)
{
    if (nb == 1 && flag_j == 'x')
        my_hexa(va_arg(args, int), 0);
    if (nb == 1 && flag_j == 'X')
        my_hexa(va_arg(args, int), 1);
    if (nb == 3) {
        for (int mult = va_arg(args, int); mult != 0; mult--)
            my_putchar(' ');
        if (flag_j == 'x')
            my_hexa(va_arg(args, int), 0);
        if (flag_j == 'X')
            my_hexa(va_arg(args, int), 1);
    }
    if (nb == 4) {
        for (int mult = va_arg(args, int); mult != 0; mult--)
            my_putchar(f_i);
        if (flag_j == 'x')
            my_hexa(va_arg(args, int), 0);
        if (flag_j == 'X')
            my_hexa(va_arg(args, int), 1);
    }
}

void disp_arg05(int nb, va_list args, char f_i, char flag_j)
{
    if (nb == 1 && flag_j == 'p')
        my_adress(va_arg(args, void *));
    if (nb == 1 && flag_j == 'S')
        my_putstr(va_arg(args, char *));
    if (nb == 3) {
        for (int mult = va_arg(args, int); mult != 0; mult--)
            my_putchar(' ');
        if (flag_j == 'p')
            my_adress(va_arg(args, void *));
        if (flag_j == 'S')
            my_putstr(va_arg(args, char *));
    }
    if (nb == 4) {
        for (int mult = va_arg(args, int); mult != 0; mult--)
            my_putchar(f_i);
        if (flag_j == 'p')
            my_adress(va_arg(args, void *));
        if (flag_j == 'S')
            my_putstr(va_arg(args, char *));
    }
}