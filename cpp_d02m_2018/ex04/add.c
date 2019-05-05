/*
** EPITECH PROJECT, 2018
** add
** File description:
** .c
*/

#include "stdlib.h"
#include "stdio.h"
#include "castmania.h"

int my_abs(int i)
{
    return (i < 0) ? (-i) : (i);
}

int	normal_add(int a, int b)
{
    return (a + b);
}

int	absolute_add(int a, int b)
{
    return (my_abs(a) + my_abs(b));
}

void	exec_add(addition_t *operation)
{
    if (!operation)
        return;
    if (operation->add_type == NORMAL)
        operation->add_op.res = normal_add(operation->add_op.a,
            operation->add_op.b);
    else if (operation->add_type == ABSOLUTE)
        operation->add_op.res = absolute_add(operation->add_op.a,
            operation->add_op.b);
}
