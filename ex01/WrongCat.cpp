#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
    std::cout << type << " constructor called" << std::endl;
}

WrongCat::~WrongCat() 
{
    std::cout << type << " destructor called" << std::endl;
}

void WrongCat::makeSound() const 
{
    std::cout << "No sound for a wrong cat!" << std::endl;
}

WrongCat::WrongCat(const WrongCat& obj) 
{
    *this = obj;
}

WrongCat& WrongCat::operator=(const WrongCat& obj) 
{
    std::cout << type << " assignment operator called" << std::endl;
    if (this != &obj) 
        this->type = obj.type;
    return *this;
}