#include "Brain.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() 
{
    std::cout << "1) Dog creation" << std::endl;
    const Animal *j = new Dog();
    j->makeSound();
    std::cout << "Animal type: " << j->getType() << std::endl;
    delete j;

    std::cout << "\n" << std::endl;
    std::cout << "2) Cat creation" << std::endl;
    const Animal *i = new Cat();
    i->makeSound();
    std::cout << "Animal type : " << i->getType() << std::endl;
    delete i;

    std::cout << "\n" << std::endl;
    std::cout << "3) WrongCat creation" << std::endl;
    const WrongAnimal *l = new WrongCat();
    l->makeSound();
    std::cout << "Animal type : " << l->getType() << std::endl;
    delete l;


    std::cout << "\n" << std::endl;
    std::cout << "4) Copy Dog creation" << std::endl;
    Dog futurecopy;
    {
        Dog dogcontent = futurecopy;
    }

    std::cout << "\n" << std::endl;
    std::cout << "5) Creating the Animal object array" << std::endl;
    const Animal *animals[4] = { new Dog(), new Dog(), new Cat(), new Cat() };

    std::cout << "\n" << std::endl;
    std::cout << "6) Animals sound" << std::endl;
    std::cout << "First animal do : " << std::endl; 
    animals[0]->makeSound();
    std::cout << "Second animal do : " << std::endl; 
    animals[1]->makeSound();
    std::cout << "Third animal do : " << std::endl; 
    animals[2]->makeSound();
    std::cout << "Fourth animal do : " << std::endl; 
    animals[3]->makeSound();

    std::cout << "\n" << std::endl;
    std::cout << "7) Destruction of the 4 animals" << std::endl;
    for (int i = 0; i < 4; i++) 
    {
        delete animals[i];
    }

    std::cout << "\n" << std::endl;
    std::cout << "8) Destruction of the copy of Dog" << std::endl;

    return 0;
}