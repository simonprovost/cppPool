/*
** EPITECH PROJECT, 2018
** //name_project
** File description:
** //todo
*/

#ifndef DAY_ONETIME_HPP
#define DAY_ONETIME_HPP

#include <string>
#include "IEncryptionMethod.hpp"

class OneTime : public IEncryptionMethod {
    private:

    protected:
    std::string _key;
    int idx;

    public:

    OneTime(const std::string &key);
    void encryptChar(char plainchar) override;
    void decryptChar(char cipherchar) override;
    void reset() override;
};

#endif //DAY_ONETIME_HPP
