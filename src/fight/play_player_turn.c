/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** play_player_turn
*/

#include "fight.h"

static short get_action(t_game *game, t_fight *fight, sfEvent evt, short act)
{
    if (evt.key.code == sfKeyZ) {
        if (act != 1)
            act--;
        set_mouse_action(game, act);
    }
    if (evt.key.code == sfKeyS) {
        if (act != 3)
            act++;
        set_mouse_action(game, act);
    }
    if (evt.key.code == sfKeySpace) {
        if (act == 1 && fight->player->gun_item->ammo)
            act = - act;
        if (act == 2 && fight->player->knife_item->ammo)
            act = - act;
    }
    return act;
}

static short get_enemy(t_game *game, t_fight *fight, sfEvent evt, short t_nmy)
{
    if (evt.key.code == sfKeyZ) {
        if (t_nmy != 1)
            t_nmy--;
        set_mouse_enemy(game, t_nmy);
    }
    if (evt.key.code == sfKeyS) {
        if (t_nmy != 3)
            t_nmy++;
        set_mouse_enemy(game, t_nmy);
    }
    if (evt.key.code == sfKeySpace) {
        if (t_nmy == 1 && fight->first->pv > 0)
            t_nmy = - t_nmy;
        if (t_nmy == 2 && fight->second->pv > 0)
            t_nmy = - t_nmy;
        if (t_nmy == 3 && fight->third->pv > 0)
            t_nmy = - t_nmy;
    }
    return t_nmy;
}

int play_player_turn(t_game *game, t_fight *fight, sfEvent evt)
{
    static short act = 1;
    static short t_nmy = 1;
    sfVector2i pos = {500, 500};

    if (evt.type != sfEvtKeyReleased)
        return 0;
    if (act > 0) {
        act = get_action(game, fight, evt, act);
        set_mouse_action(game, act);
    } else if (t_nmy > 0) {
        t_nmy = get_enemy(game, fight, evt, t_nmy);
        set_mouse_enemy(game, t_nmy);
    } else {
        display_attack_player(game, fight, act, t_nmy);
        act = - act;
        set_mouse_action(game, act);
        t_nmy = - t_nmy;
        fight->turn = (fight->turn + 1) % 2;
    }
    return 0;
}