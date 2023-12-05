#include "AAnimal.hpp"
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() :  type("WrongAnimal Default")
{
    std::cout << type << " constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) :  type(type)
{
    std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal() 
{
    std::cout << "WrongAnimal destructor called" << std::endl;   
}

void WrongAnimal::makeSound() const 
{
    std::cout << "No sound for a wrong animal" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& obj) 
{
    std::cout << "WrongAnimal copy constructor called" << std::endl;
    *this = obj;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& obj) 
{
    std::cout << "WrongAnimal assignment operator called" << std::endl;
    if (this != &obj) 
            this->type = obj.type;
    return *this;
}

const std::string& WrongAnimal::getType() const
{
    return type;
}