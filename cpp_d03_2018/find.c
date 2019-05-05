/*
** EPITECH PROJECT, 2018
** string
** File description:
** .c
*/


#include "string.h"
#include <stdlib.h>
#include <stdio.h>
#include <strings.h>
#include <string.h>

static int find_c(const string_t *this, const char *str, size_t pos)
{
    char *ret = NULL;

    if (!this || !str || !(this->str) || !(str) || pos > this->size(this))
        return (-1);
    if ((ret = strstr(this->str + pos, str)) == NULL)
        return (-1);
    return (ret - this->str);
}

static int find_s(const string_t *this, const string_t *str, size_t pos)
{
    return (find_c(this, str->str, pos));
}
