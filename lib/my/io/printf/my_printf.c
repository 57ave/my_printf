/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** main loop of my_printf
*/

#include <stdarg.h>
#include <stddef.h>
#include "my_printf.h"
#include "io/my_io.h"

int format_handling(char const *format, int indice, void **arg_tab, int i_arg)
{
    int fmt_tab_size = sizeof(FORMAT_TAB) / sizeof(FORMAT_TAB[0]);
    int size_read = 0;
    conversion_specifier_t conv_spec = {
        i_arg, NULL, 0, 0, 'd'
    };

    for (int i = 0; i < fmt_tab_size; i++) {
        if (FORMAT_TAB[i].format_char == format[indice]) {
            size_read += FORMAT_TAB[i].pf(&conv_spec, arg_tab);
        }
    }
    return size_read;
}

int call_format_handling(char const *format, void **arg_tab)
{
    int size_read = 0;
    int indice_arg = 0;

    for (int i_fmt = 0; format[i_fmt] != '\0'; i_fmt++) {
        if (is_real_flag(format, i_fmt)) {
            i_fmt += jump_flags(format, i_fmt + 1);
            size_read += format_handling(format, i_fmt, arg_tab, indice_arg);
            indice_arg++;
            continue;
        }
        if (format[i_fmt] == '%' && format[i_fmt + 1] == '%') {
            my_putchar('%');
            i_fmt += 2;
            continue;
        }
        my_putchar(format[i_fmt]);
        size_read += 1;
    }
    return size_read;
}

int my_printf(char const *format, ...)
{
    va_list ap;
    void **arg_tab = NULL;
    int size_read = 0;

    va_start(ap, format);
    arg_tab = get_arg_tab(ap, format);
    if (arg_tab == NULL) {
        return 84;
    }
    size_read = call_format_handling(format, arg_tab);
    return size_read;
}
