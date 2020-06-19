/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** anim_attack
*/

#include "fight.h"

int anim_hit_attack(t_game *game)
{
    static int anim = 0;
    sfSprite *hit = sfSprite_create();
    sfTexture *texture_hit = sfTexture_createFromFile(
    "resrc/fight/punch.png", NULL);
    static sfVector2f pos_hit;

    pos_hit = set_pos_hit(pos_hit, anim);
    anim = 1;
    sfSprite_setPosition(hit, pos_hit);
    sfSprite_setTexture(hit, texture_hit, sfTrue);
    if (pos_hit.x > -1920) {
        pos_hit.x = pos_hit.x - 50;
    } else {
        anim = 0;
        return (0);
    }
    sfRenderWindow_drawSprite(game->win, hit, NULL);
    return (1);
}

int anim_shoot_attack(t_game *game)
{
    static int anim = 0;
    sfSprite *shoot = sfSprite_create();
    sfTexture *texture_shoot = sfTexture_createFromFile(
    "resrc/fight/shoot.png", NULL);
    static sfVector2f pos_shoot;

    pos_shoot = set_pos_shoot(pos_shoot, anim);
    anim = 1;
    sfSprite_setPosition(shoot, pos_shoot);
    sfSprite_setTexture(shoot, texture_shoot, sfTrue);
    if (pos_shoot.x > -1920) {
        pos_shoot.x = pos_shoot.x - 50;
    } else {
        anim = 0;
        return (0);
    }
    sfRenderWindow_drawSprite(game->win, shoot, NULL);
    return (1);
}

int anim_knife_attack(t_game *game)
{
    static int anim = 0;
    sfSprite *knife = sfSprite_create();
    sfTexture *texture_knife = sfTexture_createFromFile(
    "resrc/fight/knife.png", NULL);
    static sfVector2f pos_knife;

    pos_knife = set_pos_knife(pos_knife, anim);
    anim = 1;
    sfSprite_setPosition(knife, pos_knife);
    sfSprite_setTexture(knife, texture_knife, sfTrue);
    if (pos_knife.x > -1920) {
        pos_knife.x = pos_knife.x - 50;
    } else {
        anim = 0;
        return (0);
    }
    sfRenderWindow_drawSprite(game->win, knife, NULL);
    return (1);
}