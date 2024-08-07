#ifndef __BRAIN_H__
#define __BRAIN_H__

#include <iostream>

class Brain
{
protected:
    std::string m_ideas[100];

public:
    Brain();
    Brain(std::string ideas[100]);
    Brain(const Brain &other);
    ~Brain();
    Brain &operator=(const Brain &other);
    void setIdea(unsigned int idx, std::string value);
    const std::string &getIdea(unsigned int idx) const;
};

#endif