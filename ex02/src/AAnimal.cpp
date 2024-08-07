#include "AAnimal.h"

AAnimal::AAnimal() : m_type("RandomAnimal")
{
    std::cout << "[Animal] Default Constructor Called!\n";
}

AAnimal::AAnimal(std::string type) : m_type(type)
{
    std::cout << "[Animal] Param Constructor Called!\n";
}

AAnimal::AAnimal(const AAnimal &other)
{
    std::cout << "[Animal] Copy Constructor Called!\n";
    *this = other;
}

AAnimal::~AAnimal()
{
    std::cout << "[Animal] Destructor Called!\n";
}

AAnimal &AAnimal::operator=(const AAnimal &other)
{
    if (this == &other)
        return *this;
    m_type = other.m_type;
    return *this;
}

const std::string &AAnimal::getType() const
{
    return m_type;
}
