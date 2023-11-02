/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** flag_o
*/

#include "my_printf.h"
#include "io/my_io.h"

int octal_conversion(conversion_specifier_t *conv_spec, void **arg_tab)
{
    int *octal_to_print = (int *) &arg_tab[conv_spec->indice_argument];

    apply_nb_precision(conv_spec, *octal_to_print);
    return my_put_octal(*octal_to_print);
}
