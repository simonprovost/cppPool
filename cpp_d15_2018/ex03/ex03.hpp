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

template <typename T> void swap(T& a,T& b)
{
    T temp = a;
    a = b;
    b = temp;
}

template <typename T> const T& min (const T& a, const T& b) {
    std::cout << "template min" << std::endl;
    if (b == a)
        return (a);
    if (b > a)
        return a;
    else
        return b;
}

int const &min(const int &a, const int &b)
{
    std::cout << "non-template min" << std::endl;
    if (b == a)
        return (a);
    if (b > a)
        return a;
    else
        return b;
}

template <typename T> T templateMin (T const *a, int const len)
{
    T res;

    res = a[0];
    for (int i = 1 ; i < len ; i++)
        res = min<T>(res, a[i]);
    return (res);
}

int nonTemplateMin(int const *tab, int const len)
{
    int	i = 1;
    int	res;

    res = tab[0];
    while (i < len)
        res = min(res, tab[i++]);
    return (res);
}

template <typename T> const T& max (const T& a, const T& b) {
    if (b == a)
        return (b);
    if (b > a)
        return b;
    else
        return a;
}

template <typename T> const T add (const T& a, const T& b) {
    return (a+b);
}

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

template <typename T> void print(const T &elem) {
    std::cout << elem << std::endl;
}

template <typename T> void foreach (const T *elem, void (&func)
    (const T &elem), int len) {

    for (int i = 0 ; i < len ; i++)
        func(elem[i]);
}



#endif //POOL_EX01_HPP
