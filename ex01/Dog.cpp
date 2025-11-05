#include "Dog.hpp"

Dog::Dog()
{
    brain = new Brain();
    std::cout << "Dog created\n";
}

Dog::~Dog()
{
    delete brain;
    std::cout << "Dog destroyed\n"; 
}

Dog::Dog(const Dog& other) : Animal(other)
{
    brain = new Brain(*other.brain);
    std::cout << "Dog copied\n";
}

Dog& Dog::operator=(const Dog& other)
{
	if (this != &other)
		*brain = *other.brain;
	std::cout << "Dog assigned\n";
	return *this;
}

void Dog::makeSound() const
{
    std::cout << "Haw Haw\n";
}
