#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main() 
{
    std::cout << "1) Materias creation : " << std::endl;
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    std::cout << "\n" << std::endl;

    std::cout << "2) Character creation : " << std::endl;
    ICharacter* melissa = new Character("Melissa");
    AMateria* icemateria = src->createMateria("ice");
    melissa->equip(icemateria);
    AMateria* curemateria = src->createMateria("cure");
    melissa->equip(curemateria);

    std::cout << "\n" << std::endl;

    std::cout << "3) Second character creation : " << std::endl;
    ICharacter* louisa = new Character("Louisa");
    
    std::cout << "\n" << std::endl;
    std::cout << "4) Materia utilisation : " << std::endl;
    melissa->use(0, *louisa);
    melissa->use(1, *louisa);

    std::cout << "\n" << std::endl;

    std::cout << "5) Removing Melissa's Materials : " << std::endl;
    melissa->unequip(0);
    melissa->unequip(1);

    std::cout << "\n" << std::endl;
    std::cout << "6) Destruction : " << std::endl;
    delete louisa;
    delete melissa;
    delete src;

    return 0;
}
