/*
** EPITECH PROJECT, 2019
** EvalExpr
** File description:
** EvalExpr funcs
*/

#include "include/my.h"

int sum(char **);
int fact(char **);
int do_operation(int, char, int);

int    my_advanced_get_nbr(char **str)
{
    int nb = 0;
    int signe = 1;

    if ((*str)[0] == '+')
        *str += 1;
    else if ((*str)[0] == '-') {
        signe = -signe;
        *str += 1;
    }
    if ((*str)[0] == '(') {
        *str += 1;
        nb = sum(str);
        (*str)[0] == ')' ? *str += 1 : 0;
        return (nb * signe);
    }
    for (; (*str)[0] >= '0' && (*str)[0] <= '9'; *str += 1)
        nb = nb * 10 + (*str)[0] - '0';
    return (nb * signe);
}

int    fact(char **str)
{
    int right_nb;
    int left_nb;
    char operator;

    left_nb = my_advanced_get_nbr(str);
    while ((*str)[0] == '/' || (*str)[0] == '*' || (*str)[0] == '%') {
        operator = (*str)[0];
        *str += 1;
        right_nb = my_advanced_get_nbr(str);
        left_nb = do_operation(left_nb, operator, right_nb);
    }
    return (left_nb);
}

int    sum(char **str)
{
    int right_nb;
    int left_nb;
    char operator;

    left_nb = my_advanced_get_nbr(str);
    while ((*str)[0] != '\0' && (*str)[0] != ')') {
        operator = (*str)[0];
        *str += 1;
        if (operator == '+' || operator == '-')
            right_nb = fact(str);
        else
            right_nb = my_advanced_get_nbr(str);
        left_nb = do_operation(left_nb, operator, right_nb);
    }
    return (left_nb);
}

char    *remove_spaces(char *str)
{
    char *str_result = malloc(sizeof(char) * (my_strlen(str) + 1));
    int k = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            str_result[k] = str[i];
            k++;
        }
    }
    str_result[k + 1] = '\0';
    return (str_result);
}

int    eval_expr(char *str)
{
    str = remove_spaces(str);
    return (sum(&str));
}