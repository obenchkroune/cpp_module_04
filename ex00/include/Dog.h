#ifndef __DOG_H__
#define __DOG_H__

#include "Animal.h"

class Dog : public Animal
{
public:
    Dog();
    Dog(const Dog &other);
    ~Dog();
    Dog &operator=(const Dog &other);
    void makeSound() const;
};

#endif