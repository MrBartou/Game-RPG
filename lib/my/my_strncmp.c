/*
** EPITECH PROJECT, 2019
** my_strncmp.c
** File description:
** compare two str
*/

int my_strncmp(char const *s1, char const *s2, int nb)
{
    int i = 0;

    for (; i != nb; i++) {
        if ((s1[i] != s2[i]) || (s1[i] == '\0' | s2[i] == '\0'))
            return (1);
    }
    return (0);
}