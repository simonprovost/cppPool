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

static void aff(const string_t *this)
{
    if (!this)
        return;
    printf("%s", this->str);
}