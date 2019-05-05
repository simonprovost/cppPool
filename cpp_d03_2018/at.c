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

static char at(const string_t *this , size_t pos)
{
    int i = 0;

    if (this && this->str) {
        while (this->str[i]) {
            if (i == pos)
                return (this->str[i]);
            i++;
        }
    }
    return (-1);
}
