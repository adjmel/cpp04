#include "Brain.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() 
{
    std::cout << "1) Dog creation" << std::endl;
    const AAnimal *j = new Dog();
    j->makeSound();
    std::cout << "AAnimal type: " << j->getType() << std::endl;
    delete j;

    std::cout << "\n" << std::endl;
    std::cout << "2) Cat creation" << std::endl;
    const AAnimal *i = new Cat();
    i->makeSound();
    std::cout << "AAnimal type : " << i->getType() << std::endl;
    delete i;

    std::cout << "\n" << std::endl;
    std::cout << "3) WrongCat creation" << std::endl;
    const WrongAnimal *l = new WrongCat();
    l->makeSound();
    std::cout << "AAnimal type : " << l->getType() << std::endl;
    delete l;


    std::cout << "\n" << std::endl;
    std::cout << "4) Copy Dog creation" << std::endl;
    Dog futurecopy;
    {
        Dog dogcontent = futurecopy;
    }

    std::cout << "\n" << std::endl;
    std::cout << "5) Creating the AAnimal object array" << std::endl;
    const AAnimal *AAnimals[4] = { new Dog(), new Dog(), new Cat(), new Cat() };

    std::cout << "\n" << std::endl;
    std::cout << "6) AAnimals sound" << std::endl;
    std::cout << "First AAnimal do : " << std::endl; 
    AAnimals[0]->makeSound();
    std::cout << "Second AAnimal do : " << std::endl; 
    AAnimals[1]->makeSound();
    std::cout << "Third AAnimal do : " << std::endl; 
    AAnimals[2]->makeSound();
    std::cout << "Fourth AAnimal do : " << std::endl; 
    AAnimals[3]->makeSound();

    std::cout << "\n" << std::endl;
    std::cout << "7) Destruction of the 4 AAnimals" << std::endl;
    for (int i = 0; i < 4; i++) 
    {
        delete AAnimals[i];
    }

    std::cout << "\n" << std::endl;
    std::cout << "8) Destruction of the copy of Dog" << std::endl;

    return 0;
}