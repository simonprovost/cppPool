/*
** EPITECH PROJECT, 2018
** cpp_d02a
** File description:
** ex00
*/

#ifndef SIMPLE_LIST_H_
#define SIMPLE_LIST_H_

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
    struct node *next;
}   node_t;

typedef node_t *list_t;

/*
** Functions
*/

/* Informations */

unsigned int    list_get_size(list_t list);
bool_t          list_is_empty(list_t list);
void            list_dump(list_t list);

/* Modification */

bool_t  list_add_elem_at_front(list_t *front_ptr, double elem);
bool_t  list_add_elem_at_back(list_t *front_ptr, double elem);
bool_t  list_add_elem_at_position(list_t *front_ptr, double elem,
    unsigned int position);

bool_t  list_del_elem_at_front(list_t *front_ptr);
bool_t  list_del_elem_at_back(list_t *front_ptr);
bool_t  list_del_elem_at_position(list_t *front_ptr, unsigned int position);

/* Value Access */

double   list_get_elem_at_front(list_t list);
double   list_get_elem_at_back(list_t list);
double   list_get_elem_at_position(list_t list, unsigned int position);

/* Node Access */

node_t  *list_get_first_node_with_value(list_t list, double value);

#endif /* !SIMPLE_LIST_H_ */