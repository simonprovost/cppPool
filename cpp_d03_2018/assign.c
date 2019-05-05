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

static void assign_s(string_t *this, const string_t *str)
{
    if (this->str)
        free(this->str);
    if (!(str->str)) {
        (this) ? (this->str = NULL) : 0;
        return;
    }
    if (this) {
        free(this->str);
        this->str = NULL;
        this->str = strdup(str->str);
    }
}

static void assign_c(string_t *this, const char *s)
{
    if (!s) {
        if (this) {
            free(this->str);
            this->str = NULL;
        }
        return;
    }
    if (this) {
        free(this->str);
        this->str = NULL;
        this->str = strdup((char *)s);
    }
}