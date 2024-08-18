#include "WrongCat.h"

using std::cout;
using std::endl;

WrongCat::WrongCat() : WrongAnimal("Cat")
{
	cout << "[WrongCat] Constructor Called" << endl;
}

WrongCat::~WrongCat()
{
	cout << "[WrongCat] Destructor Called" << endl;
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal("Cat")
{
	cout << "[WrongCat] Copy Constructor Called" << endl;
	*this = other;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
	if (this != &other)
	{
		m_type = other.m_type;
	}
	return *this;
}

void WrongCat::makeSound() const
{
	cout << "Meow" << endl;
}
