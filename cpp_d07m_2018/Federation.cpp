/*
** EPITECH PROJECT, 2018
** //name_project
** File description:
** //todo
*/

#include <iostream>
#include "Federation.hpp"

Federation::Starfleet::Ship::Ship(int length, int width,
    std::string name, short maxWarp, int torpedo)
{
    this->_length = length;
    this->_width = width;
    this->_name = name;
    this->_maxWarp = maxWarp;
    this->_home = EARTH;
    this->_location = this->_home;
    this->_shield = 100;
    this->_photonTorpedo = torpedo;
    this->core = nullptr;

    std::cout<<"The ship USS "<<name<<" has been finished.\nIt is "
        <<length<<" m in length and " << width <<" m in width.\n"
                                                 "It can go to Warp "
        <<maxWarp<<"!\n";
    if (torpedo != 0)
        std::cout << "Weapons are set: " << torpedo << " torpedoes " <<
                                                        "ready." << std::endl;
}

Federation::Starfleet::Ship::Ship()
{
    this->_length = 289;
    this->_width = 132;
    this->_name = "USS Entreprise";
    this->_maxWarp = 6;
    this->_home = EARTH;
    this->_location = this->_home;
    this->_shield = 100;
    this->_photonTorpedo = 0;
    this->core = nullptr;

    std::cout<<"The ship USS "<< this->_name <<" has been finished.\nIt is "
        << this->_length <<" m in length and " << this->_width <<" m in width.\n"
                                                 "It can go to Warp "
        << this->_maxWarp <<"!\n";
}

Federation::Starfleet::Ship::~Ship()
{
}

void Federation::Starfleet::Ship::setupCore(WarpSystem::Core *sys_core)
{
    std::cout << "USS " << this->_name << ": The core is set." << std::endl;
    this->core = sys_core;
    core->checkReactor()->setStability(true);
}

void Federation::Starfleet::Ship::checkCore()
{
    std::string s;

    (this->core->checkReactor()->isStable()) ? (s = "stable") : (s =
        "unstable");
    std::cout<<"USS "<<this->_name<<": The core is "<<s<<" at the time.\n";

}

void Federation::Starfleet::Ship::promote(
    Federation::Starfleet::Captain *captain
)
{
    this->Captain = captain;
    std::cout << this->Captain->getName() << ": I'm glad to be the captain"
                                             " of the USS " << this->_name <<
        "." <<  std::endl;
}

bool Federation::Starfleet::Ship::move(int warp, Destination d)
{
    if ((warp <= _maxWarp) && (d != _location) && (core->checkReactor()
        ->isStable())) {
        this->_maxWarp = static_cast<short>(warp);
        this->_location = d;
        return (true);
    }
    return (false);
}

bool Federation::Starfleet::Ship::move(int warp)
{
    Destination d = this->_location;

    if ((warp <= _maxWarp) && (d != _location) && (core->checkReactor()
        ->isStable())) {
        this->_maxWarp = static_cast<short>(warp);
        this->_location = d;
        return (true);
    }
    return (false);
}

bool Federation::Starfleet::Ship::move(Destination d)
{
    int warp = this->_maxWarp;

    if ((warp <= _maxWarp) && (d != _location) && (core->checkReactor()
        ->isStable())) {
        this->_maxWarp = static_cast<short>(warp);
        this->_location = d;
        return (true);
    }
    return (false);
}

bool Federation::Starfleet::Ship::move()
{
    int warp = this->_maxWarp;
    Destination d = this->_location;

    if ((warp <= _maxWarp) && (d != _location) && (core->checkReactor()
        ->isStable())) {
        this->_maxWarp = static_cast<short>(warp);
        this->_location = d;
        return (true);
    }
    return (false);
}

int Federation::Starfleet::Ship::getShield()
{
    return (this->_shield);
}

void Federation::Starfleet::Ship::setShield(int shield)
{
    this->_shield = shield;
}

int Federation::Starfleet::Ship::getTorpedo()
{
    return (this->_photonTorpedo);
}

void Federation::Starfleet::Ship::setTorpedo(int torpedo)
{
    this->_photonTorpedo = torpedo;
}

void Federation::Starfleet::Ship::fire(Borg::Ship *target)
{
    if (this->_photonTorpedo == 0){
        std::cout << this->_name << ": No more torpedo to fire, " <<
        this->Captain->getName() << "!" << std::endl;
    }else{
        this->_photonTorpedo -= 1;
        target->setShield(target->getShield() - 50);
        std::cout << this->_name << ": Firing on target. " <<
        this->_photonTorpedo << " torpedoes remaining." << std::endl;
    }
}

void Federation::Starfleet::Ship::fire(int torpedoes, Borg::Ship *target)
{
    this->_photonTorpedo -= torpedoes;
    std::cout << this->_name <<": Firing on target. " << this->_photonTorpedo <<
    " torpedoes remaining." << std::endl;
    target->setShield(target->getShield() - (50 * torpedoes));

    if (this->_photonTorpedo <= 0)
        std::cout << this->_name << " : No more torpedo to fire, " <<
        this->Captain->getName() << "!" << std::endl;

}

Federation::Ship::Ship()
{
}

Federation::Ship::~Ship()
{
}

Federation::Ship::Ship(int length, int width, std::string name)
{
    this->_length = length;
    this->_width = width;
    this->_name = name;
    this->_maxWarp = 1;
    this->_home = VULCAN;
    this->_location = this->_home;
    this->core = nullptr;

    std::cout<<"The independant ship "<<name <<" just finished its "
                                               "construction.\n"
                                               "It is " <<length
                                               <<" m in length and "
                                               << width
                                               <<" m in width.\n";
}

void Federation::Ship::setupCore(WarpSystem::Core *sys_core)
{
    std::cout << this->_name << ": The core is set." << std::endl;
    this->core = sys_core;
    core->checkReactor()->setStability(true);
}

void Federation::Ship::checkCore()
{
    std::string s;

    (this->core->checkReactor()->isStable()) ? (s = "stable") : (s =
        "unstable");
    std::cout<<this->_name<<": The core is "<<s<<" at the time.\n";
}

bool Federation::Ship::move(int warp, Destination d)
{
    if ((warp <= _maxWarp) && (d != !_location) && (core->checkReactor()
        ->isStable())) {
        this->_maxWarp = static_cast<short>(warp);
        this->_location = d;
        return (true);
    }
    return (false);
}

bool Federation::Ship::move(int warp)
{
    Destination d = this->_location;

    return (move(warp, d));
}

bool Federation::Ship::move(Destination d)
{
    int warp = this->_maxWarp;

    return (move(warp, d));
}

bool Federation::Ship::move()
{
    int warp = this->_maxWarp;
    Destination d = this->_location;

    return (move(warp, d));
}

WarpSystem::Core *Federation::Ship::getCore()
{
    return (this->core);
}

Federation::Starfleet::Captain::Captain()
{
}

Federation::Starfleet::Captain::~Captain()
{
}

Federation::Starfleet::Captain::Captain(std::string _name)
{
    this->_name = _name;
}

std::string Federation::Starfleet::Captain::getName()
{
    return std::__cxx11::string(this->_name);
}

int Federation::Starfleet::Captain::getAge()
{
    return (this->_age);
}

void Federation::Starfleet::Captain::setAge(int age)
{
    this->_age = age;
}

Federation::Starfleet::Ensign::Ensign()
{
}

Federation::Starfleet::Ensign::~Ensign()
{
}

Federation::Starfleet::Ensign::Ensign(std::string name)
{
    this->_name = name;
    std::cout << "Ensign " << this->_name << ", awaiting orders." << std::endl;
}
