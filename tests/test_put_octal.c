/*
** EPITECH PROJECT, 2023
** test_put_hexadecimal.c
** File description:
** Responsible for testing put_hexadecimal.c
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>

int my_put_octal(int n);

static void redirect_all_std(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(my_put_octal, default_case, .init = redirect_all_std)
{
    my_put_octal(10);
    cr_assert_stdout_eq_str("12");
}

Test(my_put_octal, complex_case, .init = redirect_all_std)
{
    my_put_octal(547851);
    cr_assert_stdout_eq_str("2056013");
}

Test(my_put_octal, zero_case, .init = redirect_all_std)
{
    my_put_octal(0);
    cr_assert_stdout_eq_str("0");
}

Test(my_put_octal, edge_case, .init = redirect_all_std)
{
    my_put_octal(2147483647);
    cr_assert_stdout_eq_str("17777777777");
}
