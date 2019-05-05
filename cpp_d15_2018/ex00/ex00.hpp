/*
** EPITECH PROJECT, 2018
** //name_project
** File description:
** //todo
*/

#ifndef DAY_EX00_HPP
#define DAY_EX00_HPP

template <typename T> void swap(T& a,T& b)
{
    T temp = a;
    a = b;
    b = temp;
}

template <typename T> const T& min (const T& a, const T& b) {
    if (b == a)
        return (b);
    if (b > a)
        return a;
    else
        return b;
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

#endif //DAY_EX00_HPP
