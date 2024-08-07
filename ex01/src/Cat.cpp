#include "Cat.h"

Cat::Cat() : IAnimal("Cat"), m_brain(new Brain())
{
    std::cout << "[Cat] Default Constructor Called!\n";
}

Cat::Cat(const Cat &other) : IAnimal("Cat"), m_brain(new Brain())
{
    std::cout << "[Cat] Copy Constructor Called!\n";
    *this = other;
}

Cat::~Cat()
{
    std::cout << "[Cat] Destructor Called!\n";
    delete m_brain;
}

Cat &Cat::operator=(const Cat &other)
{
    if (this == &other)
        return *this;
    m_type = other.m_type;
    m_brain = other.m_brain;
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "Meow\n";
}

void Cat::setIdea(unsigned int idx, std::string value)
{
    m_brain->setIdea(idx, value);
}

const std::string &Cat::getIdea(unsigned int idx) const
{
    return m_brain->getIdea(idx);
}
