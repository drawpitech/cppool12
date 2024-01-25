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
        ALIEN,
        BASIC_TOY,
        BUZZ,
        WOODY,
    };

    Toy();
    Toy(Toy::ToyType type, std::string name, std::string filename);
    Toy(const Toy& other) noexcept;
    Toy(const Toy&& other) noexcept;
    ~Toy();

    Toy& operator=(const Toy& other);
    Toy& operator=(Toy&& other) noexcept;
    Toy& operator<<(const std::string& str);

    Toy::ToyType getType() const;
    std::string getName() const;
    void setName(std::string name);
    bool setAscii(std::string filename);
    std::string getAscii() const;

    virtual void speak(std::string statement);

   private:
    Toy::ToyType _type;
    std::string _name;
    Picture _picture;
};

std::ostream& operator<<(std::ostream& os, const Toy& toy);
