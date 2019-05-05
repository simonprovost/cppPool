/*
** EPITECH PROJECT, 2018
** div
** File description:
** .c
*/

#include "castmania.h"

int integer_div(int a, int b)
{
    if (b == 0)
        return (0);
    return (a / b);
}

float decimale_div(int a, int b)
{
    float res = 0;

    if (b == 0)
        return (0);
    res = a / b;
    return (res);
}

void exec_div(division_t *operation)
{
    integer_op_t *integer;
    decimale_op_t *decimal;

    if (!operation)
        return;
    if (operation->div_type == INTEGER) {
        integer = (integer_op_t *)(operation->div_op);
        integer->res = integer_div(integer->a, integer->b);
    } else if (operation->div_type == DECIMALE) {
        decimal = (decimale_op_t *)(operation->div_op);
        decimal->res = integer_div(decimal->a, decimal->b);
    }
}
