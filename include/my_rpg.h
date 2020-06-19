/*
** EPITECH PROJECT, 2019
** my_rpg.h
** File description:
** my_rpg.h
*/

#ifndef MY_RPG_H_
#define MY_RPG_H_

#include <math.h>
#include <stdio.h>
#include "my.h"
#include "my_csfml.h"

typedef struct s_sprt_character
{
    sfTexture* t_body;
    sfTexture* t_haircut_1;
    sfTexture* t_haircut_2;
    sfTexture* t_haircut_3;
    sfTexture* t_haircut_4;
    sfTexture* t_moto_helmet;
    sfTexture* t_mili_helmet;
    sfTexture* t_iron_helmet;
    sfTexture* t_hood;
    sfTexture* t_plate;
    sfTexture* t_shirt_1;
    sfTexture* t_shirt_2;
    sfTexture* t_shirt_3;
    sfTexture* t_iron_shoulders;
    sfTexture* t_iron_gloves;
    sfTexture* t_iron;
    sfTexture* t_leather_shoulders;
    sfTexture* t_leather_gloves;
    sfTexture* t_leather;
    sfTexture* t_pant_1;
    sfTexture* t_pant_2;
    sfTexture* t_pant_3;
    sfTexture* t_shoes;
    sfTexture* t_knife_1;
    sfTexture* t_knife_2;
    sfTexture* t_knife_3;
    sfTexture* t_gun_1;
    sfTexture* t_gun_2;
    sfSprite* s_body;
    sfSprite* s_haircut_1;
    sfSprite* s_haircut_2;
    sfSprite* s_haircut_3;
    sfSprite* s_haircut_4;
    sfSprite* s_moto_helmet;
    sfSprite* s_mili_helmet;
    sfSprite* s_iron_helmet;
    sfSprite* s_hood;
    sfSprite* s_plate;
    sfSprite* s_shirt_1;
    sfSprite* s_shirt_2;
    sfSprite* s_shirt_3;
    sfSprite* s_iron_shoulders;
    sfSprite* s_iron_gloves;
    sfSprite* s_iron;
    sfSprite* s_leather_shoulders;
    sfSprite* s_leather_gloves;
    sfSprite* s_leather;
    sfSprite* s_pant_1;
    sfSprite* s_pant_2;
    sfSprite* s_pant_3;
    sfSprite* s_shoes;
    sfSprite* s_knife_1;
    sfSprite* s_knife_2;
    sfSprite* s_knife_3;
    sfSprite* s_gun_1;
    sfSprite* s_gun_2;
} sprt_character;

typedef struct s_sprt_menu
{
    sfTexture* t_back;
    sfTexture* t_chat_item;
    sfTexture* t_chat_logo;
    sfTexture* t_items;
    sfTexture* t_logo_clothes;
    sfTexture* t_logo_gunsmith;
    sfTexture* t_logo_hairdresser;
    sfTexture* t_logo_market;
    sfTexture* t_logo_menu;
    sfTexture* t_txt_menu_base;
    sfTexture* t_txt_menu_game;
    sfTexture* t_txt_menu_launch;
    sfTexture* t_txt_menu_option;
    sfTexture* t_txt_pause;
    sfTexture* t_txt_death;
    sfTexture* t_txt_inventory;
    sfTexture* t_txt_fight;
    sfSprite* s_back;
    sfSprite* s_chat_item;
    sfSprite* s_chat_logo;
    sfSprite* s_items;
    sfSprite* s_logo_clothes;
    sfSprite* s_logo_gunsmith;
    sfSprite* s_logo_hairdresser;
    sfSprite* s_logo_market;
    sfSprite* s_logo_menu;
    sfSprite* s_txt_menu_base;
    sfSprite* s_txt_menu_game;
    sfSprite* s_txt_menu_launch;
    sfSprite* s_txt_menu_option;
    sfSprite* s_txt_pause;
    sfSprite* s_txt_death;
    sfSprite* s_txt_inventory;
    sfSprite* s_txt_fight;
} sprt_menu;

typedef struct s_sprt_texture
{
    sfTexture* t_map_back;
    sfTexture* t_map_plus;
    sfTexture* t_map_ground;
    sfTexture* t_map_hit;
    sfTexture* t_arena_plus;
    sfTexture* t_arena_ground;
    sfTexture* t_arena_hit;
    sfTexture* t_bar_plus;
    sfTexture* t_bar_ground;
    sfTexture* t_bar_hit;
    sfTexture* t_boss_plus;
    sfTexture* t_boss_ground;
    sfTexture* t_boss_hit;
    sfTexture* t_house_1_plus;
    sfTexture* t_house_1_ground;
    sfTexture* t_house_1_hit;
    sfTexture* t_house_2_plus;
    sfTexture* t_house_2_ground;
    sfTexture* t_house_2_hit;
    sfSprite* s_map_back;
    sfSprite* s_map_plus;
    sfSprite* s_map_ground;
    sfSprite* s_map_hit;
    sfSprite* s_arena_plus;
    sfSprite* s_arena_ground;
    sfSprite* s_arena_hit;
    sfSprite* s_bar_plus;
    sfSprite* s_bar_ground;
    sfSprite* s_bar_hit;
    sfSprite* s_boss_plus;
    sfSprite* s_boss_ground;
    sfSprite* s_boss_hit;
    sfSprite* s_house_1_plus;
    sfSprite* s_house_1_ground;
    sfSprite* s_house_1_hit;
    sfSprite* s_house_2_plus;
    sfSprite* s_house_2_ground;
    sfSprite* s_house_2_hit;
} sprt_texture;

typedef struct s_sprt
{
    sprt_character *sprt_character;
    sprt_menu *sprt_menu;
    sprt_texture *sprt_texture;
    sfIntRect rec;
    sfFloatRect rec_2;
    sfVector2f scale;
    sfVector2f vec;
    sfText* text;
    sfFont* font;
    sfClock *clock;
} sprt;

typedef struct s_sound
{
    sfSoundBuffer *b_music_map;
    sfSoundBuffer *b_music_menu;
    sfSoundBuffer *b_music_bar;
    sfSoundBuffer *b_music_combat;
    sfSoundBuffer *b_gun;
    sfSoundBuffer *b_sword;
    sfSoundBuffer *b_door;
    sfSoundBuffer *b_button;
    sfSoundBuffer *b_footstep;
    sfSoundBuffer *b_bar;
    sfSoundBuffer *b_map;
    sfSound *s_music_map;
    sfSound *s_music_menu;
    sfSound *s_music_combat;
    sfSound *s_music_bar;
    sfSound *s_gun;
    sfSound *s_sword;
    sfSound *s_door;
    sfSound *s_button;
    sfSound *s_footstep;
    sfSound *s_bar;
    sfSound *s_map;
} sound;

typedef struct s_menu
{
    int *game_menu;
} menu;

typedef struct s_npc
{
    char name[32];
    int dir_see;
    int map;
    int x;
    int y;
    int quest;
    int fight;
    int body;
    int head;
    int torso;
    int armor;
    int pants;
    int shoes;
    char **name_enemy;
} npc;

typedef struct s_item
{
    char type[32];
    char name[32];
    int ammo;
    int damage;
} item;

typedef struct s_player
{
    int life;
    int money;
    int body;
    int head;
    int torso;
    int armor;
    int pants;
    int shoes;
    int knife;
    int gun;
    int x;
    int y;
    int save_x;
    int save_y;
    int dir;
    int pos;
    int move;
    item *gun_item;
    item *knife_item;
    item *fist;
} player;

typedef struct s_enemy {
    char name[32];
    int pv_max;
    int pv;
    int min_damage;
    int max_damage;
    int ammo;
    int gun_damage;
    int body;
    int head;
    int torso;
    int armor;
    int pants;
    int shoes;
}enemy;

typedef struct s_fight {
    int end;
    int nb_enemy;
    enemy *first;
    enemy *second;
    enemy *third;
    player *player;
    int first_png;
    sfVector2i coord_first;
    int second_png;
    sfVector2i coord_second;
    int third_png;
    sfVector2i coord_third;
    int turn;
}t_fight;

typedef struct s_game
{
    sfRenderWindow* win;
    sprt *sprt;
    sound *sound;
    menu *menu;
    player *player;
    int language;
    int sound_on;
    int music_on;
    int save;
    int chapter;
    sfView *view;
    t_fight *fight;
    enemy **list_enemy;
    npc **list_npc;
    item **list_item;
    sfVector2i mouse;
    int x;
    int y;
} t_game;

typedef struct dialogue {
    char **dialogue;
    char **pnj;
    char **arene;
    char **gay;
    char **dur;
    char **pile_face;
    char **random_bar;
} t_dialogue;

int launch(void);

//INITIALIZATION
int initialization(t_game *game);
int ini_menu(t_game *game);
int ini_sprt(t_game *game);
int ini_sprt_character(t_game *game);
void ini_sprt_character_texture(sprt_character *character);
void ini_sprt_character_sprite(sprt_character *character);
int ini_sprt_menu(t_game *game);
void ini_sprt_menu_texture(sprt_menu *menu);
void ini_sprt_menu_sprite(sprt_menu *menu);
int ini_sprt_texture(t_game *game);
void ini_sprt_texture_texture(sprt_texture *texture);
void ini_sprt_texture_sprite(sprt_texture *texture);
int ini_sound(t_game *game);
int ini_player(t_game *game);
int ini_text(t_game *game);
void parsing_chat(t_dialogue *dialogue);
void init_pile_face(t_dialogue *dialogue);
void init_gay(t_dialogue *dialogue);
void init_pnj(t_dialogue *dialogue);
void init_ramdom_bar(t_dialogue *dialogue);
void init_arene(t_dialogue *dialogue);
void init_dialogue(t_dialogue *dialogue);
void init_dur(t_dialogue *dialogue);
char **my_str_to_chat_array(char *str);

//GAME
void scene_manager(t_game *game);
void open_game(t_game *game);
void close_game(t_game *game);

//MENU
void main_menu(t_game *game);
void shop_menu(t_game *game);
void play_menu(t_game *game);
void pause_menu(t_game *game);
void death_menu(t_game *game);
void inventory_menu(t_game *game);
void fight_menu(t_game *game);

//EVENT
void event_manager(t_game *game);
void event_main_menu(t_game *game, sfEvent event);
void event_main_menu_base(t_game *game, sfEvent event);
void event_main_menu_game(t_game *game, sfEvent event);
void event_main_menu_launch(t_game *game, sfEvent event);
void event_main_menu_option(t_game *game, sfEvent event);
void event_shop_menu(t_game *game, sfEvent event);
void event_shop_menu_gunsmith(t_game *game, sfEvent event);
void event_shop_menu_clothes(t_game *game, sfEvent event);
void event_shop_menu_hairdresser(t_game *game, sfEvent event);
void event_shop_menu_market(t_game *game, sfEvent event);
void event_play_menu(t_game *game, sfEvent event);
void event_play_menu_map_map(t_game *game, int x, int y);
void event_play_menu_map_bar(t_game *game, int x, int y);
void event_play_menu_map_arena(t_game *game, int x, int y);
void event_play_menu_map_boss(t_game *game, int x, int y);
void event_play_menu_map_house_1(t_game *game, int x, int y);
void event_play_menu_map_house_2(t_game *game, int x, int y);
void event_pause_menu(t_game *game, sfEvent event);
void event_death_menu(t_game *game, sfEvent event);
void event_inventory_menu(t_game *game, sfEvent event);
void event_fight_menu(t_game *game, sfEvent event);
void event_move_player(t_game *game);

//HOOVER
void hover_manager(t_game *game);
void hover_main_menu(t_game *game);
void hover_main_menu_base(t_game *game);
void hover_main_menu_game(t_game *game);
void hover_main_menu_launch(t_game *game);
void hover_main_menu_option(t_game *game);
void hover_shop_menu(t_game *game);
void hover_shop_menu_gunsmith(t_game *game);
void hover_shop_menu_clothes(t_game *game);
void hover_shop_menu_hairdresser(t_game *game);
void hover_shop_menu_market(t_game *game);
void hover_play_menu(t_game *game);
void hover_pause_menu(t_game *game);
void hover_death_menu(t_game *game);
void hover_inventory_menu(t_game *game);
void hover_fight_menu(t_game *game);

//DISPLAY
void disp_main_menu(t_game *game);
void disp_main_menu_base(t_game *game);
void disp_main_menu_game(t_game *game);
void disp_button_one_clicked(t_game *game, sprt_menu *menu);
void disp_button_two_clicked(t_game *game, sprt_menu *menu);
void disp_main_menu_game_clothes(t_game *game);
void disp_main_menu_game_player(t_game *game);
void disp_main_menu_launch(t_game *game);
void disp_main_menu_option(t_game *game);
void disp_shop_menu(t_game *game);
void disp_shop_menu_gunsmith(t_game *game);
void disp_shop_menu_clothes(t_game *game);
void disp_shop_menu_hairdresser(t_game *game);
void disp_shop_menu_market(t_game *game);
void disp_play_menu(t_game *game);
void disp_play_menu_hit(t_game *game);
void disp_play_menu_map(t_game *game);
void disp_play_menu_player(t_game *game, int dir, int pos);
void disp_play_menu_player_body(t_game *game, int dir, int pos);
void disp_play_menu_player_head(t_game *game, int dir, int pos);
void disp_play_menu_player_armor(t_game *game, int dir, int pos);
void disp_play_menu_player_torso(t_game *game, int dir, int pos);
void disp_play_menu_player_pants(t_game *game, int dir, int pos);
void disp_play_menu_player_shoes(t_game *game, int dir, int pos);
void disp_play_menu_npc(t_game *game, int nb, int dir, int pos);
void disp_play_menu_npc_body(t_game *game, int nb, int dir, int pos);
void disp_play_menu_npc_head(t_game *game, int nb, int dir, int pos);
void disp_play_menu_npc_armor(t_game *game, int nb, int dir, int pos);
void disp_play_menu_npc_torso(t_game *game, int nb, int dir, int pos);
void disp_play_menu_npc_pants(t_game *game, int nb, int dir, int pos);
void disp_play_menu_npc_shoes(t_game *game, int nb, int dir, int pos);
void disp_play_menu_plus(t_game *game);
void disp_pause_menu(t_game *game);
void disp_pause_menu_option(t_game *game);
void disp_inventory_menu(t_game *game);
void disp_fight_menu(t_game *game);
void disp_number(t_game *game, sprt_menu *menu, int nb, sfVector2f vec);
void disp_death_menu(t_game *game);
void disp_death_menu_option(t_game *game);
void disp_chat(t_game *game, int nb, int npj, int chat);
void disp_player_chat(t_game *game, sprt_menu *menu, int npc);
void disp_choice(t_game *game, char *one, char *two);
void helper(void);

//SOUND
void play_music(t_game *game, int nb);
void play_sound(t_game *game, int nb);
void play_button(t_game *game);

//FREE
void destroy_sprt(t_game *game);
void destroy_sprt_character(sprt_character *character);
void destroy_sprt_menu(sprt_menu *menu);
void destroy_sprt_texture(sprt_texture *texture);
void destroy_sound(t_game *game);
void function_free(t_game *game);

//SAVE
void save_game(t_game *game);
char *trans(int nb);
void save_print_value(int fd, t_game *game);
int save_recup(t_game *game);
void parsing_save(char *buffer, t_game *game);
void fill_struct(char **data, t_game *game);
int my_atoi(char *str);

#endif /* MY_RPG_H_ */