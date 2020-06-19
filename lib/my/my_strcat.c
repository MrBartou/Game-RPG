/*
** EPITECH PROJECT, 2019
** my_strcat.c
** File description:
** concatenates two str
*/

char *my_strcat(char *dest, char const *src)
{
    int i = 0;
    int end_dest = 0;

    for (; dest[end_dest] != '\0'; end_dest++);
    for (; src[i] != '\0'; i++)
        dest[end_dest + i] = src[i];
    dest[end_dest + i] = '\0';
    return (dest);
}