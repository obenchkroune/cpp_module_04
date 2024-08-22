#pragma once

#include "Animal.h"
#include "Brain.h"

class Cat : public Animal {
public:
	Cat();
	Cat(const Cat &other);
	Cat &operator=(const Cat &other);
	~Cat();

	void			makeSound() const;
	void			setIdea(unsigned int idx, const string &value);
	const string	&getIdea(unsigned int idx) const;

private:
	Brain	*m_brain;
};
