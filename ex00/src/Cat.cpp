#include "Cat.h"

Cat::Cat() : Animal("Cat")
{
    std::cout << "[Cat] Default Constructor Called!\n";
}

Cat::Cat(const Cat &other) : Animal("Cat")
{
    std::cout << "[Cat] Copy Constructor Called!\n";
    *this = other;
}

Cat::~Cat()
{
    std::cout << "[Cat] Destructor Called!\n";
}

Cat &Cat::operator=(const Cat &other)
{
    if (this == &other)
        return *this;
    m_type = other.m_type;
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "Meow\n";
}
