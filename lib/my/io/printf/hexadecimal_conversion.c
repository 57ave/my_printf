/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** flag_x_X
*/

#include "my_printf.h"
#include "io/my_io.h"
#include "ctype/my_ctype.h"

int hexadecimal_conversion(conversion_specifier_t *conv_spec, void **arg_tab)
{
    int *hex_to_print = (int *) &arg_tab[conv_spec->indice_argument];
    int is_upper = my_isupper((char) conv_spec->conversion_specifier);

    apply_nb_precision(conv_spec, *hex_to_print);
    return my_put_hexadecimal(*hex_to_print, is_upper);
}
