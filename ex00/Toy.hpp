/*
** EPITECH PROJECT, 2024
** ppool12
** File description:
** Toy
*/

#pragma once

#include <string>

#include "Picture.hpp"


class Toy {
   public:
    using ToyType = enum {
        BASIC_TOY,
        ALIEN,
    };

    Toy();
    Toy(Toy::ToyType type, std::string name, std::string filename);

    Toy::ToyType getType() const;
    std::string getName() const;
    void setName(std::string name);
    bool setAscii(std::string filename);
    std::string getAscii() const;

   private:
    Toy::ToyType _type;
    std::string _name;
    Picture _picture;
};
