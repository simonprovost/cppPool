/*
** EPITECH PROJECT, 2018
** //name_project
** File description:
** //todo
*/

#include <cctype>
#include <iostream>
#include "Cesar.hpp"

void Cesar::encryptChar(char plainchar)
{
    char ch = plainchar;

    if (isalpha(ch) && isupper(ch))
        ch = static_cast<char>(65 + ((ch - 65 + this->_shift) % 26));
    else if (isalpha(ch) && islower(ch))
        ch = static_cast<char>(97 + ((ch - 97 + this->_shift) % 26));
    std::cout << ch;
    _shift++;
}

void Cesar::decryptChar(char cipherchar)
{
    char ch = cipherchar;

    if (isalpha(ch) && isupper(ch)) {
        ch = static_cast<char>((ch - 65 - this->_shift) % 26);
        (ch < 0) ? ch += 26 : 0;
        ch += 65;
    }
    if (isalpha(ch) && islower(ch)) {
        ch = static_cast<char>((ch - 97 - this->_shift) % 26);
        (ch < 0) ? ch += 26 : 0;
        ch += 97;
    }
    std::cout << ch;
    _shift++;
}

void Cesar::reset()
{
  this->_shift = 3;
}

Cesar::Cesar() : _shift(3)
{
}
