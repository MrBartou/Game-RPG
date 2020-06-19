/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** init_one_it
*/

#include "my_item.h"
#include "usefull_function.h"

item *init_one_item(char *buf)
{
    item *it = NULL;
    int i = 0;
    char *temp = NULL;

    it = malloc(sizeof(item));
    if (it == NULL) return NULL;
    temp = get_char32_file(buf, &i);
    my_strcpy(it->type, temp);
    free(temp);
    temp = get_char32_file(&buf[i], &i);
    my_strcpy(it->name, temp);
    free(temp);
    it->damage = get_int_file(&buf[i], &i);
    it->ammo = get_int_file(&buf[i], &i);
    return it;
}