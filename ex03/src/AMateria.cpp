#include "AMateria.h"
#include "Ice.h"
#include "Cure.h"
#include <iostream>

using std::cout;
using std::endl;

AMateria::AMateria(const string &type)
{
	m_type = type;
}

AMateria::AMateria(const AMateria &other)
{
	*this = other;
}

AMateria &AMateria::operator=(const AMateria &other)
{
	if (this != &other)
	{
		//
	}
	return *this;
}

AMateria::~AMateria()
{
	//
}

const string &AMateria::getType() const
{
	return m_type;
}

void AMateria::use(ICharacter &target)
{
	if (m_type == "ice")
		cout << "* shoots an ice bolt at " << target.getName() << " *" << endl;
	else if (m_type == "cure")
		cout << "* heals " << target.getName() << "'s wounds *" << endl;
}
