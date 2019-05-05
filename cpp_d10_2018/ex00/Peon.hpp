/*
** EPITECH PROJECT, 2018
** //name_project
** File description:
** //todo
*/

#ifndef DAY_PEON_HPP
#define DAY_PEON_HPP

#include <string>
#include "Victim.hpp"

class Peon : public Victim {

    private:

    public:
    Peon(const std::string &name);
    ~Peon();

    void getPolymorphed()const override;
};

std::ostream& operator <<(std::ostream& os, Peon const& obj);

#endif //DAY_PEON_HPP
