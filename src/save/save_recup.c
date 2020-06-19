/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** recup_save
*/

#include "my_rpg.h"

void fill_struct(char **data, t_game *game)
{
    game->chapter = my_atoi(data[0]);
    game->save = my_atoi(data[1]);
    game->player->armor = my_atoi(data[2]);
    game->player->body = my_atoi(data[3]);
    game->player->dir = my_atoi(data[4]);
    game->player->gun = my_atoi(data[5]);
    game->player->head = my_atoi(data[6]);
    game->player->knife = my_atoi(data[7]);
    game->player->life = my_atoi(data[8]);
    game->player->money = my_atoi(data[9]);
    game->player->move = my_atoi(data[10]);
    game->player->pants = my_atoi(data[11]);
    game->player->pos = my_atoi(data[12]);
    game->player->save_x = my_atoi(data[13]);
    game->player->save_y = my_atoi(data[14]);
    game->player->shoes = my_atoi(data[15]);
    game->player->torso = my_atoi(data[16]);
    game->player->x = my_atoi(data[17]);
    game->player->y = my_atoi(data[18]);
}

void parsing_save(char *buffer, t_game *game)
{
    int	y = my_strlen(buffer);
    char **result = NULL;

    result = malloc(sizeof(char *) * y + 1);
    if (result == NULL)
        return;
    for (int a = 0, b = 0, c = 0; b < y; a++, b++) {
        c = 0;
        result[b] = malloc(sizeof(char) * my_strlen(buffer));
        if (result == NULL)
            return;
        for (; buffer[a] != '\0' && buffer[a] != '\n'; a++, c++)
            result[b][c] = buffer[a];
        result[b][c] = '\0';
    }
    result[y] = NULL;
    fill_struct(result, game);
}

int save_recup(t_game *game)
{
    char buffer[64];
    int size = 64;
    int fd = 0;
    int rd = 0;

    fd = open("./save_1.dat", O_RDONLY);
    if (fd == -1)
        return (84);
    rd = read(fd, buffer, size);
    if (rd == -1)
        return (84);
    close (fd);
    parsing_save(buffer, game);
    return (0);
}