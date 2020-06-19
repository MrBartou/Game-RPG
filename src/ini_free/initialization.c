/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** initialize the game
*/

#include "my_rpg.h"
#include "my_png.h"
#include "fight.h"
#include "my_item.h"

static int init_npc_enemy_item(t_game *game)
{
    game->list_npc = init_all_png();
    if (game->list_npc == NULL)
        return (84);
    game->list_enemy = init_all_enemy();
    if (game->list_enemy == NULL)
        return (84);
    game->list_item = init_all_item();
    if (game->list_item == NULL)
        return (84);
    game->fight = create_fight();
    if (game->fight == NULL)
        return (84);
    return (0);
}

int initialization(t_game *game)
{
    if (ini_menu(game) == 84)
        return (84);
    if (ini_sound(game) == 84) {
        free(game->menu);
        return (84);
    }
    if (init_npc_enemy_item(game) == 84)
        return 84;
    if (ini_player(game) == 84) {
        free(game->menu);
        free(game->sound);
        return (84);
    }
    if (ini_sprt(game) == 84) {
        free(game->menu);
        free(game->sound);
        free(game->player);
        return (84);
    }
    return (0);
}