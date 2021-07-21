#ifndef MENU_H
#define MENU_H

#include "Person.hpp"
#include "Tree.hpp"
#include "Welcome.hpp"

enum class Key
{
    addPerson,
    showTree
};

class Menu
{
    private:
        Person person;
        Tree family_tree;
    public:
        Person getPerson();

    public:
        Menu() {}
};

#endif