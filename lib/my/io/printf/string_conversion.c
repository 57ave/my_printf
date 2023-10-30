/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** flag_s
*/

#include "my_printf.h"
#include "io/my_io.h"

int string_conversion(conversion_specifier_t *conv_spec, void **arg_tab)
{
    char *str_to_print = (char *) &arg_tab[conv_spec->indice_argument];

    return my_putstr(str_to_print);
}
