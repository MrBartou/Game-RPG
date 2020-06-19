##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

SRC	=	my_getnbr.c				\
		my_putchar.c			\
		my_put_nbr.c			\
		my_putstr.c				\
		my_strcat.c				\
		my_strcpy.c				\
		my_strcmp.c				\
		my_strncmp.c 			\
		my_strlen.c				\
		my_swap.c 				\
		my_str_to_word_array.c 	\
		my_strncpy.c 			\
		disp_arg.c				\
		my_put_unint.c 			\
		my_octal.c 				\
		my_hexa.c 				\
		my_binary.c 			\
		my_adress.c 			\
		my_printf.c				\
		my_atoi.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:	$(NAME) my

$(NAME):	$(OBJ)
	@ar rc $(NAME) $^

my: 	my.h
	@mkdir -p ../../include
	@cp -f my.h ../../include/

%.o	:	%.c
	@gcc -o $@ -c $<

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re:	fclean $(NAME)

.PHONY	:	clean fclean re my
