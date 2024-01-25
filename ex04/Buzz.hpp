/*
** EPITECH PROJECT, 2024
** ppool12
** File description:
** Buzz
*/

#pragma once

#include "Toy.hpp"

class Buzz : public Toy {
   public:
    Buzz(std::string name, std::string ascii = "woody.txt");

    void speak(std::string statement);
};
