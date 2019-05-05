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

static void append_s(string_t *this, const string_t *ap)
{
    if (!(ap->str))
        return;
    if (this->str == NULL)
        this->str = strdup(ap->str);
    else {
        this->str = realloc(this->str, (size_t)(strlen(this->str) + strlen
            (ap->str) + 1));
        this->str = strcat(this->str, ap->str);
    }
}

static void append_c(string_t *this, const char *ap)
{
    if (!ap)
        return;
    if (this->str == NULL)
        this->str = strdup(ap);
    else {
        this->str = realloc(this->str, (size_t)(strlen(this->str) + strlen
            (ap) + 1));
        this->str = strcat(this->str, ap);
    }
}
