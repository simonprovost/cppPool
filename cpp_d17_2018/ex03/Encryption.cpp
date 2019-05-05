/*
** EPITECH PROJECT, 2018
** //name_project
** File description:
** //todo
*/

#include <algorithm>
#include <iostream>
#include "Encryption.hpp"

Encryption::Encryption(IEncryptionMethod &method
    , void (IEncryptionMethod::*pFunction)(char)): _encrypMethod(method),
    _func(pFunction) {}

void Encryption::operator()(int c) {(_encrypMethod.*_func)(c);}

void Encryption::encryptString(IEncryptionMethod &encryptionMethod,
    const std::string &toEncrypt)
{
    encryptionMethod.reset();
    std::for_each(toEncrypt.begin(), toEncrypt.end(), [toEncrypt,
        &encryptionMethod](int c){encryptionMethod.encryptChar(c);});
    std::cout << std::endl;
}

void Encryption::decryptString(IEncryptionMethod &encryptionMethod,
    const std::string &toDecrypt)
{
    encryptionMethod.reset();
    std::for_each(toDecrypt.begin(), toDecrypt.end(), [toDecrypt,
        &encryptionMethod](int c){encryptionMethod.decryptChar(c); });
    std::cout << std::endl;
}

