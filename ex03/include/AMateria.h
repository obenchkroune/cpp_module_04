#pragma once

#include <string>
#include "ICharacter.h"

using std::string;

class AMateria {
private:
	string m_type;

public:
	AMateria(const string &type);
	AMateria(const AMateria &other);
	AMateria &operator=(const AMateria &other);
	virtual ~AMateria();
	const string &getType() const;
	virtual AMateria *clone() const = 0;
	virtual void use(ICharacter &target);
};
