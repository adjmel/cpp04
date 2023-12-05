#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>

class AAnimal
{
protected:
    std::string type;

public:
    AAnimal();
    AAnimal(std::string type);
    virtual ~AAnimal();
    AAnimal(const AAnimal& obj);
    AAnimal& operator=(const AAnimal& obj);

    virtual void makeSound() const = 0;
    const std::string& getType() const;
};

#endif
