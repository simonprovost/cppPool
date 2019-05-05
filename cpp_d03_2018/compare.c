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

static int compare_c(const string_t *this , const char * str)
{
    return (strcmp(this->str, str));
}

static int compare_s(const string_t *this , const string_t *str)
{
    return (compare_c(this, str->str));
}
