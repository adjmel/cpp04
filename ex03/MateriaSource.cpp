#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
        materias[i] = NULL;
    std::cout << "Constructor called" << std::endl;  
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
        if (materias[i] != NULL)
            delete materias[i];
}

MateriaSource::MateriaSource(const MateriaSource &other)
{
    *this = other;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other)
{
    if (this != &other)
    {
        for (int i = 0; i < 4; i++)
            materias[i] = other.materias[i];
    }
    return *this;
}

AMateria* MateriaSource::getMateria(std::string const &type)
{
    for (int i = 0; i < 4; i++)
        if (materias[i] != NULL && materias[i]->getType() == type)
            return materias[i];
    return NULL;
}

void MateriaSource::learnMateria(AMateria *m)
{
    for (int i = 0; i < 4; i++)
    {
        if (materias[i] == NULL)
        {
            materias[i] = m;
            return;
        }
    }
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
    for (int i = 0; i < 4; i++)
    {
        if (materias[i] != NULL && materias[i]->getType() == type)
            return materias[i]->clone();
    }
    return 0;
}
