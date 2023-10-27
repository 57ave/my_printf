/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** get_specifier
*/

#include "my_printf.h"

int get_specifier(conversion_specifier_t *conv_spec, char const *format
    , int i_fmt, int i_arg)
{
    i_fmt += get_flag_char(conv_spec, format, i_fmt);
    conv_spec->conversion_specifier = format[i_fmt];
    conv_spec->indice_argument = i_arg;
    return 0;
}
