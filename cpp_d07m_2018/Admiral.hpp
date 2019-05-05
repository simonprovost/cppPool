/*
** EPITECH PROJECT, 2018
** //name_project
** File description:
** //todo
*/

#ifndef DAY_ADMIRAL_HPP
#define DAY_ADMIRAL_HPP


#include <iostream>
#include "Federation.hpp"

namespace Starfleet
{
    class Admiral {
        public:

            Admiral(std::string name);
            ~Admiral();

            bool (Federation::Starfleet::Ship::*movePtr)(Destination d);
            void (Federation::Starfleet::Ship::*firePtr)(Borg::Ship *target);

            void fire(Federation::Starfleet::Ship *ship, Borg::Ship *target);
            bool move(Federation::Starfleet::Ship *ship, Destination d);

        private:

            std::string _name;

    };

} // Starfleet


#endif //DAY_ADMIRAL_HPP
