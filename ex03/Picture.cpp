/*
** EPITECH PROJECT, 2024
** ppool12
** File description:
** Picture
*/

#include "Picture.hpp"

#include <fstream>
#include <utility>

Picture::Picture() = default;
Picture::Picture(const std::string& file) { getPictureFromFile(file); }
Picture::Picture(const Picture& other) noexcept = default;
Picture::Picture(const Picture&& other) noexcept : data(other.data) {}
Picture::~Picture() = default;

Picture& Picture::operator=(const Picture& other) = default;
Picture& Picture::operator=(Picture&& other) noexcept {
    data = std::move(other.data);
    return *this;
}

bool Picture::getPictureFromFile(const std::string& file) {
    std::ifstream filestream(file);

    if (!filestream) {
        data = "ERROR";
        return false;
    }

    std::string buf;
    data = "";
    while (getline(filestream, buf))
        data += buf + "\n";
    filestream.close();
    return true;
}
