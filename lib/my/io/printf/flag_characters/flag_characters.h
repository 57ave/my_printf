/*
** EPITECH PROJECT, 2023
** FLAG_CHARACTERS
** File description:
** Header file for flag characters handling
*/

#ifndef FLAG_CHARACTERS_H_
    #define FLAG_CHARACTERS_H_
    #include "io/printf/my_printf.h"
    #include <stddef.h>
    #include <stdarg.h>

/*Main running functions*/

int alternate_form(conversion_specifier_t *conv_spec, void **arg_tab);

/* Flag characters functions */

int alternate_hexadecimal(conversion_specifier_t *conv_spec);

#endif
