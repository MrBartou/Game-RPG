/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** get_char32_file
*/

#include "usefull_function.h"

char *get_char32_file(char *buf, int *i)
{
    char *temp = NULL;
    int j = 0;

    temp = malloc(sizeof(char) * 32);
    if (temp == NULL)
        return NULL;
    for (; buf[j] != '\0' && buf[j] != ';' && buf[j] != '\n'; j++);
    my_strncpy(temp, buf, j);
    *i += j + 1;
    return temp;
}