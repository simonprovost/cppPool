/*
** EPITECH PROJECT, 2018
** //name_project
** File description:
** //todo
*/

#ifndef MY_CONVERT_TEMP_SICKKOALA_H
#define MY_CONVERT_TEMP_SICKKOALA_H

#include <string>

class SickKoala {
    public:
        SickKoala();
        SickKoala(std::string Name);
        void poke();
        bool takeDrug(std::string str);
        void overDrive(std::string str);
        std::string get_name();
        virtual ~SickKoala();

    private:
        std::string name_patient;
};

#endif //MY_CONVERT_TEMP_SICKKOALA_H
