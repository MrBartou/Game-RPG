/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** event_fight
*/

#include "fight.h"

static int play_menu_fight(t_game *game)
{
    game->menu->game_menu[0] = 2;
    game->menu->game_menu[2] = 0;
    play_button(game);
    play_music(game, 2);
    return 0;
}

int event_fight(t_game *game, t_fight *fight)
{
    static int enemy_turn = 0;
    sfEvent event;

    if (!fight->turn) {
        play_enemy_turn(fight, enemy_turn);
        enemy_turn = (enemy_turn + 1) % fight->nb_enemy;
        if (enemy_turn == 0)
            fight->turn = 1;
    } else
        play_player_turn(game, fight, event);
    return 0;
}