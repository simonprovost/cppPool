/*
** EPITECH PROJECT, 2018
** Koalanurse
** File description:
** .cpp
*/

#include <iostream>
#include <fstream>
#include <sstream>
#include "KoalaNurse.hpp"
#include "SickKoala.hpp"

KoalaNurse::KoalaNurse()
{
}

KoalaNurse::~KoalaNurse()
{
    std::cout << "Nurse " << Id_nurse << ": Finally some rest!" << std::endl;
}

KoalaNurse::KoalaNurse(int Id)
{
    Id_nurse = Id;
    active = false;
}

void KoalaNurse::giveDrug(std::string Drug, SickKoala *Patient)
{
    (*Patient).takeDrug(Drug);
}

std::string KoalaNurse::readReport(std::string Filename)
{
    std::string empty;

    if (Filename.empty())
        return (empty);
    if (Filename.find(".report") != std::string::npos) {
        std::ifstream file(Filename);
        if (file.is_open()) {
            std::stringstream buffer;
            buffer << file.rdbuf();
            std::string name_patient = Filename.substr(0, Filename.find('.'));
            std::cout << "Nurse " << Id_nurse << ": Kreog! Mr." <<
                name_patient << " needs a " << buffer.str() << "!" << std::endl;
            return (buffer.str());
        } else
            return (empty);
    }
    return (empty);
}

void KoalaNurse::timeCheck()
{
    if (!active) {
        active = true;
        std::cout << "Nurse " << Id_nurse << ": Time to get to work!" <<
            std::endl;
    } else {
        active = false;
        std::cout << "Nurse " << Id_nurse <<
        ": Time to go home to my eucalyptus forest!" << std::endl;
    }
}

#include "KoalaDoctor.hpp"

int main(void)
{
    KoalaNurse nurse(42);
    SickKoala koala("Michel");
    KoalaDoctor doctor("House");

    doctor.timeCheck();
    doctor.diagnose(&koala);
    doctor.timeCheck();
    doctor.timeCheck();
    return (0);
}