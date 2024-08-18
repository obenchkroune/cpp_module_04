#include "Brain.h"
#include <iostream>

using std::cout;
using std::endl;

Brain::Brain()
{
	cout << "[Brain] Constructor Called" << endl;
}

Brain::Brain(const Brain &other)
{
	cout << "[Brain] Copy Constructor Called" << endl;
	*this = other;
}

Brain &Brain::operator=(const Brain &other)
{
	if (this != &other)
	{
		for (int i = 0; i < 100; i++)
			m_ideas[i] = other.m_ideas[i];
	}
	return *this;
}

Brain::~Brain()
{
	cout << "[Brain] Destructor Called" << endl;
}

void	Brain::setIdea(unsigned int idx, const string &value)
{
	if (idx > 99)
		return ;
	m_ideas[idx] = value;
}

const string	&Brain::getIdea(unsigned int idx) const
{
	if (idx > 99)
		return m_ideas[99];
	return m_ideas[idx];
}
