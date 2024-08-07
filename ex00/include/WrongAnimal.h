#ifndef __WRONGANIMAL_H__
#define __WRONGANIMAL_H__

#include <iostream>

class WrongAnimal
{
protected:
    std::string m_type;

public:
    WrongAnimal();
    WrongAnimal(std::string type);
    WrongAnimal(const WrongAnimal &other);
    ~WrongAnimal();
    WrongAnimal &operator=(const WrongAnimal &other);
    const std::string &getType() const;
    void makeSound() const;
};

#endif