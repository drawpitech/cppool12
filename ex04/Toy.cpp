/*
** EPITECH PROJECT, 2024
** ppool12
** File description:
** Toy
*/

#include "Toy.hpp"

#include <iostream>
#include <utility>

Toy::Toy() : _type(Toy::BASIC_TOY), _name("toy") {}
Toy::Toy(Toy::ToyType type, std::string name, std::string filename)
    : _type(type), _name(std::move(name)), _picture(filename) {}
Toy::Toy(const Toy& other) noexcept = default;
Toy::Toy(const Toy&& other) noexcept
    : _type(other._type), _name(other._name), _picture(other._picture) {}
Toy::~Toy() = default;

Toy& Toy::operator=(const Toy& other) = default;
Toy& Toy::operator=(Toy&& other) noexcept = default;
Toy& Toy::operator<<(const std::string& str) {
    _picture.data = str;
    return *this;
}

Toy::ToyType Toy::getType() const { return _type; }
std::string Toy::getName() const { return _name; }
void Toy::setName(std::string name) { _name = std::move(name); }
bool Toy::setAscii(std::string filename) {
    _picture.getPictureFromFile(filename);
    return _picture.data != "ERROR";
}
std::string Toy::getAscii() const { return _picture.data; }

void Toy::speak(std::string statement) {
    std::cout << _name << " \"" << statement << "\"\n";
}

std::ostream& operator<<(std::ostream& os, const Toy& toy) {
    return os << toy.getName() << "\n" << toy.getAscii() << "\n";
}
