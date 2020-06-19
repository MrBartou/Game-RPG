/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** play_enemy_turn
*/

#include "fight.h"

static void display_gun_attack(void)
{
    return;
}

static void display_knife_attack(void)
{
    return;
}

static void display_fist_attack(void)
{
    return;
}

static int play_enemy(enemy *e, t_fight *fight)
{
    int damage = rand() % (e->max_damage - e->min_damage) + e->min_damage;
    int percent = 0;

    if (e->ammo && rand() % 100 > RNG_GUN) {
        damage += e->gun_damage;
        e->ammo--;
        display_gun_attack();
    } else if (damage - e->min_damage > (e->max_damage - e->min_damage) / 2)
        display_knife_attack();
    else
        display_fist_attack();
    fight->player->life -= damage;
    return 0;
}

int play_enemy_turn(t_fight *fight, int enemy_choice)
{
    if (enemy_choice == 0)
        play_enemy(fight->first, fight);
    else if (enemy_choice == 1)
        play_enemy(fight->second, fight);
    else
        play_enemy(fight->third, fight);
    return 0;
}