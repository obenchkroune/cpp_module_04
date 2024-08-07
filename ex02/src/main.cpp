#include "Cat.h"
#include "Dog.h"

int main(void)
{
    AAnimal *i = new Dog();
    // AAnimal *j = new AAnimal(); //Error!
    delete i;
    return 0;
}