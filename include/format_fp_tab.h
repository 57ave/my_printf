/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** tab of funcitons pointer for format
*/

#include "my_printf.h"

#ifndef FORMAT_FP_TAB_H_
    #define FORMAT_FP_TAB_H_

typedef struct format_function_s {
    char format_char;
    int (*pf)(conversion_specifier_t, void **);
} format_func_t;

static const format_func_t FORMAT_TAB[] = {
    {'\n', NULL}
}

#endif
