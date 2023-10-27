/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** flag_e
*/

#include "my_printf.h"
#include "io/my_io.h"

int exponent_conversion(conversion_specifier_t *conv_spec, void **arg_tab)
{
    double *double_to_print = (double *) &arg_tab[conv_spec->indice_argument];

    return my_put_exponent(*double_to_print, 6);
}
