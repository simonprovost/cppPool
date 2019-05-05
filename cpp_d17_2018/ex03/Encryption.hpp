/*
** EPITECH PROJECT, 2018
** //name_project
** File description:
** //todo
*/

#ifndef PROJECT_ENCRYPTION_HPP
#define PROJECT_ENCRYPTION_HPP

#include <string>
#include "IEncryptionMethod.hpp"

class Encryption {
    protected:
    IEncryptionMethod &_encrypMethod;
    void (IEncryptionMethod::*_func)(char);

    public:
    Encryption(IEncryptionMethod &, void (IEncryptionMethod::*pFunction)(char));
    static void encryptString(IEncryptionMethod &, const std::string &);
    static void decryptString(IEncryptionMethod &, const std::string &);
    void operator()(int);
};

#endif //PROJECT_ENCRYPTION_HPP
