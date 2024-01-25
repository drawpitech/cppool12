/*
** EPITECH PROJECT, 2024
** ppool12
** File description:
** Buzz
*/

#include "Buzz.hpp"

#include <iostream>
#include <utility>

Buzz::Buzz(std::string name, std::string ascii)
    : Toy(WOODY, std::move(name), std::move(ascii)) {}

void Buzz::speak(std::string statement) {
    std::cout << "BUZZ: ";
    Toy::speak(std::move(statement));
}
void Buzz::speak_es(std::string statement) {
    std::cout << "BUZZ: ";
    Toy::speak_es(std::move(statement), true);
}
