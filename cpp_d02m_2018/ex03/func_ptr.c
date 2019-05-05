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

void print_normal(const char *str)
{
    printf("%s\n", str);
}

void print_reverse(const char *str)
{
    for (int i = strlen(str) - 1 ; i != -1 ; i--)
        printf("%c", str[i]);
    printf("\n");
}

void print_upper(const char *str)
{
    for (int i = 0 ; str[i] ; i++) {
        if (str[i] >= 97 && str[i] <= 122)
            printf("%c", str[i] - 32);
        else
            printf("%c", str[i]);
    }
    printf("\n");
}

void print_42(const char *str)
{
    (void)str;
    printf("42\n");
}

void do_action(action_t action, const char *str)
{
    if (!str)
        return;
    switch (action) {
    case PRINT_NORMAL:
        print_normal(str);
        break;
    case PRINT_REVERSE:
        print_reverse(str);
        break;
    case PRINT_UPPER:
        print_upper(str);
        break;
    case PRINT_42:
        print_42(str);
        break;
    default:
        break;
    }
}