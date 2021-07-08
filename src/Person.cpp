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

//read write file functions
void Person::rfile(int id = 0)
{
    
}

//constructor 
Person::Person(int age, std::string name)
: age_Person(age), name_Person(name)
{
    id_Person++;
}

