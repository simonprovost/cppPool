/*
** EPITECH PROJECT, 2018
** menger
** File description:
** .c
*/

#include "menger.h"

void menger(int size, int level, int x, int y)
{
    size /= 3;

    printf("%.3d %.3d %.3d\n", size, x + size , y + size);
    if (level > 1) {
        menger(size, --level, x, y);
        menger(size, level, x, y + size);
        menger(size, level, x, y + size * 2);
        menger(size, level, x + size, y);
        menger(size, level, x + size, y + size * 2);
        menger(size, level, x + size * 2, y);
        menger(size, level, x + size * 2, y + size);
        menger(size, level, x + size * 2, y + size * 2);
    }
}