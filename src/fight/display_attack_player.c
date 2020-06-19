/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** display_attack_player
*/

#include "fight.h"

void display_attack_player(t_game *game, t_fight *fight, short act, short nmy)
{
    int damage = 0;

    if (act == -1) {
        damage = fight->player->gun_item->damage;
        fight->player->gun_item->ammo--;
        anim_shoot_attack(game);
    } else if (act == -2) {
        damage = fight->player->knife_item->damage;
        fight->player->knife_item->ammo--;
        anim_knife_attack(game);
    } else {
        damage = fight->player->fist->damage;
        anim_hit_attack(game);
    }
    if (nmy == -1)
        fight->first->pv -= damage;
    else if (nmy == -2)
        fight->second->pv -= damage;
    else
        fight->third->pv -= damage;
}