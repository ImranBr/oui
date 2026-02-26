#include "Animal.hpp"

Animal::Animal() : _type("Animal")
{
    std::cout << "Animal default constructor called." << std::endl;
}

Animal::Animal(std::string type) : _type(type)
{
    std::cout << "Animal type constructor called." << std::endl; 
}

Animal::Animal(const Animal &other) : _type(other._type)
{
    std::cout << "Animal copy constructor called." << std::endl;

}

Animal &Animal::operator=(const Animal &other)
{
    if (this != &other)
    {
        _type = other._type;
        std::cout << "Animal assigned." << std::endl;
    }
    return (*this);
}

Animal::~Animal()
{
    std::cout << "Animal destructor called." << std::endl;
}

const std::string &Animal::getType() const
{
    return (_type);
}

void Animal::makeSound() const
{
    std::cout << "Animal makes sound." << std::endl;
}
