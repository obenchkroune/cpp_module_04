#include "Brain.h"

Brain::Brain()
{
    std::cout << "[Brain] Default Constructor Called!\n";
}

Brain::Brain(std::string ideas[100])
{
    std::cout << "[Brain] Param Constructor Called!\n";
    for (int i = 0; i < 100; i++)
        m_ideas[i] = ideas[i];
}

Brain::Brain(const Brain &other)
{
    std::cout << "[Brain] Copy Constructor Called!\n";
    *this = other;
}

Brain::~Brain()
{
    std::cout << "[Brain] Destructor Called!\n";
}

Brain &Brain::operator=(const Brain &other)
{
    if (this == &other)
        return *this;
    for (int i = 0; i < 100; i++)
        m_ideas[i] = other.m_ideas[i];
    return *this;
}

void Brain::setIdea(unsigned int idx, std::string value)
{
    if (idx >= 100)
        return ;
    m_ideas[idx] = value;
}

const std::string &Brain::getIdea(unsigned int idx) const
{
    if (idx >= 100)
        return m_ideas[99];
    return m_ideas[idx];
}