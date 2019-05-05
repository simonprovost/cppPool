/*
** EPITECH PROJECT, 2018
** func_ptr
** File description:
** .c
*/

#include "func_ptr.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"

action_print_t func_print[] = {
    {PRINT_NORMAL, print_normal},
    {PRINT_REVERSE, print_reverse},
    {PRINT_UPPER, print_upper},
    {PRINT_42, print_42},
    {4, NULL}
};

void print_normal(char *str)
{
    printf("%s\n", str);
}

void print_reverse(char *str)
{
    for (int i = strlen(str) - 1 ; i != -1 ; i--)
        printf("%c", str[i]);
    printf("\n");
}

void print_upper(char *str)
{
    for (int i = 0 ; str[i] ; i++) {
        if (str[i] >= 97 && str[i] <= 122)
            printf("%c", str[i] - 32);
        else
            printf("%c", str[i]);
    }
    printf("\n");
}

void print_42(char *str)
{
    (void)str;
    printf("42\n");
}

void do_action(action_t action, char *str)
{
    if (!str)
        return;
    for (int i = 0 ; func_print[i].action != 4 ; i++)
        if (func_print[i].action == action)
            func_print[i].my_func(str);
}