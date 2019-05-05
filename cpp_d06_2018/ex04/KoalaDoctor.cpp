/*
** EPITECH PROJECT, 2018
** KoalaDoctor
** File description:
** .cpp
*/

#include <string>
#include <iostream>
#include <sstream>
#include <fstream>
#include "KoalaDoctor.hpp"

KoalaDoctor::KoalaDoctor()
{
}

KoalaDoctor::~KoalaDoctor()
{
}

KoalaDoctor::KoalaDoctor(std::string Name)
{
    if (!Name.empty())
        Doctor_name = std::string(Name);
    std::cout << "Dr." << Doctor_name << ": I'm Dr." << Doctor_name << "! How \
    do you Kreog?" << std::endl;
    active = false;
}

std::string random_drug()
{
    std::string drugs[5] = {"mars", "Buronzand", "Viagra", "Extasy",
        "Eucalyptus lead"};

    return (drugs[random() % 5]);
}

void KoalaDoctor::diagnose(SickKoala *Patient)
{
    if (!Patient)
        return;
    std::cout << "Dr." << Doctor_name << ": So what's goerking you Mr." <<
        Patient->get_name() << "?" << std::endl;
    Patient->poke();
    std::string Filename = Patient->get_name();
    Filename += ".report";
    std::ofstream f(Filename);
    std::string drug_content = random_drug();
    if (f) {
        f << drug_content;
        f.close();
    }
}

void KoalaDoctor::timeCheck()
{
    if (!active) {
        active = true;
        std::cout << "Dr." << Doctor_name << ": Time to get to work!" <<
            std::endl;
    } else {
        active = false;
        std::cout << "Dr." << Doctor_name <<
        ": Time to go home to my eucalyptus forest!" << std::endl;
    }
}