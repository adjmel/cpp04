#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include "ICharacter.hpp"

class AMateria
{
protected:
    std::string type;

public:
    AMateria();
    AMateria(std::string const &type);
    virtual ~AMateria();

    AMateria(const AMateria &other);
    AMateria &operator=(const AMateria &other);
    std::string const &getType() const; 

    virtual AMateria *clone() const = 0;
    virtual void use(ICharacter &target); 
};
#endif