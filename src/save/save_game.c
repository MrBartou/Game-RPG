/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019 [WSL: Ubuntu-18.04]
** File description:
** save_game
*/

#include "my_rpg.h"

int sizes(char *str)
{
    int i = 0;

    for (; str[i] != '\0'; i++);
    return (i);
}

char *trans(int nb)
{
    char *result = NULL;

    result = malloc(sizeof(char) * 2);
    if (nb < 0) {
        nb = -nb;
    }
    if (nb != 0 && nb > 10)
        trans(nb/10);
    result[0] = (nb % 10 + 48);
    result[1] = '\n';
    return (result);
}

void save_game(t_game *game)
{
    int fd = open("./save_1.dat", O_RDWR | O_CREAT, S_IRUSR | S_IWUSR
    | S_IRGRP | S_IWGRP | S_IROTH | S_IWOTH);

    if (fd == -1)
        return;
    game->save = 1;
    game->chapter = 1;
    write(fd, trans(game->chapter), 2);
    write(fd, trans(game->save), 2);
    save_print_value(fd, game);
    close(fd);
}

void save_print_value(int fd, t_game *game)
{
    write(fd, trans(game->player->armor), 2);
    write(fd, trans(game->player->body), 2);
    write(fd, trans(game->player->dir), 2);
    write(fd, trans(game->player->gun), 2);
    write(fd, trans(game->player->head), 2);
    write(fd, trans(game->player->knife), 2);
    write(fd, trans(game->player->life), 2);
    write(fd, trans(game->player->money), 2);
    write(fd, trans(game->player->move), 2);
    write(fd, trans(game->player->pants), 2);
    write(fd, trans(game->player->pos), 2);
    write(fd, trans(game->player->save_x), 2);
    write(fd, trans(game->player->save_y), 2);
    write(fd, trans(game->player->shoes), 2);
    write(fd, trans(game->player->torso), 2);
    write(fd, "1800\n", 5);
    write(fd, "5550\n", 5);
}