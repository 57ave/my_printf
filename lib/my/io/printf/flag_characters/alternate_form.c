/*
** EPITECH PROJECT, 2023
** alternate_form.c
** File description:
** Handling the # flag character
*/

#include "io/printf/my_printf.h"
#include "io/my_io.h"
#include "ctype/my_ctype.h"
#include "flag_characters.h"
#include <stdio.h>

static int is_alternate_needed(char *flag_characters)
{
    if (flag_characters == NULL) {
        return 0;
    }
    for (int i = 0; flag_characters[i] != '\0'; i++) {
        if (flag_characters[i] == '#') {
            return 1;
        }
    }
    return 0;
}

static int alternate_hexadecimal(char conv_specifier, unsigned int hexa_nb)
{
    int char_printed = 0;

    if (hexa_nb == 0) {
        return char_printed;
    }
    if (my_islower(conv_specifier)) {
        my_putstr("0x");
        char_printed += 2;
    } else {
        my_putstr("0X");
        char_printed += 2;
    }
    return char_printed;
}

static int alternate_octal(unsigned int octal_nb)
{
    int char_printed = 0;

    if (octal_nb == 0) {
        return char_printed;
    }
    my_putchar('0');
    char_printed++;
    return char_printed;
}

static int alternate_double(double x)
{
    int char_printed = 0;
    double frac_part = x - ((long) x);

    if (frac_part != 0) {
        return char_printed;
    }
    my_putchar('.');
    char_printed++;
    return char_printed;
}

int alternate_form(conversion_specifier_t *conv_spec, void **arg_tab)
{
    int char_printed = 0;
    int *ptr_to_arg = 0;
    char conv_specifier = conv_spec->conversion_specifier;

    if (!is_alternate_needed(conv_spec->flag_characters))
        return char_printed;
    switch (my_tolower(conv_specifier)) {
        case 'x':
        case 'p':
            ptr_to_arg = (int *) &arg_tab[conv_spec->indice_argument];
            char_printed += alternate_hexadecimal(conv_specifier, *ptr_to_arg);
            break;
        case 'o':
            ptr_to_arg = (int *) &arg_tab[conv_spec->indice_argument];
            char_printed += alternate_octal(*ptr_to_arg);
            break;
        default:
            alternate_double(*(double *) &arg_tab[conv_spec->indice_argument]);
    }
    return char_printed;
}
