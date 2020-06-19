/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** init_fight
*/

#include "fight.h"
#include "my_png.h"

static void add_png_to_fight(t_game *game, t_fight *fight, npc *png)
{
    fight->first_png = find_png_in_list(game, png->name_enemy[0]);
    fight->coord_first.x = game->list_npc[fight->first_png]->x;
    fight->coord_first.y = game->list_npc[fight->first_png]->y;
    game->list_npc[fight->first_png]->x = 400;
    game->list_npc[fight->first_png]->y = 200;
    if (fight->nb_enemy >= 2) {
        fight->second_png = find_png_in_list(game, png->name_enemy[1]);
        fight->coord_second.x = game->list_npc[fight->second_png]->x;
        fight->coord_second.y = game->list_npc[fight->second_png]->y;
        game->list_npc[fight->second_png]->x = 400;
        game->list_npc[fight->second_png]->y = 350;
    }
    if (fight->nb_enemy >= 3) {
        fight->third_png = find_png_in_list(game, png->name_enemy[2]);
        fight->coord_third.x = game->list_npc[fight->third_png]->x;
        fight->coord_third.y = game->list_npc[fight->third_png]->y;
        game->list_npc[fight->third_png]->x = 400;
        game->list_npc[fight->third_png]->y = 500;
    }
}

static int add_enemy_to_fight(t_game *game, t_fight *fight, npc *png)
{
    enemy *temp = NULL;

    if (fight->nb_enemy >= 1) {
        temp = find_enemy_in_list(game->list_enemy, png->name_enemy[0]);
        copy_enemy(fight->first, temp);
    }
    if (fight->nb_enemy >= 2) {
        temp = find_enemy_in_list(game->list_enemy, png->name_enemy[1]);
        copy_enemy(fight->second, temp);
    }
    if (fight->nb_enemy >= 3) {
        temp = find_enemy_in_list(game->list_enemy, png->name_enemy[2]);
        copy_enemy(fight->third, temp);
    }
    return 0;
}

static int check_fight(t_fight *fight)
{
    if (fight->nb_enemy <= 0 || fight->nb_enemy > 3)
        return 1;
    if (fight->first == 0)
        return 2;
    if (fight->second == 0 && fight->nb_enemy >= 2)
        return 3;
    if (fight->third == 0 && fight->nb_enemy == 3)
        return 4;
    if (fight->player == 0)
        return 5;
    return 0;
}

int init_fight(t_fight *fight, t_game *game, npc *png)
{
    fight->end = 0;
    fight->nb_enemy = png->fight;
    fight->turn = 1;
    copy_player(fight->player, game->player);
    game->player->x = 1250;
    game->player->y = 450;
    add_enemy_to_fight(game, fight, png);
    add_png_to_fight(game, fight, png);
    disp_fight_menu(game);
    return check_fight(fight);
}