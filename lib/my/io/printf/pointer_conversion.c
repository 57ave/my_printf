/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** flag_p
*/

#include "my_printf.h"
#include "io/my_io.h"
#include "ctype/my_ctype.h"
#include <stdint.h>

int pointer_conversion(conversion_specifier_t *conv_spec, void **arg_tab)
{
    int64_t *ptr_to_print = (void *) &arg_tab[conv_spec->indice_argument];

    return my_put_pointer(*ptr_to_print);
}
