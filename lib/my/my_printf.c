/*
** EPITECH PROJECT, 2019
** my_printf.c
** File description:
** my_printf
*/

#include "my.h"

void var_arg(char flag_j, int nb, va_list args, char f_i)
{
    if (flag_j == 'd' || flag_j == 'i' || flag_j == 'u')
        disp_arg01(nb, args, f_i, flag_j);
    if (flag_j == 's' || flag_j == 'c' || flag_j == 'C')
        disp_arg02(nb, args, f_i, flag_j);
    if (flag_j == 'o' || flag_j == 'b')
        disp_arg03(nb, args, f_i, flag_j);
    if (flag_j == 'x' || flag_j == 'X')
        disp_arg04(nb, args, f_i, flag_j);
    if (flag_j == 'p' || flag_j == 'S')
        disp_arg05(nb, args, f_i, flag_j);
}

int int_arg(const char *f, int i, char flag_j, va_list args)
{
    if (f[i] == '%') {
        if (f[i + 1] == flag_j && f[i + 2] != '*') {
            var_arg(flag_j, 1, args, f[i + 1]);
            return (1);
        }
        if (f[i + 1] == ' ' && f[i + 2] == flag_j) {
            my_putchar(' ');
            var_arg(flag_j, 1, args, f[i + 1]);
            return (2);
        }
        if (f[i + 1] == '*' && f[i + 2] == flag_j) {
            var_arg(flag_j, 3, args, f[i + 1]);
            return (2);
        }
        if (f[i + 2] == '*' && f[i + 3] == flag_j) {
            var_arg(flag_j, 4, args, f[i + 1]);
            return (3);
        }
    }
    return (0);
}

int my_printf(const char *f, ...)
{
    va_list args;
    const char *flag = "diuscCobxXpS";
    int count = 0;

    va_start(args, f);
    for (int i = 0; f[i] != '\0'; i++) {
        for (; f[i] == '%' && f[i + 1] == '%'; i += 2)
            my_putchar('%');
        for (int j = 0; flag[j] != '\0' && count == 0 && f[i + 1] != '%'; j++)
            count += int_arg(f, i, flag[j], args);
        if (count == 0)
            my_putchar(f[i]);
        i += count;
        count = 0;
    }
    va_end(args);
    return (0);
}