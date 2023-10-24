/*
** EPITECH PROJECT, 2023
** MY_PRINTF_H_
** File description:
** Header for my_printf
*/

#ifndef MY_PRINTF_H_
    #define MY_PRINTF_H_
typedef struct conversion_spec {
    char flag_character;
    int field_width;
    int precision;
    int length_modifier;
    char conversion_specifier;
} conversion_spec_t;
#endif /* MY_PRINTF_H_ */
