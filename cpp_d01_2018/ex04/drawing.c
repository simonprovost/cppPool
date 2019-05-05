/*
** EPITECH PROJECT, 2018
** drawing
** File description:
** .c
*/

#include "drawing.h"

int my_getnbr(char const *str)
{
    int operator = 1;
    long number = 0;

    if (str[0] == '0')
        str++;
    while (*str == '-' || *str == '+') {
        operator = ((*str == '-') ? operator * -1 : operator);
        str++;
    }
    while (*str >= '0' && *str <= '9') {
        number = (number * 10) + (*str - '0');
        str++;
    }
    number = number * operator;
    return (int)((number >= INT_MAX || number <= INT_MIN) ? 84 : number);
}

int numbers_only(const char *s)
{
    while (*s)
        if (isdigit(*s++) == 0)
            return (0);
    return (1);
}

int menger_error_gestion(int argc, char **argv)
{
    if (argc < 4 || !numbers_only(argv[2]) || !numbers_only(argv[3]))
        return (84);
    if (pow(my_getnbr(argv[3]), 3) > my_getnbr(argv[2]))
        return (84);
    return (0);
}

int error_gestion(int argc, char **argv)
{
    if (menger_error_gestion(argc, argv) == 84)
        return (84);
    return (0);
}

void  draw_square(uint32_t **img , const point_t *origin, size_t size,
    uint32_t color)
{
    for (uint32_t i = 0 ; i < size ; i++)
        for (uint32_t j = 0 ; j < size ; j++)
            img[origin->y + j][origin->x + i] = color;
}