##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

SRC	=	ini_s.c 		\
		ini_r.c 		\
		ini_v.c 		\
		ini_sc.c 		\
		disp_s.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy_csfml.a

all:	$(NAME) my

$(NAME):	$(OBJ)
	@ar rc $(NAME) $^

my: 	my_csfml.h
	@cp -f my_csfml.h ../../include/

%.o	:	%.c
	@gcc -o $@ -c $<

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re:	fclean $(NAME)

.PHONY	:	clean fclean re my
