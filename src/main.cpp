#include <iostream>
#include <string>
//#include <vector>

#include "Person.hpp"

int main(int, char**) {
    std::string name;
    int age;

    std::cout << "Enter name: ";
    std::getline(std::cin, name);
    std::cout << "and age:";
    std::cin >> age;

    Person p(age, name, child);
    std::cout << name << " " << age << std::endl;
}