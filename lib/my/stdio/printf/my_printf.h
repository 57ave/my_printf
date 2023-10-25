/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** tab of funcitons pointer for format
*/

#ifndef MY_PRINTF_H_
    #define MY_PRINTF_H_
    #include <stddef.h>
    #include <stdarg.h>

typedef struct conversion_specifier {
    char *flag_characters;
    int field_width;
    int length_modifier;
    char conversion_specifier;
} conversion_specifier_t;

typedef struct format_function_s {
    char format_char;
    int (*pf)(conversion_specifier_t *, void **);
} format_func_t;

static const format_func_t FORMAT_TAB[] = {
    {'\n', NULL}
};

void **get_arg_tab(va_list ap, char const *format);

#endif
