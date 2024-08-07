#include "Animal.h"

Animal::Animal() : m_type("RandomAnimal")
{
    std::cout << "[Animal] Default Constructor Called!\n";
}

Animal::Animal(std::string type) : m_type(type)
{
    std::cout << "[Animal] Param Constructor Called!\n";
}

Animal::Animal(const Animal &other)
{
    std::cout << "[Animal] Copy Constructor Called!\n";
    *this = other;
}

Animal::~Animal()
{
    std::cout << "[Animal] Destructor Called!\n";
}

Animal &Animal::operator=(const Animal &other)
{
    if (this == &other)
        return *this;
    m_type = other.m_type;
    return *this;
}

const std::string &Animal::getType() const
{
    return m_type;
}

void Animal::makeSound() const
{
    std::cout << "A Random Animal Sound\n";
}