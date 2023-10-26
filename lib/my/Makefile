##
## EPITECH PROJECT, 2023
## libmy makefile
## File description:
## Compiles my lib and perform necessary actions
##

CTYPE_FUNCS := ./ctype/my_isneg.c \
			   ./ctype/my_isalpha.c \
			   ./ctype/my_isdigit.c \
			   ./ctype/my_islower.c \
			   ./ctype/my_isprint.c \
			   ./ctype/my_isupper.c \
			   ./ctype/my_tolower.c \
			   ./ctype/my_toupper.c \
			   ./ctype/my_char_to_int.c

MATH_FUNCS := ./math/my_getnbr.c \
			  ./math/my_is_prime.c \
			  ./math/my_find_prime_sup.c \
			  ./math/my_compute_power_rec.c \
			  ./math/my_compute_square_root.c \
			  ./math/nbrlen.c \

SORT_FUNCS := ./sort/my_swap.c \
			  ./sort/my_sort_int_array.c

STDIO_FUNCS := ./stdio/my_putstr.c \
			   ./stdio/my_put_nbr.c \
			   ./stdio/my_putchar.c \
			   ./stdio/my_putstr_error.c \
			   ./stdio/my_putchar_error.c

STDIO_FUNCS_PRINTF := ./stdio/printf/my_printf.c \
					  ./stdio/printf/arguments_tab.c \
					  ./stdio/printf/decimal_conversion.c

STRINGS_FUNCS := ./strings/my_revstr.c \
				 ./strings/my_strcat.c \
				 ./strings/my_strcmp.c \
				 ./strings/my_str_to_word_array.c \
				 ./strings/my_str_isprintable.c \
				 ./strings/my_show_word_array.c \
				 ./strings/my_strcapitalize.c \
				 ./strings/my_str_isupper.c \
				 ./strings/my_str_islower.c \
				 ./strings/my_str_isalpha.c \
				 ./strings/my_putnbr_base.c \
				 ./strings/my_strlowcase.c \
				 ./strings/my_strupcase.c \
				 ./strings/my_str_isnum.c \
				 ./strings/my_show_str.c \
				 ./strings/my_strndup.c \
				 ./strings/my_strncpy.c \
				 ./strings/my_strncmp.c \
				 ./strings/my_strncat.c \
				 ./strings/my_showmem.c \
				 ./strings/my_strstr.c \
				 ./strings/my_strlen.c \
				 ./strings/my_strdup.c \
				 ./strings/my_strcpy.c \

SRC := $(CTYPE_FUNCS) \
	   $(MATH_FUNCS) \
	   $(SORT_FUNCS) \
	   $(STDIO_FUNCS) \
	   $(STDIO_FUNCS_PRINTF) \
	   $(STRINGS_FUNCS)
CFLAGS := -Wall -Wextra -Werror -I .
OBJ := $(SRC:.c=.o)
LIB_DIR := ../
INCLUDE_DIR := ../../include/
NAME := libmy.a

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	@mkdir -p $(LIB_DIR)
	@cp $@ $(LIB_DIR)
	@mkdir -p $(INCLUDE_DIR)
	@cp -r ./sort/my_sort.h $(INCLUDE_DIR)
	@cp -r ./ctype/my_ctype.h $(INCLUDE_DIR)
	@cp -r ./stdio/my_stdio.h $(INCLUDE_DIR)
	@cp -r ./strings/my_strings.h $(INCLUDE_DIR)
	@cp -r ./stdio/printf/my_printf.h $(INCLUDE_DIR)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

debug: CFLAGS += -ggdb3
debug: all

re:	fclean
	all
