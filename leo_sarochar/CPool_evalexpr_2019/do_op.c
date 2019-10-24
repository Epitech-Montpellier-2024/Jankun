/*
** EPITECH PROJECT, 2019
** EvalExpr
** File description:
** EvalExpr do_op func
*/

#include "include/my.h"

int     do_operation(int nb_1, char operator, int nb_2)
{
    int result = 0;

    operator == '+' ? result = (nb_1 + nb_2) : 0;
    operator == '-' ? result = (nb_1 - nb_2) : 0;
    operator == '/' ? result = (nb_1 / nb_2) : 0;
    operator == '*' ? result = (nb_1 * nb_2) : 0;
    operator == '%' ? result = (nb_1 % nb_2) : 0;
    return (result);
}