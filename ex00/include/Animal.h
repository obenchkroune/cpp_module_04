#ifndef __ANIMAL_H__
#define __ANIMAL_H__

#include <iostream>

class Animal
{
protected:
    std::string m_type;

public:
    Animal();
    Animal(std::string type);
    Animal(const Animal &other);
    virtual ~Animal();
    Animal &operator=(const Animal &other);
    const std::string &getType() const;
    virtual void makeSound() const;
};

#endif