##
## EPITECH PROJECT, 2023
## libmy makefile
## File description:
## Compiles my lib and perform necessary actions
##

SRC := my_char_to_int.c \
	   my_compute_power_rec.c \
	   my_compute_square_root.c \
	   my_find_prime_sup.c \
	   my_getnbr.c \
	   my_is_prime.c \
	   my_isalpha.c \
	   my_isdigit.c \
	   my_islower.c \
	   my_isneg.c \
	   my_isnum.c \
	   my_isprint.c \
	   my_isupper.c \
	   my_put_nbr.c \
	   my_putchar.c \
	   my_putnbr_base.c \
	   my_putstr.c \
	   my_revstr.c \
	   my_show_str.c \
	   my_show_word_array.c \
	   my_showmem.c \
	   my_sort_int_array.c \
	   my_str_isalpha.c \
	   my_str_islower.c \
	   my_str_isnum.c \
	   my_str_isprintable.c \
	   my_str_isupper.c \
	   my_str_to_word_array.c \
	   my_strcapitalize.c \
	   my_strcat.c \
	   my_strcmp.c \
	   my_strcpy.c \
	   my_strdup.c \
	   my_strlen.c \
	   my_strlowcase.c \
	   my_strncat.c \
	   my_strncmp.c \
	   my_strncpy.c \
	   my_strndup.c \
	   my_strstr.c \
	   my_strupcase.c \
	   my_swap.c \
	   my_tolower.c \
	   my_toupper.c \
	   my_putchar_error.c \
	   my_putstr_error.c
C_FLAGS := -Wall -Wextra -Werror -c
OBJ := $(SRC:.c=.o)
LIB_DIR := ../
INCLUDE_DIR := ../../include
NAME := libmy.a

.PHONY: all clean

all: $(NAME)

$(NAME): $(OBJ)
	@gcc $(C_FLAGS) $(SRC)
	@ar rc $(NAME) $(OBJ)
	@mkdir -p $(LIB_DIR)
	@cp $@ $(LIB_DIR)
	@mkdir -p $(INCLUDE_DIR)
	@cp my.h $(INCLUDE_DIR)

clean:
	@rm -f $(OBJ) $(TARGET)
