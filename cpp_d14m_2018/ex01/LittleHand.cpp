/*
** EPITECH PROJECT, 2018
** //name_project
** File description:
** //todo
*/

#include "LittleHand.hpp"
#include "Lime.hpp"
#include "Banana.hpp"

void LittleHand::sortFruitBox(FruitBox &unsorted, FruitBox &lemons,
    FruitBox &bananas, FruitBox &limes)
{
    if (unsorted.head() == nullptr) {
        return;
    }
    FruitBox temp = FruitBox(unsorted.getSize());
    Fruit *actual_fruit = unsorted.pickFruit();
    std::string type_name;

    while (actual_fruit) {
        type_name = actual_fruit->getName();
        if (dynamic_cast<Lime *>(actual_fruit)
        && limes.nbFruits() < limes.getSize()) {
            if (!limes.putFruit(actual_fruit))
                unsorted.putFruit(actual_fruit);
        } else if (dynamic_cast<Banana *>(actual_fruit)
        && bananas.nbFruits() < bananas.getSize()) {
            if(!bananas.putFruit(actual_fruit))
                unsorted.putFruit(actual_fruit);
        } else if (dynamic_cast<Lemon *>(actual_fruit)
        && lemons.nbFruits() < lemons.getSize()) {
            if (!lemons.putFruit(actual_fruit))
                unsorted.putFruit(actual_fruit);
        } else {
            temp.putFruit(actual_fruit);
        }
        actual_fruit = unsorted.pickFruit();
    }
    unsorted = temp;
}
