#ifndef PERSON_H
#define PERSON_H

//#include <iostream>
//#include <fstream>
#include <string>
//#include <vector>
//#include <utility>

enum Role
{
    child,
    father,
    mother
};

class Person
{
    private:
        int id_Person;
        int age_Person;
        Role role_Person;
        std::string name_Person;
    public:
        int getIdPerson();
        int getAgePerson();
        std::string& getNamePerson();
    public:
        void rfile(int id);
        bool operator==(Person other);
    public:
        Person();
        Person(int age, std::string name, Role role);
};

#endif