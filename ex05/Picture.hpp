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
    Picture(const Picture& other) noexcept;
    Picture(const Picture&& other) noexcept;
    ~Picture();

    Picture& operator=(const Picture& other);
    Picture& operator=(Picture&& other) noexcept ;

    std::string data;
    bool getPictureFromFile(const std::string& file);
};
