/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** png
*/


#ifndef MY_PNG_H_
#define MY_PNG_H_

#include "my_rpg.h"
#include "usefull_function.h"
#define FILENAME_PNG "./resrc/png/png.txt"

npc *init_one_png(char *buf);
npc **init_all_png(void);
int check_png(npc *png, char *buf, int i);
int find_png_in_list(t_game *game, char *name);

#endif /* !MY_PNG_H_ */
