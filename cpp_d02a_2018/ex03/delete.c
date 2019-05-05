/*
** EPITECH PROJECT, 2018
** delete
** File description:
** .c
*/

#include "generic_list.h"
#include <stdio.h>
#include <stdlib.h>

bool_t list_del_elem_at_front(list_t *front_ptr) {
    list_t temp = NULL;

    if (list_is_empty(*front_ptr) == TRUE)
        return (FALSE);
    temp = *front_ptr;
    temp = temp->next;
    *front_ptr = temp;
    return (TRUE);
}

bool_t list_del_elem_at_back(list_t *front_ptr)
{
    int size_list = 0;
    list_t temp = NULL;

    if (list_is_empty(*front_ptr) == TRUE)
        return (FALSE);
    size_list = list_get_size(*front_ptr);
    temp = *front_ptr;
    for (int i = 0 ; i < size_list - 2 ; i++)
        temp = temp->next;
    temp->next = NULL;
    return (TRUE);
}

bool_t list_del_elem_at_position(list_t *front_ptr, unsigned int position)
{
    static unsigned int recurs_count = 0;
    list_t temp = NULL;

    if (list_is_empty(*front_ptr) == TRUE)
        return (0);
    temp = *front_ptr;
    if (recurs_count == 0) {
        if (position == 0)
            return (list_del_elem_at_front(front_ptr));
        else if (position > list_get_size(*front_ptr))
            return (FALSE);
    }
    if (recurs_count == position -1) {
        temp->next = temp->next->next;
        *front_ptr = temp;
        return (TRUE);
    }
    recurs_count++;
    list_del_elem_at_position(&temp->next, position);
    return (TRUE);
}

void list_clear(list_t * front)
{
    list_t current = *front;
    list_t next;

    while (current != NULL) {
        next = current->next;
        free(current);
        current = next;
    }
    free((*front));
    *front = NULL;
}