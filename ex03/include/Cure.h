#pragma once

#include "AMateria.h"

using std::string;

class Cure : public AMateria {
public:
	Cure();
	Cure(const Cure &other);
	Cure &operator=(const Cure &other);
	~Cure();
	AMateria *clone() const;
	void use(ICharacter &target);
};
