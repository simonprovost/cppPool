/*
** EPITECH PROJECT, 2018
** //name_project
** File description:
** //todo
*/

#ifndef DAY_COCONUT_HPP
#define DAY_COCONUT_HPP

#include "Fruit.hpp"

class Coconut : public Fruit {

    private:

    protected:

    public:
    Coconut();
    virtual ~Coconut();
    std::string getName() const override;
};

#endif //DAY_COCONUT_HPP
