/*
** EPITECH PROJECT, 2018
** //name_project
** File description:
** //todo
*/

#include <iostream>
#include "LittleHand.hpp"
#include "Banana.hpp"
#include "Lime.hpp"
#include "Mixer.hpp"
#include <math.h>

float size_of_2d_tab(Coconut const *const *coconuts)
{
    int size = 0;

    while(coconuts[size++]);
    return (size);
}

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

FruitBox * const * LittleHand::organizeCoconut(Coconut const * const * coconuts)
{
    float size = 0;
    int	i = 0;
    FruitBox	**pack;

    if (!coconuts)
        return (nullptr);
    if (coconuts[0] == nullptr) {
        pack = new FruitBox*[1];
        pack[0] = nullptr;
        return pack;
    }
    size = ceil(size_of_2d_tab(coconuts) / 6);
    pack = new FruitBox*[(int)size + 1];
    int x = 0;
    while (i < size)
        pack[i++] = nullptr;
    i = 0;
    while (coconuts[x++]) {
        (pack[i] == nullptr) ? (pack[i] = new FruitBox(6)) : 0;
        pack[i]->putFruit(const_cast<Coconut *>(coconuts[x]));
        (pack[i]->nbFruits() == 6) ? i++ : 0;
    }
    pack[(int)size] = nullptr;
    return pack;
}

void LittleHand::plugMixer(MixerBase &mixer)
{
    Mixer obj = Mixer();
    obj.set_plugged(true);
    mixer = obj;
}

