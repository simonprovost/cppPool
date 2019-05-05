/*
** EPITECH PROJECT, 2018
** //name_project
** File description:
** //todo
*/

#ifndef DAY_KOALANURSE_HPP
#define DAY_KOALANURSE_HPP

#include "SickKoala.hpp"

class KoalaNurse {
    public:
    KoalaNurse();
    KoalaNurse(int Id);

    void giveDrug(std::string Drug, SickKoala *Patient);
    std::string readReport(std::string Filename);

    void timeCheck();


    virtual ~KoalaNurse();

    private:
    int Id_nurse;
    bool active;
};

#endif //DAY_KOALANURSE_HPP
