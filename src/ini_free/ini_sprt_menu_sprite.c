/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** initialize the sprites
*/

#include "my_rpg.h"

void ini_sprt_menu_sprite(sprt_menu *menu)
{
    menu->s_back = ini_s(menu->t_back);
    menu->s_chat_item = ini_s(menu->t_chat_item);
    menu->s_chat_logo = ini_s(menu->t_chat_logo);
    menu->s_items = ini_s(menu->t_items);
    menu->s_logo_gunsmith = ini_s(menu->t_logo_gunsmith);
    menu->s_logo_clothes = ini_s(menu->t_logo_clothes);
    menu->s_logo_hairdresser = ini_s(menu->t_logo_hairdresser);
    menu->s_logo_market = ini_s(menu->t_logo_market);
    menu->s_logo_menu = ini_s(menu->t_logo_menu);
    menu->s_txt_menu_base = ini_s(menu->t_txt_menu_base);
    menu->s_txt_menu_game = ini_s(menu->t_txt_menu_game);
    menu->s_txt_menu_launch = ini_s(menu->t_txt_menu_launch);
    menu->s_txt_menu_option = ini_s(menu->t_txt_menu_option);
    menu->s_txt_pause = ini_s(menu->t_txt_pause);
    menu->s_txt_death = ini_s(menu->t_txt_death);
    menu->s_txt_inventory = ini_s(menu->t_txt_inventory);
    menu->s_txt_fight = ini_s(menu->t_txt_fight);
}