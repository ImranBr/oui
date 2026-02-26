#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	std::cout << "=== Test via Animal* ===" << std::endl;
	const Animal *meta = new Animal();
	std::cout << "Type: " << meta->getType() << std::endl;
	meta->makeSound();
	delete meta;
	std::cout << std::endl;

	std::cout << "=== Test Dog via Animal* ===" << std::endl;
	const Animal *d = new Dog();
	std::cout << "Type: " << d->getType() << std::endl;
	d->makeSound();
	delete d;
	std::cout << std::endl;

	std::cout << "=== Test Cat via Animal* ===" << std::endl;
	const Animal *c = new Cat();
	std::cout << "Type: " << c->getType() << std::endl;
	c->makeSound();
	delete c;
	std::cout << std::endl;

	std::cout << "=== Test WrongCat via WrongAnimal* ===" << std::endl;
	const WrongAnimal* w = new WrongCat();
	std::cout << "Type: " << w->getType() << std::endl;
	w->makeSound();
	delete w;

	std::cout << "=== Deep copy test (Dog) ===" << std::endl;
	{
		Dog original;
		original.setIdea(0, "I want a bone");

		Dog copy(original);
		std::cout << "original idea[0]: " << original.getIdea(0) << std::endl;
		std::cout << "copy idea[0]:     " << copy.getIdea(0) << std::endl;

		original.setIdea(0, "I changed my mind, I don't need a bone");

		std::cout << "After modifying original:" << std::endl;
		std::cout << "original idea[0]: " << original.getIdea(0) << std::endl;
		std::cout << "copy idea[0]:     " << copy.getIdea(0) << std::endl;
	}
	std::cout << std::endl;

	std::cout << "=== Deep copy test (Cat) ===" << std::endl;
	{
		Cat original;
		original.setIdea(0, "I want to sleep");

		Cat copy;
		copy = original;

		std::cout << "original idea[0]: " << original.getIdea(0) << std::endl;
		std::cout << "copy idea[0]:     " << copy.getIdea(0) << std::endl;

		original.setIdea(0, "Actually, I want food");

		std::cout << "After modifying original:" << std::endl;
		std::cout << "original idea[0]: " << original.getIdea(0) << std::endl;
		std::cout << "copy idea[0]:     " << copy.getIdea(0) << std::endl;
	}
	std::cout << std::endl;

	std::cout << "=== Array test (delete via Animal*) ===" << std::endl;
	{
		const int N = 4;
		Animal *animals[N];

		animals[0] = new Dog();
		animals[1] = new Cat();
		animals[2] = new Dog();
		animals[3] = new Cat();

		for (int i = 0; i < N; i++)
			delete animals[i];
	}

	return (0);
}