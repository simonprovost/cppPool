/*
** EPITECH PROJECT, 2018
** get
** File description:
** .c
*/

#include "simple_list.h"
#include <stdio.h>
#include <stdlib.h>

double list_get_elem_at_front(list_t list)
{
    if (list_is_empty(list))
        return (0);
    return (list->value);
}

double list_get_elem_at_back(list_t list)
{
    int size_list = 0;
    list_t temp = NULL;

    if (list_is_empty(list) == TRUE)
        return (0);
    size_list = list_get_size(list);
    temp = list;
    for (int i = 0 ; i < size_list - 1 ; i++)
        temp = temp->next;
    return (temp->value);
}

double list_get_elem_at_position(list_t list, unsigned int position)
{
    static unsigned int recurs_count = 0;
    list_t temp = NULL;

    if (list_is_empty(list) == TRUE)
        return (0);
    temp = list;
    if (recurs_count == 0) {
        if (position == 0) {
            return (list_get_elem_at_front(list));
        } else if (position > list_get_size(list)) {
            return (0);
        }
    }
    if (recurs_count == position)
        return (temp->value);
    recurs_count++;
    return (list_get_elem_at_position(temp->next, position));
}

node_t * list_get_first_node_with_value(list_t list, double value)
{
    int size_list = 0;
    list_t temp = NULL;

    if (list_is_empty(list) == TRUE)
        return (FALSE);
    size_list = list_get_size(list);
    temp = list;
    for (int i = 0 ; i < size_list - 1 ; i++) {
        if (temp->value == value)
            return (temp);
        temp = temp->next;
    }
    return (NULL);
}