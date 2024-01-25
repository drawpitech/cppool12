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
    Buzz(std::string name, std::string ascii = "buzz.txt");

    bool speak(std::string statement) override;
    bool speak_es(std::string statement) override;
};
