/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** argument tab
*/

#include <stdlib.h>
#include <stdarg.h>
#include "my_printf.h"

int count_arguments(char const *format)
{
    int count_arg = 0;

    for (int i = 0; format[i] != '\0'; i++) {
        if (is_real_flag(format, i)) {
            count_arg++;
        }
    }
    return count_arg;
}

void **get_arg_tab(va_list ap, char const *format)
{
    int tab_size = count_arguments(format);
    void **arg_tab = malloc(sizeof(void *) * (tab_size + 1));
    int i = 0;

    if (arg_tab == NULL) {
        return NULL;
    }
    for (; i < tab_size; i++) {
        arg_tab[i] = va_arg(ap, void *);
    }
    arg_tab[i] = NULL;
    va_end(ap);
    return arg_tab;
}
