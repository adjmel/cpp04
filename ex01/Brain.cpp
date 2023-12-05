#include "Animal.hpp"
#include "Brain.hpp"

Brain::Brain() 
{
    std::cout << "Brain constructor called" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}

Brain::Brain(const Brain& obj) 
{
    *this = obj;
}

Brain& Brain::operator=(const Brain& obj) 
{
    std::cout << "Brain copy called" << std::endl;
    if (this != &obj) 
    {
        for (int i = 0; i < 100; i++) 
        {
            this->ideas[i] = obj.ideas[i];
        }
    }
    return *this;
}

