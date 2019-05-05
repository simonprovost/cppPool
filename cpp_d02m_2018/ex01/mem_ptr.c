/*
** EPITECH PROJECT, 2018
** mem_ptr
** File description:
** .c
*/

#include <string.h>
#include "mem_ptr.h"
#include "stdio.h"
#include "stdlib.h"

int my_strlen(char *str)
{
    int count = 0;

    while (str[count] != '\0')
        count++;
    return (count);
}

char *my_strcat(char *dest, char *src)
{
    int i = 0;
    int j = 0;
    char *tm = NULL;

    if (!dest || !src)
        return (NULL);
    tm = malloc(sizeof(char) * my_strlen(dest) + my_strlen(src) + 1);
    while (i < my_strlen(dest)) {
        tm[i] = dest[i];
        i++;
    }
    while (j < my_strlen(src)) {
        tm[i] = src[j];
        j++;
        i++;
    }
    tm[i] = '\0';
    return (tm);
}

void add_str(const char *str1, const char *str2, char **res)
{
    if (!str1 || !str2) {
        *res = malloc(sizeof(*res) * 5);
        *res = strdup("NULL");
        return;
    }
    *res = my_strcat((char *)str1, (char *)str2);
}

void add_str_struct(str_op_t *str_op)
{
    if (!str_op || !str_op->str1 || !str_op->str2) {
        if (!str_op)
            str_op = malloc(sizeof(*str_op));
        str_op->str1 = strdup("NULL");
        str_op->str2 = strdup("NULL");
        str_op->res = strdup("NULL");
        return;
    }
    str_op->res = my_strcat((char *)str_op->str1, (char *)str_op->str2);
}