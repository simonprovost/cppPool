/*
** EPITECH PROJECT, 2018
** ex03
** File description:
** .h
*/

#ifndef EX03_DRAWING_H
#define EX03_DRAWING_H

#include <stdint.h>
#include <stdio.h>

typedef struct point_s {
    unsigned int x;
    unsigned int y;
} point_t;

void  draw_square(uint32_t **img , const point_t *origin, size_t size,
    uint32_t color);

#endif //EX03_DRAWING_H
