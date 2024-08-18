#pragma once

#include <iostream>

using std::string;

class Animal
{
public:
	Animal();
	Animal(string type);
	Animal(const Animal &other);
	Animal &operator=(const Animal &other);
	virtual ~Animal();

	void			setType(string type);
	const string	getType() const;
	virtual void	makeSound() const;

protected:
	string	m_type;
};
