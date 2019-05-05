/*
** EPITECH PROJECT, 2018
** //name_project
** File description:
** //todo
*/

#ifndef DAY_SQUAD_HPP
#define DAY_SQUAD_HPP

#include "ISquad.hpp"
#include <iostream>
#include <vector>

class Squad : public ISquad {

    public:
    Squad();
    Squad(Squad &copied);

    virtual ~Squad();

    int getCount() const override;
    ISpaceMarine *getUnit(int) override;
    int push(ISpaceMarine *) override;
    Squad &operator=(Squad const &rhs);

    private:
    std::vector<ISpaceMarine *> squad;
};

#endif //DAY_SQUAD_HPP
