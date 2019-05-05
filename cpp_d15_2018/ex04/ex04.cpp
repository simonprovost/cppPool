/*
** EPITECH PROJECT, 2018
** //name_project
** File description:
** //todo
*/

#include "ex04.hpp"

template <typename T> bool equal(const T &a, const T &b)
{
    return a == b;
}

template bool	equal<int>(const int &a, const int &b);
template bool	equal<float>(const float &a, const float &b);
template bool	equal<double>(const double &a, const double &b);
template bool	equal<std::string>(const std::string &a, const std::string &b);

template<class T>
bool Tester<T>::equal(const T &a, const T &b)
{
    return a == b;
}

template bool	Tester<int>::equal(const int &a, const int &b);
template bool	Tester<float>::equal(const float &a, const float &b);
template bool	Tester<double>::equal(const double &a, const double &b);
template bool	Tester<std::string>::equal(const std::string &a, const std::string &b);

