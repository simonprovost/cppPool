/*
** EPITECH PROJECT, 2018
** delete
** File description:
** .c
*/

#include <stdlib.h>
#include "simple_btree.h"

bool_t btree_delete(tree_t *root_ptr)
{
    if (btree_is_empty(*root_ptr))
        return (FALSE);
    btree_delete(&(*root_ptr)->left);
    btree_delete(&(*root_ptr)->right);
    free((*root_ptr));
    return (TRUE);
}