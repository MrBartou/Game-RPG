/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** initialize the sounds
*/

#include "my_rpg.h"

static void ini_buffer_music(t_game *game)
{
    game->sound->b_music_bar = sfSoundBuffer_createFromFile
    ("./resrc/sounds/MUSIC_BAR.ogg");
    game->sound->b_music_menu = sfSoundBuffer_createFromFile
    ("./resrc/sounds/MUSIC_MENU.ogg");
    game->sound->b_music_map = sfSoundBuffer_createFromFile
    ("./resrc/sounds/MUSIC_MAP.ogg");
    game->sound->b_music_combat = sfSoundBuffer_createFromFile
    ("./resrc/sounds/MUSIC_COMBAT.ogg");
}

static void ini_sound_music(t_game *game)
{
    game->sound->s_music_bar = sfSound_create();
    sfSound_setBuffer(game->sound->s_music_bar, game->sound->b_music_bar);
    game->sound->s_music_menu = sfSound_create();
    sfSound_setBuffer(game->sound->s_music_menu, game->sound->b_music_menu);
    game->sound->s_music_combat = sfSound_create();
    sfSound_setBuffer(game->sound->s_music_combat, game->sound->b_music_combat);
    game->sound->s_music_map = sfSound_create();
    sfSound_setBuffer(game->sound->s_music_map, game->sound->b_music_map);
}

static void ini_buffer_sound(t_game *game)
{
    game->sound->b_bar = sfSoundBuffer_createFromFile
    ("./resrc/sounds/BAR.ogg");
    game->sound->b_map = sfSoundBuffer_createFromFile
    ("./resrc/sounds/MAP.ogg");
    game->sound->b_footstep = sfSoundBuffer_createFromFile
    ("./resrc/sounds/FOOTSTEP.ogg");
    game->sound->b_door = sfSoundBuffer_createFromFile
    ("./resrc/sounds/DOOR.ogg");
    game->sound->b_button = sfSoundBuffer_createFromFile
    ("./resrc/sounds/BUTTON.ogg");
    game->sound->b_gun = sfSoundBuffer_createFromFile
    ("./resrc/sounds/GUNSHOT.ogg");
    game->sound->b_sword = sfSoundBuffer_createFromFile
    ("./resrc/sounds/SWORD.ogg");
}

static void ini_sound_sound(t_game *game)
{
    game->sound->s_bar = sfSound_create();
    sfSound_setBuffer(game->sound->s_bar, game->sound->b_bar);
    game->sound->s_map = sfSound_create();
    sfSound_setBuffer(game->sound->s_map, game->sound->b_map);
    game->sound->s_footstep = sfSound_create();
    sfSound_setBuffer(game->sound->s_footstep, game->sound->b_footstep);
    game->sound->s_door = sfSound_create();
    sfSound_setBuffer(game->sound->s_door, game->sound->b_door);
    game->sound->s_button = sfSound_create();
    sfSound_setBuffer(game->sound->s_button, game->sound->b_button);
    game->sound->s_gun = sfSound_create();
    sfSound_setBuffer(game->sound->s_gun, game->sound->b_gun);
    game->sound->s_sword = sfSound_create();
    sfSound_setBuffer(game->sound->s_sword, game->sound->b_sword);
}

int ini_sound(t_game *game)
{
    game->sound = NULL;

    game->sound = malloc(sizeof(sound));
    if (game->sound == NULL) {
        write(2, "malloc() error\n", 15);
        return (84);
    }
    ini_buffer_music(game);
    ini_sound_music(game);
    ini_buffer_sound(game);
    ini_sound_sound(game);
    return (0);
}