#include "Person.hpp"

//get set
int Person::getAgePerson()
{
    return age_Person;
}

int Person::getIdPerson()
{
    return id_Person;
}

std::string& Person::getNamePerson()
{
    return name_Person;
}

//methods

bool Person::operator==(Person other)
{
    if(other.age_Person == age_Person && other.name_Person == name_Person || other.id_Person == id_Person)
        return true;
    else
        return false;
}

//read write file functions
void Person::rfile(int id = 0)
{
    
}

//constructor 
Person::Person()
{}
Person::Person(int age, std::string name, Role role)
: age_Person(age), name_Person(name), role_Person(role)
{
    id_Person++;
}

