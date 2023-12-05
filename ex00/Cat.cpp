#include "Cat.hpp"
#include "Animal.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << type <<" constructor called" << std::endl;
}

Cat::~Cat() 
{
    std::cout << type <<" destructor called" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Meeoooow" << std::endl;
}

Cat::Cat(const Cat& obj) 
{
    std::cout << type << " copy constructor called" << std::endl;
    *this = obj;
}

Cat& Cat::operator=(const Cat& obj) 
{
    std::cout << type << " assignment operator called" << std::endl;
    if (this != &obj) 
            this->type = obj.type;
    return *this;
}
