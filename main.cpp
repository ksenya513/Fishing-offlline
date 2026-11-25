#include "Fish.hpp"
#include <iostream>

int main() {
    Fish malek("Common", "Carp", 500, 1200);
    std::cout << malek.getInfo() << "\n";

    return 0;
}