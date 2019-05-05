/*
** EPITECH PROJECT, 2018
** drawing
** File description:
** .h
*/

#ifndef CPP_D01_2018_DRAWING_H
#define CPP_D01_2018_DRAWING_H

#include <stdint.h>
#include <stdio.h>
#include <math.h>
#include <zconf.h>
#include <ctype.h>


typedef struct point_s {
    unsigned int x;
    unsigned int y;
} point_t;

void  draw_square(uint32_t **img , const point_t *origin, size_t size,
    uint32_t color);
int error_gestion(int argc, char **argv);
int my_getnbr(char const *str);

#endif //CPP_D01_2018_DRAWING_H