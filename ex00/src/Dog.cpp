#include "Dog.h"

using std::cout;
using std::endl;

Dog::Dog() : Animal("Dog")
{
	cout << "[Dog] Constructor Called" << endl;
}

Dog::~Dog()
{
	cout << "[Dog] Destructor Called" << endl;
}

Dog::Dog(const Dog &other) : Animal("Dog")
{
	cout << "[Dog] Copy Constructor Called" << endl;
	*this = other;
}

Dog &Dog::operator=(const Dog &other)
{
	if (this != &other)
	{
		m_type = other.m_type;
	}
	return *this;
}

void Dog::makeSound() const
{
	cout << "Bark" << endl;
}
