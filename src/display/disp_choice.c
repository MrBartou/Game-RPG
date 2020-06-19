/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** displays a menu
*/

#include "my_rpg.h"

void disp_choice(t_game *game, char *one, char *two)
{
    game->sprt->vec.y = 915;
    game->sprt->vec.x = 600;
    sfText_setPosition(game->sprt->text, game->sprt->vec);
    sfText_setString(game->sprt->text, one);
    sfText_setCharacterSize(game->sprt->text, 35);
    sfRenderWindow_drawText(game->win, game->sprt->text, NULL);
    game->sprt->vec.y = 965;
    sfText_setPosition(game->sprt->text, game->sprt->vec);
    sfText_setString(game->sprt->text, two);
    sfRenderWindow_drawText(game->win, game->sprt->text, NULL);
}