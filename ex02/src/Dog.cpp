#include "Dog.h"

Dog::Dog() : AAnimal("Dog"), m_brain(new Brain())
{
    std::cout << "[Dog] Default Constructor Called!\n";
}

Dog::Dog(const Dog &other) : AAnimal("Dog"), m_brain(new Brain())
{
    std::cout << "[Dog] Copy Constructor Called!\n";
    *this = other;
}

Dog::~Dog()
{
    std::cout << "[Dog] Destructor Called!\n";
    delete m_brain;
}

Dog &Dog::operator=(const Dog &other)
{
    if (this == &other)
        return *this;
    m_type = other.m_type;
    m_brain = other.m_brain;
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "Bark\n";
}

void Dog::setIdea(unsigned int idx, std::string value)
{
    m_brain->setIdea(idx, value);
}

const std::string &Dog::getIdea(unsigned int idx) const
{
    return m_brain->getIdea(idx);
}

