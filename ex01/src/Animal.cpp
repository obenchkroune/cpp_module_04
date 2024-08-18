#include "Animal.h"

using std::cout;
using std::endl;

Animal::Animal()
{
	cout << "[Animal] Constructor Called" << endl;
}

Animal::Animal(string type)
{
	cout << "[Animal] Constructor Called" << endl;
	m_type = type;
}

Animal::~Animal()
{
	cout << "[Animal] Destructor Called" << endl;
}

Animal::Animal(const Animal &other)
{
	*this = other;
}

Animal &Animal::operator=(const Animal &other)
{
	if (this != &other)
	{
		m_type = other.m_type;
	}
	return *this;
}

void Animal::setType(string type)
{
	m_type = type;
}

const string Animal::getType() const
{
	return m_type;
}

void Animal::makeSound() const
{
	cout << "Unknown Animal Sound" << endl;
}
