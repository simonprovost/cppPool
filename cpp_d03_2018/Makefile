##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## all clean fclean re
##

CC	=	gcc

CFLAGS	=

SRC	=	my_string.c

OBJ	=	$(SRC:.c=.o)

NAME	=	string

NAMELIB	=	libstring.a

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc lib${NAME}.a $(OBJ) $(CFLAGS)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -f $(NAMELIB)

re:	fclean all
