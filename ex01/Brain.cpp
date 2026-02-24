#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Constructor Brain called." << std::endl;
	for (int i = 0; i < 100; i++)
	{
		ideas[i] = "default";
	}
}

Brain::Brain(const Brain &other)
{
	std::cout << "Copy constructor Brain called." << std::endl;
	for (int i = 0; i < 100; i++)
	{
		ideas[i] = other.ideas[i];
	}
}

Brain &Brain::operator=(const Brain &other)
{
	if (this != &other)
	{
		for (int i = 0; i < 100; i++)
		{
			ideas[i] = other.ideas[i];
			std::cout << "Brain assigned." << std::endl;
		}
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain destructor called." << std::endl;
}