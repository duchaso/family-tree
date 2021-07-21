#ifndef TREE_H
#define TREE_H

#include "Person.hpp"

struct Node
{
   Person pers;
   Node* father = nullptr;
   Node* mother = nullptr;
   
   Node();
   Node(Person p);
};

class Tree
{
    private:
        Node* root = nullptr;
        Node* current = root;
    public:
        Node* search(Node* root, Person origin);
        void push(Person newPerson, Person father);
    public:
        
};

#endif