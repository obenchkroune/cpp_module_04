#include "WrongAnimal.h"

WrongAnimal::WrongAnimal() : m_type("RandomAnimal")
{
    std::cout << "[WrongAnimal] Default Constructor Called!\n";
}

WrongAnimal::WrongAnimal(std::string type) : m_type(type)
{
    std::cout << "[WrongAnimal] Param Constructor Called!\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
    std::cout << "[WrongAnimal] Copy Constructor Called!\n";
    *this = other;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "[WrongAnimal] Destructor Called!\n";
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
    if (this == &other)
        return *this;
    m_type = other.m_type;
    return *this;
}

const std::string &WrongAnimal::getType() const
{
    return m_type;
}

void WrongAnimal::makeSound() const
{
    std::cout << "A Random WrongAnimal Sound\n";
}