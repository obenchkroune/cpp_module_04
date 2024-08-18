#include "Dog.h"

using std::cout;
using std::endl;

Dog::Dog() : AAnimal("Dog"), m_brain(new Brain())
{
	cout << "[Dog] Constructor Called" << endl;
}

Dog::~Dog()
{
	cout << "[Dog] Destructor Called" << endl;
	delete m_brain;
}

Dog::Dog(const Dog &other) : AAnimal("Dog"), m_brain(new Brain())
{
	cout << "[Dog] Copy Constructor Called" << endl;
	*this = other;
}

Dog &Dog::operator=(const Dog &other)
{
	if (this != &other)
	{
		m_type = other.m_type;
		*m_brain = *other.m_brain;
	}
	return *this;
}

void Dog::makeSound() const
{
	cout << "Bark" << endl;
}

void Dog::setIdea(unsigned int idx, const string &value)
{
	m_brain->setIdea(idx, value);
}

const string &Dog::getIdea(unsigned int idx) const
{
	return m_brain->getIdea(idx);
}
