##
## EPITECH PROJECT, 2023
## my_printf
## File description:
## Makefile
##

NAME =	libmy.a

CPPFLAGS += -iquote "include"

CFLAGS = -Wall -Wextra

TEST_FLAGS = --coverage -lcriterion

MAIN =	src/main.c 	\

SRC = 	src/my_printf.c \

TEST_NAME = unit_tests

TEST = tests/test_printf.c \

OBJ = $(MAIN:.c=.o) $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(OBJ) -o $(NAME) $(CPPFLAGS)

OBJ_TEST = $(TEST) $(SRC:.c=.o)

tests_run: all
	$(CC) $(OBJ_TEST) -o $(TEST_NAME) $(TEST_FLAGS) $(CPPFLAGS)
	./unit_tests

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

debug: CFLAGS += -ggdb3
debug: all

re: fclean all

.PHONY: all clean fclean re debug
