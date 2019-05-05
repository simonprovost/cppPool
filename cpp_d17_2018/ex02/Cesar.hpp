/*
** EPITECH PROJECT, 2018
** //name_project
** File description:
** //todo
*/

#ifndef DAY_CESAR_HPP
#define DAY_CESAR_HPP

#include "IEncryptionMethod.hpp"

class Cesar : public IEncryptionMethod {

    private:

    protected:
    int _shift;


    public:
    Cesar();

    void encryptChar(char plainchar) override;
    void decryptChar(char cipherchar) override;
    void reset() override;

};

#endif //DAY_CESAR_HPP
