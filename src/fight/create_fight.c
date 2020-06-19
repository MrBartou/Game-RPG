/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** create_fight
*/

#include "fight.h"

static void *error_create_fight(t_fight *fight, int error)
{
    if (error > 1)
        free(fight->first);
    if (error > 2)
        free(fight->second);
    if (error > 3)
        free(fight->third);
    if (error > 5)
        free(fight->player->gun_item);
    if (error > 6)
        free(fight->player->knife_item);
    if (error > 4)
        free(fight->player);
    free(fight);
    return NULL;
}

t_fight *create_player_fight(t_fight *fight)
{
    fight->player = malloc(sizeof(player));
    if (fight->player == NULL)
        return (error_create_fight(fight, 4));
    fight->player->gun_item = malloc(sizeof(item));
    if (fight->player->gun_item == NULL)
        return (error_create_fight(fight, 5));
    fight->player->knife_item = malloc(sizeof(item));
    if (fight->player->knife_item == NULL)
        return (error_create_fight(fight, 6));
    fight->player->fist = malloc(sizeof(item));
    if (fight->player->fist == NULL)
        return (error_create_fight(fight, 7));
    return fight;
}

t_fight *create_fight(void)
{
    t_fight *fight = NULL;

    fight = malloc(sizeof(t_fight));
    if (fight == NULL) return NULL;
    fight->first = malloc(sizeof(enemy));
    if (fight->first == NULL)
        return (error_create_fight(fight, 1));
    fight->second = malloc(sizeof(enemy));
    if (fight->second == NULL)
        return (error_create_fight(fight, 2));
    fight->third = malloc(sizeof(enemy));
    if (fight->third == NULL)
        return (error_create_fight(fight, 3));
    fight = create_player_fight(fight);
    return fight;
}