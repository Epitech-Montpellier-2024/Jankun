/*
** EPITECH PROJECT, 2019
** EvalExpr
** File description:
** Main file of EvalExpr
*/

#include "include/my.h"

int eval_expr(char const *);

int    main(int ac, char **av)
{
    if (ac == 2) {
        my_put_nbr(eval_expr(av[1]));
        my_putchar('\n');
        return (0);
    }
    return (84);
}