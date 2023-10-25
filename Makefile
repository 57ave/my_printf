##
## EPITECH PROJECT, 2023
## my_printf
## File description:
## Makefile
##

CPPFLAGS += -iquote "include"

CFLAGS = -Wall -Wextra

TEST_FLAGS = --coverage -lcriterion

TEST_NAME = unit_tests

TEST_SRC = tests/test_printf.c \

all:
	make -C ./lib/my/

tests_run: all
	$(CC) $(TEST_SRC) -o $(TEST_NAME) $(CFLAGS) $(TEST_FLAGS) $(CPPFLAGS)
	./$(TEST_NAME)

clean:
	make clean -C ./lib/my/

fclean: clean
	rm -f $(TEST_NAME)

debug: CFLAGS += -ggdb3
debug: all

re: fclean all

.PHONY: all clean fclean re debug tests_run
