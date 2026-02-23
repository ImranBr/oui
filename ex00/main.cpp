#include "Dog.hpp"

int	main(void)
{
	Animal *a = new Dog();
	a->makeSound();
	delete a;
}