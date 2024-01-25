/*
** EPITECH PROJECT, 2024
** ppool12
** File description:
** Toy
*/

#include "Toy.hpp"

#include <utility>

Toy::Toy() : _type(Toy::BASIC_TOY), _name("toy") {}
Toy::Toy(Toy::ToyType type, std::string name, std::string filename)
    : _type(type), _name(std::move(name)), _picture(filename) {}

Toy::ToyType Toy::getType() const { return _type; }
std::string Toy::getName() const { return _name; }
void Toy::setName(std::string name) { _name = std::move(name); }
bool Toy::setAscii(std::string filename) {
    _picture.getPictureFromFile(filename);
    return _picture.data != "ERROR";
}
std::string Toy::getAscii() const { return _picture.data; }
