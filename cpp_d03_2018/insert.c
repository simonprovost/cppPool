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

static void insert_c(string_t *this, size_t pos, const char *str)
{
    char *temp_end = NULL;
    char *temp_begin = NULL;
    char *res = NULL;

    if (pos > this->size(this) || pos < 0 || !str) {
        (pos > this->size(this)) ? (this->append_c(this, str)) : 0;
        return;
    }
    temp_end = strdup(this->str + pos);
    temp_begin = strdup(this->str);
    temp_begin[pos] = 0;
    this->clear(this);
    this->append_c(this, temp_begin);
    this->append_c(this, str);
    this->append_c(this, temp_end);
}

static void insert_s(string_t *this, size_t pos, const string_t *str)
{
    if (!str)
        return;
    insert_c(this, pos, str->str);
}