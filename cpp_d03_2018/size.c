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

static int size (const string_t *this)
{
    int	size = 0;

    if (!this)
        return (-1);
    if (this->str) {
        size = strlen(this->str);
        return (size);
    }
    return (-1);
}