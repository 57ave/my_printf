/*
** EPITECH PROJECT, 2023
** my_put_nbr.c
** File description:
** Put number
*/

#include "my_strings.h"
#include "my_stdio.h"
#include "my_math.h"

int my_put_nbr(int nb)
{
    char *dec_base = "0123456789";
    char *result = my_putnbr_base(nb, dec_base);

    my_putstr(result);
    return my_getnbr(result);
}
