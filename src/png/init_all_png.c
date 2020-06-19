/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** init_all_png
*/

#include "my_png.h"

static int count_png_file(void)
{
    int res = 0;
    int temp = 1;
    FILE *png_file = NULL;
    char *buf = NULL;
    size_t size = 0;

    png_file = fopen(FILENAME_PNG, "r");
    if (png_file == NULL)
        return -1;
    while (temp != -1) {
        temp = getline(&buf, &size, png_file);
        if (temp != -1)
            res++;
    }
    fclose(png_file);
    free(buf);
    return res;
}

npc **init_all_png(void)
{
    FILE *png_file = NULL;
    npc **all_npc = NULL;
    int nb_png = 0;
    char *buf = NULL;
    size_t size = 0;

    nb_png = count_png_file() + 1;
    all_npc = malloc(sizeof(npc *) * nb_png);
    if (all_npc == NULL)
        return NULL;
    png_file = fopen(FILENAME_PNG, "r");
    if (png_file == NULL)
        return NULL;
    for (int i = 0; i < nb_png - 1; i++) {
        getline(&buf, &size, png_file);
        all_npc[i] = init_one_png(buf);
        all_npc[i + 1] = 0;
    }
    return all_npc;
}