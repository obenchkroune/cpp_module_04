#include "AAnimal.h"

using std::cout;
using std::endl;

AAnimal::AAnimal()
{
	cout << "[AAnimal] Constructor Called" << endl;
}

AAnimal::AAnimal(string type)
{
	cout << "[AAnimal] Constructor Called" << endl;
	m_type = type;
}

AAnimal::~AAnimal()
{
	cout << "[AAnimal] Destructor Called" << endl;
}

AAnimal::AAnimal(const AAnimal &other)
{
	*this = other;
}

AAnimal &AAnimal::operator=(const AAnimal &other)
{
	if (this != &other)
	{
		m_type = other.m_type;
	}
	return *this;
}

void AAnimal::setType(string type)
{
	m_type = type;
}

const string AAnimal::getType() const
{
	return m_type;
}
