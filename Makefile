##
## EPITECH PROJECT, 2023
## my_printf
## File description:
## Makefile
##

CFLAGS = -Wall -Wextra -Werror -I include/ -L./lib/my -lmy

TEST_FLAGS = -lcriterion --coverage

TEST_NAME = unit_tests

TEST_SRC = tests/test_printf.c \
		   tests/test_put_float.c \
		   tests/test_put_hexadecimal.c \
		   tests/test_put_octal.c

all:
	make -C ./lib/my/

tests_run: all
	gcc -o $(TEST_NAME) $(TEST_SRC) $(TEST_FLAGS) $(CFLAGS)
	./$(TEST_NAME)

clean:
	make clean -C ./lib/my/

fclean: clean
	make fclean -C ./lib/my/
	rm -f $(TEST_NAME)

debug:
	make debug -C lib/my

re: fclean all

.PHONY: all clean fclean re debug tests_run
