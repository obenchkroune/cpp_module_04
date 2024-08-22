#include "Cure.h"
#include <iostream>

using std::cout;
using std::endl;

Cure::Cure() : AMateria("cure")
{
}

Cure::Cure(const Cure &other) : AMateria("cure")
{
	*this = other;
}

Cure &Cure::operator=(const Cure &other)
{
	if (this != &other)
	{
		//
	}
	return *this;
}

Cure::~Cure()
{
	//
}

AMateria *Cure::clone() const
{
	return new Cure();
}

void Cure::use(ICharacter &target)
{
	cout << "* heals " << target.getName() << "'s wounds *" << endl;
}
