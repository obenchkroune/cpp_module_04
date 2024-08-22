#pragma once

#include "Animal.h"
#include "Brain.h"

class Dog : public Animal {
public:
	Dog();
	Dog(const Dog &other);
	Dog &operator=(const Dog &other);
	~Dog();

	void			makeSound() const;
	void			setIdea(unsigned int idx, const string &value);
	const string	&getIdea(unsigned int idx) const;

private:
	Brain	*m_brain;
};
