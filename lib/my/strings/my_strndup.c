/*
** EPITECH PROJECT, 2023
** my_strdup.c
** File description:
** ALlocates memory and copies the string given as an argument in it.
*/

#include "strings/my_strings.h"
#include <stddef.h>
#include <stdlib.h>

char *my_strndup(char const *src, int n)
{
    char *my_str;
    size_t src_len;

    if (src == NULL)
        return NULL;
    src_len = my_strlen(src);
    my_str = (char *)malloc(src_len + 1);
    if (my_str == NULL)
        return NULL;
    for (int i = 0; i < n; i++) {
        my_str[i] = src[i];
    }
    my_str[src_len] = '\0';
    return my_str;
}
