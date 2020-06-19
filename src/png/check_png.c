/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** check_png
*/

#include "my_png.h"

static int err_png(npc *png, int err)
{
    if (!err)
        my_printf("err name png\n");
    if (err == 1)
        my_printf("err on %s: map, x or y invalid\n", png->name);
    if (err == 2)
        my_printf("err on %s: dir_see or quest invalid\n", png->name);
    if (err == 3)
        my_printf("err on %s: fight invalid\n", png->name);
    if (err == 4)
        my_printf("err on %s: name enemy invalid\n", png->name);
    if (err == 5)
        my_printf("err on %s: texture invalid\n", png->name);
    if (err == 6)
        my_printf("err on %s: line png not valid\n", png->name);
    return 0;
}

int check_png(npc *png, char *buf, int i)
{
    int j = 0;

    if (png->name == NULL || png->name[0] == '\0') return err_png(png, 0);
    if (png->map < 0 || png->x < 0 || png->y < 0) return err_png(png, 1);
    if (png->dir_see < 0 || png->quest < 0) return err_png(png, 2);
    if (png->fight < 0 || png->fight > 3) return err_png(png, 3);
    for (; j < png->fight; j++)
        if (png->name_enemy[j] == NULL || png->name_enemy[j][0] == '\0')
            return err_png(png, 4);
    if (png->body < 0 || png->head < 0 || png->torso < 0)
        return err_png(png, 5);
    if (png->pants < 0 || png->armor < 0 || png->shoes < 0)
        return err_png(png, 5);
    return 1;
}