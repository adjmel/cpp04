#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

// Classe dérivée pour une mauvaise représentation d'un chat
class WrongCat : public WrongAnimal 
{
public:
    // Constructeur
    WrongCat();

    // Destructeur
    ~WrongCat();

    // Fonction pour produire un son spécifique à la mauvaise représentation d'un chat
    void makeSound() const ;
};

#endif