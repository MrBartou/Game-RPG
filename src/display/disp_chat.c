/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** displays a menu
*/

#include "my_rpg.h"

static void disp_back(t_game *game, sprt_menu *menu, int nb)
{
    if (nb == -1) {
        game->sprt->rec = ini_r(540, 0, 1920, 540);
        sfSprite_setTextureRect(menu->s_chat_logo, game->sprt->rec);
        disp_s(game->win, menu->s_chat_logo, 0, 540);
    } else {
        game->sprt->rec = ini_r(0, 0, 1920, 540);
        sfSprite_setTextureRect(menu->s_chat_logo, game->sprt->rec);
        disp_s(game->win, menu->s_chat_logo, 0, 540);
    }
}

static void disp_name(t_game *game, char *str, int nb)
{
    game->sprt->vec.y = 702;
    if (nb == -1)
        game->sprt->vec.x = 500;
    else
        game->sprt->vec.x = 1000;
    sfText_setPosition(game->sprt->text, game->sprt->vec);
    sfText_setString(game->sprt->text, str);
    sfText_setCharacterSize(game->sprt->text, 25);
    sfRenderWindow_drawText(game->win, game->sprt->text, NULL);
}

static void disp_txt(t_game *game, char *str, int nb)
{
    game->sprt->vec.y = 800;
    game->sprt->vec.x = 500;
    sfText_setPosition(game->sprt->text, game->sprt->vec);
    sfText_setString(game->sprt->text, str);
    sfText_setCharacterSize(game->sprt->text, 35);
    sfRenderWindow_drawText(game->win, game->sprt->text, NULL);
}

void disp_chat(t_game *game, int nb, int npc, int chat)
{
    t_dialogue *dialogue;

    disp_back(game, game->sprt->sprt_menu, nb);
    disp_player_chat(game, game->sprt->sprt_menu, -1);
    disp_player_chat(game, game->sprt->sprt_menu, npc);
    parsing_chat(dialogue);
    disp_txt(game, dialogue->dialogue[0], nb);
}