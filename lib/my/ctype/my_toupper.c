/*
** EPITECH PROJECT, 2023
** toupper.c
** File description:
** Returns the corresponding uppercase character
*/

#include "../include/my.h"

char my_toupper(char c)
{
    if (my_islower(c))
        return c - 32;
    return c;
}
