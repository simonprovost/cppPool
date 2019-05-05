/*
** EPITECH PROJECT, 2018
** //name_project
** File description:
** //todo
*/

#ifndef DAY_BANANA_HPP
#define DAY_BANANA_HPP

#include "Fruit.hpp"

class Banana : public Fruit {
    private:

    protected:

    public:
    Banana();
    virtual ~Banana();
    std::string getName() const override;
};

#endif //DAY_BANANA_HPP
