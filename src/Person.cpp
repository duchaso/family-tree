#include "Person.hpp"

//get set
int Person::getAgePerson()
{
    return age_Person;
}


std::string& Person::getNamePerson()
{
    return name_Person;
}

//methods

bool Person::operator==(Person other)
{
    if(other.age_Person == age_Person && other.name_Person == name_Person)
        return true;
    else
        return false;
}

//read write file functions


//constructor 
Person::Person()
{}
Person::Person(int age, std::string name)
: age_Person(age), name_Person(name)
{
}

