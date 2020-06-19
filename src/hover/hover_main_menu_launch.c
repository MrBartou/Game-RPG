/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** manage the hovers
*/

#include "my_rpg.h"

static void check_hover(t_game *game, sprt_menu *menu, int x, int y)
{
    if (x >= 1353 && x <= 1593 && y >= 870 && y <= 970) {
        game->sprt->rec = ini_r(757, 1353, 240, 100);
        sfSprite_setTextureRect(menu->s_txt_menu_launch, game->sprt->rec);
        disp_s(game->win, menu->s_txt_menu_launch, 1353, 870);
    }
}

void hover_main_menu_launch(t_game *game)
{
    int x = game->mouse.x;
    int y = game->mouse.y;

    if (game->save)
        check_hover(game, game->sprt->sprt_menu, x, y);
}