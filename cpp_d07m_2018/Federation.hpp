/*
** EPITECH PROJECT, 2018
** //name_project
** File description:
** //todo
*/

#ifndef POOL_FEDERATION_HPP
#define POOL_FEDERATION_HPP

#include <string>
#include "WarpSystem.hpp"
#include "Destination.hpp"
#include "Borg.hpp"

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
    class Ship;
}

namespace Federation {

    class Ship {
        public:
        Ship();
        virtual ~Ship();

        WarpSystem::Core *core;


        Ship(int length, int width, std::string name);
        void setupCore(WarpSystem::Core *sys_core);
        void checkCore();
        WarpSystem::Core *getCore();

        bool move(int warp = 1, Destination d = VULCAN);
        bool move(int warp);
        bool move(Destination d);
        bool move();


        private:
        int _length;
        int _width;
        std::string _name;
        short _maxWarp;
        Destination _location ;
        Destination _home ;
    };

    namespace Starfleet {

        class Ensign {
            public:

            Ensign();
            virtual ~Ensign();
            Ensign(std::string name);

            private:

            std::string _name;

        };

        class Captain {
            public:
            Captain();
            virtual ~Captain();
            Captain(std::string _name);

            std::string getName();
            int getAge();
            void setAge(int age);

            private:
            std::string _name;
            int _age;

        };

        class Ship {
            public:
                //Ship();
                virtual ~Ship();

                WarpSystem::Core *core;


                Ship(int length , int width , std :: string name ,
                    short maxWarp , int torpedo = 0);
                Ship();
                void setupCore(WarpSystem::Core *sys_core);
                void checkCore();
                void promote(Captain *captain);

                bool move(int warp, Destination d);
                bool move(int warp);
                bool move(Destination d);
                bool move();

                int getShield();
                void setShield(int shield);
                int getTorpedo();
                void setTorpedo(int torpedo);

                void fire(Borg::Ship *target );
                void fire(int torpedoes ,Borg::Ship *target);

            private:
                Federation::Starfleet::Captain *Captain;
                int _length;
                int _width;
                std::string _name;
                short _maxWarp;

                Destination _location ;
                Destination _home ;

                int _shield ;
                int _photonTorpedo ;

        };
    }
}

#endif //POOL_FEDERATION_HPP
