#include "Ice.h"
#include <iostream>

using std::cout;
using std::endl;

Ice::Ice() : AMateria("ice")
{
}

Ice::Ice(const Ice &other) : AMateria("ice")
{
	*this = other;
}

Ice &Ice::operator=(const Ice &other)
{
	if (this != &other)
	{
		//
	}
	return *this;
}

Ice::~Ice()
{
	//
}

AMateria *Ice::clone() const
{
	return new Ice();
}

void Ice::use(ICharacter &target)
{
	cout << "* shoots an ice bolt at " << target.getName() << " *" << endl;
}
