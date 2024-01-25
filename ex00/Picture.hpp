/*
** EPITECH PROJECT, 2024
** ppool12
** File description:
** Picture
*/

#pragma once

#include <string>

class Picture {
   public:
    Picture();
    Picture(const std::string& file);

    std::string data;
    bool getPictureFromFile(const std::string& file);
};
