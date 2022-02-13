##
## EPITECH PROJECT, 2020
## makefile
## File description:
## gcc etc...
##

CFLAGS = -Wall -Wextra -Wpedantic  -g3 -I./include

NCURSES = -lncurses

CSFML = -l csfml-graphics -l csfml-window -l csfml-system -l csfml-network -l csfml-audio

SRC	=	main.c \
		src/create_struct.c \
		src/disp_table.c \
		src/error_msg.c \
		src/ia_lose.c \
		src/ia_play.c \
		src/matchstick.c \
		src/player_action.c \
		src/player_lose.c \
		src/verif_args.c \
		lib/is_num.c \
		lib/my_getnbr.c \
		lib/my_put_nbr.c \
		lib/my_putchar.c \

OBJ 	=	$(SRC:.c=.o) $(MAIN:.c=.o)

NAME	=	matchstick

all:	$(NAME)

$(NAME):	$(OBJ)
		@gcc -o $(NAME) $(SRC) $(CFLAGS)

clean:
	rm -f $(NAME)
	rm -f *.o src/*.o lib/*.o

fclean: clean

re: fclean all
