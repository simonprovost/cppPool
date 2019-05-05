/*
** EPITECH PROJECT, 2018
** func_ptr
** File description:
** .h
*/

#ifndef DAY2_FUNC_PTR_H
#define DAY2_FUNC_PTR_H

typedef enum action_e
{
    PRINT_NORMAL,
    PRINT_REVERSE,
    PRINT_UPPER,
    PRINT_42
} action_t;


typedef struct action_print {
    action_t action;
    void (*my_func)();
} action_print_t;

void do_action(action_t action, char *str);
void print_normal(char *str);
void print_reverse(char *str);
void print_upper(char *str);

void print_42(char *str);

#endif //DAY2_FUNC_PTR_H
