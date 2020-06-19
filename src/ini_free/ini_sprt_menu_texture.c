/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** initialize the sprites
*/

#include "my_rpg.h"

static void ini_sprt_menu_texture_one(sprt_menu *menu)
{
    char str_1[] = "./resrc/sprites/menu/BACK.png";
    char str_2[] = "./resrc/sprites/menu/CHAT_ITEM.png";
    char str_3[] = "./resrc/sprites/menu/CHAT_LOGO.png";
    char str_4[] = "./resrc/sprites/menu/ITEMS.png";
    char str_5[] = "./resrc/sprites/menu/LOGO_CLOTHES.png";
    char str_6[] = "./resrc/sprites/menu/LOGO_GUNSMITH.png";
    char str_7[] = "./resrc/sprites/menu/LOGO_HAIRDRESSER.png";
    char str_8[] = "./resrc/sprites/menu/LOGO_MENU.png";
    char str_9[] = "./resrc/sprites/menu/TXT_MENU_BASE.png";

    menu->t_back = sfTexture_createFromFile(str_1, NULL);
    menu->t_chat_item = sfTexture_createFromFile(str_2, NULL);
    menu->t_chat_logo = sfTexture_createFromFile(str_3, NULL);
    menu->t_items = sfTexture_createFromFile(str_4, NULL);
    menu->t_logo_clothes = sfTexture_createFromFile(str_5, NULL);
    menu->t_logo_gunsmith = sfTexture_createFromFile(str_6, NULL);
    menu->t_logo_hairdresser = sfTexture_createFromFile(str_7, NULL);
    menu->t_logo_menu = sfTexture_createFromFile(str_8, NULL);
    menu->t_txt_menu_base = sfTexture_createFromFile(str_9, NULL);
}

static void ini_sprt_menu_texture_two(sprt_menu *menu)
{
    char str_1[] = "./resrc/sprites/menu/TXT_MENU_GAME.png";
    char str_2[] = "./resrc/sprites/menu/TXT_MENU_LAUNCH.png";
    char str_3[] = "./resrc/sprites/menu/TXT_MENU_OPTION.png";
    char str_4[] = "./resrc/sprites/menu/TXT_PAUSE.png";
    char str_5[] = "./resrc/sprites/menu/TXT_DEATH.png";
    char str_6[] = "./resrc/sprites/menu/TXT_MARKET.png";
    char str_7[] = "./resrc/sprites/menu/TXT_INVENTORY.png";
    char str_8[] = "./resrc/sprites/menu/TXT_FIGHT.png";

    menu->t_txt_menu_game = sfTexture_createFromFile(str_1, NULL);
    menu->t_txt_menu_launch = sfTexture_createFromFile(str_2, NULL);
    menu->t_txt_menu_option = sfTexture_createFromFile(str_3, NULL);
    menu->t_txt_pause = sfTexture_createFromFile(str_4, NULL);
    menu->t_txt_death = sfTexture_createFromFile(str_5, NULL);
    menu->t_logo_market = sfTexture_createFromFile(str_6, NULL);
    menu->t_txt_inventory = sfTexture_createFromFile(str_7, NULL);
    menu->t_txt_fight = sfTexture_createFromFile(str_8, NULL);
}

void ini_sprt_menu_texture(sprt_menu *menu)
{
    ini_sprt_menu_texture_one(menu);
    ini_sprt_menu_texture_two(menu);
}