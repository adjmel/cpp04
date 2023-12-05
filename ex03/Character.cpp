#include "Character.hpp"

Character::Character() : name("Default")
{
  
}

Character::Character(std::string const &name) : name(name)
{
    for (int i = 0; i < 4; i++)
        inventory[i] = NULL;

    std::cout << "Character " << name << " created" << std::endl;
}

Character::~Character()
{
    std::cout << "Character " << name << " destroyed" << std::endl;
    for (int i = 0; i < 4; i++) 
    {
        if (inventory[i] != NULL)
             delete inventory[i];
    }
}

Character::Character(const Character &other) : name(other.name)
{
    *this = other;
    std::cout << "(by cp) Character " << name << " created" << std::endl;
}

Character &Character::operator=(const Character &other)
{
    if (this != &other)
    {
        name = other.name;
        for (int i = 0; i < 4; i++)
            this->inventory[i] = other.inventory[i];
    }
    return *this;
}

std::string const &Character::getName() const
{
    return name;
}

void Character::equip(AMateria *m)
{
    for (int i = 0; i < 4; i++)
    {
        if (inventory[i] == m)
        {
                return;
        }
    }

    for (int i = 0; i < 4; i++)
    {
        if (inventory[i] == NULL)
        {
            inventory[i] = m;
            std::cout << "Character " << name << " equipped with " << m->getType() << std::endl;
                return;
        }
    }
}

void Character::unequip(int idx)
{
    if (idx >= 0 && idx < 4)
    {
        std::cout << "Character " << name << " unequipped" << std::endl;
        delete this->inventory[idx];
        inventory[idx] = NULL;
    }
}

void Character::use(int idx, ICharacter &target)
{
    if (idx >= 0 && idx < 4 && inventory[idx] != NULL)
    {
        inventory[idx]->use(target);
        std::cout << "Character " << name << " uses " << inventory[idx]->getType() << std::endl;  
    }

}
