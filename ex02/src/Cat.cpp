#include "Cat.h"

using std::cout;
using std::endl;

Cat::Cat() : AAnimal("Cat"), m_brain(new Brain())
{
	cout << "[Cat] Constructor Called" << endl;
}

Cat::~Cat()
{
	cout << "[Cat] Destructor Called" << endl;
	delete m_brain;
}

Cat::Cat(const Cat &other) : AAnimal("Cat"), m_brain(new Brain())
{
	cout << "[Cat] Copy Constructor Called" << endl;
	*this = other;
}

Cat &Cat::operator=(const Cat &other)
{
	if (this != &other)
	{
		m_type = other.m_type;
		*m_brain = *other.m_brain;
	}
	return *this;
}

void Cat::makeSound() const
{
	cout << "Meow" << endl;
}

void Cat::setIdea(unsigned int idx, const string &value)
{
	m_brain->setIdea(idx, value);
}

const string &Cat::getIdea(unsigned int idx) const
{
	return m_brain->getIdea(idx);
}
