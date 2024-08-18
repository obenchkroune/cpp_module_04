
#include "Dog.h"
#include "Cat.h"

int main()
{
	AAnimal *animals[4];

	for (int i = 0; i < 2; i++)
		animals[i] = new Dog();
	for (int i = 2; i < 4; i++)
		animals[i] = new Cat();

	Cat *cat = static_cast<Cat *>(animals[2]);
	cat->setIdea(0, "Eat");
	cat->setIdea(1, "Sleep");
	cat->setIdea(2, "Play");
	cat->setIdea(3, "Repeat");
	Cat cat_copy(*cat); // deep copy test

	for (int i = 0; i < 4; i++)
		delete animals[i];
	for (int i = 0; i < 4; i++)
		std::cout << "- " << cat_copy.getIdea(i) << '\n';

	// AAnimal *animal = new AAnimal(); // cannot instantiate abstract class
}
