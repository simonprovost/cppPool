/*
** EPITECH PROJECT, 2018
** //name_project
** File description:
** //todo
*/

#include <iostream>
#include "Skat.hpp"

Skat::Skat(const std::string &name, int stimPaks)
{
    this->_name = name;
    this->_nbrStimPaks = stimPaks;
}

Skat::~Skat()
{
}

int &Skat::stimPaks()
{
    return (this->_nbrStimPaks);
}

const std::string &Skat::name()
{
    return (this->_name);
}


void Skat::shareStimPaks(int number, int &stock)
{
     if (this->_nbrStimPaks < number) {
         std::cout << "Don't be greedy" << std::endl;
    } else {
         stock += number;
         this->_nbrStimPaks -= number;
         std::cout << "Keep the change." << std::endl;
    }
}

void Skat::addStimPaks(unsigned int number)
{
    if (number == 0) {
        std::cout << "Hey boya, did you forget something?" << std::endl;
    } else {
        this->_nbrStimPaks += number;
    }
}

void Skat::useStimPaks()
{
    if (this->_nbrStimPaks > 0) {
        this->_nbrStimPaks -= 1;
        std::cout << "Time to kick some ass and chew bubble gum." << std::endl;
    } else {
        std::cout << "Mediiiiiic" << std::endl;
    }
}

void Skat::status()
{
    std::cout << "Soldier " << this->_name << " reporting " <<
    this->_nbrStimPaks << " stimpaks remaining sir!" << std::endl;
}
