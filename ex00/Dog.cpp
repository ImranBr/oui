#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << "Dog constructor called." << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other._type)
{
    std::cout << "Dog copy constructor called." << std::endl; 

}
Dog &Dog::operator=(const Dog &other)
{
    _type = other._type;
    return (*this);
}

Dog::~Dog()
{
    std::cout << "Dog destructor called." << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Dog makes sound." << std::endl;
}