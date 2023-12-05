#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
    AMateria *materias[4];

public:
    MateriaSource();
    ~MateriaSource();
    MateriaSource(const MateriaSource &other);
    MateriaSource &operator=(const MateriaSource &other);

    AMateria *createMateria(std::string const &type);
    AMateria *getMateria( std::string const & type );
    void learnMateria(AMateria *m);

};
#endif
