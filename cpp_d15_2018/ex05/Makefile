BINPATH ?= .
NAME ?= test01
BIN ?= $(BINPATH)/$(NAME)
EX ?= ex01

EXSRCS ?= ./*.cpp
INCLUDES ?= -I./
CXXFLAGS ?= -W -Wall -Wextra -Werror
LDFLAGS ?= -W -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	g++ -o $(BIN) $(EXSRCS) $(INCLUDES) $(LDFLAGS)

fclean:
	rm $(BIN)

re: fclean all

.PHONY: all fclean re
