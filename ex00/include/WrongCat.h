#ifndef __WRONGCAT_H__
#define __WRONGCAT_H__

#include "WrongAnimal.h"

class WrongCat : public WrongAnimal
{
public:
    WrongCat();
    WrongCat(const WrongCat &other);
    ~WrongCat();
    WrongCat &operator=(const WrongCat &other);
    void makeSound() const;
};

#endif