/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** flag_f
*/

#include "my_printf.h"
#include "io/my_io.h"

int float_conversion(conversion_specifier_t *conv_spec, void **arg_tab)
{
    double *double_to_print = (double *) arg_tab[conv_spec->indice_argument];
    int precision = conv_spec->precision;

    if (precision == -1) {
        precision = DEFAULT_PRECISION;
    }
    return my_put_float(*double_to_print, precision);
}
