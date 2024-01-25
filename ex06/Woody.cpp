/*
** EPITECH PROJECT, 2024
** ppool12
** File description:
** Woody
*/

#include "Woody.hpp"

#include <iostream>
#include <utility>

Woody::Woody(std::string name, std::string ascii)
    : Toy(WOODY, std::move(name), std::move(ascii)) {}

bool Woody::speak(std::string statement) {
    std::cout << "WOODY: ";
    return Toy::speak(std::move(statement));
}
