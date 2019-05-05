/*
** EPITECH PROJECT, 2018
** //name_project
** File description:
** //todo
*/

#ifndef DAY_SKAT_HPP
#define DAY_SKAT_HPP

#include <string>

class Skat {
    public :

        Skat(const std::string &name = "bob" , int stimPaks = 15);
        virtual ~Skat();
        int &stimPaks() ;
        const std::string &name () ;
        void shareStimPaks (int number , int &stock ) ;
        void addStimPaks ( unsigned int number ) ;
        void useStimPaks () ;
        void status () ;

    private :

        int _nbrStimPaks;
        std::string _name;
};

#endif //DAY_SKAT_HPP
