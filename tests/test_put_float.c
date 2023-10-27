/*
** EPITECH PROJECT, 2023
** test_put_float.c
** File description:
** Responsible for testing my_put_float.c
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <float.h>

int my_put_float(double x, int precision);

static void redirect_all_std(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(my_put_float, default_precision, .init = redirect_all_std)
{
    my_put_float(1.455, 6);
    cr_assert_stdout_eq_str("1.455000");
}

Test(my_put_float, precision_0, .init = redirect_all_std)
{
    my_put_float(1.2, 0);
    cr_assert_stdout_eq_str("1");
}

Test(my_put_float, precision_0_edge_case, .init = redirect_all_std)
{
    my_put_float(1.5, 0);
    cr_assert_stdout_eq_str("2");
}

Test(my_put_float, precision_basic, .init = redirect_all_std)
{
    my_put_float(1.84898, 4);
    cr_assert_stdout_eq_str("1.8490");
}

Test(my_put_float, maximum_precision, .init = redirect_all_std)
{
    my_put_float(1.84898, DBL_DECIMAL_DIG);
    cr_assert_stdout_eq_str("1.84898000000000007");
}
