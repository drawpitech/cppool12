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
    if (_picture.data == "ERROR") {
        _err.type = Error::PICTURE;
        return false;
    }
    return true;
}
std::string Toy::getAscii() const { return _picture.data; }

bool Toy::speak(std::string statement) {
    std::cout << _name << " \"" << statement << "\"\n";
    return true;
}
bool Toy::speak_es(std::string statement) {
    if (!_speak_es) {
        _err.type = Error::SPEAK;
        return false;
    }
    std::cout << _name << " senorita\"" << statement << "\"senorita\n";
    return true;
}

std::ostream& operator<<(std::ostream& os, const Toy& toy) {
    return os << toy.getName() << "\n" << toy.getAscii() << "\n";
}

Toy::Error Toy::getLastError() const { return _err; }

const char* Toy::Error::what() const noexcept {
    switch (type) {
        case PICTURE:
            return "bad new illustration";
        case SPEAK:
            return "wrong mode";
        case UNKNOWN:
        default:
            return "";
    };
}

const char* Toy::Error::where() const noexcept {
    switch (type) {
        case PICTURE:
            return "setAscii";
        case SPEAK:
            return "speak_es";
        case UNKNOWN:
        default:
            return "";
    };
}
