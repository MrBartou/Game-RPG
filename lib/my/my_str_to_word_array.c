/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** store str in a array
*/

#include "my.h"

static int count_words(char *str, char sep, int nb)
{
    int counter = 0;

    for (int i = nb; str[i] != '\0'; i++) {
        if (str[i] == sep)
            counter++;
    }
    counter++;
    return (counter);
}

static void fill_tab(char *word, char *str, int begin, int end)
{
    int i = 0;

    for (; begin <= end; i++) {
        word[i] = str[begin];
        begin++;
    }
    word[i] = '\0';
}

static void save_words(char **tab, char *str, int *tab_nb, char sep)
{
    int i = tab_nb[1];
    int begin = 0;

    for (int j = 0; j < tab_nb[0]; j++) {
        for (; str[i] != '\0' && str[i] == sep; i++);
        begin = i;
        for (; str[i] != '\0' && str[i] != sep; i++);
        tab[j] = malloc(sizeof(char) * (i - begin + 1));
        fill_tab(tab[j], str, begin, i - 1);
        i++;
    }
}

char **my_str_to_word_array(char *str, char sep, int nb)
{
    int counter = 0;
    char **tab;
    int tab_nb[2] = {counter, nb};

    counter = count_words(str, sep, nb);
    tab_nb[0] = counter;
    tab = malloc(sizeof(char *) * (counter + 1));
    save_words(tab, str, tab_nb, sep);
    tab[counter] = NULL;
    return (tab);
}