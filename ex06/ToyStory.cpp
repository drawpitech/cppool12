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

    std::ifstream filestream(filename);
    if (!filestream)
        return;

    std::string buf;

    for (std::size_t i = 0; getline(filestream, buf); i++) {
        auto toy = (i % 2 == 0) ? toy1 : toy2;
        auto method = (i % 2 == 0) ? func1 : func2;

        if (buf.find("picture:") == 0) {
            toy.setAscii(buf.substr(8));
            std::cout << toy.getAscii() << "\n";
            continue;
        }
        (toy.*method)(buf);
    }
    filestream.close();
}
