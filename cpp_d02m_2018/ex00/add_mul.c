/*
** EPITECH PROJECT, 2018
** add_mul
** File description:
** .c
*/

void add_mul_4param(int first, int second, int *sum, int *product)
{
    *sum = first + second;
    *product = first * second;
}

void add_mul_2param(int *first, int *second)
{
    int first_temp = *first;
    int second_temp = *second;

    *first = first_temp + (second_temp);
    *second = first_temp * (second_temp);
}