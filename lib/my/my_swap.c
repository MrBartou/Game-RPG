/*
** EPITECH PROJECT, 2019
** my_swap.c
** File description:
** fct that swaps the content of 2 int
*/

void my_swap(int *a, int *b)
{
    int c;

    c = *a;
    *a = *b;
    *b = c;
}
