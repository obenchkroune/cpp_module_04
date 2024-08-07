#include "Cat.h"
#include "Dog.h"

int main(void)
{
    {
        IAnimal *animals[10];
        for (int i = 0; i < 5; i++)
            animals[i] = new Dog();
        for (int i = 5; i < 10; i++)
            animals[i] = new Cat();

        for (int i = 0; i < 10; i++)
            delete animals[i];
    }

    {
        const IAnimal* j = new Dog();
        const IAnimal* i = new Cat();
        delete j;//should not create a leak
        delete i;
    }
    return 0;
}