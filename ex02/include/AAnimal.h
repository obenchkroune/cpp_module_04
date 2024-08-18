#pragma once

#include <iostream>

using std::string;

class AAnimal
{
public:
	AAnimal();
	AAnimal(string type);
	AAnimal(const AAnimal &other);
	AAnimal &operator=(const AAnimal &other);
	virtual ~AAnimal();

	void			setType(string type);
	const string	getType() const;
	virtual void	makeSound() const = 0;

protected:
	string	m_type;
};
