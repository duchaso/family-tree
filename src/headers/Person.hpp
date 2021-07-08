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
        Person(int id, int age, std::string name)
        : id_Person(id), age_Person(age), name_Person(name)
        {}
};