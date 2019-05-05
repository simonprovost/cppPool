/*
** EPITECH PROJECT, 2018
** check
** File description:
** c
*/

#include "simple_btree.h"

bool_t btree_is_empty(tree_t tree)
{
    if (!tree)
        return (TRUE);
    return (FALSE);
}

unsigned int btree_get_size(tree_t tree)
{
    if (btree_is_empty(tree))
        return (0);
    return (btree_get_size(tree->left) + btree_get_size(tree->right) + 1);
}

unsigned int btree_get_depth(tree_t tree)
{
    static int depth_left;
    static int depth_right;

    if (btree_is_empty(tree))
        return (0);
    depth_left = btree_get_size(tree->left);
    depth_right = btree_get_size(tree->right);
    return (unsigned int)((depth_left) > (depth_right) ? (depth_left)
        :(depth_right));
}