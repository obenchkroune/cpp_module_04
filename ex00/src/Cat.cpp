#include "Cat.h"

using std::cout;
using std::endl;

Cat::Cat() : Animal("Cat")
{
	cout << "[Cat] Constructor Called" << endl;
}

Cat::~Cat()
{
	cout << "[Cat] Destructor Called" << endl;
}

Cat::Cat(const Cat &other) : Animal("Cat")
{
	cout << "[Cat] Copy Constructor Called" << endl;
	*this = other;
}

Cat &Cat::operator=(const Cat &other)
{
	if (this != &other)
	{
		m_type = other.m_type;
	}
	return *this;
}

void Cat::makeSound() const
{
	cout << "Meow" << endl;
}
