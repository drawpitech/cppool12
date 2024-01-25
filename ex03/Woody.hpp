/*
** EPITECH PROJECT, 2024
** ppool12
** File description:
** Woody
*/

#pragma once

#include "Toy.hpp"

class Woody : public Toy {
   public:
    Woody(std::string name, std::string ascii = "woody.txt");

    void speak(std::string statement);
};
