/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019 [WSL: Ubuntu-18.04]
** File description:
** init_dialogue_two
*/

#include "my_rpg.h"

void init_pile_face(t_dialogue *dialogue)
{
    int fichier;
    char buffer[1320];

    fichier = open("/resrc/dialogue/game_pile_face.txt", O_RDONLY);
    read(fichier, buffer, 1320);
    dialogue->pile_face = my_str_to_chat_array(buffer);
}

void init_gay(t_dialogue *dialogue)
{
    int fichier;
    char buffer[735];

    fichier = open("/resrc/dialogue/Gay.txt", O_RDONLY);
    read(fichier, buffer, 735);
    dialogue->gay = my_str_to_chat_array(buffer);
}

void init_pnj(t_dialogue *dialogue)
{
    int fichier;
    char buffer[1388];

    fichier = open("/resrc/dialogue/Random.txt", O_RDONLY);
    read(fichier, buffer, 1388);
    dialogue->pnj = my_str_to_chat_array(buffer);
}

void init_ramdom_bar(t_dialogue *dialogue)
{
    int fichier;
    char buffer[920];

    fichier = open("/resrc/dialogue/Randombar.txt", O_RDONLY);
    read(fichier, buffer, 920);
    dialogue->gay = my_str_to_chat_array(buffer);
}