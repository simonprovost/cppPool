/*
** EPITECH PROJECT, 2018
** //name_project
** File description:
** //todo
*/

#ifndef DAY_AENEMY_HPP
#define DAY_AENEMY_HPP

#include <string>

class AEnemy {

    public:

        AEnemy(int , const std::string &);
        virtual ~AEnemy ();
        virtual void takeDamage(int);
        virtual const std::string &getType() const;
        int getHP() const;

    protected:

        int _hp;
        const std::string _type;
};

#endif //DAY_AENEMY_HPP
