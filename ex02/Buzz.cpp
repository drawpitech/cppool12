/*
** EPITECH PROJECT, 2024
** ppool12
** File description:
** Buzz
*/

#include "Buzz.hpp"

#include <utility>

Buzz::Buzz(std::string name, std::string ascii)
    : Toy(WOODY, std::move(name), std::move(ascii)) {}
