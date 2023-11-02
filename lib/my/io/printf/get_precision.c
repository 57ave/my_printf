/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** get_precision
*/
#include "my_printf.h"
#include "math/my_math.h"
#include "io/my_io.h"

int apply_nb_precision(conversion_specifier_t *conv_spec, long long nb)
{
    int size = my_nbrlen(nb);
    int tmp = size;

    while (tmp < conv_spec->precision) {
        my_putchar('0');
        tmp++;
    }
    return size - tmp;
}

int get_precision(conversion_specifier_t *conv_spec, char const *format
    , int i_fmt)
{
    if (format[i_fmt] != '.') {
        return 0;
    }
    i_fmt += 1;
    conv_spec->precision = my_getnbr(&format[i_fmt]);
    return my_nbrlen(conv_spec->precision) + 1;
}
