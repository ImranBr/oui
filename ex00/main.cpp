#include "Dog.hpp"

int main()
{
    std::cout << "=== Test Dog via Animal* ===" << std::endl;

    const Animal* a = new Dog();

    std::cout << "Type: " << a->getType() << std::endl;
    a->makeSound();

    delete a;

    return 0;
}