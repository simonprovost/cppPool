/*
** EPITECH PROJECT, 2018
** SickKoala
** File description:
** .cpp
*/

#include <iostream>
#include <regex>
#include "SickKoala.hpp"

SickKoala::SickKoala()
{
}

SickKoala::SickKoala(std::string Name)
{
    if (!Name.empty())
        name_patient = std::string(std::string(Name));
}

SickKoala::~SickKoala()
{
    std::cout << "Mr." << name_patient << ": Kreooogg!! I'm cuuuured!" <<
        std::endl;
    name_patient.empty();
}

void SickKoala::poke()
{
    std::cout << "Mr." << name_patient << ": Gooeeeeerrk!!" << std::endl;
}

std::string string_upper(std::string line)
{
    for (int i = 0 ; line[i] ; i++) {
        if (line[i] >= 97 && line[i] <= 122 && islower(line[i]))
            line[i] -= 32;
    }
    return (line);
}

bool SickKoala::takeDrug(std::string str)
{
    std::string temp;

    if (str.empty()) {
        std::cout << "Mr." << name_patient <<  ": Goerkreog!" <<
            std::endl;
        return (false);
    }
    if (str.compare("Buronzand") == 0) {
        std::cout << "Mr." << name_patient <<  ": And you'll sleep right away!"
            << std::endl;
        return (true);
    }
    str = string_upper(str);
    if (str.compare("MARS") == 0) {
        std::cout << "Mr." << name_patient <<  ": Mars, and it kreogs!" <<
            std::endl;
        return (true);
    }
    std::cout << "Mr." << name_patient <<  ": Goerkreog!" <<
        std::endl;
    return false;
}

void SickKoala::overDrive(std::string str)
{
    if (str.empty())
        return;
    std::string replaced = std::regex_replace(str, std::regex("\\Kreog!"),
        "1337!");
    std::cout << "Mr." << name_patient << ": " << replaced << std::endl;
}

std::string SickKoala::get_name()
{
    return std::__cxx11::string(name_patient);
}