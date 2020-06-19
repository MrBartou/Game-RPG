/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** fight
*/

#ifndef FIGHT_H_
#define FIGHT_H_

#include "my_rpg.h"
#include "usefull_function.h"

#define FILENAME_ENEMY "./resrc/fight/enemy.txt"
#define KEY_UP sfKeyZ
#define KEY_DOWN sfKeyS
#define KEY_ENTER sfKeyBack
#define KEY_ESCAPE sfKeyEscape
#define RNG_GUN 60

enemy **init_all_enemy(void);
enemy *init_one_enemy(char *buf);
enemy *find_enemy_in_list(enemy **list, char *name);
t_fight *create_fight(void);
int launch_fight(t_game *game, npc *png);
int init_fight(t_fight *fight, t_game *game, npc *png);
int copy_enemy(enemy *dest, enemy *src);
int event_fight(t_game *game, t_fight *fight);
int play_enemy_turn(t_fight *fight, int enemy_choice);
int play_player_turn(t_game *game, t_fight *fight, sfEvent event);
void display_attack_player(t_game *game, t_fight *fight, short act, short nmy);
void set_mouse_enemy(t_game *game, short act);
void set_mouse_action(t_game *game, short act);
int is_win(t_fight *fight);
sfVector2f set_pos_hit(sfVector2f pos_hit, int anim);
sfVector2f set_pos_shoot(sfVector2f pos_shoot, int anim);
sfVector2f set_pos_knife(sfVector2f pos_knife, int anim);
int anim_hit_attack(t_game *game);
int anim_shoot_attack(t_game *game);
int anim_knife_attack(t_game *game);

#endif /* !FIGHT_H_ */
