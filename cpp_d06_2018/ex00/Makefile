##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## all clean fclean re
##
SRC = 	$(wildcard ./*.cpp) \

_END=$'\x1b[0m'
_RED=$'\x1b[31m'

OBJ =	$(SRC:%.cpp=%.o)

NAME	=	my_cat

CXXFLAGS	=	-Wall -Wextra -Werror

CC	=	g++

all:	$(NAME)

NO_OF_FILES := $(words $(SRC))

$(NAME):	$(OBJ)
	@ echo "\033[1;36m[ FILES COMPILED ] \033[0m \033[1;35m$(NO_OF_FILES)\033[0m"
	$(CC) -o $(NAME) $(OBJ) $(FLAGS) $(CXXFLAGS)
	@ echo "\033[1;31m ------------------Name of Binary : \033[1;35m$(NAME)\033[0;31m®\033[1;31m Created Sucesfully ------------------\033[0m"

clean:
	rm -f $(OBJ)


fclean:	clean
	rm -f $(NAME)

re:	fclean all

%.o:	%.c
	@ echo "\033[1;35m[ OK ]\033[0m Compiling" $<
	@ $(CC) -o $@ -c $< $(CFLAGS)

.SILENT: