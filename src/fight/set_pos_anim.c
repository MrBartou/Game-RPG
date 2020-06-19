/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** set_pos_anim
*/

#include "fight.h"

sfVector2f set_pos_hit(sfVector2f pos_hit, int anim)
{
    if (anim != 1) {
        pos_hit.x = 1920;
        pos_hit.y = 0;
    }
    return (pos_hit);
}

sfVector2f set_pos_shoot(sfVector2f pos_shoot, int anim)
{
    if (anim != 1) {
        pos_shoot.x = 1920;
        pos_shoot.y = 0;
    }
    return (pos_shoot);
}

sfVector2f set_pos_knife(sfVector2f pos_knife, int anim)
{
    if (anim != 1) {
        pos_knife.x = 1920;
        pos_knife.y = 0;
    }
    return (pos_knife);
}