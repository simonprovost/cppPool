/*
** EPITECH PROJECT, 2018
** castmania
** File description:
** .c
*/


#include "stdio.h"
#include "stdlib.h"
#include <stdio.h>
#include "castmania.h"
#include <float.h>

void print_value(void *values, int float_or_not)
{
    float *value_float;
    int *value_int;

    if (float_or_not == 1) {
        value_float = values;
        if (*value_float < FLT_MIN || *value_float > FLT_MAX)
            return;
        printf("%f\n", *value_float);
    } else {
        value_int = values;
        if (*value_int < -2147483648 || *value_int > 2147483647)
            return;
        printf("%d\n", *value_int);
    }
}

void exec_add_operation(void *data, addition_t *add, integer_op_t integer)
{
    instruction_t *temp = NULL;

    temp = data;
    add = temp->operation;
    exec_add(add);
    if (temp->output_type == VERBOSE) {
        integer = (add->add_op);
        printf("%d\n", integer.res);
    }
}

void exec_div_operation(void *data, division_t *div,
    decimale_op_t decimal)
{
    instruction_t *temp = NULL;
    integer_op_t *integer_temp;

    temp = data;
    div = temp->operation;
    exec_div(div);
    if (temp->output_type == VERBOSE) {
        (div->div_type == INTEGER) ? (integer_temp = (integer_op_t *)
            (div->div_op)) : 0;
        (div->div_type == INTEGER) ? (printf("%d\n",
            integer_temp->res)) : 0;
    } else if (div->div_type == DECIMALE) {
        decimal = *(decimale_op_t *) (div->div_op);
        printf("%d\n", (int)decimal.res);
    }
}

void exec_operation(instruction_type_t instruction_type, void *data)
{
    addition_t *add = NULL;
    division_t *div = NULL;
    integer_op_t integer;
    decimale_op_t decimal;

    if (!data)
        return;
    if (instruction_type == ADD_OPERATION)
        exec_add_operation(data, add, integer);
    else if (instruction_type == DIV_OPERATION)
        exec_div_operation(data, div, decimal);
    else {
        instruction_type == PRINT_FLOAT ? print_value(data, 1) :
            instruction_type == PRINT_INT ? print_value(data, 0) : 0;
    }
}

void exec_instruction(instruction_type_t instruction_type, void *data)
{
    if (!data)
        return;
    (instruction_type == PRINT_FLOAT) ? (print_value(data, 1)) :
        (instruction_type == PRINT_INT) ? (print_value(data, 0)) :
            (exec_operation(instruction_type, data));
}