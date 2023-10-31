/*
** EPITECH PROJECT, 2023
** my_put_float.c
** File description:
** Print a float number with a defined precision
*/

#include "my_io.h"
#include "strings/my_strings.h"
#include "math/my_math.h"
#include <stdint.h>
#include <sys/types.h>

int64_t my_round_float(double x, int precision)
{
    int64_t to_parse = x * (my_compute_power_rec(10, precision + 1));
    int64_t to_add = 0;

    if (to_parse % 10 >= 5)
        to_add = 1;
    to_parse /= 10;
    to_parse += to_add;
    return to_parse;
}

int my_put_float(double x, uint8_t precision)
{
    int str_index = 0;
    char display[SIZE_TO_HANDLE_DOUBLE];
    int64_t to_parse = my_round_float(x, precision);

    while (to_parse != 0) {
        display[str_index] = (to_parse % 10) + '0';
        to_parse /= 10;
        str_index++;
    }
    display[str_index] = '\0';
    my_revstr(display);
    for (int i = 0; i < str_index; i++) {
        if (str_index - i == precision)
            my_putchar('.');
        my_putchar(display[i]);
    }
    return my_strlen(display);
}
