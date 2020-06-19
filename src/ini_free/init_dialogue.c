/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019 [WSL: Ubuntu-18.04]
** File description:
** init_dialogue
*/

#include "my_rpg.h"

char **my_str_to_chat_array(char *str)
{
    int	y = my_strlen(str);
    char **result = NULL;

    result = malloc(sizeof(char *) * y + 1);
    if (result == NULL)
        return NULL;
    for (int a = 0, b = 0, c = 0; b < y; a++, b++) {
        c = 0;
        result[b] = malloc(sizeof(char) * my_strlen(str));
        if (result == NULL)
            return NULL;
        for (; str[a] != '\0' && str[a] != '\n'; a++, c++)
            result[b][c] = str[a];
        result[b][c] = '\0';
    }
    result[y] = NULL;
    return (result);
}

void parsing_chat(t_dialogue *dialogue)
{
    init_dialogue(dialogue);
    init_pnj(dialogue);
    init_arene(dialogue);
    init_gay(dialogue);
    init_dur(dialogue);
    init_pile_face(dialogue);
    init_ramdom_bar(dialogue);
}

void init_arene(t_dialogue *dialogue)
{
    int fichier;
    char buffer[2339];

    fichier = open("/resrc/dialogue/arene.txt", O_RDONLY);
    read(fichier, buffer, 2339);
    dialogue->arene = my_str_to_chat_array(buffer);
}

void init_dialogue(t_dialogue *dialogue)
{
    int fichier;
    char buffer[5885];

    fichier = open("/resrc/dialogue/dialogue.txt", O_RDONLY);
    read(fichier, buffer, 5885);
    dialogue->dialogue = my_str_to_chat_array(buffer);
}

void init_dur(t_dialogue *dialogue)
{
    int fichier;
    char buffer[805];

    fichier = open("/resrc/dialogue/Dur.txt", O_RDONLY);
    read(fichier, buffer, 805);
    dialogue->dur = my_str_to_chat_array(buffer);
}