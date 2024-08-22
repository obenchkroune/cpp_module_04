#include "Character.h"

Character::Character(const string &name)
{
	m_droped_items_count = 0;
	m_droped_items = new AMateria*[1];
	m_droped_items[0] = NULL;
	m_name = name;
	for (int i = 0; i < 4; i++)
		m_inventory[i] = NULL;
}

Character::Character(const Character &other)
{
	*this = other;
}

Character &Character::operator=(const Character &other)
{
	if (this != &other)
	{
		m_name = other.m_name;
		for (int i = 0; i < 4; i++)
		{
			if (other.m_inventory[i] == NULL)
				m_inventory[i] = NULL;
			else
				m_inventory[i] = other.m_inventory[i]->clone();
		}
	}
	return *this;
}

Character::~Character()
{
	for (size_t i = 0; i < m_droped_items_count; i++)
	{
		delete m_droped_items[i];
	}
	delete [] m_droped_items;
}

const string &Character::getName() const
{
	return m_name;
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (m_inventory[i] == NULL)
		{
			m_inventory[i] = m;
			return ;
		}
	}
}

void Character::unequip(int idx)
{
	AMateria	**temp;
	if (idx >= 0 && idx <= 3 && m_inventory[idx] != NULL)
	{
		m_droped_items_count++;
		temp = new AMateria*[m_droped_items_count];
		for (size_t i = 0; i < m_droped_items_count; i++)
		{
			temp[i] = m_droped_items[i];
		}
		delete [] m_droped_items;
		m_droped_items = temp;
		m_inventory[idx] = NULL;
	}
}
void Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx <= 3)
	{
		m_inventory[idx]->use(target);
	}
}
