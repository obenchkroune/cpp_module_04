#include "MateriaSource.h"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		m_materias[i] = NULL;
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
		{
			if (other.m_materias[i] == NULL)
				m_materias[i] = NULL;
			else
				m_materias[i] = other.m_materias[i]->clone();
		}
	}
	return *this;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		delete m_materias[i];
}

void MateriaSource::learnMateria(AMateria *materia)
{
	for (int i = 0; i < 4; i++)
	{
		if (m_materias[i] == NULL)
		{
			m_materias[i] = materia;
			break ;
		}
	}
}

AMateria *MateriaSource::createMateria(const std::string &type)
{
	for (int i = 3; i >= 0; i--)
	{
		if (m_materias[i] != NULL && m_materias[i]->getType() == type)
			return m_materias[i];
	}
	return NULL;
}
