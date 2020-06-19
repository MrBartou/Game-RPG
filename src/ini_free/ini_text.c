/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** initialize the sprites
*/

#include "my_rpg.h"

int ini_text(t_game *game)
{
    game->sprt->text = sfText_create();
    game->sprt->font = sfFont_createFromFile("resrc/text/arial.ttf");
    sfText_setFont(game->sprt->text, game->sprt->font);
    return (0);
}