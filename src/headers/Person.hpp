#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <fstream>
#include <string>

class Person
{
    private:
        int id_Person;
        int age_Person;
        std::string name_Person;
    public:
        int getIdPerson();
        int getAgePerson();
        std::string& getNamePerson();
    public:
        void rfile(int id);
    public:
        Person(int age, std::string name);
};

#endif