#include "AMateria.hpp"

AMateria::AMateria() : type("Default") 
{

}

AMateria::AMateria(std::string const &type) : type(type) 
{
    std::cout << "AMateria " << type << " created" << std::endl;
}

AMateria::~AMateria() 
{
    std::cout << "AMateria " << type << " destroyed" << std::endl;
}

AMateria::AMateria(const AMateria &other) 
{
    *this = other;
}

AMateria &AMateria::operator=(const AMateria &other)
{
    if (this != &other)
        type = other.type;
    return *this;
}

std::string const &AMateria::getType() const
{
    return type;
}

AMateria *AMateria::clone() const
{
    return (AMateria*)this;
}

void AMateria::use(ICharacter &target)
{
    std::cout << "AMateria " << type << " used on " << target.getName() << std::endl;
}
