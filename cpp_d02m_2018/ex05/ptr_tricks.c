/*
** EPITECH PROJECT, 2018
** ptr_tricks
** File description:
** .c
*/

#include <stdio.h>
#include <stdlib.h>
#include "ptr_tricks.h"

whatever_t *get_struct_ptr(int *member_ptr)
{
    whatever_t temp;

    return ((void *) member_ptr - abs((int) ((void *)&temp -
        (void *)&temp.member)));
}

int get_array_nb_elem(int *ptr1, int *ptr2)
{
    return (int) ((ptr2 - ptr1));
}