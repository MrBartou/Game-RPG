/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** manage the events
*/

#include "my_rpg.h"
#include "fight.h"

void event_fight_menu(t_game *game, sfEvent event)
{
    static int enemy_turn = 0;

    if (!game->fight->turn) {
        play_enemy_turn(game->fight, enemy_turn);
        enemy_turn = (enemy_turn + 1) % game->fight->nb_enemy;
        if (enemy_turn == 0)
            game->fight->turn = 1;
    } else
        play_player_turn(game, game->fight, event);
    if (sfKeyboard_isKeyPressed(sfKeyEscape)) {
        sfRenderWindow_setMouseCursorVisible(game->win, sfTrue);
        game->menu->game_menu[0] = 2;
        game->menu->game_menu[2] = 2;
        game->player->x = game->fight->player->x;
        game->player->y = game->fight->player->y;
        play_button(game);
        play_music(game, 6);
    }
}