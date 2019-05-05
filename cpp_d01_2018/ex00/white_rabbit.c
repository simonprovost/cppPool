/*
** EPITECH PROJECT, 2018
** white_rabbit
** File description:
** .c
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int follow_the_white_rabbit(void)
{
    static int all_sum = 0;
    int r = rand() % 37 + 1;

    all_sum += r;
    (r >= 4 && r <= 6) || (r >= 17 && r <= 21) || r == 28 ? printf("left\n") :
        (r >= 34 && r <= 36) || r == 13 ? printf("right\n") : (r == 15 |
            r == 23 || r == 10) ? printf("forward\n") : (r == 26 || r == 8 || r
            == 16 || r == 24 || r == 32) ? printf("backward\n") : 0;

    (r == 1 || r == 37 || all_sum >=
        397) ? printf("RABBIT!!!\n") : follow_the_white_rabbit();
    return (all_sum);
}