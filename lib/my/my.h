/*
** EPITECH PROJECT, 2023
** libmy.h
** File description:
** Header for mylib
*/

#ifndef MY_H
    #define MY_H
void my_putchar(char c);
void my_putchar_error(char c);
int my_isneg(int nb);
int my_put_nbr(int nb);
void my_swap(int *a, int *b);
int my_putstr(char const *str);
int my_putstr_error(char const *str);
int my_strlen(char const *str);
int my_getnbr(char const *str);
void my_sort_int_array(int *tab, int size);
int my_compute_power_rec(int nb, int power);
int my_compute_square_root(int nb);
int my_is_prime(int nb);
int my_find_prime_sup(int nb);
char *my_strcpy(char *dest, char const *src);
char *my_strncpy(char *dest, char const *src, int n);
char *my_revstr(char *str);
char *my_strstr(char *str, char const *to_find);
int my_strcmp(char const *s1, char const *s2);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strupcase(char *str);
char *my_strlowcase(char *str);
char *my_strcapitalize(char *str);
int my_str_isalpha(char const *str);
int my_str_isnum(char const *str);
int my_str_islower(char const *str);
int my_str_isupper(char const *str);
int my_str_isprintable(char const *str);
int my_show_str(char const *str);
int my_showmem(char const *str, int size);
char *my_strcat(char *dest, char const *src);
char *my_strncat(char *dest, char const *src, int nb);
int my_char_to_int(char c);
int my_isalpha(char c);
int my_isdigit(char c);
int my_isnum(char c);
int my_isprint(char c);
int my_isupper(char c);
int my_islower(char c);
char my_toupper(char c);
char my_tolower(char c);
char *my_strndup(char const *src, int n);
int my_show_word_array(char *const *tab);
char **my_str_to_word_array(const char *str);
char *my_strdup(char const *src);
char *my_putnbr_base(int nbr, const char *base);
#endif /* my.h */
