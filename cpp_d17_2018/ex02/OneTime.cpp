/*
** EPITECH PROJECT, 2018
** //name_project
** File description:
** //todo
*/

#include <iostream>
#include "OneTime.hpp"

OneTime::OneTime(const std::string &key)
{
    this->_key = key;
    this->idx = 0;
}

void OneTime::encryptChar(char plainchar)
{
    char ch = plainchar;
    int OPT_base_key = (this->_key[this->idx] > 96) ? 97 : 65;

    if (isalpha(ch) && isupper(ch))
        ch = static_cast<char>(
            (ch - 65 + (this->_key[this->idx] - (OPT_base_key))) % 26 + 65);
    else if (isalpha(ch) && islower(ch))
        ch = static_cast<char>(
            (ch - 97 + (this->_key[this->idx] - (OPT_base_key))) % 26 + 97);
    std::cout << ch;
    this->idx++;
    this->idx %= this->_key.size();
}

void OneTime::decryptChar(char cipherchar)
{
    char ch = cipherchar;
    int OPT_base_key = (this->_key[this->idx] > 96) ? 97 : 65;

    if (isalpha(ch) && isupper(ch))
        ch = static_cast<char>(
            (ch - 90 - (this->_key[this->idx] - OPT_base_key)) % 26 + 90);
    else if (isalpha(ch) && islower(ch))
        ch = static_cast<char>(
            (ch - 122 - (this->_key[this->idx] - OPT_base_key)) % 26 + 122);
    std::cout << ch;
    this->idx++;
    this->idx %= this->_key.size();
}

void OneTime::reset()
{
    this->idx = 0;
}
