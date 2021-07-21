#include <iostream>
#include <string>
#include "Screen.hpp"
#include "Welcome.hpp"
//#include <vector>

#include "Person.hpp"

int main(int, char**) {
    Welcome::printWelcome();
    std::cin.get();
    Screen::clear();
}