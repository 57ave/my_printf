/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** argument tab
*/

#include <stdlib.h>
#include <stdarg.h>

int count_arguments(char const *format)
{
    int count_arg = 0;

    for (int i = 0; format[i] != '\0'; i++) {
        if (format[i] == '%' && format[i + 1] != '%') {
            count_arg++;
        }
    }
    return count_arg;
}

void **get_arg_tab(va_list ap, char const *format)
{
    int tab_size = count_arguments(format);
    void **arg_tab = malloc(sizeof(void *) * tab_size);

    if (arg_tab == NULL) {
        return NULL;
    }
    for (int i = 0; i < size_tab; i++) {
        arg_tab[i] = va_list(ap, void *);
    }
    va_end(ap);
    return arg_tab;
}
