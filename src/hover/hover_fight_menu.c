/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** manage the hovers
*/

#include "my_rpg.h"

static void check_hover_enemies(t_game *game, sprt_menu *menu, int x, int y)
{
    int nb_enemies = 2;

    if (x >= 60 && x <= 360 && y >= 770 && y <= 840) {
        game->sprt->rec = ini_r(230, 60, 300, 70);
        sfSprite_setTextureRect(menu->s_txt_fight, game->sprt->rec);
        disp_s(game->win, menu->s_txt_fight, 60, 770);
    }
    if (x >= 60 && x <= 360 && y >= 875 && y <= 945 && nb_enemies >= 2) {
        game->sprt->rec = ini_r(230, 60, 300, 70);
        sfSprite_setTextureRect(menu->s_txt_fight, game->sprt->rec);
        disp_s(game->win, menu->s_txt_fight, 60, 875);
    }
    if (x >= 60 && x <= 360 && y >= 980 && y <= 1050 && nb_enemies == 3) {
        game->sprt->rec = ini_r(230, 60, 300, 70);
        sfSprite_setTextureRect(menu->s_txt_fight, game->sprt->rec);
        disp_s(game->win, menu->s_txt_fight, 60, 980);
    }
}

static void check_hover_attack(t_game *game, sprt_menu *menu, int x, int y)
{

    if (x >= 700 && x <= 1000 && y >= 770 && y <= 840) {
        game->sprt->rec = ini_r(230, 700, 300, 70);
        sfSprite_setTextureRect(menu->s_txt_fight, game->sprt->rec);
        disp_s(game->win, menu->s_txt_fight, 700, 770);
    }
    if (x >= 700 && x <= 1000 && y >= 875 && y <= 945) {
        game->sprt->rec = ini_r(335, 700, 300, 70);
        sfSprite_setTextureRect(menu->s_txt_fight, game->sprt->rec);
        disp_s(game->win, menu->s_txt_fight, 700, 875);
    }
    if (x >= 700 && x <= 1000 && y >= 980 && y <= 1050) {
        game->sprt->rec = ini_r(440, 700, 300, 70);
        sfSprite_setTextureRect(menu->s_txt_fight, game->sprt->rec);
        disp_s(game->win, menu->s_txt_fight, 700, 980);
    }
}

static void check_hover_player(t_game *game, sprt_menu *menu, int x, int y)
{

    if (x >= 1340 && x <= 1640 && y >= 770 && y <= 840) {
        game->sprt->rec = ini_r(230, 1340, 300, 70);
        sfSprite_setTextureRect(menu->s_txt_fight, game->sprt->rec);
        disp_s(game->win, menu->s_txt_fight, 1340, 770);
    }
    if (x >= 1340 && x <= 1640 && y >= 875 && y <= 945) {
        game->sprt->rec = ini_r(335, 1340, 300, 70);
        sfSprite_setTextureRect(menu->s_txt_fight, game->sprt->rec);
        disp_s(game->win, menu->s_txt_fight, 1340, 875);
    }
    if (x >= 1340 && x <= 1640 && y >= 980 && y <= 1050) {
        game->sprt->rec = ini_r(440, 1340, 300, 70);
        sfSprite_setTextureRect(menu->s_txt_fight, game->sprt->rec);
        disp_s(game->win, menu->s_txt_fight, 1340, 980);
    }
}

void hover_fight_menu(t_game *game)
{
    int x = game->mouse.x;
    int y = game->mouse.y;

    check_hover_enemies(game, game->sprt->sprt_menu, x, y);
    check_hover_attack(game, game->sprt->sprt_menu, x, y);
    check_hover_player(game, game->sprt->sprt_menu, x, y);
}