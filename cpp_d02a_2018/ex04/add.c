/*
** EPITECH PROJECT, 2018
** add
** File description:
** .c
*/

#include "generic_list.h"
#include <stdio.h>
#include <stdlib.h>

bool_t  list_add_elem_at_front(list_t *front_ptr, void *elem)
{
    list_t new_value = NULL;
    list_t temp = NULL;

    if (list_is_empty(*front_ptr) == TRUE) {
        (void)temp;
        *front_ptr = malloc(sizeof(**front_ptr));
        new_value = *front_ptr;
        new_value->value = elem;
        new_value->next = NULL;
        return (TRUE);
    }
    if ((new_value = malloc(sizeof(*new_value))) == NULL)
        return (FALSE);
    new_value->value = elem;
    temp = *front_ptr;
    new_value->next = (*front_ptr);
    *front_ptr = new_value;
    return (TRUE);
}

bool_t  list_add_elem_at_back(list_t *front_ptr, void *elem)
{
    int size_list = 0;
    list_t temp = NULL;

    if (list_is_empty(*front_ptr) == TRUE) {
        *front_ptr = malloc(sizeof(**front_ptr));
        temp = *front_ptr;
        temp->value = elem;
        temp->next = NULL;
        return (TRUE);
    }
    size_list = list_get_size(*front_ptr);
    temp = *front_ptr;
    for (int i = 0 ; i < size_list - 1 ; i++)
        temp = temp->next;
    temp->next = malloc(sizeof(*temp));
    temp->next->value = elem;
    temp->next->next = NULL;
    return (TRUE);
}

bool_t list_add_elem_at_position(list_t *front_ptr, void *elem,
    unsigned int position)
{
    int index = (int)position;
    list_t temp1;
    list_t temp2;

    if ((position > list_get_size(*front_ptr)))
        return (FALSE);
    else if (position == 0)
        return (list_add_elem_at_front(front_ptr, elem));
    for (; *front_ptr ; front_ptr = &(*front_ptr)->next) {
        if (--index)
            continue;
        temp2 = (*front_ptr)->next;
        temp1 = malloc(sizeof *temp1);
        temp1->value = elem;
        temp1->next = (*front_ptr)->next;
        (*front_ptr)->next = temp1;
        temp1->next = temp2;
        break;
    }
    return (TRUE);
}