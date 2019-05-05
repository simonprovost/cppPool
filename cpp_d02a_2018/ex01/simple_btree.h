/*
** EPITECH PROJECT, 2018
** simple_btree
** File description:
** .h
*/

#ifndef SIMPLE_BTREE_H_
#define SIMPLE_BTREE_H_

/*
** Types
*/

typedef enum bool_e
{
    FALSE,
    TRUE
}   bool_t;

typedef struct node
{
    double      value;
    struct node *left;
    struct node *right;
}   node_t;

typedef node_t *tree_t;

/*
** Functions
*/

/* Informations */

bool_t          btree_is_empty(tree_t tree);
unsigned int    btree_get_size(tree_t tree);
unsigned int    btree_get_depth(tree_t tree);

/* Modifications */

bool_t  btree_create_node(tree_t *root_ptr, double value);
bool_t  btree_delete(tree_t *root_ptr);

/* Access */

double  btree_get_max_value(tree_t tree);
double  btree_get_min_value(tree_t tree);

#endif /* !SIMPLE_BTREE_H_ */
