/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** flag_d_i
*/

#include "my_printf.h"
#include "io/my_stdio.h"

int decimal_conversion(conversion_specifier_t *conv_spec, void **arg_tab)
{
    int *dec_to_print = (int *) &arg_tab[conv_spec->indice_argument];

    return my_put_nbr(*dec_to_print);
}
