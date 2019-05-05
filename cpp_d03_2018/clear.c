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

static void	clear(string_t *this)
{
    if (this->str && this)
        memset(this->str, 0, strlen(this->str));
}