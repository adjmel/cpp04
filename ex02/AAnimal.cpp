
#include "AAnimal.hpp"

AAnimal::AAnimal() : type("DDefault")
{
    std::cout << type << " constructor called" << std::endl;
}

AAnimal::AAnimal(std::string type) : type(type)
{
    std::cout << "AAnimal constructor called" << std::endl;
}

AAnimal::~AAnimal() 
{
    std::cout << "AAnimal destructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal& obj)
{
    std::cout << "AAnimal copy constructor called" << std::endl;
    *this = obj;
}

AAnimal&  AAnimal::operator=(const AAnimal& obj)
{
    std::cout << "AAnimal assignment operator called" << std::endl;
    if ( this != &obj ) 
            this->type = obj.type;
    return *this;
}

void  AAnimal::makeSound() const
{ 
    std::cout << type << "AAnimal makeSound called" << std::endl;
}

const std::string& AAnimal::getType() const
{
    return type;
}
