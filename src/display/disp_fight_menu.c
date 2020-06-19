/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** displays a menu
*/

#include "my_rpg.h"

static void disp_nb_two(t_game *game, sprt_menu *menu)
{
    game->sprt->vec.x = 1090;
    game->sprt->vec.y = 758;
    disp_number(game, menu, game->fight->player->gun_item->ammo,
    game->sprt->vec);
    game->sprt->vec.y = 863;
    disp_number(game, menu, game->fight->player->knife_item->ammo,
    game->sprt->vec);
    game->sprt->vec.y = 968;
    disp_number(game, menu, 99, game->sprt->vec);
    game->sprt->vec.x = 1730;
    game->sprt->vec.y = 758;
    disp_number(game, menu, game->fight->player->life, game->sprt->vec);
    game->sprt->vec.y = 863;
    disp_number(game, menu, game->fight->player->gun_item->damage,
    game->sprt->vec);
    game->sprt->vec.y = 968;
    disp_number(game, menu, game->fight->player->knife_item->damage,
    game->sprt->vec);
}

static void disp_nb(t_game *game, sprt_menu *menu)
{
    int nb_enemies = game->fight->nb_enemy;

    game->sprt->vec.x = 450;
    game->sprt->vec.y = 758;
    if (game->fight->first->pv <= 0)
            disp_number(game, menu, 0, game->sprt->vec);
        disp_number(game, menu, game->fight->first->pv, game->sprt->vec);
    if (nb_enemies >= 2) {
        game->sprt->vec.y = 863;
        if (game->fight->second->pv <= 0)
            disp_number(game, menu, 0, game->sprt->vec);
        disp_number(game, menu, game->fight->second->pv, game->sprt->vec);
    }
    if (nb_enemies == 3) {
        game->sprt->vec.y = 968;
        if (game->fight->third->pv <= 0)
            disp_number(game, menu, 0, game->sprt->vec);
        disp_number(game, menu, game->fight->third->pv, game->sprt->vec);
    }
    disp_nb_two(game, menu);
}

static void disp_panel(t_game *game, sprt_menu *menu)
{
    int nb_enemies = game->fight->nb_enemy;

    game->sprt->rec = ini_r(0, 0, 1920, 1080);
    sfSprite_setTextureRect(menu->s_back, game->sprt->rec);
    disp_s(game->win, menu->s_back, 0, 0);
    game->sprt->rec = ini_r(700, 0, 1920, 380);
    sfSprite_setTextureRect(menu->s_txt_fight, game->sprt->rec);
    disp_s(game->win, menu->s_txt_fight, 0, 700);
    if (nb_enemies >= 2) {
        game->sprt->rec = ini_r(770, 60, 300, 70);
        sfSprite_setTextureRect(menu->s_txt_fight, game->sprt->rec);
        disp_s(game->win, menu->s_txt_fight, 60, 875);
    }
    if (nb_enemies == 3) {
        game->sprt->rec = ini_r(770, 60, 300, 70);
        sfSprite_setTextureRect(menu->s_txt_fight, game->sprt->rec);
        disp_s(game->win, menu->s_txt_fight, 60, 980);
    }
}

void disp_fight_menu(t_game *game)
{
    static int pos = 0;

    disp_panel(game, game->sprt->sprt_menu);
    disp_nb(game, game->sprt->sprt_menu);
    disp_play_menu_player(game, 2, pos + 1);
    if (game->fight->first->pv > 0)
        disp_play_menu_npc(game, game->fight->first_png, 4, 1);
    if (game->fight->nb_enemy > 1 && game->fight->second->pv > 0)
        disp_play_menu_npc(game, game->fight->second_png, 4, 1);
    if (game->fight->nb_enemy > 2 && game->fight->third->pv > 0)
        disp_play_menu_npc(game, game->fight->third_png, 4, 1);
}