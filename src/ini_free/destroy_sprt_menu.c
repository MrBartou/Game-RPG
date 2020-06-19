/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** destroy all the sprites of the game
*/

#include "my_rpg.h"

static void destroy_sprt_menu_sprite(sprt_menu *menu)
{
    sfSprite_destroy(menu->s_back);
    sfSprite_destroy(menu->s_chat_item);
    sfSprite_destroy(menu->s_chat_logo);
    sfSprite_destroy(menu->s_items);
    sfSprite_destroy(menu->s_logo_clothes);
    sfSprite_destroy(menu->s_logo_gunsmith);
    sfSprite_destroy(menu->s_logo_hairdresser);
    sfSprite_destroy(menu->s_logo_market);
    sfSprite_destroy(menu->s_logo_menu);
    sfSprite_destroy(menu->s_txt_menu_base);
    sfSprite_destroy(menu->s_txt_menu_game);
    sfSprite_destroy(menu->s_txt_menu_launch);
    sfSprite_destroy(menu->s_txt_menu_option);
    sfSprite_destroy(menu->s_txt_pause);
    sfSprite_destroy(menu->s_txt_death);
    sfSprite_destroy(menu->s_txt_inventory);
    sfSprite_destroy(menu->s_txt_fight);
}

static void destroy_sprt_menu_texture(sprt_menu *menu)
{
    sfTexture_destroy(menu->t_back);
    sfTexture_destroy(menu->t_chat_item);
    sfTexture_destroy(menu->t_chat_logo);
    sfTexture_destroy(menu->t_items);
    sfTexture_destroy(menu->t_logo_clothes);
    sfTexture_destroy(menu->t_logo_gunsmith);
    sfTexture_destroy(menu->t_logo_hairdresser);
    sfTexture_destroy(menu->t_logo_market);
    sfTexture_destroy(menu->t_logo_menu);
    sfTexture_destroy(menu->t_txt_menu_base);
    sfTexture_destroy(menu->t_txt_menu_game);
    sfTexture_destroy(menu->t_txt_menu_launch);
    sfTexture_destroy(menu->t_txt_menu_option);
    sfTexture_destroy(menu->t_txt_pause);
    sfTexture_destroy(menu->t_txt_death);
    sfTexture_destroy(menu->t_txt_inventory);
    sfTexture_destroy(menu->t_txt_fight);
}

void destroy_sprt_menu(sprt_menu *menu)
{
    destroy_sprt_menu_sprite(menu);
    destroy_sprt_menu_texture(menu);
}