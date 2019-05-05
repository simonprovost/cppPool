/*
** EPITECH PROJECT, 2018
** tab_to_2dtab
** File description:
** .c
*/

#include <stdlib.h>
#include <stdio.h>

void tab_to_2dtab(const int *tab, int lenght, int width, int ***res)
{
    int **result = NULL;
    int idx = 0;

    if (!tab)
        return;
    result = malloc(sizeof(*result) * (lenght));
    for (int i = 0 ; i < (lenght) ; i++) {
        result[i] = malloc(sizeof(int *) * (width));
        for (int j = 0 ; j < width ; j++) {
            result[i][j] = tab[idx];
            idx += 1;
        }
    }
    *res = result;
}