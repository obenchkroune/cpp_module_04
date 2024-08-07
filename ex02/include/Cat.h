#ifndef __CAT_H__
#define __CAT_H__

#include "AAnimal.h"
#include "Brain.h"

class Cat : public AAnimal
{
private:
    Brain *m_brain;
    
public:
    Cat();
    Cat(const Cat &other);
    ~Cat();
    Cat &operator=(const Cat &other);
    void makeSound() const;
    void setIdea(unsigned int idx, std::string value);
    const std::string &getIdea(unsigned int idx) const;
};

#endif