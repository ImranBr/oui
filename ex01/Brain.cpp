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
    std::cout << "Brain assigned." << std::endl;
	if (this != &other)
	{
		for (int i = 0; i < 100; i++)
		{
			ideas[i] = other.ideas[i];
		}
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain destructor called." << std::endl;
}
void Brain::setIdea(int i, const std::string &idea)
{
	if (i < 0 && i >= 100)
	{
		std::cout << "Index out of range, no idea." << std::endl;
		return ;
	}
	ideas[i] = idea;
}

const std::string Brain::getIdea(int i) const
{
	if (i < 0 && i >= 100)
	{
		std::cout << "Index out of range, no idea." << std::endl;
		return ("");
	}
	return (ideas[i]);
}
