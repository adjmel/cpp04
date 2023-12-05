#include "AAnimal.hpp"
#include "Cat.hpp"

Cat::Cat() : AAnimal("Cat")
{
    std::cout << type << " constructor called" << std::endl;
    brain = new Brain();

    if (!brain)
    {
        std::cout << "Memory Allocation is failed" << std::endl;
        return ;
    }
}

Cat::~Cat() 
{
    delete brain;
    std::cout << type << " destructor called" << std::endl;
}

void Cat::makeSound() const 
{
    std::cout << "Meooooow" << std::endl;
}

Cat::Cat(const Cat& obj) 
{
   *this = obj;
}

Cat& Cat::operator=(const Cat& obj) 
{
    std::cout << type << " copy called" << std::endl;
    if (this != &obj) 
    {
       this->type = obj.type;
       this->brain = new Brain(*obj.brain);
    }
    return *this;
}