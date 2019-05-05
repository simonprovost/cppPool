/*
** EPITECH PROJECT, 2018
** //name_project
** File description:
** //todo
*/

#ifndef DAY_KOALADOCTOR_HPP
#define DAY_KOALADOCTOR_HPP

#include <string>
#include "SickKoala.hpp"

class KoalaDoctor {
    public:
    KoalaDoctor();
    KoalaDoctor(std::string Name);
    void diagnose(SickKoala *Patient);
    void timeCheck();

    virtual ~KoalaDoctor();

    private:
    std::string Doctor_name;
    bool active;
};

#endif //DAY_KOALADOCTOR_HPP
