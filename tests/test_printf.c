/*
** EPITECH PROJECT, 2023
** test_printf.c
** File description:
** Unit testing my_printf
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>

int my_printf(const char *restrict format, ...);

void redirect_all_std(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(my_printf, basic_string, .init = redirect_all_std,
    .disabled = 1)
{
    my_printf("Hello World");
    cr_assert_stdout_eq_str("Hello World");
}

Test(my_printf, basic_string_with_newline, .init = redirect_all_std,
    .disabled = 1)
{
    my_printf("Hello World\n");
    cr_assert_stdout_eq_str("Hello World\n");
}
