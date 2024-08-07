#ifndef __DOG_H__
#define __DOG_H__

#include "Animal.h"
#include "Brain.h"

class Dog : public AAnimal
{
private:
    Brain *m_brain;
    
public:
    Dog();
    Dog(const Dog &other);
    ~Dog();
    Dog &operator=(const Dog &other);
    void makeSound() const;
    void setIdea(unsigned int idx, std::string value);
    const std::string &getIdea(unsigned int idx) const;
};

#endif