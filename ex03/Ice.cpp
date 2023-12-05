// #ifndef ICE_HPP
// #define
#include "Ice.hpp"
#include <iostream>

Ice::Ice() : AMateria("ice") 
{

}

Ice::~Ice()
{

}

Ice::Ice(const Ice &other) : AMateria("ice")
{
    *this = other;
}

Ice &Ice::operator=(const Ice &other)
{
    if (this != &other)
        this->type = other.type;
    return *this;
}

AMateria *Ice::clone() const
{
    return new Ice(*this);
}

void Ice::use(ICharacter &target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
