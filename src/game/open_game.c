/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** open the game
*/

#include "my_rpg.h"
#include "my_item.h"

static void ini_int_player(t_game *game)
{
    game->player->life = 200;
    game->player->money = 0;
    game->player->body = 1;
    game->player->head = 0;
    game->player->torso = 0;
    game->player->armor = 0;
    game->player->pants = 1;
    game->player->shoes = 0;
    game->player->knife = 1;
    game->player->gun = 1;
    game->player->x = 935 * 2;
    game->player->y = 2790 * 2;
    game->player->dir = 3;
    game->player->pos = 1;
    game->player->move = 0;
    game->player->gun_item = find_item(game, "pistol");
    game->player->knife_item = find_item(game, "razor");
    game->player->fist = find_item(game, "fist");
}

static void ini_int_game(t_game *game)
{
    game->menu->game_menu[0] = 0;
    game->menu->game_menu[1] = 0;
    game->menu->game_menu[2] = 0;
    game->language = 0;
    game->sound_on = 1;
    game->music_on = 1;
    game->save = 1;
    game->chapter = 1;
    game->view = sfView_create();
    game->sprt->rec_2.top = 0;
    game->sprt->rec_2.left = 0;
    game->sprt->rec_2.width = 1920;
    game->sprt->rec_2.height = 1080;
    game->view = sfView_createFromRect(game->sprt->rec_2);
    sfView_getViewport(game->view);
    game->sprt->clock = sfClock_create();
    sfClock_restart(game->sprt->clock);
}

void open_game(t_game *game)
{
    sfVideoMode video = {1920, 1080, 32};
    game->win = sfRenderWindow_create(video, "my_rpg", sfFullscreen, NULL);
    sfRenderWindow_setFramerateLimit(game->win, 30);
    ini_int_player(game);
    ini_int_game(game);
    play_music(game, 1);
}