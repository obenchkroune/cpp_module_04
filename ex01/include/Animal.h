#ifndef __ANIMAL_H__
#define __ANIMAL_H__

#include <iostream>

class IAnimal
{
protected:
    std::string m_type;

public:
    IAnimal();
    IAnimal(std::string type);
    IAnimal(const IAnimal &other);
    virtual ~IAnimal();
    IAnimal &operator=(const IAnimal &other);
    const std::string &getType() const;
    virtual void makeSound() const;
};

#endif