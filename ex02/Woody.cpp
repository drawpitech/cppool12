/*
** EPITECH PROJECT, 2024
** ppool12
** File description:
** Woody
*/

#include "Woody.hpp"

#include <utility>

Woody::Woody(std::string name, std::string ascii)
    : Toy(WOODY, std::move(name), std::move(ascii)) {}
