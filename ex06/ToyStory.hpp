/*
** EPITECH PROJECT, 2024
** ppool12
** File description:
** ToyStory
*/

#pragma once

#include "Toy.hpp"
class ToyStory
{
   public:
    static void tellMeAStory(
        std::string filename, Toy &toy1, bool (Toy::*func1)(std::string),
        Toy &toy2, bool (Toy::*func2)(std::string));
};
