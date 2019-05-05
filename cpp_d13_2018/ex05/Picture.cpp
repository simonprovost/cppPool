/*
** EPITECH PROJECT, 2018
** //name_project
** File description:
** //todo
*/

#include <fstream>
#include <sstream>
#include <cstring>
#include "Picture.hpp"

bool Picture::getPictureFromFile(const std::string &file)
{
    std::ifstream PicFile(file.data());

    if (PicFile.is_open()) {
        std::stringstream buff;

        buff << PicFile.rdbuf();
        this->data = buff.str();
        PicFile.close();
        return (true);
    }
    this->data = "ERROR";
    return (false);
}

Picture::Picture(const std::string &file)
{
    if (strcmp(file.data(), "") == 0)
        this->data = "";
    else
        this->getPictureFromFile(file);
}

const std::string &Picture::getData() const
{
    return data;
}

Picture::~Picture()
{
}

Picture &Picture::operator=(const Picture &obj)
{
    this->data = obj.getData();
    return *this;
}

Picture::Picture(const Picture &obj)
{
    this->data = obj.getData();
}

Picture::Picture()
{
    this->data = "";
}

void Picture::setData(const std::string &data)
{
    Picture::data = data;
}

