/*
** EPITECH PROJECT, 2018
** //name_project
** File description:
** //todo
*/

#ifndef DAY_BORGQUEEN_HPP
#define DAY_BORGQUEEN_HPP


#include "Borg.hpp"

namespace Borg
{

    class BorgQueen {

        public:

        BorgQueen();
        ~BorgQueen();
        bool (Borg::Ship::*movePtr)(Destination d);

        void (Borg::Ship::*firePtr)(Federation::Starfleet::Ship *);
        void (Borg::Ship::*destroyPtr)(Federation::Ship *);

        bool move(Borg::Ship *ship, Destination dest);
        void fire(Borg::Ship *ship, Federation:: Starfleet::Ship *target);
        void destroy(Borg::Ship *ship, Federation::Ship *target);

        private:
    };

} // Borg

#endif //DAY_BORGQUEEN_HPP
