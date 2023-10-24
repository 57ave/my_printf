/*
** EPITECH PROJECT, 2023
** my_isneg.c
** File description:
** Displays if n is negative
*/

#include "my_stdio.h"

int my_isneg(int n)
{
    if (n < 0) {
        my_putchar('N');
    } else {
        my_putchar('P');
    }
    return 0;
}
