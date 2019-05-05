/*
** EPITECH PROJECT, 2018
** //name_project
** File description:
** //todo
*/

#ifndef PROJECT_PARSER_HPP
#define PROJECT_PARSER_HPP

#include <iostream>

class Parser {

    private:
    int _result;

    public:
    Parser();
    ~Parser();
    void feed(std::string str);
    int	result() const;
    void reset();
};

#endif //PROJECT_PARSER_HPP
