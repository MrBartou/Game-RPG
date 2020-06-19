/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** set_mouse
*/

#include "fight.h"

void set_mouse_action(t_game *game, short act)
{
    sfVector2i pos_gun = {800, 810};
    sfVector2i pos_knife = {800, 910};
    sfVector2i pos_fist = {800, 1010};

    if (act == 1)
        sfMouse_setPositionRenderWindow(pos_gun, game->win);
    if (act == 2)
        sfMouse_setPositionRenderWindow(pos_knife, game->win);
    if (act == 3)
        sfMouse_setPositionRenderWindow(pos_fist, game->win);
}

void set_mouse_enemy(t_game *game, short act)
{
    sfVector2i pos_gun = {100, 810};
    sfVector2i pos_knife = {100, 910};
    sfVector2i pos_fist = {100, 1010};

    if (act == 1)
        sfMouse_setPositionRenderWindow(pos_gun, game->win);
    if (act == 2)
        sfMouse_setPositionRenderWindow(pos_knife, game->win);
    if (act == 3)
        sfMouse_setPositionRenderWindow(pos_fist, game->win);
}