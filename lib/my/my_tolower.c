/*
** EPITECH PROJECT, 2023
** my_tolower.c
** File description:
** Return the corresponding lowercase character
*/

#include "../../include/my.h"

char my_tolower(char c)
{
    if (my_isupper(c))
        return c + 32;
    return c;
}
