/*
** EPITECH PROJECT, 2023
** my_put_float.c
** File description:
** Print a float number with a defined precision
*/

#include "my_io.h"
#include "strings/my_strings.h"
#include "math/my_math.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <sys/types.h>

static void int_to_str(long long n, char *str, uint8_t precision)
{
    int i = 0;

    while (n > 0) {
        str[i++] = (n % 10) + '0';
        n = n / 10;
    }
    while (i < precision) {
        str[i++] = '0';
    }
    str[i] = '\0';
    my_revstr(str);
}

int my_put_float(double x, uint8_t precision)
{
    int char_printed = 0;
    long long int_part = (long long) x;
    double float_part = x - int_part;
    int int_part_len = my_nbrlen(int_part);
    char *display = malloc(int_part_len + precision + 2);

    int_to_str(int_part, display, 0);
    if (precision > 0) {
        display[int_part_len] = '.';
        float_part = float_part * my_compute_power_rec(10, precision);
        float_part = float_part + 0.5;
        int_to_str(float_part, display + int_part_len + 1, precision);
    }
    my_putstr(display);
    char_printed = my_strlen(display);
    free(display);
    return char_printed;
}
