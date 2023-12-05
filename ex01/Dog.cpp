#include "Animal.hpp"
#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << type << " constructor called" << std::endl;
    brain = new Brain();

    if (!brain)
    {
        std::cout << "Memory Allocation is failed" << std::endl;
        return ;
    }
}

Dog::~Dog() 
{
    delete brain;
    std::cout << type << " destructor called" << std::endl; 
}

void  Dog::makeSound() const
{
    std::cout << "Woouuaf" << std::endl;
}

Dog::Dog(const Dog& obj)
{
    *this = obj;
}

Dog& Dog::operator=(const Dog& obj)
{
    std::cout << type << " copy called" << std::endl;
    if (this != &obj)
    {
        this->type = obj.type;
        this->brain = new Brain(*obj.brain);
    }
    return *this;
}