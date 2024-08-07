#include "Animal.h"

IAnimal::IAnimal() : m_type("RandomAnimal")
{
    std::cout << "[Animal] Default Constructor Called!\n";
}

IAnimal::IAnimal(std::string type) : m_type(type)
{
    std::cout << "[Animal] Param Constructor Called!\n";
}

IAnimal::IAnimal(const IAnimal &other)
{
    std::cout << "[Animal] Copy Constructor Called!\n";
    *this = other;
}

IAnimal::~IAnimal()
{
    std::cout << "[Animal] Destructor Called!\n";
}

IAnimal &IAnimal::operator=(const IAnimal &other)
{
    if (this == &other)
        return *this;
    m_type = other.m_type;
    return *this;
}

const std::string &IAnimal::getType() const
{
    return m_type;
}

void IAnimal::makeSound() const
{
    std::cout << "A Random Animal Sound\n";
}