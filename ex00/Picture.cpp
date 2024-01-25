/*
** EPITECH PROJECT, 2024
** ppool12
** File description:
** Picture
*/

#include "Picture.hpp"

#include <fstream>

Picture::Picture() = default;
Picture::Picture(const std::string& file) { getPictureFromFile(file); }

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
