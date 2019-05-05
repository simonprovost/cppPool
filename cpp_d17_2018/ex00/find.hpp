/*
** EPITECH PROJECT, 2018
** //name_project
** File description:
** //todo
*/

#ifndef POOL_FIND_HPP
#define POOL_FIND_HPP

#include <algorithm>
#include <iostream>

template <typename T> typename T::iterator do_find(T &container, int number)
{
    return (find(container.begin(), container.end(), number));
}

#endif //POOL_FIND_HPP
