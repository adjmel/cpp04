#include "WrongCat.hpp"

    WrongCat::WrongCat() : WrongAnimal("WrongCat")
    {
        std::cout << type << " constructor called" << std::endl;
    }

    // Destructeur
     WrongCat::~WrongCat() 
    {
        std::cout << type << " deconstructor called" << std::endl;
    }

    // Fonction pour produire un son spécifique à la mauvaise représentation d'un chat
    void  WrongCat::makeSound() const 
    {
        std::cout << "No sound for WrongCat" << std::endl;
    }
