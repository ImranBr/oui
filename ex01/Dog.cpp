#include "Dog.hpp"

Dog::Dog() : Animal("Dog"), _brain(new Brain())
{
    std::cout << "Dog constructor called." << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other), _brain(new Brain(*other._brain))
{
    std::cout << "Dog copy constructor called." << std::endl; 
}

Dog &Dog::operator=(const Dog &other)
{
    if (this != &other)
    {
        Animal::operator=(other);
        *_brain = *other._brain;
        std::cout << "Dog assigned." << std::endl;
    }
    return (*this);
}

Dog::~Dog()
{
    delete _brain;
    std::cout << "Dog destructor called." << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Dog makes sound." << std::endl;
}