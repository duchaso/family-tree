#include <iostream>
#include "Person.hpp"

int main(int, char**) {
    Person p(18, "Danyl");

    std::cout << p.getIdPerson() << std::endl;
}