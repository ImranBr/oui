#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("WrongAnimal")
{
    std::cout << "WrongAnimal default constructor called." << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : _type(type)
{
    std::cout << "WrongAnimal type constructor called." << std::endl; 
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) : _type(other._type)
{
    std::cout << "WrongAnimal copy constructor called." << std::endl;

}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
    if (this != &other)
    {
        _type = other._type;
        std::cout << "WrongAnimal assigned." << std::endl;
    }
    return (*this);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called." << std::endl;
}

const std::string &WrongAnimal::getType() const
{
    return (_type);
}

void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal makes sound." << std::endl;
}