/*
** EPITECH PROJECT, 2018
** //name_project
** File description:
** //todo
*/

#ifndef DAY_BORG_HPP
#define DAY_BORG_HPP

#include "WarpSystem.hpp"
#include "Destination.hpp"
#include "Federation.hpp"

namespace Federation {
    class Ship;
    namespace Starfleet {
        class Ship;
    }
}

namespace WarpSystem {
    class QuantumReactor;
    class Core;
}



namespace Borg {

    class Ship {
        public:
        Ship (int weaponFrequency = 20 , short repair = 3) ;
        virtual ~Ship();

        WarpSystem::Core *core;

        void setupCore(WarpSystem::Core *sys_core);
        void checkCore();

        bool move(int warp = 9, Destination d = UNICOMPLEX);
        bool move(int warp);
        bool move(Destination d);
        bool move();

        int getShield () ;
        void setShield (int shield ) ;
        int getWeaponFrequency () ;
        void setWeaponFrequency (int frequency ) ;
        short getRepair () ;
        void setRepair ( short repair ) ;

        void fire (Federation::Starfleet::Ship *target ) ;
        void fire ( Federation::Ship * target ) ;
        void repair () ;

        private:
            int _side;
            short _maxWarp;

            Destination _location ;
            Destination _home ;

            int _shield ;
            int _weaponFrequency ;
            short _repair ;
    };
}

#endif //DAY_BORG_HPP
