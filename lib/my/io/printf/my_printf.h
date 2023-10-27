/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** tab of functions pointer for format
*/

#ifndef MY_PRINTF_H_
    #define MY_PRINTF_H_
    #include <stddef.h>
    #include <stdarg.h>

/* Structure definition */

typedef struct conversion_specifier {
    int indice_argument;
    char *flag_characters;
    int field_width;
    int length_modifier;
    char conversion_specifier;
} conversion_specifier_t;

typedef struct format_function_s {
    char format_char;
    int (*pf)(conversion_specifier_t *, void **);
} format_func_t;

/*Main running functions*/

int my_printf(char const *format, ...);
void **get_arg_tab(va_list ap, char const *format);

/* Utils for running functions */

int is_real_flag(char const *format, int indice);
int jump_flags(char const *format, int indice);
int is_conversion_char(char current_char);

/* Conversion functions */

int decimal_conversion(conversion_specifier_t *conv_spec, void **arg_tab);
int float_conversion(conversion_specifier_t *conv_spec, void **arg_tab);
int exponent_conversion(conversion_specifier_t *conv_spec, void **arg_tab);
int hexadecimal_conversion(conversion_specifier_t *conv_spec, void **arg_tab);
int octal_conversion(conversion_specifier_t *conv_spec, void **arg_tab);

/* Tab of functions pointer associated to char for conversion */

static const format_func_t FORMAT_TAB[] = {
    {'i', &decimal_conversion},
    {'d', &decimal_conversion},
    {'f', &float_conversion},
    {'e', &exponent_conversion},
    {'x', &hexadecimal_conversion},
    {'X', &hexadecimal_conversion},
    {'o', &octal_conversion}
};

#endif
