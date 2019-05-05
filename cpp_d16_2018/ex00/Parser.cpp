/*
** EPITECH PROJECT, 2018
** //name_project
** File description:
** //todo
*/

#include <string>
#include "Parser.hpp"

int evalexpr(std::string expr);

void clear_string(std::string &expr, std::string &temp)
{
    for (char i : expr)
        if (i != ' ')
            temp += i;
}

void parenthesis(std::string &temp, std::string &temp_)
{
    int count = 0;
    std::string pattern;

    for (int i = 0; i < (int)temp.length(); i++) {
        if (temp[i] == '(') {
            count = 1;
            i++;
            for (;; pattern += temp[i++])
                if (temp[i] == '(')
                    count++;
                else if (temp[i] == ')')
                    if (--count == 0) {
                        i++;
                        break;
                    }
            temp_ += std::to_string(evalexpr(pattern));
        }
        temp_ += temp[i];
    }
}
int evalexpr(std::string str)
{
    std::string temp;
    std::string proc_str;

    clear_string(str, temp);
    parenthesis(temp, proc_str);

    for (int i = 0; i < (int)proc_str.length(); i++)
        if (proc_str[i] == '+')
            return evalexpr(proc_str.substr(0, i)) + evalexpr(proc_str.substr(i + 1,
                proc_str.length() - (i - 1)));
        else if (proc_str[i] == '-')
            return evalexpr(proc_str.substr(0, i)) - evalexpr(proc_str.substr(i + 1,
                proc_str.length() - (i - 1)));
        else if (proc_str[i] == '%')
            return evalexpr(proc_str.substr(0, i)) % evalexpr(proc_str.substr(i + 1,
                proc_str.length() - (i - 1)));
        else if (proc_str[i] == '*')
            return evalexpr(proc_str.substr(0, i)) * evalexpr(proc_str.substr(i + 1,
                proc_str.length() - (i - 1)));
        else if (proc_str[i] == '/')
            return evalexpr(proc_str.substr(0, i)) / evalexpr(proc_str.substr(i + 1,
                proc_str.length() - (i - 1)));
    return (std::atoi(proc_str.data()));
}

Parser::Parser()
{
    this->_result = 0;
}

Parser::~Parser()
{
}

void Parser::feed(std::string str)
{
    this->_result += evalexpr(std::move(str));
}

int Parser::result() const
{
    return (this->_result);
}

void Parser::reset()
{
    this->_result = 0;
}
