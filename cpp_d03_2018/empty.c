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

static int empty(const string_t *this)
{
    return (this->size(this) > 0 ? 0 : 1);
}