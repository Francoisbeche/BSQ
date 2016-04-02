##
## Makefile for  in /home/beche_f/rendu/train_bsq
##
## Made by beche_f
## Login   <beche_f@epitech.net>
##
## Started on  Sat Dec 12 17:39:46 2015 beche_f
## Last update Sat Dec 19 07:22:50 2015 beche_f
##

CC	=	gcc

RM	=	rm -f

SRC	=	src/main.c	\
		src/algo.c

LIB	=	lib/my/my_getnbr.c	\
		lib/my/my_putchar.c	\
		lib/my/my_put_nbr.c	\
		lib/my/my_putstr.c	\
		lib/my/my_strlen.c

BUFF	=	src/buffer/get_dim.c		\
		src/buffer/malloc_buffer.c	\
		src/buffer/display_buffer.c	\
		src/buffer/set_buffer.c

INCLUDE	=	-I./include/ -I./lib/my/include/

FLAGS	=	 -Wall -W -Wextra -Werror -pedantic -ansi

CFLAGS	=	$(INCLUDE) $(FLAGS)

OBJ	=	$(SRC:.c=.o) $(LIB:.c=.o) $(BUFF:.c=.o)

NAME	=	bsq

$(NAME): 	$(OBJ)
		$(CC) $(OBJ) -o $(NAME)

all:	$(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
