/*
** EPITECH PROJECT, 2018
** //name_project
** File description:
** //todo
*/

#include "Mixer.hpp"

static int proc_mixer(FruitBox &box)
{
    int vitamins = 0;
    Fruit const *temp;

    while ((temp = box.pickFruit()) != nullptr)
        vitamins += temp->getVitamins();
    return (vitamins);
}

Mixer::Mixer()
{
    //this->_plugged = true;
    this->_mixfunc = &proc_mixer;
}

Mixer::~Mixer()
{
}

void Mixer::set_plugged(bool plugged)
{
    this->_plugged = plugged;
}
