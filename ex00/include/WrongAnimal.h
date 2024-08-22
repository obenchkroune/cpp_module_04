#pragma once

#include <iostream>

using std::string;

class WrongAnimal {
public:
	WrongAnimal();
	WrongAnimal(string type);
	WrongAnimal(const WrongAnimal &other);
	WrongAnimal &operator=(const WrongAnimal &other);
	virtual ~WrongAnimal();

	void			setType(string type);
	const string	getType() const;
	void			makeSound() const;

protected:
	string	m_type;
};
