/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** get_int_file
*/

#include "usefull_function.h"

int get_int_file(char *buf, int *i)
{
    int temp = 0;
    int j = 0;

    temp = my_getnbr(buf);
    for (; buf[j] != '\0' && buf[j] != ';' && buf[j] != '\n'; j++);
    *i += j + 1;
    return temp;
}