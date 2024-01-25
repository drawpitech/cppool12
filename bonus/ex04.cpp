#include <iostream>

#include "../ex04/Toy.hpp"

int main() {
    Toy a(Toy::BASIC_TOY, "REX", "rex.txt");
    std::cout << a;
    a << "\\o/";
    std::cout << a;
}
