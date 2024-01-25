/*
** EPITECH PROJECT, 2024
** ppool12
** File description:
** ToyStory
*/

#include "ToyStory.hpp"

#include <fstream>
#include <iostream>

void ToyStory::tellMeAStory(
    std::string filename, Toy &toy1, bool (Toy::*func1)(std::string), Toy &toy2,
    bool (Toy::*func2)(std::string))
{
    std::cout << toy1.getAscii() << "\n" << toy2.getAscii() << "\n";

    std::ifstream file(filename);
    if (!file.is_open()) {
        std::cout << "Bad Story\n";
        return;
    }

    std::string buf;

    for (std::size_t i = 0; getline(file, buf); i++) {
        auto toy = (i % 2 == 0) ? toy1 : toy2;
        auto method = (i % 2 == 0) ? func1 : func2;

        if (buf.find("picture:") != 0) {
            (toy.*method)(buf);
            continue;
        }
        if (toy.setAscii(buf.substr(8))) {
            std::cout << toy.getAscii() << "\n";
            continue;
        }
        std::cout << toy.getLastError().where() << ": "
                  << toy.getLastError().what() << "\n";
        return;
    }
    file.close();
}
