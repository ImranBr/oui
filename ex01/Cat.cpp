#include "Cat.hpp"

Cat::Cat() : Animal("Cat"), _brain(new Brain())
{
    std::cout << "Cat constructor called." << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other), _brain(new Brain(*other._brain))
{
    std::cout << "Cat copy constructor called." << std::endl; 
}

Cat &Cat::operator=(const Cat &other)
{
    if (this != &other)
    {
        Animal::operator=(other);
        *_brain = *other._brain;
        std::cout << "Cat assigned." << std::endl;
    }
    return (*this);
}

Cat::~Cat()
{
    delete _brain;
    std::cout << "Cat destructor called." << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Cat makes sound." << std::endl;
}

Brain* Cat::getBrain() const
{
    return _brain;
}