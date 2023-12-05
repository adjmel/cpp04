#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main() 
{
    std::cout << "1) Dog Creation" << std::endl;
    Animal* myDog = new Dog();
    myDog->makeSound();
    std::cout << "Animal type is : " << myDog->getType() << std::endl;
    delete myDog;

    std::cout << "\n" << std::endl;

    std::cout << "2) Cat creation" << std::endl;
    Animal* myCat = new Cat();
    myCat->makeSound();
    std::cout << "Animal type is: " << myCat->getType() << std::endl;
    delete myCat;

    std::cout << "\n" << std::endl;

    std::cout << "3) Wrong cat creation" << std::endl;
    WrongCat* myBadCat = new WrongCat();
    myBadCat->makeSound();
    std::cout << "Animal type is : " << myBadCat->getType() << std::endl;
    delete myBadCat;

    return 0;
}