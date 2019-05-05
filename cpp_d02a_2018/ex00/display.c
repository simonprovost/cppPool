/*
** EPITECH PROJECT, 2018
** display
** File description:
** .c
*/

#include "simple_list.h"
#include <stdio.h>
#include <stdlib.h>

void list_dump(list_t list)
{
    int size_list = 0;
    list_t temp = NULL;

    if (list_is_empty(list) == TRUE)
        return;
    size_list = list_get_size(list);
    temp = list;
    for (int i = 0 ; i < size_list ; i++) {
        printf("%f\n", temp->value);
        temp = temp->next;
    }
}