#pragma once

#include "ICharacter.h"
#include "AMateria.h"

using std::string;

class Character : public ICharacter {
private:
	string		m_name;
	AMateria	*m_inventory[4];
	size_t		m_droped_items_count;
	AMateria	**m_droped_items;
	
public:
	Character(const string &name);
	Character(const Character &other);
	~Character();

	Character &operator=(const Character &other);

	const string	&getName() const;
	void			equip(AMateria* m);
	void			unequip(int idx);
	void			use(int idx, ICharacter &target);
};
