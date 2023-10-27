/*
** EPITECH PROJECT, 2023
** test_put_hexadecimal.c
** File description:
** Responsible for testing put_hexadecimal.c
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <float.h>

int my_put_hexadecimal(int n, int is_upper);

static void redirect_all_std(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(my_put_hexadecimal, default_case, .init = redirect_all_std)
{
    my_put_hexadecimal(10, 0);
    cr_assert_stdout_eq_str("a");
}

Test(my_put_hexadecimal, default_case_upper, .init = redirect_all_std)
{
    my_put_hexadecimal(10, 1);
    cr_assert_stdout_eq_str("A");
}

Test(my_put_hexadecimal, complex_case, .init = redirect_all_std)
{
    my_put_hexadecimal(123456789, 0);
    cr_assert_stdout_eq_str("75bcd15");
}

Test(my_put_hexadecimal, complex_case_upper, .init = redirect_all_std)
{
    my_put_hexadecimal(123456789, 1);
    cr_assert_stdout_eq_str("75BCD15");
}

Test(my_put_hexadecimal, zero_case, .init = redirect_all_std)
{
    my_put_hexadecimal(0, 0);
    cr_assert_stdout_eq_str("0");
}

Test(my_put_hexadecimal, edge_case, .init = redirect_all_std)
{
    my_put_hexadecimal(2147483647, 0);
    cr_assert_stdout_eq_str("7fffffff");
}
