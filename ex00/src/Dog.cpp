#include "Dog.h"

Dog::Dog() : Animal("Dog")
{
    std::cout << "[Dog] Default Constructor Called!\n";
}

Dog::Dog(const Dog &other) : Animal("Dog")
{
    std::cout << "[Dog] Copy Constructor Called!\n";
    *this = other;
}

Dog::~Dog()
{
    std::cout << "[Dog] Destructor Called!\n";
}

Dog &Dog::operator=(const Dog &other)
{
    if (this == &other)
        return *this;
    m_type = other.m_type;
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "Bark\n";
}
