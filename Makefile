##
## EPITECH PROJECT, 2019
## my_rpg
## File description:
## Makefile
##

SRC	=	src/main.c 										\
		src/launch.c 									\
		src/ini_free/initialization.c 					\
		src/ini_free/ini_menu.c 						\
		src/ini_free/ini_sprt.c 						\
		src/ini_free/ini_sprt_character.c 				\
		src/ini_free/ini_sprt_character_texture.c 		\
		src/ini_free/ini_sprt_character_sprite.c 		\
		src/ini_free/ini_sprt_texture.c 				\
		src/ini_free/ini_sprt_texture_texture.c 		\
		src/ini_free/ini_sprt_texture_sprite.c 			\
		src/ini_free/ini_sprt_menu.c 					\
		src/ini_free/ini_sprt_menu_texture.c 			\
		src/ini_free/ini_sprt_menu_sprite.c 			\
		src/ini_free/ini_sound.c 						\
		src/ini_free/ini_player.c 						\
		src/ini_free/ini_text.c 						\
		src/ini_free/destroy_sprt.c 					\
		src/ini_free/destroy_sprt_character.c 			\
		src/ini_free/destroy_sprt_menu.c 				\
		src/ini_free/destroy_sprt_texture.c 			\
		src/ini_free/destroy_sound.c 					\
		src/ini_free/function_free.c 					\
		src/ini_free/init_dialogue.c 					\
		src/ini_free/init_dialogue_two.c 				\
		src/game/scene_manager.c 						\
		src/game/open_game.c 							\
		src/game/close_game.c 							\
		src/menu/main_menu.c 							\
		src/menu/shop_menu.c 							\
		src/menu/play_menu.c 							\
		src/menu/pause_menu.c 							\
		src/menu/death_menu.c 							\
		src/menu/inventory_menu.c 						\
		src/menu/fight_menu.c 							\
		src/event/event_manager.c 						\
		src/event/event_main_menu.c 					\
		src/event/event_main_menu_base.c 				\
		src/event/event_main_menu_game.c 				\
		src/event/event_main_menu_launch.c 				\
		src/event/event_main_menu_option.c 				\
		src/event/event_shop_menu.c 					\
		src/event/event_shop_menu_gunsmith.c 			\
		src/event/event_shop_menu_clothes.c 			\
		src/event/event_shop_menu_hairdresser.c			\
		src/event/event_shop_menu_market.c 				\
		src/event/event_play_menu.c 					\
		src/event/event_play_menu_map_map.c 			\
		src/event/event_play_menu_map_arena.c 			\
		src/event/event_play_menu_map_bar.c 			\
		src/event/event_play_menu_map_boss.c 			\
		src/event/event_play_menu_map_house_1.c 		\
		src/event/event_play_menu_map_house_2.c 		\
		src/event/event_pause_menu.c 					\
		src/event/event_death_menu.c 					\
		src/event/event_inventory_menu.c 				\
		src/event/event_fight_menu.c 					\
		src/event/event_move_player.c					\
		src/hover/hover_manager.c 						\
		src/hover/hover_main_menu.c 					\
		src/hover/hover_main_menu_base.c 				\
		src/hover/hover_main_menu_game.c 				\
		src/hover/hover_main_menu_launch.c 				\
		src/hover/hover_main_menu_option.c 				\
		src/hover/hover_shop_menu.c 					\
		src/hover/hover_shop_menu_gunsmith.c 			\
		src/hover/hover_shop_menu_clothes.c 			\
		src/hover/hover_shop_menu_hairdresser.c 		\
		src/hover/hover_shop_menu_market.c 				\
		src/hover/hover_play_menu.c 					\
		src/hover/hover_pause_menu.c 					\
		src/hover/hover_death_menu.c 					\
		src/hover/hover_inventory_menu.c 				\
		src/hover/hover_fight_menu.c 					\
		src/display/disp_main_menu.c 					\
		src/display/disp_main_menu_base.c 				\
		src/display/disp_main_menu_game.c 				\
		src/display/disp_button_clicked.c 				\
		src/display/disp_main_menu_game_clothes.c 		\
		src/display/disp_main_menu_game_player.c 		\
		src/display/disp_main_menu_launch.c 			\
		src/display/disp_main_menu_option.c 			\
		src/display/disp_shop_menu.c 					\
		src/display/disp_shop_menu_gunsmith.c 			\
		src/display/disp_shop_menu_clothes.c 			\
		src/display/disp_shop_menu_hairdresser.c		\
		src/display/disp_shop_menu_market.c 			\
		src/display/disp_play_menu.c 					\
		src/display/disp_play_menu_hit.c 				\
		src/display/disp_play_menu_map.c 				\
		src/display/disp_play_menu_player.c 			\
		src/display/disp_play_menu_player_body.c 		\
		src/display/disp_play_menu_player_head.c 		\
		src/display/disp_play_menu_player_armor.c 		\
		src/display/disp_play_menu_player_torso.c 		\
		src/display/disp_play_menu_player_pants.c 		\
		src/display/disp_play_menu_player_shoes.c 		\
		src/display/disp_play_menu_npc.c 				\
		src/display/disp_play_menu_npc_body.c 			\
		src/display/disp_play_menu_npc_head.c 			\
		src/display/disp_play_menu_npc_armor.c 			\
		src/display/disp_play_menu_npc_torso.c 			\
		src/display/disp_play_menu_npc_pants.c			\
		src/display/disp_play_menu_npc_shoes.c 			\
		src/display/disp_play_menu_plus.c 				\
		src/display/disp_pause_menu.c 					\
		src/display/disp_pause_menu_option.c 			\
		src/display/disp_inventory_menu.c 				\
		src/display/disp_fight_menu.c 					\
		src/display/disp_number.c 						\
		src/display/disp_death_menu.c 					\
		src/display/disp_death_menu_option.c 			\
		src/display/disp_chat.c 						\
		src/display/disp_player_chat.c 					\
		src/display/disp_choice.c 						\
		src/sound/play_music.c 							\
		src/sound/play_sound.c 							\
		src/png/check_png.c								\
		src/png/init_all_png.c							\
		src/png/init_one_png.c							\
		src/png/find_png_in_list.c						\
		src/usefull_function/get_int_file.c				\
		src/usefull_function/get_char32_file.c			\
		src/usefull_function/copy_item.c				\
		src/usefull_function/copy_player.c				\
		src/fight/copy_enemy.c							\
		src/fight/create_fight.c						\
		src/fight/display_attack_player.c				\
		src/fight/event_fight.c							\
		src/fight/find_enemy_in_list.c					\
		src/fight/init_all_enemy.c						\
		src/fight/init_one_enemy.c						\
		src/fight/init_fight.c							\
		src/fight/launch_fight.c						\
		src/fight/play_enemy_turn.c						\
		src/fight/play_player_turn.c					\
		src/fight/set_mouse.c							\
		src/fight/is_win.c								\
		src/fight/anim_attack.c							\
		src/fight/set_pos_anim.c						\
		src/item/init_all_item.c						\
		src/item/init_one_item.c						\
		src/item/find_item.c							\
		src/save/save_game.c							\
		src/save/save_recup.c 							\
		src/helper.c									\

OBJ	=	$(SRC:.c=.o)

CC	=	gcc

NAME	=	my_rpg

CLIB	= 	-L./lib/my -lmy

CLIBCS	=	-L./lib/my_csfml -lmy_csfml

GRA 	= 	-l csfml-graphics

SYS 	= 	-l csfml-system

WIN 	= 	-l csfml-window

AUD 	=   -l csfml-audio

LDFLAGS	=   -I./include

MAKEFLAGS+=	--no-print-directory

all	:	$(NAME)

$(NAME)	:	lib $(OBJ)
		$(CC) -o $(NAME) $(OBJ) $(CLIB) $(CLIBCS) $(GRA) $(SYS) $(WIN) $(AUD) -lm

%.o 	:	%.c
			$(CC) -o $@ -c $< $(CFLAGS) $(LDFLAGS)

lib	:
		@(cd lib/my && $(MAKE))
		@(cd lib/my_csfml && $(MAKE))

clean	:
		@rm -rf $(OBJ)
		@(cd lib/my && $(MAKE) clean)
		@(cd lib/my_csfml && $(MAKE) clean)

fclean	:	clean
		@rm -rf $(NAME)
		@(cd lib/my && $(MAKE) fclean)
		@(cd lib/my_csfml && $(MAKE) fclean)

re	:	fclean all

.PHONY	:	clean fclean re lib gen_enemy gen_png gen_item

gen_png	:
		./bonus/create_png

gen_enemy	:
		./bonus/create_enemy

gen_item	:
		./bonus/create_item