#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person
{
    private:
        int age_Person;
        std::string name_Person;
    public:
        int getAgePerson();
        std::string& getNamePerson();
    public:
        //void rfile(int id);//not yet
        bool operator==(Person other);
    public:
        Person();
        Person(int age, std::string name);
};

#endif