#include "Dog.hpp"
#include "Animal.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << type << " constructor called" << std::endl;
}

Dog::~Dog() 
{
    std::cout << type << " destructor called" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Wouaaaf" << std::endl;
}

Dog::Dog(const Dog& obj) 
{
    std::cout << type << " copy constructor called" << std::endl;
    *this = obj;
}

Dog& Dog::operator=(const Dog& obj) 
{
    std::cout << type << " assignment operator called" << std::endl;
    if (this != &obj) 
            this->type = obj.type;
    return *this;
}
