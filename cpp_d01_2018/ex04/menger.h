/*
** EPITECH PROJECT, 2018
** menger
** File description:
** .h
*/

#ifndef CPP_D01_2018_MENGER_H
#define CPP_D01_2018_MENGER_H

#include <stdio.h>
#include <limits.h>
#include <zconf.h>
#include <ctype.h>
#include <math.h>
#include "drawing.h"

union Data_color {
    int i;
    char case_[4];
};

void menger(int size, int level, point_t point, unsigned int **img);
void  write_bmp_info_header(int fd, int size);
void  write_bmp_header(int fd, int size);

#endif //CPP_D01_2018_MENGER_H
