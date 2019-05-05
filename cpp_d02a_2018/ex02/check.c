/*
** EPITECH PROJECT, 2018
** check
** File description:
** .c
*/

#include "generic_list.h"
#include <stdio.h>
#include <stdlib.h>

unsigned int list_get_size(list_t list)
{
    if (!list)
        return 0;
    return 1 + list_get_size(list->next);
}

bool_t list_is_empty(list_t list)
{
    if (!list)
        return (TRUE);
    else
        return (FALSE);
}