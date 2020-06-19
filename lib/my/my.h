/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** contains all the fct exposed in libmy.a
*/

#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#ifndef MY_H_
#define MY_H_

void my_putchar(char c);

int my_put_nbr(int nb);

void my_swap(int *a, int *b);

void my_putstr(char const *str);

int my_strlen(char const *str);

int my_getnbr(char const *str);

char *my_strcpy(char *dest, char const *src);

int my_strcmp(char const *s1, char const *s2);

int my_strncmp(char const *s1, char const *s2, int nb);

char *my_strcat(char *dest, char const *src);

char **my_str_to_word_array(char *str, char sep, int nb);

char *my_strncpy(char *dest, char const *src, int n);

int my_printf(char const *format, ...);

void my_put_unint(unsigned int nb);

int my_hexa(int nb, int is_maj);

int my_octal(int nb);

int my_binary(int nb);

void disp_arg01(int nb, va_list args, char f_i, char flag_j);

void disp_arg02(int nb, va_list args, char f_i, char flag_j);

void disp_arg03(int nb, va_list args, char f_i, char flag_j);

void disp_arg04(int nb, va_list args, char f_i, char flag_j);

void disp_arg05(int nb, va_list args, char f_i, char flag_j);

int my_adress(void * nb);

#endif /* MY_H_ */
