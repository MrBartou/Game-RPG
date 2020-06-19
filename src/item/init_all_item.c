/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** init_all_item
*/

#include "my_item.h"

static int count_item_file(void)
{
    int res = 0;
    int temp = 1;
    FILE *item_file = NULL;
    char *buf = NULL;
    size_t size = 0;

    item_file = fopen(FILE_ITEM, "r");
    if (item_file == NULL)
        return -1;
    while (temp != -1) {
        temp = getline(&buf, &size, item_file);
        if (temp != -1)
            res++;
    }
    fclose(item_file);
    free(buf);
    return res;
}

item **init_all_item(void)
{
    FILE *item_file = NULL;
    item **all_item = NULL;
    int nb_item = 0;
    char *buf = NULL;
    size_t size = 0;

    nb_item = count_item_file() + 1;
    all_item = malloc(sizeof(item *) * nb_item);
    if (all_item == NULL)
        return NULL;
    item_file = fopen(FILE_ITEM, "r");
    if (item_file == NULL)
        return NULL;
    for (int i = 0; i < nb_item - 1; i++) {
        getline(&buf, &size, item_file);
        all_item[i] = init_one_item(buf);
        all_item[i + 1] = 0;
    }
    return all_item;
}