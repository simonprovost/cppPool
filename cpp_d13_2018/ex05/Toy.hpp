/*
** EPITECH PROJECT, 2018
** //name_project
** File description:
** //todo
*/

#ifndef DAY_TOY_HPP
#define DAY_TOY_HPP

#include <string>
#include <ostream>
#include "Picture.hpp"

class Toy {
    public:
    enum ToyType {
        BASIC_TOY,
        ALIEN,
        BUZZ,
        WOODY,
    };

    private:
    std::string name;
    Picture picture;
    protected:

    ToyType type;

    public:

    class Error {
        private:

        protected:

        public:
        enum ErrorType {
            UNKNOWN,
            PICTURE,
            SPEAK,
        };
        std::string what() const;
        std::string where() const;
        ErrorType type;
    };
    Error obj_err;
    Error getLastError();

    Toy();
    virtual ~Toy();
    Toy(ToyType, std::string, std::string);
    Toy& operator=(const Toy&);
    Toy& operator<<(const std::string &);

    Toy (const Toy&);

    //getter
    ToyType getType() const;
    const std::string &getName() const;
    const Picture &getPicture() const;
    std::string const getAscii() const;

    //setter
    void setName(const std::string &name);
    bool setAscii(std::string FileName);

     //method
     virtual void speak(std::string const &sentence);
    virtual bool speak_es(std::string const &sentence);



};

std::ostream &operator<<(std::ostream &os, const Toy &toy);

#endif //DAY_TOY_HPP
