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

static size_t copy(const string_t *this , char *s , size_t n , size_t pos)
{
    int size_this_string = this->size(this);
    size_t j = 0;
    size_t i = 0;

    if (size_this_string == -1 || pos > size_this_string)
        return (0);
    for (i = pos; this->str[i] && j < n ; i++) {
        s[j++] = this->str[i];
    }
    if (this->str[j] == 0 && j < n)
        this->str[j++] = 0;
    return (j);
}