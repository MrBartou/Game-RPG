/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** init_one_png
*/

#include "my_png.h"

static int add_texture_png(npc *png, char *buf, int *i)
{
    png->body = get_int_file(&buf[*i], i);
    png->head = get_int_file(&buf[*i], i);
    png->torso = get_int_file(&buf[*i], i);
    png->armor = get_int_file(&buf[*i], i);
    png->pants = get_int_file(&buf[*i], i);
    png->shoes = get_int_file(&buf[*i], i);
    png++;
    png--;
    return 0;
}

static int add_fight_png(npc *png, char *buf, int *i)
{
    png->fight = get_int_file(&buf[*i], i);
    if (png->fight) {
        png->name_enemy = malloc(sizeof(char *) * png->fight);
        if (png->name_enemy == NULL)
            return -1;
        for (int j = 0; j < png->fight; j++) {
            png->name_enemy[j] = get_char32_file(&buf[*i], i);
        }
    } else
        png->name_enemy = NULL;
    return 0;
}

npc *init_one_png(char *buf)
{
    npc *png = NULL;
    int i = 0;
    char *temp = NULL;

    png = malloc(sizeof(npc));
    if (png == NULL) return NULL;
    temp = get_char32_file(buf, &i);
    my_strcpy(png->name, temp);
    free(temp);
    png->map = get_int_file(&buf[i], &i);
    png->x = get_int_file(&buf[i], &i);
    png->y = get_int_file(&buf[i], &i);
    png->dir_see = get_int_file(&buf[i], &i);
    png->quest = get_int_file(&buf[i], &i);
    if (add_fight_png(png, buf, &i) == -1) return NULL;
    add_texture_png(png, buf, &i);
    if (!check_png(png, buf, i)) return NULL;
    return png;
}
