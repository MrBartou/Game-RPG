/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** usefull_function
*/

#ifndef USEFULL_FUNCTION_H_
#define USEFULL_FUNCTION_H_

#include "my_rpg.h"

char *get_char32_file(char *buf, int *i);
int get_int_file(char *buf, int *i);
int copy_player(player *dest, player *src);
int copy_item(item *dest, item *src);

#endif /* !USEFULL_FUNCTION_H_ */