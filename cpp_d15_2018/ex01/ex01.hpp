/*
** EPITECH PROJECT, 2018
** //name_project
** File description:
** //todo
*/

#ifndef POOL_EX01_HPP
#define POOL_EX01_HPP

#include <iostream>
#include <cstring>

template<typename T>
int compare (T const & a, T const &b) {
    if (a == b)
        return 0;
    return ((a < b) ? (-1) : (1));
}

template <>
int compare(char const *const &s1, char const *const &s2) {
    int r = std::strcmp(s1, s2);

    if (r == 0)
        return 0;
    return ((r < 0) ? (-1) : (1));
}

#endif //POOL_EX01_HPP
