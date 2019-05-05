/*
** EPITECH PROJECT, 2018
** get
** File description:
** .c
*/

#include "simple_btree.h"
#include "stdlib.h"
#include "stdio.h"
#include "math.h"

double btree_get_max_value(tree_t tree)
{
    double max = 0;
    double leftMax = 0;
    double rightMax = 0;

    if (btree_is_empty(tree))
        return (0);
    max = tree->value;
    if (tree->left != NULL) {
        leftMax = btree_get_max_value(tree->left);
        if (max < leftMax)
            max = leftMax;
    }
    if (tree->right != NULL) {
        rightMax = btree_get_max_value(tree->right);
        if (max < rightMax)
            max = rightMax;
    }
    return max;
}

double btree_get_min_value(tree_t tree)
{
    double leftMin = 0;
    double rightMin = 0;
    double min = 0;

    if (btree_is_empty(tree))
        return (0);
    min = tree->value;
    if (tree->left != NULL) {
        leftMin = btree_get_min_value(tree->left);
        if (min > leftMin)
            min = leftMin;
    }
    if (tree->right != NULL) {
        rightMin = btree_get_min_value(tree->right);
        if (min > rightMin)
            min = rightMin;
    }
    return min;
}