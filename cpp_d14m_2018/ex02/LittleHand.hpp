/*
** EPITECH PROJECT, 2018
** //name_project
** File description:
** //todo
*/

#ifndef DAY_LITTLEHAND_HPP
#define DAY_LITTLEHAND_HPP

#include "FruitBox.hpp"
#include "Coconut.hpp"

class LittleHand {
    private:

    protected:

    public:
    static void  sortFruitBox(FruitBox &unsorted , FruitBox &lemons ,
        FruitBox &bananas , FruitBox &limes);

    static FruitBox *const *organizeCoconut(Coconut const *const *coconuts);
};

#endif //DAY_LITTLEHAND_HPP
