
#include "Animal.hpp"

Animal::Animal() : type("Default")
{
    std::cout << type << " constructor called" << std::endl;
}

Animal::Animal(std::string type) : type(type)
{
    std::cout << "Animal constructor called" << std::endl;
}

Animal::~Animal() 
{
    std::cout << "Animal destructor called" << std::endl;
}

Animal::Animal(const Animal& obj)
{
    std::cout << "Animal copy constructor called" << std::endl;
    *this = obj;
}

Animal&  Animal::operator=(const Animal& obj)
{
    std::cout << "Animal assignment operator called" << std::endl;
    if ( this != &obj ) 
            this->type = obj.type;
    return *this;
}

void  Animal::makeSound() const
{ 
    std::cout << type << "Animal makeSound called" << std::endl;
}

const std::string& Animal::getType() const
{
    return type;
}