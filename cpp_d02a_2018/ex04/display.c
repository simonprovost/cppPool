/*
** EPITECH PROJECT, 2018
** display
** File description:
** .c
*/

#include "generic_list.h"
#include <stdio.h>
#include <stdlib.h>

void list_dump(list_t list, value_displayer_t val_disp)
{
    int size_list = 0;
    list_t temp = NULL;

    if (list_is_empty(list) == TRUE)
        return;
    size_list = list_get_size(list);
    temp = list;
    for (int i = 0 ; i < size_list ; i++) {
        val_disp(temp->value);
        temp = temp->next;
    }
}