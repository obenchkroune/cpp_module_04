#include "WrongAnimal.h"

using std::cout;
using std::endl;

WrongAnimal::WrongAnimal()
{
	cout << "[WrongAnimal] Constructor Called" << endl;
}

WrongAnimal::WrongAnimal(string type)
{
	cout << "[WrongAnimal] Constructor Called" << endl;
	m_type = type;
}

WrongAnimal::~WrongAnimal()
{
	cout << "[WrongAnimal] Destructor Called" << endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	*this = other;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
	if (this != &other)
	{
		m_type = other.m_type;
	}
	return *this;
}

void WrongAnimal::setType(string type)
{
	m_type = type;
}

const string WrongAnimal::getType() const
{
	return m_type;
}

void WrongAnimal::makeSound() const
{
	cout << "Unknown Animal Sound" << endl;
}
