/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** disp a number
*/

#include "my_rpg.h"

static void which_nb(t_game *game, int nb)
{
    int tab_nb[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int tab_x[10] = {1450, 1490, 1530, 1570, 1610, 1650
        , 1690, 1730, 1770, 1810};
    int end = 0;

    for (int i = 0; end == 0; i++) {
        if (nb == tab_nb[i]) {
            game->sprt->rec = ini_r(347, tab_x[i], 40, 100);
            end = 1;
        }
    }
}

static void disp_nb(t_game *game, sprt_menu *menu, int nb, sfVector2f vec)
{
    which_nb(game, nb);
    sfSprite_setTextureRect(menu->s_logo_market, game->sprt->rec);
    disp_s(game->win, menu->s_logo_market, vec.x, vec.y);
}

static void disp_sc(t_game *game, sprt_menu *menu, int nb, sfVector2f vec)
{
    int units = nb % 10;
    int dozens = nb / 10 % 10;
    int hundreds = nb / 100;

    if (hundreds == 0) {
        if (dozens == 0) {
            vec.x += 50;
            disp_nb(game, menu, units, vec);
        } else {
            vec.x += 50;
            disp_nb(game, menu, dozens, vec);
            vec.x += 30;
            disp_nb(game, menu, units, vec);
        }
    } else {
        vec.x += 50;
        disp_nb(game, menu, hundreds, vec);
        vec.x += 30;
        disp_nb(game, menu, dozens, vec);
        vec.x += 30;
        disp_nb(game, menu, units, vec);
    }
}

void disp_number(t_game *game, sprt_menu *menu, int nb, sfVector2f vec)
{
    disp_sc(game, menu, nb, vec);
}