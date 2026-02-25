#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    std::cout << "=== Test via Animal* ===" << std::endl;
    const Animal* meta = new Animal();
    std::cout << "Type: " << meta->getType() << std::endl;
    meta->makeSound();
    delete meta;
    std::cout << std::endl;
    
    std::cout << "=== Test Dog via Animal* ===" << std::endl;
    const Animal* d = new Dog();
    std::cout << "Type: " << d->getType() << std::endl;
    d->makeSound();    
    delete d;
    std::cout << std::endl;

    std::cout << "=== Test Cat via Animal* ===" << std::endl;
    const Animal* c = new Cat();
    std::cout << "Type: " << c->getType() << std::endl;
    c->makeSound();
    delete c;
    std::cout << std::endl;

    // std::cout << "=== Test WrongCat via WrongAnimal* ===" << std::endl;
    // const WrongAnimal* w = new WrongCat();
    // std::cout << "Type: " << w->getType() << std::endl;
    // w->makeSound();
    // delete w;

    std::cout << "=== Deep copy test with Dog ===" << std::endl;
    Dog original;
    original.setIdea(0)
    

    return 0;
}