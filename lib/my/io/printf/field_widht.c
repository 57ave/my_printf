/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** fieldwidht handling
*/

#include "my_printf.h"
#include "math/my_math.h"

int get_field_value(conversion_specifier_t *conv_spec, char const *format
    , int i_fmt)
{
    int field_value = my_getnbr(&format[i_fmt]);
    int size_field_value = my_nbrlen(field_value);

    if (size_field_value == 0) {
        conv_spec->indice_argument += 1;
        size_field_value += 1;
    } else {
        size_field_value += 1;
        conv_spec->field_width = field_value;
    }
    return size_field_value;
}

int get_new_argument(conversion_specifier_t *conv_spec, char const *format
    , int i_fmt)
{
    int size_of_argument = 0;
    int argument = my_getnbr(&format[i_fmt]);

    size_of_argument += my_nbrlen(argument) + 1;
    i_fmt += size_of_argument;
    if (format[i_fmt] == '*') {
        size_of_argument += get_field_value(conv_spec, format, i_fmt + 1) + 1;
    }
    conv_spec->indice_argument = argument - 1;
    return size_of_argument;
}

int get_field_width(conversion_specifier_t *conv_spec, char const *format
    , int i_fmt)
{
    int field_width_size = 0;

    if (format[i_fmt] == '*') {
        field_width_size += get_field_value(conv_spec, format, i_fmt + 1);
    } else if ('1' <= format[i_fmt] && format[i_fmt] <= '9') {
        field_width_size += get_new_argument(conv_spec, format, i_fmt);
    } else {
        return 0;
    }
    return field_width_size;
}
