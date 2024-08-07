#include "WrongCat.h"

WrongCat::WrongCat() : WrongAnimal("Cat")
{
    std::cout << "[WrongCat] Default Constructor Called!\n";
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal("Cat")
{
    std::cout << "[WrongCat] Copy Constructor Called!\n";
    *this = other;
}

WrongCat::~WrongCat()
{
    std::cout << "[WrongCat] Destructor Called!\n";
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
    if (this == &other)
        return *this;
    m_type = other.m_type;
    return *this;
}

void WrongCat::makeSound() const
{
    std::cout << "Meow\n";
}
