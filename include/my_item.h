/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** item
*/

#ifndef MY_ITEM_H_
#define MY_ITEM_H_

#include "my_rpg.h"

#define FILE_ITEM "resrc/item/item.txt"

item **init_all_item();
item *init_one_item(char *buf);
item *find_item(t_game *game, char *name);

#endif /* !MY_ITEM_H_ */
