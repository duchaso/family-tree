#include "Menu.hpp"

//Methods
Person Menu::getPerson()
{

}

//Constructor
Menu::Menu()
{
    Welcome::printWelcome();
    Welcome::printControl();

    while(true)
    {
        switch (userInput())
        {
        case /* constant-expression */:
            /* code */
            break;
        
        default:
            break;
        }
    }
}