/*
** EPITECH PROJECT, 2018
** add
** File description:
** .c
*/

#include <stdlib.h>
#include <stdio.h>
#include "simple_btree.h"

bool_t btree_create_node(tree_t *node_ptr , double value)
{
    *node_ptr = malloc(sizeof(**node_ptr));
    if (btree_is_empty(*node_ptr)) {
        printf("malloc Failed.\n");
        return (FALSE);
    }
    (*node_ptr)->value = value;
    (*node_ptr)->left = NULL;
    (*node_ptr)->right = NULL;
    return (TRUE);
}