/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** flag_d_i
*/

#include "my_printf.h"
#include "io/my_io.h"

int decimal_conversion(conversion_specifier_t *conv_spec, void **arg_tab)
{
    int *dec_to_print = (int *) &arg_tab[conv_spec->indice_argument];
    int size_precision = apply_nb_precision(conv_spec, *dec_to_print);

    return my_put_nbr(*dec_to_print) + size_precision;
}
