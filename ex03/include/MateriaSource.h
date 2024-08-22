#pragma once

#include "IMateriaSource.h"

class MateriaSource : public IMateriaSource {
private:
	AMateria	*m_materias[4];
	
public:
	MateriaSource();
	MateriaSource(const MateriaSource &other);
	~MateriaSource();

	MateriaSource &operator=(const MateriaSource &other);

	void		learnMateria(AMateria *);
	AMateria	*createMateria(const std::string &type);
};
