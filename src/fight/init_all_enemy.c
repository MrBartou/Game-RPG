/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** init_all_enemy
*/

#include "fight.h"

static int count_e_file(void)
{
    int res = 0;
    int temp = 1;
    FILE *e_file = NULL;
    char *buf = NULL;
    size_t size = 0;

    e_file = fopen(FILENAME_ENEMY, "r");
    if (e_file == NULL)
        return -1;
    while (temp != -1) {
        temp = getline(&buf, &size, e_file);
        if (temp != -1)
            res++;
    }
    fclose(e_file);
    free(buf);
    return res;
}

enemy **init_all_enemy(void)
{
    FILE *e_file = NULL;
    enemy **all_enemy = NULL;
    int nb_e = 0;
    char *buf = NULL;
    size_t size = 0;

    nb_e = count_e_file() + 1;
    all_enemy = malloc(sizeof(enemy *) * nb_e);
    if (all_enemy == NULL)
        return NULL;
    e_file = fopen(FILENAME_ENEMY, "r");
    if (e_file == NULL)
        return NULL;
    for (int i = 0; i < nb_e - 1; i++) {
        getline(&buf, &size, e_file);
        all_enemy[i] = init_one_enemy(buf);
        all_enemy[i + 1] = 0;
    }
    return all_enemy;
}