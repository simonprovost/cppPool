/*
** EPITECH PROJECT, 2018
** //name_project
** File description:
** //todo
*/

#ifndef DAY_MIXER_HPP
#define DAY_MIXER_HPP

#include "MixerBase.hpp"

class Mixer : public MixerBase {
    public:
    virtual ~Mixer();

    Mixer();

    public:
    void set_plugged(bool plugged);
};

#endif //DAY_MIXER_HPP
