/*
** EPITECH PROJECT, 2019
** EvalExpr
** File description:
** EvalExpr tests
*/

#include <criterion/criterion.h>

int eval_expr(char *str);

Test(eval_expr, should_return_5)
{
    char str[] = "3+42*(1-2/(3+4)-1%21)+2";
    int nb = eval_expr(str);
    cr_assert_eq(nb, 5);
}

Test(eval_expr, should_return_0)
{
    char str[] = "0";
    int nb = eval_expr(str);
    cr_assert_eq(nb, 0);
}

Test(eval_expr, should_return_1)
{
    char str[] = "1";
    int nb = eval_expr(str);
    cr_assert_eq(nb, 1);
}

Test(eval_expr, should_return_neg1)
{
    char str[] = "-1";
    int nb = eval_expr(str);
    cr_assert_eq(nb, -1);
}

Test(eval_expr, should_return_42)
{
    char str[] = "(((42)))";
    int nb = eval_expr(str);
    cr_assert_eq(nb, 42);
}

Test(eval_expr, should_return_neg2)
{
    char str[] = "2*-1";
    int nb = eval_expr(str);
    cr_assert_eq(nb, -2);
}

Test(eval_expr, should_return_neg2_par)
{
    char str[] = "2*(-1)";
    int nb = eval_expr(str);
    cr_assert_eq(nb, -2);
}

Test(eval_expr, should_return_neg744629760)
{
    char str[] = "-(12*(13+15/5*(6/(12+14%(30%5+(10*25)-46)+16)-20)/43)*20)*(-(12-98*42)*(16+63-50/3))";
    int nb = eval_expr(str);
    cr_assert_eq(nb, -744629760);
}

Test(eval_expr, should_return_11)
{
    char str[] = "(5 + 6)";
    int nb = eval_expr(str);
    cr_assert_eq(nb, 11);
}

Test(eval_expr, should_return_7)
{
    char str[] = "3++4";
    int nb = eval_expr(str);
    cr_assert_eq(nb, 7);
}

Test(eval_expr, should_return_9)
{
    char str[] = "(3+6+0";
    int nb = eval_expr(str);
    cr_assert_eq(nb, 9);
}