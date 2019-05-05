/*
** EPITECH PROJECT, 2018
** cpp_d02m
** File description:
** ex04
*/

#ifndef CASTMANIA_H_
# define CASTMANIA_H_

/*
** Enumerations
*/

typedef enum instruction_type_e
{
    PRINT_INT,
    PRINT_FLOAT,
    ADD_OPERATION,
    DIV_OPERATION
}   instruction_type_t;

typedef enum div_type_e
{
    INTEGER,
    DECIMALE
}   div_type_t;

typedef enum add_type_e
{
    NORMAL,
    ABSOLUTE
}   add_type_t;

typedef enum e_output_type_e
{
    SILENT,
    VERBOSE
}   output_type_t;

/*
** Structures
*/

typedef struct integer_op_s
{
    int a;
    int b;
    int res;
}   integer_op_t;

typedef struct decimale_op_s
{
    int     a;
    int     b;
    float   res;
}   decimale_op_t;

typedef struct addition_s
{
    add_type_t      add_type;
    integer_op_t    add_op;
}   addition_t;

typedef struct division_s
{
    div_type_t  div_type;
    void        *div_op;
}   division_t;

typedef struct instruction_s
{
    output_type_t   output_type;
    void            *operation;
}   instruction_t;

/*
** Functions
*/

int     integer_div(int a, int b);
float   decimale_div(int a, int b);
void    exec_div(division_t *operation);

int     normal_add(int a, int b);
int     absolute_add(int a, int b);
void    exec_add(addition_t *operation);

void    exec_operation(instruction_type_t instruction_type, void *data);
void    exec_instruction(instruction_type_t instruction_type, void *data);

#endif /* CASTMANIA_H_ */
