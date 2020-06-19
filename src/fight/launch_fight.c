/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** launch_fight
*/

#include "fight.h"

static void end_fight(t_game *gm)
{
    gm->menu->game_menu[0] = 2;
    gm->menu->game_menu[1] = 2;
    gm->player->x = gm->fight->player->x;
    gm->player->y = gm->fight->player->y;
    gm->list_npc[gm->fight->first_png]->x = gm->fight->coord_first.x;
    gm->list_npc[gm->fight->first_png]->y = gm->fight->coord_first.y;
    if (gm->fight->nb_enemy > 1) {
        gm->list_npc[gm->fight->second_png]->x = gm->fight->coord_second.x;
        gm->list_npc[gm->fight->second_png]->y = gm->fight->coord_second.y;
    }
    if (gm->fight->nb_enemy > 2) {
        gm->list_npc[gm->fight->third_png]->x = gm->fight->coord_third.x;
        gm->list_npc[gm->fight->third_png]->y = gm->fight->coord_third.y;
    }
}

int launch_fight(t_game *gm, npc *png)
{
    int i = 0;

    sfRenderWindow_setMouseCursorVisible(gm->win, sfTrue);
    event_manager(gm);
    hover_manager(gm);
    gm->fight->end = is_win(gm->fight);
    if (gm->fight->end) {
        sfRenderWindow_setMouseCursorVisible(gm->win, sfTrue);
        end_fight(gm);
        play_music(gm, 6);
    }
    disp_fight_menu(gm);
    return 0;
}