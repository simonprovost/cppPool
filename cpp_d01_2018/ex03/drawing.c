/*
** EPITECH PROJECT, 2018
** drawing
** File description:
** .c
*/

#include "drawing.h"

void  draw_square(uint32_t **img , const point_t *origin, size_t size,
    uint32_t color)
{
    for (uint32_t i = 0 ; i < size ; i++) {
        for (uint32_t j = 0 ; j < size ; j++) {
            img[origin->y + j][origin->x + i] = color;
        }
    }
}