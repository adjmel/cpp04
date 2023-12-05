#include <iostream>
#include <string>
#include "Animal.hpp"

Animal::Animal() : type("Default Animal") 
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

Animal::Animal(const Animal &obj)
{
    std::cout << type << " copy constructor called" << std::endl;
    *this = obj;
}

Animal&  Animal::operator=(const Animal &obj)
{
    std::cout << type << " assignment operator called" << std::endl;
    if (this != &obj)
            this->type = obj.type;
    return *this;
}

void  Animal::makeSound() const
{ 
    std::cout << "Animal sound" << std::endl;
}

const std::string& Animal::getType() const
{
    return type;
}

