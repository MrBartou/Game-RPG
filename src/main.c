/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** main.c for my_rpg
*/

#include "my_rpg.h"

int main(int ac, char **av)
{
    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h') {
        helper();
        return (0);
    }
    return (launch());
}