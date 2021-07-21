#include "Tree.hpp"

// Node
Node::Node()
{}
Node::Node(Person p)
: pers(p)
{}

//Tree

//Method
Node* Tree::search(Node* root, Person origin)
{
    if(root != nullptr && root->pers == origin)
    {
        return root;
    }
    else
    {
        search(root->father, origin);
    }
}

void Tree::push(Person newPerson, Person father)
{
    
}
