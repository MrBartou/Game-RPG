/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** display a menu
*/

#include "my_rpg.h"

void disp_button_one_clicked(t_game *game, sprt_menu *menu)
{
    if (game->x >= 129 && game->x <= 429 && game->y >= 350 && game->y <= 465) {
        game->sprt->rec = ini_r(350, 740, 300, 115);
        sfSprite_setTextureRect(menu->s_txt_menu_game, game->sprt->rec);
        disp_s(game->win, menu->s_txt_menu_game, 129, 350);
    }
    if (game->x >= 129 && game->x <= 429 && game->y >= 521 && game->y <= 636) {
        game->sprt->rec = ini_r(521, 740, 300, 115);
        sfSprite_setTextureRect(menu->s_txt_menu_game, game->sprt->rec);
        disp_s(game->win, menu->s_txt_menu_game, 129, 521);
    }
    if (game->x >= 129 && game->x <= 429 && game->y >= 687 && game->y <= 802) {
        game->sprt->rec = ini_r(687, 740, 300, 155);
        sfSprite_setTextureRect(menu->s_txt_menu_game, game->sprt->rec);
        disp_s(game->win, menu->s_txt_menu_game, 129, 687);
    }
    if (game->x >= 129 && game->x <= 429 && game->y >= 854 && game->y <= 969) {
        game->sprt->rec = ini_r(854, 740, 300, 115);
        sfSprite_setTextureRect(menu->s_txt_menu_game, game->sprt->rec);
        disp_s(game->win, menu->s_txt_menu_game, 129, 854);
    }
}

void disp_button_two_clicked(t_game *game, sprt_menu *menu)
{
    if (game->x >= 429 && game->x <= 729 && game->y >= 350 && game->y <= 465) {
        game->sprt->rec = ini_r(350, 1040, 300, 115);
        sfSprite_setTextureRect(menu->s_txt_menu_game, game->sprt->rec);
        disp_s(game->win, menu->s_txt_menu_game, 429, 350);
    }
    if (game->x >= 429 && game->x <= 729 && game->y >= 521 && game->y <= 636) {
        game->sprt->rec = ini_r(521, 1040, 300, 115);
        sfSprite_setTextureRect(menu->s_txt_menu_game, game->sprt->rec);
        disp_s(game->win, menu->s_txt_menu_game, 429, 521);
    }
    if (game->x >= 429 && game->x <= 729 && game->y >= 687 && game->y <= 802) {
        game->sprt->rec = ini_r(687, 1040, 300, 115);
        sfSprite_setTextureRect(menu->s_txt_menu_game, game->sprt->rec);
        disp_s(game->win, menu->s_txt_menu_game, 429, 687);
    }
    if (game->x >= 429 && game->x <= 729 && game->y >= 854 && game->y <= 969) {
        game->sprt->rec = ini_r(854, 1040, 300, 115);
        sfSprite_setTextureRect(menu->s_txt_menu_game, game->sprt->rec);
        disp_s(game->win, menu->s_txt_menu_game, 429, 854);
    }
}