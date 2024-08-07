#ifndef __AANIMAL_H__
#define __AANIMAL_H__

#include <iostream>

class AAnimal
{
protected:
    std::string m_type;

public:
    AAnimal();
    AAnimal(std::string type);
    AAnimal(const AAnimal &other);
    virtual ~AAnimal();
    AAnimal &operator=(const AAnimal &other);
    const std::string &getType() const;
    virtual void makeSound() const = 0;
};

#endif