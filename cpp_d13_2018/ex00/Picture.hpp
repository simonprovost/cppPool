/*
** EPITECH PROJECT, 2018
** //name_project
** File description:
** .hpp
*/

#ifndef DAY_PICTURE_HPP
#define DAY_PICTURE_HPP

#include <string>

class Picture {

    private:

    protected:
    std::string data;
    public:
    const std::string &getData() const;

    public:

    Picture(const std::string &file = "");
    bool getPictureFromFile(const std::string &file);
};

#endif //DAY_PICTURE_HPP
