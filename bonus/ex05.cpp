#include <iostream>

#include "../ex05/Buzz.hpp"
#include "../ex05/Toy.hpp"
#include "../ex05/Woody.hpp"

int main()
{
    Woody w("wood");
    if (!w.setAscii("file_who_does_not_exist.txt")) {
        auto e = w.getLastError();
        if (e.type == Toy ::Error ::PICTURE) {
            std ::cout << "Error in" << e.where() << ": " << e.what()
                       << std ::endl;
        }
    }
    if (!w.speak_es("Woody does not have spanish mode")) {
        auto e = w.getLastError();
        if (e.type == Toy ::Error ::SPEAK) {
            std ::cout << "Error in" << e.where() << ": " << e.what()
                       << std ::endl;
        }
    }
    if (!w.speak_es("Woody does not have spanish mode")) {
        auto e = w.getLastError();
        if (e.type == Toy ::Error ::SPEAK) {
            std ::cout << "Error in" << e.where() << ": " << e.what()
                       << std ::endl;
        }
    }
}
